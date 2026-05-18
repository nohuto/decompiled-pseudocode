/*
 * XREFs of sub_18008D2D0 @ 0x18008D2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18008D1B4 @ 0x18008D1B4 (sub_18008D1B4.c)
 */

_QWORD *__fastcall sub_18008D2D0(_QWORD *lpMem, char a2)
{
  sub_18008D1B4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
