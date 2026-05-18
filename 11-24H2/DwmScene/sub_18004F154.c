/*
 * XREFs of sub_18004F154 @ 0x18004F154
 * Callers:
 *     sub_18004FE30 @ 0x18004FE30 (sub_18004FE30.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_180081EC0 @ 0x180081EC0 (sub_180081EC0.c)
 */

void **__fastcall sub_18004F154(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x90uLL);
  sub_180081EC0(a1);
  result = &Spectre::Engine::VertexLayoutGeneric::`vftable';
  *a1 = &Spectre::Engine::VertexLayoutGeneric::`vftable';
  return result;
}
