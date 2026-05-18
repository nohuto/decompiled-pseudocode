/*
 * XREFs of sub_1800832A8 @ 0x1800832A8
 * Callers:
 *     sub_180082B48 @ 0x180082B48 (sub_180082B48.c)
 * Callees:
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 */

__int64 __fastcall sub_1800832A8(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x1555555555555555LL )
    sub_180013178();
  return sub_1800832D0();
}
