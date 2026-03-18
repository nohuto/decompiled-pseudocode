/*
 * XREFs of ?CalcVisibleArea@COcclusionContext@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18027AC14
 * Callers:
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z @ 0x180268D84 (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D3468 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180284788 (-CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 */

__int64 __fastcall COcclusionContext::CalcVisibleArea(__int64 a1, unsigned int *a2, unsigned int a3)
{
  double v3; // xmm2_8
  int *v6; // rax
  bool v8; // zf
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 )
  {
    v8 = *(_BYTE *)(a1 + 1564) == 0;
    *(_OWORD *)v9 = 0LL;
    if ( v8 )
      *(_OWORD *)v9 = *(_OWORD *)a2;
    else
      COcclusionContext::PageInPixelsRectToDeviceRect(a1, a2, (__int64)v9);
    return CArrayBasedCoverageSet::CalcVisibleArea(a1 + 616, v9, a3);
  }
  else
  {
    v6 = PixelAlign(v9, a2, v3);
    return (v6[3] - v6[1]) * (v6[2] - *v6);
  }
}
