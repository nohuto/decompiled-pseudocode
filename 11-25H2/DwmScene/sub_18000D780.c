/*
 * XREFs of sub_18000D780 @ 0x18000D780
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_18000D6F0 @ 0x18000D6F0 (sub_18000D6F0.c)
 */

_QWORD *__fastcall sub_18000D780(_QWORD *lpMem, char a2)
{
  sub_18000D6F0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
