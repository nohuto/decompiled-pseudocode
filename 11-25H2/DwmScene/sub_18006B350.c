/*
 * XREFs of sub_18006B350 @ 0x18006B350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18006B190 @ 0x18006B190 (sub_18006B190.c)
 */

_QWORD *__fastcall sub_18006B350(_QWORD *lpMem, char a2)
{
  sub_18006B190(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
