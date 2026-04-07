/*
 * XREFs of ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180015B98
 * Callers:
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180015098 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017580 (-Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x180077410 (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1800784DC (-UpdateTransform@CVisual@@AEAAJXZ.c)
 *     ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z @ 0x1800B4500 (-_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800C830C (-Initialize@CMagnifier@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateMatrixTransformProxy(CCompositor *this, struct CMatrixTransformProxy **a2)
{
  return CCompositor::CreateProxy<CMatrixTransformProxy>(this, a2);
}
