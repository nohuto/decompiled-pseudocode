/*
 * XREFs of sub_180044FC0 @ 0x180044FC0
 * Callers:
 *     sub_180046D90 @ 0x180046D90 (sub_180046D90.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18007F2D8 @ 0x18007F2D8 (sub_18007F2D8.c)
 */

LPVOID __fastcall sub_180044FC0(LPVOID lpMem, char a2)
{
  sub_18007F2D8();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
