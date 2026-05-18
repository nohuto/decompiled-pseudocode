/*
 * XREFs of sub_1800CB390 @ 0x1800CB390
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800CB2E8 @ 0x1800CB2E8 (sub_1800CB2E8.c)
 */

LPVOID __fastcall sub_1800CB390(LPVOID lpMem, char a2)
{
  sub_1800CB2E8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
