/*
 * XREFs of sub_180026770 @ 0x180026770
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180026678 @ 0x180026678 (sub_180026678.c)
 */

_QWORD *__fastcall sub_180026770(_QWORD *lpMem, char a2)
{
  sub_180026678(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
