/*
 * XREFs of sub_18004B288 @ 0x18004B288
 * Callers:
 *     sub_18004B2B4 @ 0x18004B2B4 (sub_18004B2B4.c)
 *     sub_18005E620 @ 0x18005E620 (sub_18005E620.c)
 * Callees:
 *     sub_18004A04C @ 0x18004A04C (sub_18004A04C.c)
 */

__int64 *__fastcall sub_18004B288(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18004A04C();
  return a1;
}
