/*
 * XREFs of sub_1800734C0 @ 0x1800734C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180073454 @ 0x180073454 (sub_180073454.c)
 */

LPVOID __fastcall sub_1800734C0(LPVOID lpMem, char a2)
{
  sub_180073454((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
