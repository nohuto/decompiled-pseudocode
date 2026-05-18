/*
 * XREFs of sub_18004F690 @ 0x18004F690
 * Callers:
 *     sub_18004FB70 @ 0x18004FB70 (sub_18004FB70.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180081AC8 @ 0x180081AC8 (sub_180081AC8.c)
 */

_QWORD *__fastcall sub_18004F690(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::RenderStateGeneric::`vftable';
  sub_180081AC8();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
