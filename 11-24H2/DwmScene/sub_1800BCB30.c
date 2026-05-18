/*
 * XREFs of sub_1800BCB30 @ 0x1800BCB30
 * Callers:
 *     sub_180011084 @ 0x180011084 (sub_180011084.c)
 *     sub_1800BCB88 @ 0x1800BCB88 (sub_1800BCB88.c)
 *     sub_1800BCBE0 @ 0x1800BCBE0 (sub_1800BCBE0.c)
 *     sub_1800BCC60 @ 0x1800BCC60 (sub_1800BCC60.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18002FD0C @ 0x18002FD0C (sub_18002FD0C.c)
 *     sub_1800BCAF4 @ 0x1800BCAF4 (sub_1800BCAF4.c)
 */

__int64 __fastcall sub_1800BCB30(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  sub_18002FD0C((void **)(a1 + 1632));
  sub_18002FD0C((void **)(a1 + 1616));
  sub_1800BCAF4((void **)(a1 + 1600));
  sub_18000E954((__int64 *)(a1 + 456));
  return sub_180029DA8(a1);
}
