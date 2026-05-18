/*
 * XREFs of sub_180041350 @ 0x180041350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180040FFC @ 0x180040FFC (sub_180040FFC.c)
 */

_QWORD *__fastcall sub_180041350(_QWORD *lpMem, char a2)
{
  sub_180040FFC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
