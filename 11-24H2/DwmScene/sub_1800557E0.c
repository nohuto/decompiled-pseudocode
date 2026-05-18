/*
 * XREFs of sub_1800557E0 @ 0x1800557E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180055328 @ 0x180055328 (sub_180055328.c)
 */

LPVOID __fastcall sub_1800557E0(LPVOID lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180055328((__int64)lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
