/*
 * XREFs of sub_1800C71B0 @ 0x1800C71B0
 * Callers:
 *     sub_1800C71F0 @ 0x1800C71F0 (sub_1800C71F0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800C71B0(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  sub_18000E954(a1 + 23);
  return sub_1800504B8(a1);
}
