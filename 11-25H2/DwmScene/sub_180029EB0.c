/*
 * XREFs of sub_180029EB0 @ 0x180029EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 */

_QWORD *__fastcall sub_180029EB0(_QWORD *lpMem, char a2)
{
  sub_180029C10(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
