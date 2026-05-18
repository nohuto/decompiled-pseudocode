/*
 * XREFs of sub_180080FB0 @ 0x180080FB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180080E20 @ 0x180080E20 (sub_180080E20.c)
 */

_QWORD *__fastcall sub_180080FB0(_QWORD *lpMem, char a2)
{
  sub_180080E20(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
