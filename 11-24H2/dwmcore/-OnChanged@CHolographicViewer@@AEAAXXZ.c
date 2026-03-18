/*
 * XREFs of ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1802D3A40
 * Callers:
 *     ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x1802D3C68 (-ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_.c)
 *     ?ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS@@@Z @ 0x1802D3CF8 (-ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SE.c)
 *     ?ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE@@@Z @ 0x1802D3D1C (-ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802CE9E0 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z @ 0x1802CF110 (-DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicViewer::OnChanged(CHolographicViewer *this)
{
  __int64 v1; // rdi
  int v3; // esi
  CompositorTracing *v4; // rcx
  CHolographicInteropTaskQueue *v5; // rcx

  v1 = *((_QWORD *)this + 22);
  if ( v1 )
  {
    if ( *((_BYTE *)this + 168) )
    {
      v3 = *((_DWORD *)this + 22);
      if ( CompositorTracing::IsEnabled() )
      {
        CompositorTracing::Instance();
        CompositorTracing::DwmHolographicViewerUpdate_(v4, v3);
      }
      v5 = *(CHolographicInteropTaskQueue **)(v1 + 48);
      if ( v5 )
        CHolographicInteropTaskQueue::PostMessageW(
          v5,
          0x19u,
          (struct IUnknown *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
    }
    else
    {
      CHolographicManager::AddHolographicViewer(*((RTL_SRWLOCK **)this + 22), this);
      *((_BYTE *)this + 168) = 1;
    }
  }
}
