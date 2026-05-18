/*
 * XREFs of sub_1800B79E4 @ 0x1800B79E4
 * Callers:
 *     sub_1800BBA90 @ 0x1800BBA90 (sub_1800BBA90.c)
 * Callees:
 *     sub_18008180C @ 0x18008180C (sub_18008180C.c)
 */

void **__fastcall sub_1800B79E4(_QWORD *a1)
{
  void **result; // rax

  sub_18008180C((__int64)a1);
  result = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  a1[15] = 0LL;
  return result;
}
