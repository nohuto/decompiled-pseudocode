/*
 * XREFs of ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x18022BA04
 * Callers:
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x18022B9A0 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x1800C2FC0 (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?SetAlphaMode@CDDisplaySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18025ACF0 (-SetAlphaMode@CDDisplaySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
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
    CTargetDirtyBase<8>::SetFullDirty((__int64)this + 31160);
  }
}
