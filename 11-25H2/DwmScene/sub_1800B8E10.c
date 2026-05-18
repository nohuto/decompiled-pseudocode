/*
 * XREFs of sub_1800B8E10 @ 0x1800B8E10
 * Callers:
 *     sub_1800BB5D0 @ 0x1800BB5D0 (sub_1800BB5D0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C6080 @ 0x1800C6080 (sub_1800C6080.c)
 */

LPVOID __fastcall sub_1800B8E10(LPVOID lpMem, char a2)
{
  sub_1800C6080();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
