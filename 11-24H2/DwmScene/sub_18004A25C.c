/*
 * XREFs of sub_18004A25C @ 0x18004A25C
 * Callers:
 *     sub_18004B01C @ 0x18004B01C (sub_18004B01C.c)
 * Callees:
 *     sub_180080ED8 @ 0x180080ED8 (sub_180080ED8.c)
 */

void **__fastcall sub_18004A25C(_QWORD *a1)
{
  void **result; // rax

  sub_180080ED8(a1, 5LL);
  result = &Spectre::Engine::PixelShader::`vftable';
  *a1 = &Spectre::Engine::PixelShader::`vftable';
  return result;
}
