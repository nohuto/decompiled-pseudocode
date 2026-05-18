/*
 * XREFs of sub_180041290 @ 0x180041290
 * Callers:
 *     sub_18005C420 @ 0x18005C420 (sub_18005C420.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180040F24 @ 0x180040F24 (sub_180040F24.c)
 */

LPVOID __fastcall sub_180041290(LPVOID lpMem, char a2)
{
  sub_180040F24((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
