/*
 * XREFs of sub_1800261B0 @ 0x1800261B0
 * Callers:
 *     sub_180078528 @ 0x180078528 (sub_180078528.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_1800261B0(unsigned __int64 a1)
{
  if ( a1 > 0x492492492492492LL )
    sub_1800119FC();
  return 56 * a1;
}
