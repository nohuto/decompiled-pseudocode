/*
 * XREFs of sub_18000D63C @ 0x18000D63C
 * Callers:
 *     sub_18000F044 @ 0x18000F044 (sub_18000F044.c)
 * Callees:
 *     sub_18000D6E8 @ 0x18000D6E8 (sub_18000D6E8.c)
 *     sub_18000D808 @ 0x18000D808 (sub_18000D808.c)
 */

__int64 __fastcall sub_18000D63C(__int64 a1)
{
  sub_18000D6E8(a1 + 40);
  sub_18000D808(a1 + 16);
  return sub_18000D790(a1 + 8);
}
