/*
 * XREFs of ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x180003860 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180005B60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?Initialize@CImage@@EEAAJXZ @ 0x180006D20 (-Initialize@CImage@@EEAAJXZ.c)
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x18000C560 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x18002E160 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18002E4B0 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CCanvasVisual@@MEAAJXZ @ 0x18002E590 (-Initialize@CCanvasVisual@@MEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x18002F330 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x18002F710 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJXZ @ 0x180040250 (-Initialize@CAnimatedTransitionVisual@@MEAAJXZ.c)
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x18004E630 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 *     ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x180061BC0 (-Initialize@CThumbnailVisual@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x18006DE40 (-Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x1800705C0 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 *     ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18007C4E0 (-Initialize@CAcrylicSheet@@EEAAJXZ.c)
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x180083BF0 (-Initialize@CLivePreview@@MEAAJXZ.c)
 *     ?Initialize@CDesktopThumbnailBase@@MEAAJXZ @ 0x180086950 (-Initialize@CDesktopThumbnailBase@@MEAAJXZ.c)
 *     ?Initialize@CAccent@@MEAAJXZ @ 0x1800897D0 (-Initialize@CAccent@@MEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800C6850 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?Initialize@CSolidRectangleVisual@@MEAAJXZ @ 0x1800D0D70 (-Initialize@CSolidRectangleVisual@@MEAAJXZ.c)
 *     ?Initialize@CGlobalTimeTrackVisual@@MEAAJXZ @ 0x1800EC210 (-Initialize@CGlobalTimeTrackVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x18002E620 (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 */

__int64 __fastcall CContainerVisual::Initialize(struct CContainerVisualProxy **this)
{
  int ContainerVisualProxy; // eax
  unsigned int v2; // ebx

  ContainerVisualProxy = CCompositor::CreateContainerVisualProxy(
                           *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                           this + 2);
  v2 = ContainerVisualProxy;
  if ( ContainerVisualProxy < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ContainerVisualProxy, 0x1Du, 0LL);
  return v2;
}
