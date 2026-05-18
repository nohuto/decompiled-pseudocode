/*
 * XREFs of sub_1800179B0 @ 0x1800179B0
 * Callers:
 *     sub_18001A900 @ 0x18001A900 (sub_18001A900.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18005039C @ 0x18005039C (sub_18005039C.c)
 */

LPVOID __fastcall sub_1800179B0(LPVOID lpMem, char a2)
{
  sub_18005039C();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
