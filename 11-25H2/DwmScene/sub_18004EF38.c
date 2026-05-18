/*
 * XREFs of sub_18004EF38 @ 0x18004EF38
 * Callers:
 *     sub_18004FD60 @ 0x18004FD60 (sub_18004FD60.c)
 * Callees:
 *     sub_18008192C @ 0x18008192C (sub_18008192C.c)
 */

void **__fastcall sub_18004EF38(_QWORD *a1)
{
  void **result; // rax

  sub_18008192C();
  result = &Spectre::Engine::RenderStateGeneric::`vftable';
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return result;
}
