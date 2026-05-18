/*
 * XREFs of sub_180092B40 @ 0x180092B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180092AF0 @ 0x180092AF0 (sub_180092AF0.c)
 */

_QWORD *__fastcall sub_180092B40(_QWORD *lpMem, char a2)
{
  sub_180092AF0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
