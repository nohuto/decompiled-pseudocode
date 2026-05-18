/*
 * XREFs of sub_180014060 @ 0x180014060
 * Callers:
 *     sub_180014630 @ 0x180014630 (sub_180014630.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180047C7C @ 0x180047C7C (sub_180047C7C.c)
 */

LPVOID __fastcall sub_180014060(LPVOID lpMem, char a2)
{
  sub_180047C7C();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
