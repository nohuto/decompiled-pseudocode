/*
 * XREFs of sub_1800C9A70 @ 0x1800C9A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800C9A30 @ 0x1800C9A30 (sub_1800C9A30.c)
 */

_QWORD *__fastcall sub_1800C9A70(_QWORD *lpMem, char a2)
{
  sub_1800C9A30(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
