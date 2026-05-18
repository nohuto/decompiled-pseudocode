/*
 * XREFs of sub_1800735B4 @ 0x1800735B4
 * Callers:
 *     sub_180073620 @ 0x180073620 (sub_180073620.c)
 * Callees:
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 */

void **__fastcall sub_1800735B4(__int64 a1)
{
  void **result; // rax

  sub_18002CC9C((void **)(a1 + 16), a1 + 16);
  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
