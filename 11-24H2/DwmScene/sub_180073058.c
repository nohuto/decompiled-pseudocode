/*
 * XREFs of sub_180073058 @ 0x180073058
 * Callers:
 *     sub_18007365C @ 0x18007365C (sub_18007365C.c)
 * Callees:
 *     sub_18007348C @ 0x18007348C (sub_18007348C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180073058(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)(a1 + 8) = *a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::`vftable';
  return sub_18007348C(a1 + 16);
}
