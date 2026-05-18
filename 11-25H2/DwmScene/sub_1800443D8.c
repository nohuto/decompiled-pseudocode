/*
 * XREFs of sub_1800443D8 @ 0x1800443D8
 * Callers:
 *     sub_180041DF8 @ 0x180041DF8 (sub_180041DF8.c)
 *     sub_180041E84 @ 0x180041E84 (sub_180041E84.c)
 *     sub_180078CA4 @ 0x180078CA4 (sub_180078CA4.c)
 * Callees:
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 */

__int64 __fastcall sub_1800443D8(__int64 *a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180013178();
  return sub_18001A81C(a1, a2);
}
