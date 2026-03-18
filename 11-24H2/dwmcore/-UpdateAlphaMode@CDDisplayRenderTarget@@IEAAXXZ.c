/*
 * XREFs of ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x180189A34
 * Callers:
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x180188CA0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x18018A47C (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?SetAlphaMode@CDDisplaySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18024F7C0 (-SetAlphaMode@CDDisplaySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 */

void __fastcall CDDisplayRenderTarget::UpdateAlphaMode(CDDisplayRenderTarget *this)
{
  enum DXGI_ALPHA_MODE v2; // edx
  CDDisplaySwapChain *v3; // rcx

  v2 = 2 * !COverlayContext::OverlaysEnabled((CDDisplayRenderTarget *)((char *)this + 224)) + 1;
  if ( *((_DWORD *)this + 33) != v2 )
  {
    v3 = (CDDisplaySwapChain *)(*((_QWORD *)this + 26) + 24LL);
    *((_DWORD *)this + 33) = v2;
    CDDisplaySwapChain::SetAlphaMode(v3, v2);
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30776);
  }
}
