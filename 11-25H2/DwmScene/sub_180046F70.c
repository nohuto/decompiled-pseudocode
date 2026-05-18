/*
 * XREFs of sub_180046F70 @ 0x180046F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800403A4 @ 0x1800403A4 (sub_1800403A4.c)
 */

_QWORD *__fastcall sub_180046F70(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::Bounds::`vftable';
  sub_1800403A4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
