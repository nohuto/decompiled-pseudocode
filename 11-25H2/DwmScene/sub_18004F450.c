/*
 * XREFs of sub_18004F450 @ 0x18004F450
 * Callers:
 *     sub_18004F9D0 @ 0x18004F9D0 (sub_18004F9D0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180068968 @ 0x180068968 (sub_180068968.c)
 */

_QWORD *__fastcall sub_18004F450(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::DepthBufferGeneric::`vftable';
  sub_180068968();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
