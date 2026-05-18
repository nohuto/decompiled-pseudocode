/*
 * XREFs of sub_1800C97F0 @ 0x1800C97F0
 * Callers:
 *     sub_1800C9820 @ 0x1800C9820 (sub_1800C9820.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800C97F0(_QWORD *a1)
{
  *a1 = &Spectre::Engine::D3D11::ConstantBufferD3D11::`vftable';
  sub_18000E954(a1 + 15);
  return sub_180090EEC(a1);
}
