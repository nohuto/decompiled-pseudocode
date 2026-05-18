/*
 * XREFs of sub_180020BC0 @ 0x180020BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180020A80 @ 0x180020A80 (sub_180020A80.c)
 */

LPVOID __fastcall sub_180020BC0(LPVOID lpMem, char a2)
{
  sub_180020A80((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
