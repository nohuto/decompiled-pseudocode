/*
 * XREFs of sub_18004E020 @ 0x18004E020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_18004DCC0 @ 0x18004DCC0 (sub_18004DCC0.c)
 */

_QWORD *__fastcall sub_18004E020(_QWORD *lpMem, char a2)
{
  sub_18004DCC0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
