/*
 * XREFs of sub_18004EEDC @ 0x18004EEDC
 * Callers:
 *     sub_18004FA90 @ 0x18004FA90 (sub_18004FA90.c)
 * Callees:
 *     sub_1800688A4 @ 0x1800688A4 (sub_1800688A4.c)
 */

void **__fastcall sub_18004EEDC(_QWORD *a1)
{
  void **result; // rax

  sub_1800688A4();
  result = &Spectre::Engine::DepthBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return result;
}
