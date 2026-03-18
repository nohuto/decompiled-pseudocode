/*
 * XREFs of ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801F8C50
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     _lambda_586b8124a7a66c0b83ac918785996de3_::operator() @ 0x18028A078 (_lambda_586b8124a7a66c0b83ac918785996de3_--operator().c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028A624 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180065B10 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

int __fastcall CDDisplayRenderTarget::NotifyRenderedRect(__int64 a1, struct D2D_RECT_F *a2, char a3)
{
  double v3; // xmm2_8
  bool v5; // cf
  int *v6; // rax
  __int64 v7; // rcx
  int *v8; // rdx
  int result; // eax
  int v10[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    if ( !a3 )
    {
      v5 = *(_BYTE *)(a1 + 19697) != 0;
      v11 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(a1 + (v5 ? 31084LL : 30948LL), a2, (float *)&v11);
      a2 = (struct D2D_RECT_F *)&v11;
    }
    v6 = PixelAlign(v10, (unsigned int *)a2, v3);
    v7 = *(_QWORD *)(a1 + 208);
    v8 = (int *)&v11;
    v11 = *(_OWORD *)v6;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 208);
    v8 = 0LL;
  }
  result = COverlaySwapChain::NotifyRenderedRect((CDDisplaySwapChain *)(v7 + 24), v8);
  *(_BYTE *)(a1 + 33904) = 1;
  return result;
}
