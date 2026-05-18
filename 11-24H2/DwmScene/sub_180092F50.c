/*
 * XREFs of sub_180092F50 @ 0x180092F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180092E60 @ 0x180092E60 (sub_180092E60.c)
 */

_QWORD *__fastcall sub_180092F50(_QWORD *lpMem, char a2)
{
  sub_180092E60(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
