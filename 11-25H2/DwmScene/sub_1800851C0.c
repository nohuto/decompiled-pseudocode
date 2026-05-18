/*
 * XREFs of sub_1800851C0 @ 0x1800851C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180085168 @ 0x180085168 (sub_180085168.c)
 */

_QWORD *__fastcall sub_1800851C0(_QWORD *lpMem, char a2)
{
  sub_180085168(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
