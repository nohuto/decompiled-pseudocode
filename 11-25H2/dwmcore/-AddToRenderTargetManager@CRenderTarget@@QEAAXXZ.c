/*
 * XREFs of ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x1800C1E54
 * Callers:
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800C1B20 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800C1CB0 (-NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x180282954 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1802901DC (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802D8534 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1802DA768 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x1800C1E9C (-AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 */

void __fastcall CRenderTarget::AddToRenderTargetManager(CRenderTarget *this)
{
  if ( !*((_BYTE *)this + 156) )
  {
    CRenderTargetManager::AddRenderTarget(
      *(CRenderTargetManager **)(*((_QWORD *)this + 3) + 616LL),
      (struct IRenderTarget *)(((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_BYTE *)this + 156) = 1;
  }
}
