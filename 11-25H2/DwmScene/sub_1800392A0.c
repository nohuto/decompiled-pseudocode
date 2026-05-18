/*
 * XREFs of sub_1800392A0 @ 0x1800392A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180038EFC @ 0x180038EFC (sub_180038EFC.c)
 */

LPVOID __fastcall sub_1800392A0(LPVOID lpMem, char a2)
{
  sub_180038EFC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
