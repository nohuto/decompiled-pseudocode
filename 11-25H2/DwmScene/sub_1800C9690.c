/*
 * XREFs of sub_1800C9690 @ 0x1800C9690
 * Callers:
 *     sub_1800C96C0 @ 0x1800C96C0 (sub_1800C96C0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 */

__int64 __fastcall sub_1800C9690(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  sub_18000E854(a1 + 15);
  return sub_180090D8C(a1);
}
