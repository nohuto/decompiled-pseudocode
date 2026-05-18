/*
 * XREFs of sub_18007D730 @ 0x18007D730
 * Callers:
 *     sub_18007EAC0 @ 0x18007EAC0 (sub_18007EAC0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180081E84 @ 0x180081E84 (sub_180081E84.c)
 */

LPVOID __fastcall sub_18007D730(LPVOID lpMem, char a2)
{
  sub_180081E84();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
