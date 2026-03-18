/*
 * XREFs of ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1538
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801B0810 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     _lambda_8d63a026ee05ea8998b7edda19b5853b_::operator() @ 0x18027E580 (_lambda_8d63a026ee05ea8998b7edda19b5853b_--operator().c)
 *     _lambda_586b8124a7a66c0b83ac918785996de3_::operator() @ 0x18027F038 (_lambda_586b8124a7a66c0b83ac918785996de3_--operator().c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18027F804 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180280AF4 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CTargetDirtyBase<8>::AddTightDeviceDirtyRect(__int64 a1, unsigned int *a2, double a3)
{
  const struct FastRegion::Internal::CRgnData **v3; // rbx
  const struct tagRECT *v4; // rax
  int v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 464);
  if ( v3 )
  {
    v4 = (const struct tagRECT *)PixelAlign(v5, a2, a3);
    CRegion::AddRectangle(v3, v4);
  }
}
