/*
 * XREFs of sub_180094080 @ 0x180094080
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_180094080(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
