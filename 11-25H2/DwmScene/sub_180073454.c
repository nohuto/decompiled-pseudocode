/*
 * XREFs of sub_180073454 @ 0x180073454
 * Callers:
 *     sub_1800734C0 @ 0x1800734C0 (sub_1800734C0.c)
 * Callees:
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 */

void **__fastcall sub_180073454(__int64 a1)
{
  void **result; // rax

  sub_18002CB3C((void **)(a1 + 16), a1 + 16);
  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
