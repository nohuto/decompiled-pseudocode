/*
 * XREFs of sub_1800B7CB0 @ 0x1800B7CB0
 * Callers:
 *     sub_1800BBAD0 @ 0x1800BBAD0 (sub_1800BBAD0.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_180080E78 @ 0x180080E78 (sub_180080E78.c)
 */

void **__fastcall sub_1800B7CB0(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_180080E78((__int64)a1);
  result = &Spectre::Engine::D3D11::PixelShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::PixelShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
