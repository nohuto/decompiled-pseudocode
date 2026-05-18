/*
 * XREFs of sub_1800C6080 @ 0x1800C6080
 * Callers:
 *     sub_1800B8E10 @ 0x1800B8E10 (sub_1800B8E10.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800C6080(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  sub_18000E854(a1 + 13);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return sub_18008163C(a1);
}
