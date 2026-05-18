/*
 * XREFs of sub_1800B7C78 @ 0x1800B7C78
 * Callers:
 *     sub_1800BBFE0 @ 0x1800BBFE0 (sub_1800BBFE0.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_180080304 @ 0x180080304 (sub_180080304.c)
 */

void **__fastcall sub_1800B7C78(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x70uLL);
  sub_180080304(a1);
  result = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::IndexBufferD3D11::`vftable';
  a1[13] = 0LL;
  return result;
}
