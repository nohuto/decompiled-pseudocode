/*
 * XREFs of sub_1800C74BC @ 0x1800C74BC
 * Callers:
 *     sub_1800C7500 @ 0x1800C7500 (sub_1800C7500.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800C74BC(__int64 *a1)
{
  *a1 = (__int64)&Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  sub_18000E954(a1 + 16);
  sub_18000E954(a1 + 15);
  sub_18000E954(a1 + 14);
  return sub_180081AC8(a1);
}
