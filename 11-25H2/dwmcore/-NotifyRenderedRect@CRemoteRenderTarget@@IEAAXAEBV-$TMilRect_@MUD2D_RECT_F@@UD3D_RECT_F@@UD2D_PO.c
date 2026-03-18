/*
 * XREFs of ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028B184
 * Callers:
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028B844 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::NotifyRenderedRect(__int64 a1, struct D2D_RECT_F *a2, char a3)
{
  double v3; // xmm2_8
  int *v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  int v8[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  if ( !a3 )
  {
    v10 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(a1 + 240, a2, (float *)&v10);
    a2 = (struct D2D_RECT_F *)&v10;
  }
  v5 = PixelAlign(v8, (unsigned int *)a2, v3);
  v6 = *(_QWORD *)(a1 + 192);
  v9 = *(_OWORD *)v5;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 112LL))(v6, &v9);
  *(_BYTE *)(a1 + 2673) = 1;
  return result;
}
