/*
 * XREFs of sub_18004A230 @ 0x18004A230
 * Callers:
 *     sub_18004AF50 @ 0x18004AF50 (sub_18004AF50.c)
 * Callees:
 *     sub_180080ED8 @ 0x180080ED8 (sub_180080ED8.c)
 */

void **__fastcall sub_18004A230(_QWORD *a1)
{
  void **result; // rax

  sub_180080ED8(a1, 2LL);
  result = &Spectre::Engine::HullShader::`vftable';
  *a1 = &Spectre::Engine::HullShader::`vftable';
  return result;
}
