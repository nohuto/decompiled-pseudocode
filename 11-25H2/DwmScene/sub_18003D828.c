/*
 * XREFs of sub_18003D828 @ 0x18003D828
 * Callers:
 *     sub_18003D924 @ 0x18003D924 (sub_18003D924.c)
 *     sub_18005AE60 @ 0x18005AE60 (sub_18005AE60.c)
 *     sub_18005EA20 @ 0x18005EA20 (sub_18005EA20.c)
 *     sub_18005EA80 @ 0x18005EA80 (sub_18005EA80.c)
 * Callees:
 *     sub_18003CD24 @ 0x18003CD24 (sub_18003CD24.c)
 */

__int64 __fastcall sub_18003D828(void **a1)
{
  sub_18003CD24((__int64)a1, (__int64)a1, *((__int64 **)*a1 + 1));
  return sub_180010134(*a1, 0x38uLL);
}
