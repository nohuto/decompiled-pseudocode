/*
 * XREFs of sub_180072EF8 @ 0x180072EF8
 * Callers:
 *     sub_1800734FC @ 0x1800734FC (sub_1800734FC.c)
 * Callees:
 *     sub_18007332C @ 0x18007332C (sub_18007332C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180072EF8(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)(a1 + 8) = *a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::`vftable';
  return sub_18007332C(a1 + 16);
}
