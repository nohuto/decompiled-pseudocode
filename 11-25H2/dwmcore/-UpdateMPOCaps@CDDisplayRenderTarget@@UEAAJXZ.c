/*
 * XREFs of ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x18022B9A0
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18023F210 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18028A410 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18028A4B8 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 * Callees:
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x1800C2DFC (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x18022BA04 (-UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::UpdateMPOCaps(CDirectFlipInfo **this)
{
  unsigned int v1; // ebx
  int updated; // eax

  v1 = 0;
  if ( this[6] )
  {
    updated = COverlayContext::UpdateMPOCaps(this + 8);
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x116u, 0LL);
    CDDisplayRenderTarget::UpdateAlphaMode((CDDisplayRenderTarget *)(this - 20));
  }
  return v1;
}
