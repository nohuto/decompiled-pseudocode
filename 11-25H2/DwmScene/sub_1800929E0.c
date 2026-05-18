/*
 * XREFs of sub_1800929E0 @ 0x1800929E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180092990 @ 0x180092990 (sub_180092990.c)
 */

_QWORD *__fastcall sub_1800929E0(_QWORD *lpMem, char a2)
{
  sub_180092990(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
