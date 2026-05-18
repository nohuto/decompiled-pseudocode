/*
 * XREFs of sub_1800573FC @ 0x1800573FC
 * Callers:
 *     sub_18001A1F0 @ 0x18001A1F0 (sub_18001A1F0.c)
 *     sub_180055CE0 @ 0x180055CE0 (sub_180055CE0.c)
 *     sub_180057514 @ 0x180057514 (sub_180057514.c)
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     sub_180084120 @ 0x180084120 (sub_180084120.c)
 *     sub_180099248 @ 0x180099248 (sub_180099248.c)
 * Callees:
 *     sub_180058F40 @ 0x180058F40 (sub_180058F40.c)
 *     sub_1800591D0 @ 0x1800591D0 (sub_1800591D0.c)
 *     sub_1800593EC @ 0x1800593EC (sub_1800593EC.c)
 *     sub_180059534 @ 0x180059534 (sub_180059534.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 */

__int64 __fastcall sub_1800573FC(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r14
  char v6; // si
  char v7; // di
  char v8; // al
  char v9; // r10

  v3 = a3;
  v5 = a2;
  v6 = sub_1800595F0();
  v7 = sub_1800593EC(a1);
  v8 = sub_1800591D0(a1);
  v9 = v8;
  if ( v7 || v8 )
    sub_180059534(a1);
  if ( v6 || v7 || v9 )
    sub_180058F40(a1);
  return a1 + 548 + ((v3 + 4 * v5) << 6);
}
