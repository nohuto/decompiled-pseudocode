/*
 * XREFs of sub_180024BC0 @ 0x180024BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 */

LPVOID __fastcall sub_180024BC0(LPVOID lpMem, char a2)
{
  sub_180024874((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
