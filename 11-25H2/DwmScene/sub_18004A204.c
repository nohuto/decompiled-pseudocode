/*
 * XREFs of sub_18004A204 @ 0x18004A204
 * Callers:
 *     sub_18004B1BC @ 0x18004B1BC (sub_18004B1BC.c)
 * Callees:
 *     sub_180080D78 @ 0x180080D78 (sub_180080D78.c)
 */

void **__fastcall sub_18004A204(_QWORD *a1)
{
  void **result; // rax

  sub_180080D78(a1, 1LL);
  result = &Spectre::Engine::VertexShader::`vftable';
  *a1 = &Spectre::Engine::VertexShader::`vftable';
  return result;
}
