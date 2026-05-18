/*
 * XREFs of sub_18004F610 @ 0x18004F610
 * Callers:
 *     sub_18004FA70 @ 0x18004FA70 (sub_18004FA70.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180081E54 @ 0x180081E54 (sub_180081E54.c)
 */

LPVOID __fastcall sub_18004F610(LPVOID lpMem, char a2)
{
  sub_180081E54();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
