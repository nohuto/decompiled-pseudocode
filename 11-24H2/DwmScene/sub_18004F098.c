/*
 * XREFs of sub_18004F098 @ 0x18004F098
 * Callers:
 *     sub_18004FEC0 @ 0x18004FEC0 (sub_18004FEC0.c)
 * Callees:
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 */

void **__fastcall sub_18004F098(_QWORD *a1)
{
  void **result; // rax

  sub_180081A8C();
  result = &Spectre::Engine::RenderStateGeneric::`vftable';
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return result;
}
