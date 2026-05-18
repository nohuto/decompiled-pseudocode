/*
 * XREFs of sub_1800D0160 @ 0x1800D0160
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800CFF94 @ 0x1800CFF94 (sub_1800CFF94.c)
 */

LPVOID __fastcall sub_1800D0160(LPVOID lpMem, char a2)
{
  sub_1800CFF94((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
