/*
 * XREFs of sub_1800CB230 @ 0x1800CB230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800CB188 @ 0x1800CB188 (sub_1800CB188.c)
 */

LPVOID __fastcall sub_1800CB230(LPVOID lpMem, char a2)
{
  sub_1800CB188((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
