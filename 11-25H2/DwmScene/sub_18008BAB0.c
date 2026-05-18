/*
 * XREFs of sub_18008BAB0 @ 0x18008BAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008BA70 @ 0x18008BA70 (sub_18008BA70.c)
 */

_QWORD *__fastcall sub_18008BAB0(_QWORD *lpMem, char a2)
{
  sub_18008BA70(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
