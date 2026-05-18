/*
 * XREFs of sub_18004F5B0 @ 0x18004F5B0
 * Callers:
 *     sub_18004FB30 @ 0x18004FB30 (sub_18004FB30.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180068AC8 @ 0x180068AC8 (sub_180068AC8.c)
 */

_QWORD *__fastcall sub_18004F5B0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DepthBufferGeneric::`vftable';
  sub_180068AC8();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
