/*
 * XREFs of sub_18004F064 @ 0x18004F064
 * Callers:
 *     sub_18004FD10 @ 0x18004FD10 (sub_18004FD10.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_180080304 @ 0x180080304 (sub_180080304.c)
 */

void **__fastcall sub_18004F064(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_180080304(a1);
  result = &Spectre::Engine::IndexBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::IndexBufferGeneric::`vftable';
  return result;
}
