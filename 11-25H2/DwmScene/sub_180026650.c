/*
 * XREFs of sub_180026650 @ 0x180026650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180026588 @ 0x180026588 (sub_180026588.c)
 */

LPVOID __fastcall sub_180026650(LPVOID lpMem, char a2)
{
  sub_180026588((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
