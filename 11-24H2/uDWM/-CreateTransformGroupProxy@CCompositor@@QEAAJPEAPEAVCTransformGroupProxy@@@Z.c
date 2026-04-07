/*
 * XREFs of ?CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x1800B621C
 * Callers:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180048910 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateTransformGroupProxy(__int64 this, CBaseTransformProxy **a2)
{
  return CCompositor::CreateProxy<CTransformGroupProxy>(this, a2);
}
