/*
 * XREFs of sub_180017AF0 @ 0x180017AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180017508 @ 0x180017508 (sub_180017508.c)
 */

LPVOID __fastcall sub_180017AF0(LPVOID lpMem, char a2)
{
  sub_180017508((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
