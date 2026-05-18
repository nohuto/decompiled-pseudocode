/*
 * XREFs of sub_1800B7B18 @ 0x1800B7B18
 * Callers:
 *     sub_1800BBE80 @ 0x1800BBE80 (sub_1800BBE80.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_1800801A4 @ 0x1800801A4 (sub_1800801A4.c)
 */

void **__fastcall sub_1800B7B18(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x70uLL);
  sub_1800801A4(a1);
  result = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
