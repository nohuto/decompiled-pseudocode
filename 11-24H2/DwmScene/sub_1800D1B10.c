/*
 * XREFs of sub_1800D1B10 @ 0x1800D1B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800D1A48 @ 0x1800D1A48 (sub_1800D1A48.c)
 */

LPVOID __fastcall sub_1800D1B10(LPVOID lpMem, char a2)
{
  sub_1800D1A48((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
