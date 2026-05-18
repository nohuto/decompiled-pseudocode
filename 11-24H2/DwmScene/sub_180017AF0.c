/*
 * XREFs of sub_180017AF0 @ 0x180017AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800174A0 @ 0x1800174A0 (sub_1800174A0.c)
 */

LPVOID __fastcall sub_180017AF0(LPVOID lpMem, char a2)
{
  sub_1800174A0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
