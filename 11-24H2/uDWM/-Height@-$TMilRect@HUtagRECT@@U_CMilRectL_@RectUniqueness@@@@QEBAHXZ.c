/*
 * XREFs of ?Height@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBAHXZ @ 0x18009B1E4
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x18006DB04 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18006DF00 (-_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF620 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::Height(__int64 a1)
{
  return TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::Height<int>(a1);
}
