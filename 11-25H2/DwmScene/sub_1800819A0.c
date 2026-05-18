/*
 * XREFs of sub_1800819A0 @ 0x1800819A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180081968 @ 0x180081968 (sub_180081968.c)
 */

_QWORD *__fastcall sub_1800819A0(_QWORD *lpMem, char a2)
{
  sub_180081968(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
