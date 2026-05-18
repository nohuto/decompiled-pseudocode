/*
 * XREFs of sub_1800B8D50 @ 0x1800B8D50
 * Callers:
 *     sub_1800BB5B0 @ 0x1800BB5B0 (sub_1800BB5B0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800B8688 @ 0x1800B8688 (sub_1800B8688.c)
 */

_QWORD *__fastcall sub_1800B8D50(_QWORD *lpMem, char a2)
{
  sub_1800B8688(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
