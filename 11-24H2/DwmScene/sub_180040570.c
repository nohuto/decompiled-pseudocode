/*
 * XREFs of sub_180040570 @ 0x180040570
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180040504 @ 0x180040504 (sub_180040504.c)
 */

_QWORD *__fastcall sub_180040570(_QWORD *lpMem, char a2)
{
  sub_180040504(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
