/*
 * XREFs of sub_18000B790 @ 0x18000B790
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B0B8 @ 0x18001B0B8 (sub_18001B0B8.c)
 */

_QWORD *__fastcall sub_18000B790(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18001B0B8(a1);
  return a1;
}
