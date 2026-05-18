/*
 * XREFs of sub_180014160 @ 0x180014160
 * Callers:
 *     sub_180014730 @ 0x180014730 (sub_180014730.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180047DDC @ 0x180047DDC (sub_180047DDC.c)
 */

LPVOID __fastcall sub_180014160(LPVOID lpMem, char a2)
{
  sub_180047DDC();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
