/*
 * XREFs of sub_18004F0C0 @ 0x18004F0C0
 * Callers:
 *     sub_18004FFE0 @ 0x18004FFE0 (sub_18004FFE0.c)
 * Callees:
 *     sub_1800503EC @ 0x1800503EC (sub_1800503EC.c)
 */

void **__fastcall sub_18004F0C0(_QWORD *a1)
{
  void **result; // rax

  sub_1800503EC();
  result = &Spectre::Engine::SamplerGeneric::`vftable';
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return result;
}
