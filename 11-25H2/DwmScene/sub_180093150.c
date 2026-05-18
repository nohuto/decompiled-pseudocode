/*
 * XREFs of sub_180093150 @ 0x180093150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180093068 @ 0x180093068 (sub_180093068.c)
 */

_QWORD *__fastcall sub_180093150(_QWORD *lpMem, char a2)
{
  sub_180093068(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
