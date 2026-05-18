/*
 * XREFs of sub_1800B7F3C @ 0x1800B7F3C
 * Callers:
 *     sub_1800BC070 @ 0x1800BC070 (sub_1800BC070.c)
 * Callees:
 *     sub_1800277C8 @ 0x1800277C8 (sub_1800277C8.c)
 */

void **__fastcall sub_1800B7F3C(_QWORD *a1)
{
  void **result; // rax

  sub_1800277C8(a1);
  result = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  a1[16] = 0LL;
  return result;
}
