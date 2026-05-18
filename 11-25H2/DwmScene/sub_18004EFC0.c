/*
 * XREFs of sub_18004EFC0 @ 0x18004EFC0
 * Callers:
 *     sub_18004FC40 @ 0x18004FC40 (sub_18004FC40.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18007FC10 @ 0x18007FC10 (sub_18007FC10.c)
 */

void **__fastcall sub_18004EFC0(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_18007FC10(a1);
  result = &Spectre::Engine::VertexBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::VertexBufferGeneric::`vftable';
  return result;
}
