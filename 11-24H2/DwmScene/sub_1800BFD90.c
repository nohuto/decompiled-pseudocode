/*
 * XREFs of sub_1800BFD90 @ 0x1800BFD90
 * Callers:
 *     sub_1800C01D0 @ 0x1800C01D0 (sub_1800C01D0.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 */

__int64 __fastcall sub_1800BFD90(__int64 *a1)
{
  __int64 *v2; // rbx

  v2 = a1 + 21;
  *a1 = (__int64)&Spectre::Engine::D3D11::TextureD3D11::`vftable';
  sub_18000E954(a1 + 21);
  sub_18000E954(a1 + 23);
  sub_18000E954(a1 + 22);
  sub_18000E954(v2);
  sub_18000E954(a1 + 20);
  return sub_180051534(a1);
}
