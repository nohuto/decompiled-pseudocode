/*
 * XREFs of sub_1800C735C @ 0x1800C735C
 * Callers:
 *     sub_1800C73A0 @ 0x1800C73A0 (sub_1800C73A0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800C735C(__int64 *a1)
{
  *a1 = (__int64)&Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  sub_18000E854(a1 + 16);
  sub_18000E854(a1 + 15);
  sub_18000E854(a1 + 14);
  return sub_180081968(a1);
}
