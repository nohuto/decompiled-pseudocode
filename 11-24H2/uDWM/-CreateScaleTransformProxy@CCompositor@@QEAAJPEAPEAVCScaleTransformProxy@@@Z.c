/*
 * XREFs of ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x180015B0C
 * Callers:
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180015098 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180048910 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A48C0 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateScaleTransformProxy(CCompositor *this, struct CScaleTransformProxy **a2)
{
  return CCompositor::CreateProxy<CScaleTransformProxy>(this, a2);
}
