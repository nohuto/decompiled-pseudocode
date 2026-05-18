/*
 * XREFs of sub_180051680 @ 0x180051680
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18004E834 @ 0x18004E834 (sub_18004E834.c)
 */

LPVOID __fastcall sub_180051680(LPVOID lpMem, char a2)
{
  sub_18004E834((__int64)lpMem + 24);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
