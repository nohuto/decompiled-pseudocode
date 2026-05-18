/*
 * XREFs of sub_1800C61E0 @ 0x1800C61E0
 * Callers:
 *     sub_1800B8F70 @ 0x1800B8F70 (sub_1800B8F70.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800C61E0(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
  sub_18000E954(a1 + 13);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return sub_18008179C(a1);
}
