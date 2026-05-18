/*
 * XREFs of sub_18004A0D0 @ 0x18004A0D0
 * Callers:
 *     sub_18004ADF0 @ 0x18004ADF0 (sub_18004ADF0.c)
 * Callees:
 *     sub_180080D78 @ 0x180080D78 (sub_180080D78.c)
 */

void **__fastcall sub_18004A0D0(_QWORD *a1)
{
  void **result; // rax

  sub_180080D78(a1, 2LL);
  result = &Spectre::Engine::HullShader::`vftable';
  *a1 = &Spectre::Engine::HullShader::`vftable';
  return result;
}
