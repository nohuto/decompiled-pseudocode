/*
 * XREFs of sub_1800913E0 @ 0x1800913E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180091188 @ 0x180091188 (sub_180091188.c)
 */

_QWORD *__fastcall sub_1800913E0(_QWORD *lpMem, char a2)
{
  sub_180091188(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
