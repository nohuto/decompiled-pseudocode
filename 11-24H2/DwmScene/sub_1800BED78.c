/*
 * XREFs of sub_1800BED78 @ 0x1800BED78
 * Callers:
 *     sub_1800BEE20 @ 0x1800BEE20 (sub_1800BEE20.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 */

__int64 __fastcall sub_1800BED78(_QWORD *a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  *(_OWORD *)v3 = 0LL;
  sub_180011110(a1 + 12, v3);
  if ( v3[1] )
    sub_18001060C(v3[1]);
  sub_18000E954(a1 + 16);
  return sub_180026678(a1);
}
