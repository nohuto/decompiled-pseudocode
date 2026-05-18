/*
 * XREFs of sub_1800103F0 @ 0x1800103F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_DWORD *__fastcall sub_1800103F0(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
