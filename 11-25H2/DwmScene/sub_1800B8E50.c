/*
 * XREFs of sub_1800B8E50 @ 0x1800B8E50
 * Callers:
 *     sub_1800BB5F0 @ 0x1800BB5F0 (sub_1800BB5F0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C63FC @ 0x1800C63FC (sub_1800C63FC.c)
 */

LPVOID __fastcall sub_1800B8E50(LPVOID lpMem, char a2)
{
  sub_1800C63FC();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
