/*
 * XREFs of sub_180017960 @ 0x180017960
 * Callers:
 *     sub_180017274 @ 0x180017274 (sub_180017274.c)
 *     sub_18001A8B0 @ 0x18001A8B0 (sub_18001A8B0.c)
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 */

_QWORD *__fastcall sub_180017960(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  sub_180024714();
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
