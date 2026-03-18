/*
 * XREFs of ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802D1338
 * Callers:
 *     ?ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CREATE@@@Z @ 0x1802D13D4 (-ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CR.c)
 *     ?ProcessSetDebugOverlayFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETDEBUGOVERLAYFLAGS@@@Z @ 0x1802D1464 (-ProcessSetDebugOverlayFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRA.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1802D14C8 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1802CE89C (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z @ 0x1802CEEDC (-DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicDisplay::OnChanged(CHolographicDisplay *this)
{
  __int64 v1; // rdi
  int v3; // esi
  CompositorTracing *v4; // rcx
  CHolographicInteropTaskQueue *v5; // rcx

  v1 = *((_QWORD *)this + 11);
  if ( v1 )
  {
    if ( *((_BYTE *)this + 132) )
    {
      v3 = *((_DWORD *)this + 24);
      if ( CompositorTracing::IsEnabled() )
      {
        CompositorTracing::Instance();
        CompositorTracing::DwmHolographicDisplayUpdate_(v4, v3);
      }
      v5 = *(CHolographicInteropTaskQueue **)(v1 + 48);
      if ( v5 )
        CHolographicInteropTaskQueue::PostMessageW(
          v5,
          8u,
          (struct IUnknown *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
    }
    else
    {
      CHolographicManager::AddHolographicDisplay(*((RTL_SRWLOCK **)this + 11), this);
      *((_BYTE *)this + 132) = 1;
    }
  }
}
