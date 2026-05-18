/*
 * XREFs of sub_1800B7E24 @ 0x1800B7E24
 * Callers:
 *     sub_1800BBD60 @ 0x1800BBD60 (sub_1800BBD60.c)
 * Callees:
 *     sub_18005028C @ 0x18005028C (sub_18005028C.c)
 */

void **__fastcall sub_1800B7E24(_QWORD *a1)
{
  void **result; // rax

  sub_18005028C(a1);
  result = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  a1[23] = 0LL;
  return result;
}
