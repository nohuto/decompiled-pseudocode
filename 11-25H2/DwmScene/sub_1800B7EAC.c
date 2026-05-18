/*
 * XREFs of sub_1800B7EAC @ 0x1800B7EAC
 * Callers:
 *     sub_1800BBCD0 @ 0x1800BBCD0 (sub_1800BBCD0.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18007FC10 @ 0x18007FC10 (sub_18007FC10.c)
 */

void **__fastcall sub_1800B7EAC(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x70uLL);
  sub_18007FC10(a1);
  result = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
