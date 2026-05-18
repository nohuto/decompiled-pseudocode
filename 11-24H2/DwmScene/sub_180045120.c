/*
 * XREFs of sub_180045120 @ 0x180045120
 * Callers:
 *     sub_180046EF0 @ 0x180046EF0 (sub_180046EF0.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18007F438 @ 0x18007F438 (sub_18007F438.c)
 */

LPVOID __fastcall sub_180045120(LPVOID lpMem, char a2)
{
  sub_18007F438();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
