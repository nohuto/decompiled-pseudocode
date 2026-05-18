/*
 * XREFs of sub_180026610 @ 0x180026610
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180026518 @ 0x180026518 (sub_180026518.c)
 */

_QWORD *__fastcall sub_180026610(_QWORD *lpMem, char a2)
{
  sub_180026518(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
