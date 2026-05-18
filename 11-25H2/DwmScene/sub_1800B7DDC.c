/*
 * XREFs of sub_1800B7DDC @ 0x1800B7DDC
 * Callers:
 *     sub_1800BBF10 @ 0x1800BBF10 (sub_1800BBF10.c)
 * Callees:
 *     sub_180027668 @ 0x180027668 (sub_180027668.c)
 */

void **__fastcall sub_1800B7DDC(_QWORD *a1)
{
  void **result; // rax

  sub_180027668(a1);
  result = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  a1[16] = 0LL;
  return result;
}
