/*
 * XREFs of sub_1800B7F14 @ 0x1800B7F14
 * Callers:
 *     sub_1800BB8E0 @ 0x1800BB8E0 (sub_1800BB8E0.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_180080D18 @ 0x180080D18 (sub_180080D18.c)
 */

void **__fastcall sub_1800B7F14(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_180080D18((__int64)a1);
  result = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
