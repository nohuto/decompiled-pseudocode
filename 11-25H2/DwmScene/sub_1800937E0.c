/*
 * XREFs of sub_1800937E0 @ 0x1800937E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800936FC @ 0x1800936FC (sub_1800936FC.c)
 */

_QWORD *__fastcall sub_1800937E0(_QWORD *lpMem, char a2)
{
  sub_1800936FC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
