/*
 * XREFs of sub_1800D19B0 @ 0x1800D19B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800D18E8 @ 0x1800D18E8 (sub_1800D18E8.c)
 */

LPVOID __fastcall sub_1800D19B0(LPVOID lpMem, char a2)
{
  sub_1800D18E8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
