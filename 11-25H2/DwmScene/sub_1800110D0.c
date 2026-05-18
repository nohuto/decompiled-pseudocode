/*
 * XREFs of sub_1800110D0 @ 0x1800110D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180010F84 @ 0x180010F84 (sub_180010F84.c)
 */

LPVOID __fastcall sub_1800110D0(LPVOID lpMem, char a2)
{
  sub_180010F84((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
