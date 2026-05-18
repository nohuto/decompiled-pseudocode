/*
 * XREFs of sub_18004A204 @ 0x18004A204
 * Callers:
 *     sub_18004AE84 @ 0x18004AE84 (sub_18004AE84.c)
 * Callees:
 *     sub_180080ED8 @ 0x180080ED8 (sub_180080ED8.c)
 */

void **__fastcall sub_18004A204(_QWORD *a1)
{
  void **result; // rax

  sub_180080ED8(a1, 4LL);
  result = &Spectre::Engine::GeometryShader::`vftable';
  *a1 = &Spectre::Engine::GeometryShader::`vftable';
  return result;
}
