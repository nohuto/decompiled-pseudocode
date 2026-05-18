/*
 * XREFs of sub_1800278C0 @ 0x1800278C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_1800278C0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
