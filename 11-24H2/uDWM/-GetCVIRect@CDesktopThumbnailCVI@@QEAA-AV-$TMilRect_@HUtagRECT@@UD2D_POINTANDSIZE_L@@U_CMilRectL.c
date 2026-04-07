/*
 * XREFs of ?GetCVIRect@CDesktopThumbnailCVI@@QEAA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@XZ @ 0x18007D420
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18007D130 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CDesktopThumbnailCVI::GetCVIRect(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 32);
  return result;
}
