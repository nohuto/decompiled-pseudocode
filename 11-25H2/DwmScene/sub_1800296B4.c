/*
 * XREFs of sub_1800296B4 @ 0x1800296B4
 * Callers:
 *     sub_180029A60 @ 0x180029A60 (sub_180029A60.c)
 *     sub_1800973E4 @ 0x1800973E4 (sub_1800973E4.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 * Callees:
 *     sub_180028AF0 @ 0x180028AF0 (sub_180028AF0.c)
 */

__int64 *__fastcall sub_1800296B4(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_180028AF0();
  return a1;
}
