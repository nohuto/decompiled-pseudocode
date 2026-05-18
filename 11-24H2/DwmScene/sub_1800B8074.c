/*
 * XREFs of sub_1800B8074 @ 0x1800B8074
 * Callers:
 *     sub_1800BBA40 @ 0x1800BBA40 (sub_1800BBA40.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_180080E78 @ 0x180080E78 (sub_180080E78.c)
 */

void **__fastcall sub_1800B8074(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_180080E78((__int64)a1);
  result = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
