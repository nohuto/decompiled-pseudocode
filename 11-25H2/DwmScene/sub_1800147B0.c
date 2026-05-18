/*
 * XREFs of sub_1800147B0 @ 0x1800147B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18001475C @ 0x18001475C (sub_18001475C.c)
 */

LPVOID __fastcall sub_1800147B0(LPVOID lpMem, char a2)
{
  sub_18001475C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
