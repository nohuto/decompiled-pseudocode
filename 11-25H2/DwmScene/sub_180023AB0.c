/*
 * XREFs of sub_180023AB0 @ 0x180023AB0
 * Callers:
 *     sub_1800237B8 @ 0x1800237B8 (sub_1800237B8.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

unsigned __int64 __fastcall sub_180023AB0(unsigned __int64 a1)
{
  if ( a1 > 0x3FFFFFFFFFFFFFFLL )
    sub_1800119FC();
  return a1 << 6;
}
