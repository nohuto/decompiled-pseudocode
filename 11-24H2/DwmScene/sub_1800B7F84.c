/*
 * XREFs of sub_1800B7F84 @ 0x1800B7F84
 * Callers:
 *     sub_1800BBEC0 @ 0x1800BBEC0 (sub_1800BBEC0.c)
 * Callees:
 *     sub_1800503EC @ 0x1800503EC (sub_1800503EC.c)
 */

void **__fastcall sub_1800B7F84(_QWORD *a1)
{
  void **result; // rax

  sub_1800503EC(a1);
  result = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  a1[23] = 0LL;
  return result;
}
