/*
 * XREFs of ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076B94
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800765A0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     _lambda_8d63a026ee05ea8998b7edda19b5853b_::operator() @ 0x18028959C (_lambda_8d63a026ee05ea8998b7edda19b5853b_--operator().c)
 *     _lambda_586b8124a7a66c0b83ac918785996de3_::operator() @ 0x18028A078 (_lambda_586b8124a7a66c0b83ac918785996de3_--operator().c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028A624 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028B844 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x180043E30 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CTargetDirtyBase<8>::AddTightDeviceDirtyRect(__int64 a1, __int64 a2)
{
  const struct FastRegion::Internal::CRgnData **v2; // rbx
  const struct tagRECT *v3; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 464);
  if ( v2 )
  {
    v3 = (const struct tagRECT *)PixelAlign(v4, a2);
    CRegion::AddRectangle(v2, v3);
  }
}
