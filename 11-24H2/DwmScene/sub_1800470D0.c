/*
 * XREFs of sub_1800470D0 @ 0x1800470D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180040504 @ 0x180040504 (sub_180040504.c)
 */

_QWORD *__fastcall sub_1800470D0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::Bounds::`vftable';
  sub_180040504(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
