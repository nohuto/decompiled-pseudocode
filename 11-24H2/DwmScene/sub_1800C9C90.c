/*
 * XREFs of sub_1800C9C90 @ 0x1800C9C90
 * Callers:
 *     sub_1800C9CD0 @ 0x1800C9CD0 (sub_1800C9CD0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800C9C90(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  sub_18000E954(a1 + 13);
  *a1 = &Spectre::Engine::DeviceShader::`vftable';
  return sub_1800266BC((__int64)a1);
}
