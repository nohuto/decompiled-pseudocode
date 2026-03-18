/*
 * XREFs of ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1802DCCE0
 * Callers:
 *     ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x1802DCF08 (-ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_.c)
 *     ?ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS@@@Z @ 0x1802DCF98 (-ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SE.c)
 *     ?ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETTARGETFRAMERATE@@@Z @ 0x1802DCFBC (-ProcessSetTargetFrameRate@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHI.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x18021DB24 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802D7C80 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z @ 0x1802D83B0 (-DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
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
