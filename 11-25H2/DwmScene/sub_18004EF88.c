/*
 * XREFs of sub_18004EF88 @ 0x18004EF88
 * Callers:
 *     sub_18004FDF0 @ 0x18004FDF0 (sub_18004FDF0.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_180050F80 @ 0x180050F80 (sub_180050F80.c)
 */

void **__fastcall sub_18004EF88(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0xA0uLL);
  sub_180050F80(a1);
  result = &Spectre::Engine::TextureGeneric::`vftable';
  *a1 = &Spectre::Engine::TextureGeneric::`vftable';
  return result;
}
