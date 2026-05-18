/*
 * XREFs of sub_18004F0E8 @ 0x18004F0E8
 * Callers:
 *     sub_18004FF50 @ 0x18004FF50 (sub_18004FF50.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_1800510E0 @ 0x1800510E0 (sub_1800510E0.c)
 */

void **__fastcall sub_18004F0E8(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0xA0uLL);
  sub_1800510E0(a1);
  result = &Spectre::Engine::TextureGeneric::`vftable';
  *a1 = &Spectre::Engine::TextureGeneric::`vftable';
  return result;
}
