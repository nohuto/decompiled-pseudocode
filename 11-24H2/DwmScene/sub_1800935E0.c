/*
 * XREFs of sub_1800935E0 @ 0x1800935E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180093550 @ 0x180093550 (sub_180093550.c)
 */

_QWORD *__fastcall sub_1800935E0(_QWORD *lpMem, char a2)
{
  sub_180093550(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
