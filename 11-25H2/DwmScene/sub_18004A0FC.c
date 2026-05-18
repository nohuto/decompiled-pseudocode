/*
 * XREFs of sub_18004A0FC @ 0x18004A0FC
 * Callers:
 *     sub_18004AEBC @ 0x18004AEBC (sub_18004AEBC.c)
 * Callees:
 *     sub_180080D78 @ 0x180080D78 (sub_180080D78.c)
 */

void **__fastcall sub_18004A0FC(_QWORD *a1)
{
  void **result; // rax

  sub_180080D78(a1, 5LL);
  result = &Spectre::Engine::PixelShader::`vftable';
  *a1 = &Spectre::Engine::PixelShader::`vftable';
  return result;
}
