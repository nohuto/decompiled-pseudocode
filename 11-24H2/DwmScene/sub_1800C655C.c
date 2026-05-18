/*
 * XREFs of sub_1800C655C @ 0x1800C655C
 * Callers:
 *     sub_1800B8FB0 @ 0x1800B8FB0 (sub_1800B8FB0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800C655C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  sub_18000E954(a1 + 18);
  return sub_180081FB4(a1);
}
