/*
 * XREFs of ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0
 * Callers:
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x180005CF0 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x18000B970 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x18000EB90 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800134C0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x180021ED0 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x180027900 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180035AB0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800546E0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180054970 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CImage@@EEAAJXZ @ 0x180054C60 (-Initialize@CImage@@EEAAJXZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180055A30 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x1800A05C0 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x1800A3010 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2610 (-Initialize@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800BFAC0 (-Initialize@CFlickVisual@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C4770 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800C50A0 (-Initialize@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800CCC60 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x1800CCF40 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800CD3C0 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x1800D5760 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?Initialize@CSolidRectangleVisual@@MEAAJXZ @ 0x1800D88F0 (-Initialize@CSolidRectangleVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800E38F0 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800E7830 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E8690 (-Initialize@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x1800E9650 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CGlobalTimeTrackVisual@@MEAAJXZ @ 0x180104EF0 (-Initialize@CGlobalTimeTrackVisual@@MEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x18003A0D0 (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::Initialize(CVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CCompositor::CreateProxy<CVisualProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         (char *)this + 16);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x4Du, 0LL);
  return v2;
}
