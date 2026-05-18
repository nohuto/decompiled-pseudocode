/*
 * XREFs of sub_180024B80 @ 0x180024B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180024840 @ 0x180024840 (sub_180024840.c)
 */

LPVOID __fastcall sub_180024B80(LPVOID lpMem, char a2)
{
  sub_180024840((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
