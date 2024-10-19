#include <stdio.h>

void oturicount(int otr) {
    int coins[4] = { 500, 100, 50, 10 };  // 硬貨の種類
    int count[4] = { 0 };  // 各硬貨の枚数を保存

    for (int i = 0; i < 4; i++) {
        count[i] = otr / coins[i];  // 硬貨の枚数を計算
        otr %= coins[i];  // 残りのおつりを更新
    }

    // 結果を表示
    printf("おつりの内訳:\n");
    printf("500円硬貨: %d枚\n", count[0]);
    printf("100円硬貨: %d枚\n", count[1]);
    printf("50円硬貨: %d枚\n", count[2]);
    printf("10円硬貨: %d枚\n", count[3]);
    
}

void inputCoins(int* total) {
    int coins[4] = { 500, 100, 50, 10 };
    int count[4] = { 100 };

    printf("投入するコインの枚数を入力してください:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d円硬貨の枚数: ", coins[i]);
        scanf("%d", &count[i]);
        *total += coins[i] * count[i];  // 合計金額を計算
    }

    // 入力されたコインの内訳を表示
    printf("\n投入された金額の内訳:\n");
    printf("500円硬貨: %d枚\n", count[0]);
    printf("100円硬貨: %d枚\n", count[1]);
    printf("50円硬貨: %d枚\n", count[2]);
    printf("10円硬貨: %d枚\n", count[3]);
}

int main() {
    int x = 0, shohin, n;

    inputCoins(&x);  // 投入金額を入力

    printf("商品の価格を入力してください（円）: ");
    scanf("%d", &shohin);

    
        n = x - shohin;
        printf("おつりは %d 円です。\n", n);
        oturicount(n);
  

    return 0;
}
