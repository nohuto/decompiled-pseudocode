/*
 * XREFs of ?CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800B61F8
 * Callers:
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A48C0 (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateMatrixTransform3dProxy(__int64 this, CBaseObject **a2)
{
  return CCompositor::CreateProxy<CMatrixTransform3dProxy>(this, a2);
}
