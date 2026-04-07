/*
 * XREFs of ?CreateHolographicInteropTextureProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800B61D4
 * Callers:
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800C4798 (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateHolographicInteropTextureProxyFromSharedHandle(
        __int64 this,
        void *a2,
        CBaseObject **a3)
{
  return CCompositor::CreateProxyFromSharedHandle<CHolographicInteropTextureProxy>(this, a2, a3);
}
