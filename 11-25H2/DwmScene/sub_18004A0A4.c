/*
 * XREFs of sub_18004A0A4 @ 0x18004A0A4
 * Callers:
 *     sub_18004AD24 @ 0x18004AD24 (sub_18004AD24.c)
 * Callees:
 *     sub_180080D78 @ 0x180080D78 (sub_180080D78.c)
 */

void **__fastcall sub_18004A0A4(_QWORD *a1)
{
  void **result; // rax

  sub_180080D78(a1, 4LL);
  result = &Spectre::Engine::GeometryShader::`vftable';
  *a1 = &Spectre::Engine::GeometryShader::`vftable';
  return result;
}
