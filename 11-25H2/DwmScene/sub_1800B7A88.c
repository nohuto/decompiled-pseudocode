/*
 * XREFs of sub_1800B7A88 @ 0x1800B7A88
 * Callers:
 *     sub_1800BB6A0 @ 0x1800BB6A0 (sub_1800BB6A0.c)
 * Callees:
 *     sub_180080D18 @ 0x180080D18 (sub_180080D18.c)
 */

void **__fastcall sub_1800B7A88(_QWORD *a1)
{
  void **result; // rax

  sub_180080D18((__int64)a1);
  result = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
