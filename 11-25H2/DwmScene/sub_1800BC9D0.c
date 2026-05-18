/*
 * XREFs of sub_1800BC9D0 @ 0x1800BC9D0
 * Callers:
 *     sub_180010F84 @ 0x180010F84 (sub_180010F84.c)
 *     sub_1800BCA28 @ 0x1800BCA28 (sub_1800BCA28.c)
 *     sub_1800BCA80 @ 0x1800BCA80 (sub_1800BCA80.c)
 *     sub_1800BCB00 @ 0x1800BCB00 (sub_1800BCB00.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18002FBAC @ 0x18002FBAC (sub_18002FBAC.c)
 *     sub_1800BC994 @ 0x1800BC994 (sub_1800BC994.c)
 */

__int64 __fastcall sub_1800BC9D0(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  sub_18002FBAC((void **)(a1 + 1632));
  sub_18002FBAC((void **)(a1 + 1616));
  sub_1800BC994((void **)(a1 + 1600));
  sub_18000E854((__int64 *)(a1 + 456));
  return sub_180029C48(a1);
}
