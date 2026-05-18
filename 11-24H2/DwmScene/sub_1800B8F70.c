/*
 * XREFs of sub_1800B8F70 @ 0x1800B8F70
 * Callers:
 *     sub_1800BB730 @ 0x1800BB730 (sub_1800BB730.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800C61E0 @ 0x1800C61E0 (sub_1800C61E0.c)
 */

LPVOID __fastcall sub_1800B8F70(LPVOID lpMem, char a2)
{
  sub_1800C61E0();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
