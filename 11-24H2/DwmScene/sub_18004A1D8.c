/*
 * XREFs of sub_18004A1D8 @ 0x18004A1D8
 * Callers:
 *     sub_18004ADB8 @ 0x18004ADB8 (sub_18004ADB8.c)
 * Callees:
 *     sub_180080ED8 @ 0x180080ED8 (sub_180080ED8.c)
 */

void **__fastcall sub_18004A1D8(_QWORD *a1)
{
  void **result; // rax

  sub_180080ED8(a1, 3LL);
  result = &Spectre::Engine::DomainShader::`vftable';
  *a1 = &Spectre::Engine::DomainShader::`vftable';
  return result;
}
