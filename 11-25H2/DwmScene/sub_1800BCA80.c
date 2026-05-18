/*
 * XREFs of sub_1800BCA80 @ 0x1800BCA80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800BC9D0 @ 0x1800BC9D0 (sub_1800BC9D0.c)
 */

LPVOID __fastcall sub_1800BCA80(LPVOID lpMem, char a2)
{
  sub_1800BC9D0((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
