/*
 * XREFs of sub_18004EF60 @ 0x18004EF60
 * Callers:
 *     sub_18004FE80 @ 0x18004FE80 (sub_18004FE80.c)
 * Callees:
 *     sub_18005028C @ 0x18005028C (sub_18005028C.c)
 */

void **__fastcall sub_18004EF60(_QWORD *a1)
{
  void **result; // rax

  sub_18005028C();
  result = &Spectre::Engine::SamplerGeneric::`vftable';
  *a1 = &Spectre::Engine::SamplerGeneric::`vftable';
  return result;
}
