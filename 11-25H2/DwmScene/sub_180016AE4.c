/*
 * XREFs of sub_180016AE4 @ 0x180016AE4
 * Callers:
 *     sub_180016664 @ 0x180016664 (sub_180016664.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_180016AE4(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFFLL )
    sub_1800119FC();
  return 4 * a1;
}
