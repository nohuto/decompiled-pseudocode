/*
 * XREFs of sub_1800C63FC @ 0x1800C63FC
 * Callers:
 *     sub_1800B8E50 @ 0x1800B8E50 (sub_1800B8E50.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800C63FC(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  sub_18000E854(a1 + 18);
  return sub_180081E54(a1);
}
