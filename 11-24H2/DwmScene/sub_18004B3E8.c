/*
 * XREFs of sub_18004B3E8 @ 0x18004B3E8
 * Callers:
 *     sub_18004B414 @ 0x18004B414 (sub_18004B414.c)
 *     sub_18005E780 @ 0x18005E780 (sub_18005E780.c)
 * Callees:
 *     sub_18004A1AC @ 0x18004A1AC (sub_18004A1AC.c)
 */

__int64 *__fastcall sub_18004B3E8(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18004A1AC();
  return a1;
}
