/*
 * XREFs of sub_18004F6E0 @ 0x18004F6E0
 * Callers:
 *     sub_18004FB90 @ 0x18004FB90 (sub_18004FB90.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800504B8 @ 0x1800504B8 (sub_1800504B8.c)
 */

_QWORD *__fastcall sub_18004F6E0(_QWORD *lpMem, char a2)
{
  *lpMem = &Spectre::Engine::SamplerGeneric::`vftable';
  sub_1800504B8();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
