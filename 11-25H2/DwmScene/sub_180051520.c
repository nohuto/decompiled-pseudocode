/*
 * XREFs of sub_180051520 @ 0x180051520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18004E6D4 @ 0x18004E6D4 (sub_18004E6D4.c)
 */

LPVOID __fastcall sub_180051520(LPVOID lpMem, char a2)
{
  sub_18004E6D4((__int64)lpMem + 24);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
