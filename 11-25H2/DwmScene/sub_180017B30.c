/*
 * XREFs of sub_180017B30 @ 0x180017B30
 * Callers:
 *     sub_18001A920 @ 0x18001A920 (sub_18001A920.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18005141C @ 0x18005141C (sub_18005141C.c)
 */

LPVOID __fastcall sub_180017B30(LPVOID lpMem, char a2)
{
  sub_18005141C();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
