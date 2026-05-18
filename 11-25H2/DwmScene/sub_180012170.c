/*
 * XREFs of sub_180012170 @ 0x180012170
 * Callers:
 *     sub_180011FB4 @ 0x180011FB4 (sub_180011FB4.c)
 *     sub_180011FD4 @ 0x180011FD4 (sub_180011FD4.c)
 *     sub_18001CE14 @ 0x18001CE14 (sub_18001CE14.c)
 * Callees:
 *     sub_1800119FC @ 0x1800119FC (sub_1800119FC.c)
 */

__int64 __fastcall sub_180012170(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFFLL )
    sub_1800119FC();
  return 2 * a1;
}
