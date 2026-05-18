/*
 * XREFs of sub_1800B7BE8 @ 0x1800B7BE8
 * Callers:
 *     sub_1800BB800 @ 0x1800BB800 (sub_1800BB800.c)
 * Callees:
 *     sub_180080E78 @ 0x180080E78 (sub_180080E78.c)
 */

void **__fastcall sub_1800B7BE8(_QWORD *a1)
{
  void **result; // rax

  sub_180080E78((__int64)a1);
  result = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
