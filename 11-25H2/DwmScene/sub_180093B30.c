/*
 * XREFs of sub_180093B30 @ 0x180093B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180093AD8 @ 0x180093AD8 (sub_180093AD8.c)
 */

_QWORD *__fastcall sub_180093B30(_QWORD *lpMem, char a2)
{
  sub_180093AD8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
