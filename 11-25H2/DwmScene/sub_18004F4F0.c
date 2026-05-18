/*
 * XREFs of sub_18004F4F0 @ 0x18004F4F0
 * Callers:
 *     sub_18004F9F0 @ 0x18004F9F0 (sub_18004F9F0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008163C @ 0x18008163C (sub_18008163C.c)
 */

LPVOID __fastcall sub_18004F4F0(LPVOID lpMem, char a2)
{
  sub_18008163C();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
