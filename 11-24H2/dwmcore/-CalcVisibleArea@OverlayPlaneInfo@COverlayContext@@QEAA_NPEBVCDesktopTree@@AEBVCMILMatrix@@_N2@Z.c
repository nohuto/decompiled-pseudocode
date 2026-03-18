/*
 * XREFs of ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N2@Z @ 0x180268D84
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x18009CB00 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18009F0C0 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801CDE90 (-IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?CalcVisibleArea@COcclusionContext@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18027AC14 (-CalcVisibleArea@COcclusionContext@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 */

char __fastcall COverlayContext::OverlayPlaneInfo::CalcVisibleArea(
        COverlayContext::OverlayPlaneInfo *this,
        const struct CDesktopTree *a2,
        const struct CMILMatrix *a3,
        char a4,
        bool a5)
{
  double v5; // xmm2_8
  const struct COcclusionContext *SharedOcclusionContext; // rax
  const struct COcclusionContext *v10; // rdi
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF

  v15 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, (const struct D2D_RECT_F *)this + 9, (float *)&v15);
  PixelAlign(v14, (unsigned int *)&v15, v5);
  SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(a2);
  v10 = SharedOcclusionContext;
  if ( !SharedOcclusionContext )
    goto LABEL_8;
  if ( !a5 && !COcclusionContext::IsRectInOcclusionRegion((__int64)SharedOcclusionContext, v14) )
  {
    *((_QWORD *)this + 44) = 1LL;
    return 0;
  }
  if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)this + 57) )
  {
LABEL_8:
    v13 = (v14[3] - v14[1]) * (v14[2] - v14[0]);
  }
  else
  {
    v12 = CVisual::GetZ(*((CVisual **)this + 1), a2, *((_DWORD *)v10 + 384));
    v13 = COcclusionContext::CalcVisibleArea(v10, &v15, v12);
  }
  *((_QWORD *)this + 44) = v13;
  if ( !v13 )
    return 0;
  if ( a4 )
    *((_QWORD *)this + 44) = v13 + 10;
  return 1;
}
