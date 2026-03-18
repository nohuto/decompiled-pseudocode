/*
 * XREFs of ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18021A0F0
 * Callers:
 *     ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x180229010 (-FinalRelease@CRenderTarget@@MEAAXXZ.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1802811E4 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18028376C (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1802A8C68 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802CFA50 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1802D14C8 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x18021A138 (-RemoveRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 */

void __fastcall CRenderTarget::RemoveFromRenderTargetManager(CRenderTarget *this)
{
  if ( *((_BYTE *)this + 156) )
  {
    CRenderTargetManager::RemoveRenderTarget(
      *(CRenderTargetManager **)(*((_QWORD *)this + 3) + 616LL),
      (struct IRenderTarget *)(((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_BYTE *)this + 156) = 0;
  }
}
