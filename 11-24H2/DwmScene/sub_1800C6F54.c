/*
 * XREFs of sub_1800C6F54 @ 0x1800C6F54
 * Callers:
 *     sub_1800C6F90 @ 0x1800C6F90 (sub_1800C6F90.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800C6F54(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  sub_18000E954(a1 + 13);
  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  return sub_1800266BC((__int64)a1);
}
