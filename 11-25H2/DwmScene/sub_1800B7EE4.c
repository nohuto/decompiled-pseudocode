/*
 * XREFs of sub_1800B7EE4 @ 0x1800B7EE4
 * Callers:
 *     sub_1800BBC40 @ 0x1800BBC40 (sub_1800BBC40.c)
 * Callees:
 *     sub_180081D60 @ 0x180081D60 (sub_180081D60.c)
 */

void **__fastcall sub_1800B7EE4(_QWORD *a1)
{
  void **result; // rax

  sub_180081D60((__int64)a1);
  result = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  a1[18] = 0LL;
  return result;
}
