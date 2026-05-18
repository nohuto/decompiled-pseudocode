/*
 * XREFs of sub_1800B7B44 @ 0x1800B7B44
 * Callers:
 *     sub_1800BBBF0 @ 0x1800BBBF0 (sub_1800BBBF0.c)
 * Callees:
 *     sub_18008196C @ 0x18008196C (sub_18008196C.c)
 */

void **__fastcall sub_1800B7B44(_QWORD *a1)
{
  void **result; // rax

  sub_18008196C((__int64)a1);
  result = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  a1[15] = 0LL;
  return result;
}
