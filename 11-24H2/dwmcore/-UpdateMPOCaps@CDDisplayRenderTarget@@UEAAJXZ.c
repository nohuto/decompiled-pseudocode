/*
 * XREFs of ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x180188CA0
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180235B80 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x180235DA0 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x18027F5F0 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18027F698 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x180189A34 (-UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18018A29C (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::UpdateMPOCaps(CDDisplayRenderTarget *this)
{
  unsigned int v1; // ebx
  int updated; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    updated = COverlayContext::UpdateMPOCaps((CDDisplayRenderTarget *)((char *)this + 64));
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x10Cu, 0LL);
    CDDisplayRenderTarget::UpdateAlphaMode((CDDisplayRenderTarget *)((char *)this - 160));
  }
  return v1;
}
