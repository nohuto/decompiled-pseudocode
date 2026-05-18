/*
 * XREFs of sub_18008D170 @ 0x18008D170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18008D054 @ 0x18008D054 (sub_18008D054.c)
 */

_QWORD *__fastcall sub_18008D170(_QWORD *lpMem, char a2)
{
  sub_18008D054(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
