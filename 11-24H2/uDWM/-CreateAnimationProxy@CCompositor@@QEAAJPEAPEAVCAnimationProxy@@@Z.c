/*
 * XREFs of ?CreateAnimationProxy@CCompositor@@QEAAJPEAPEAVCAnimationProxy@@@Z @ 0x18009B374
 * Callers:
 *     ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180049F54 (-_EnsureResources@CAnimationResource@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateAnimationProxy(__int64 this, CResourceProxy **a2)
{
  return CCompositor::CreateProxy<CAnimationProxy>(this, a2);
}
