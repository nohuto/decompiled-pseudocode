/*
 * XREFs of sub_1800BECC0 @ 0x1800BECC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800BEC18 @ 0x1800BEC18 (sub_1800BEC18.c)
 */

_QWORD *__fastcall sub_1800BECC0(_QWORD *lpMem, char a2)
{
  sub_1800BEC18(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
