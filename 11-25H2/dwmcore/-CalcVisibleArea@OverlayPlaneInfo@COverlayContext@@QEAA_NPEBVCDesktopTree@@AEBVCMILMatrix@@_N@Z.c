/*
 * XREFs of ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z @ 0x18027460C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002C578 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180061220 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800CAC30 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1800CD0F0 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?CalcVisibleArea@COcclusionContext@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180285874 (-CalcVisibleArea@COcclusionContext@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 */

char __fastcall COverlayContext::OverlayPlaneInfo::CalcVisibleArea(
        COverlayContext::OverlayPlaneInfo *this,
        const struct CDesktopTree *a2,
        const struct CMILMatrix *a3,
        char a4)
{
  double v4; // xmm2_8
  const struct COcclusionContext *SharedOcclusionContext; // rsi
  __int64 v9; // r9
  int *v10; // rax
  int v12[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v13[4]; // [rsp+30h] [rbp-38h] BYREF

  COverlayContext::OverlayPlaneInfo::GetLocalClipRect((__int64)this, (__int64)v13, (__int64)a3);
  SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(a2);
  CVisual::GetZ(*((CVisual **)this + 1), a2, *((_DWORD *)SharedOcclusionContext + 384));
  if ( TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)this + 57) )
  {
    v10 = PixelAlign(v12, v13, v4);
    v9 = (v10[2] - *v10) * (v10[3] - v10[1]);
  }
  else
  {
    v9 = COcclusionContext::CalcVisibleArea(SharedOcclusionContext, v13);
  }
  *((_QWORD *)this + 44) = v9;
  if ( !v9 )
    return 0;
  if ( *((_BYTE *)this + 364) )
  {
    v9 += (unsigned int)((*(_QWORD *)((char *)this + 44) - *(_QWORD *)((char *)this + 36))
                       * (HIDWORD(*(_QWORD *)((char *)this + 44)) - HIDWORD(*(_QWORD *)((char *)this + 36))));
    *((_QWORD *)this + 44) = v9;
  }
  if ( a4 )
    *((_QWORD *)this + 44) = v9 + 100;
  return 1;
}
