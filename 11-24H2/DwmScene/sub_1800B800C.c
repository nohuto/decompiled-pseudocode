/*
 * XREFs of sub_1800B800C @ 0x1800B800C
 * Callers:
 *     sub_1800BBE30 @ 0x1800BBE30 (sub_1800BBE30.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18007FD70 @ 0x18007FD70 (sub_18007FD70.c)
 */

void **__fastcall sub_1800B800C(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x70uLL);
  sub_18007FD70(a1);
  result = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
