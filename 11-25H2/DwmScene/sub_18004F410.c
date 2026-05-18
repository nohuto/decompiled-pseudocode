/*
 * XREFs of sub_18004F410 @ 0x18004F410
 * Callers:
 *     sub_18004F9B0 @ 0x18004F9B0 (sub_18004F9B0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008184C @ 0x18008184C (sub_18008184C.c)
 */

LPVOID __fastcall sub_18004F410(LPVOID lpMem, char a2)
{
  sub_18008184C();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
