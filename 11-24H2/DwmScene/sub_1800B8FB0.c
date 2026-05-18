/*
 * XREFs of sub_1800B8FB0 @ 0x1800B8FB0
 * Callers:
 *     sub_1800BB750 @ 0x1800BB750 (sub_1800BB750.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800C655C @ 0x1800C655C (sub_1800C655C.c)
 */

LPVOID __fastcall sub_1800B8FB0(LPVOID lpMem, char a2)
{
  sub_1800C655C();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
