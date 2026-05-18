/*
 * XREFs of sub_1800D4CE8 @ 0x1800D4CE8
 * Callers:
 *     sub_1800D39D8 @ 0x1800D39D8 (sub_1800D39D8.c)
 *     sub_1800D3CCC @ 0x1800D3CCC (sub_1800D3CCC.c)
 *     sub_1800D4140 @ 0x1800D4140 (sub_1800D4140.c)
 * Callees:
 *     sub_18001CAFC @ 0x18001CAFC (sub_18001CAFC.c)
 */

char __fastcall sub_1800D4CE8(unsigned int a1)
{
  if ( a1 <= 0x4000000 && a1 )
    return 1;
  sub_18001CAFC(&stru_1801B9648, 3);
  return 0;
}
