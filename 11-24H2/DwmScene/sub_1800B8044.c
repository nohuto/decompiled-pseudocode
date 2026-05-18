/*
 * XREFs of sub_1800B8044 @ 0x1800B8044
 * Callers:
 *     sub_1800BBDA0 @ 0x1800BBDA0 (sub_1800BBDA0.c)
 * Callees:
 *     sub_180081EC0 @ 0x180081EC0 (sub_180081EC0.c)
 */

void **__fastcall sub_1800B8044(_QWORD *a1)
{
  void **result; // rax

  sub_180081EC0((__int64)a1);
  result = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  a1[18] = 0LL;
  return result;
}
