/*
 * XREFs of sub_1800D1970 @ 0x1800D1970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_1800D1970(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::ICancellationToken::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
