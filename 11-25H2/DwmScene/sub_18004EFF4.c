/*
 * XREFs of sub_18004EFF4 @ 0x18004EFF4
 * Callers:
 *     sub_18004FCD0 @ 0x18004FCD0 (sub_18004FCD0.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_180081D60 @ 0x180081D60 (sub_180081D60.c)
 */

void **__fastcall sub_18004EFF4(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x90uLL);
  sub_180081D60(a1);
  result = &Spectre::Engine::VertexLayoutGeneric::`vftable';
  *a1 = &Spectre::Engine::VertexLayoutGeneric::`vftable';
  return result;
}
