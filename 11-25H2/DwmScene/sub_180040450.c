/*
 * XREFs of sub_180040450 @ 0x180040450
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800403A4 @ 0x1800403A4 (sub_1800403A4.c)
 */

_QWORD *__fastcall sub_180040450(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::Light::`vftable';
  sub_1800403A4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
