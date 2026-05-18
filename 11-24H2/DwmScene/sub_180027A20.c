/*
 * XREFs of sub_180027A20 @ 0x180027A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall sub_180027A20(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
