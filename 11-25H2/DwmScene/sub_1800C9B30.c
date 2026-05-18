/*
 * XREFs of sub_1800C9B30 @ 0x1800C9B30
 * Callers:
 *     sub_1800C9B70 @ 0x1800C9B70 (sub_1800C9B70.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800C9B30(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  sub_18000E854(a1 + 13);
  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  return sub_18002655C((__int64)a1);
}
