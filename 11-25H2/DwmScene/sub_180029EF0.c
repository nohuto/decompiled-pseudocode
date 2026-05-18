/*
 * XREFs of sub_180029EF0 @ 0x180029EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180029C48 @ 0x180029C48 (sub_180029C48.c)
 */

LPVOID __fastcall sub_180029EF0(LPVOID lpMem, char a2)
{
  sub_180029C48((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
