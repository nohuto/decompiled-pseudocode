/*
 * XREFs of sub_180017B30 @ 0x180017B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800174EC @ 0x1800174EC (sub_1800174EC.c)
 */

LPVOID __fastcall sub_180017B30(LPVOID lpMem, char a2)
{
  sub_1800174EC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
