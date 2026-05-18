/*
 * XREFs of sub_180027AA0 @ 0x180027AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180026748 @ 0x180026748 (sub_180026748.c)
 */

LPVOID __fastcall sub_180027AA0(LPVOID lpMem, char a2)
{
  sub_180026748((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
