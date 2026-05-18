/*
 * XREFs of sub_1800102F0 @ 0x1800102F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_DWORD *__fastcall sub_1800102F0(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
