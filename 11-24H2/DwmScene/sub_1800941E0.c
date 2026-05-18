/*
 * XREFs of sub_1800941E0 @ 0x1800941E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall sub_1800941E0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
