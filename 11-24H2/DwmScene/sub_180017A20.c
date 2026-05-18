/*
 * XREFs of sub_180017A20 @ 0x180017A20
 * Callers:
 *     sub_180017374 @ 0x180017374 (sub_180017374.c)
 *     sub_18001A970 @ 0x18001A970 (sub_18001A970.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 */

_QWORD *__fastcall sub_180017A20(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  sub_180024874();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
