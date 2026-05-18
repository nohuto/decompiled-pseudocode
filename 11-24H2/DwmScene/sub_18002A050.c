/*
 * XREFs of sub_18002A050 @ 0x18002A050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180029DA8 @ 0x180029DA8 (sub_180029DA8.c)
 */

LPVOID __fastcall sub_18002A050(LPVOID lpMem, char a2)
{
  sub_180029DA8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
