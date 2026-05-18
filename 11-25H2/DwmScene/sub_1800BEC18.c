/*
 * XREFs of sub_1800BEC18 @ 0x1800BEC18
 * Callers:
 *     sub_1800BECC0 @ 0x1800BECC0 (sub_1800BECC0.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

__int64 __fastcall sub_1800BEC18(_QWORD *a1)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  *(_OWORD *)v3 = 0LL;
  sub_180011010(a1 + 12, v3);
  if ( v3[1] )
    sub_18001050C(v3[1]);
  sub_18000E854(a1 + 16);
  return sub_180026518(a1);
}
