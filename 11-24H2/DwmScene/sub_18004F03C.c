/*
 * XREFs of sub_18004F03C @ 0x18004F03C
 * Callers:
 *     sub_18004FBF0 @ 0x18004FBF0 (sub_18004FBF0.c)
 * Callees:
 *     sub_180068A04 @ 0x180068A04 (sub_180068A04.c)
 */

void **__fastcall sub_18004F03C(_QWORD *a1)
{
  void **result; // rax

  sub_180068A04();
  result = &Spectre::Engine::DepthBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return result;
}
