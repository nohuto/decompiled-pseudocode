/*
 * XREFs of sub_18000BB60 @ 0x18000BB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B218 @ 0x18001B218 (sub_18001B218.c)
 */

_QWORD *__fastcall sub_18000BB60(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18001B218(a1);
  return a1;
}
