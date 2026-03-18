/*
 * XREFs of ?AttachSwapChain@CHolographicExclusiveView@@AEAAJPEAVCResource@@@Z @ 0x1802D1C7C
 * Callers:
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1802D21E8 (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180134738 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802CED04 (-AttachExclusiveSwapChain@CHolographicManager@@QEAA_NPEAVCHolographicExclusiveView@@@Z.c)
 */

__int64 __fastcall CHolographicExclusiveView::AttachSwapChain(RTL_SRWLOCK *this, struct CResource *a2)
{
  unsigned int v2; // esi
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  CHolographicInteropTaskQueue **Ptr; // rcx

  v2 = 0;
  if ( a2 )
  {
    v5 = this + 52;
    AcquireSRWLockExclusive(this + 52);
    this[12].Ptr = a2;
    v6 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x184u, 0LL);
      ReleaseSRWLockExclusive(v5);
      this[12].Ptr = 0LL;
    }
    else
    {
      Ptr = (CHolographicInteropTaskQueue **)this[9].Ptr;
      if ( Ptr )
        CHolographicManager::AttachExclusiveSwapChain(Ptr, (struct IUnknown *)this);
      ReleaseSRWLockExclusive(v5);
    }
  }
  return v2;
}
