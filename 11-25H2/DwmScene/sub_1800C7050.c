/*
 * XREFs of sub_1800C7050 @ 0x1800C7050
 * Callers:
 *     sub_1800C7090 @ 0x1800C7090 (sub_1800C7090.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800C7050(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  sub_18000E854(a1 + 23);
  return sub_180050358(a1);
}
