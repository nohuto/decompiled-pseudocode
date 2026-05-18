/*
 * XREFs of sub_180081110 @ 0x180081110
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180080F80 @ 0x180080F80 (sub_180080F80.c)
 */

_QWORD *__fastcall sub_180081110(_QWORD *lpMem, char a2)
{
  sub_180080F80(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
