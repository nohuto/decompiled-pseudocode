/*
 * XREFs of sub_18004A364 @ 0x18004A364
 * Callers:
 *     sub_18004B31C @ 0x18004B31C (sub_18004B31C.c)
 * Callees:
 *     sub_180080ED8 @ 0x180080ED8 (sub_180080ED8.c)
 */

void **__fastcall sub_18004A364(_QWORD *a1)
{
  void **result; // rax

  sub_180080ED8(a1, 1LL);
  result = &Spectre::Engine::VertexShader::`vftable';
  *a1 = &Spectre::Engine::VertexShader::`vftable';
  return result;
}
