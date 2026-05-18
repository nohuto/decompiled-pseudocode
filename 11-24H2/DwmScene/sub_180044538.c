/*
 * XREFs of sub_180044538 @ 0x180044538
 * Callers:
 *     sub_180041F58 @ 0x180041F58 (sub_180041F58.c)
 *     sub_180041FE4 @ 0x180041FE4 (sub_180041FE4.c)
 *     sub_180078E04 @ 0x180078E04 (sub_180078E04.c)
 * Callees:
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 */

__int64 __fastcall sub_180044538(__int64 *a1, unsigned __int64 a2)
{
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180013278();
  return sub_18001A8DC(a1, a2);
}
