/*
 * XREFs of ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400BB8F0
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1400118C0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     ?VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z @ 0x140037DF8 (-VidMmEnsureDeviceSchedulable@@YAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140048068 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 *     ?VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z @ 0x1400BB864 (-VidMmFlushPagingQueue@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x1400BE87C (-SuspendResume@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1400E8870 (-VidMmAppendReadyPacket@@YAXPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QU.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400FDCAC (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x14008FEC0 (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     ?VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400A13EC (-VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@.c)
 */

void __fastcall VIDMM_DEVICE::EnsureSchedulable(VIDMM_DEVICE *this, char a2)
{
  __int64 v3; // rcx
  DXGPUSHLOCK *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 **v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 **v12; // rdx
  _BYTE v13[40]; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 && !*((_BYTE *)this + 56) )
    return;
  *((_BYTE *)this + 56) = 1;
  v3 = *(_QWORD *)this;
  v4 = (DXGPUSHLOCK *)(v3 + 44552);
  if ( (*(_BYTE *)(v3 + 40937) & 0x10) == 0 )
  {
    if ( v3 != -44552 && *(struct _KTHREAD **)(v3 + 44560) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1512;
      DxgkLogInternalTriageEvent(v6, 262146LL);
    }
    DXGPUSHLOCK::AcquireExclusive(v4);
    if ( (*((_BYTE *)this + 312) & 7) == 4 )
    {
      v7 = (__int64 *)((char *)this + 184);
      v8 = *((_QWORD *)this + 23);
      if ( v8 )
      {
        if ( *(__int64 **)(v8 + 8) != v7 || (v9 = (__int64 **)*((_QWORD *)this + 24), *v9 != v7) )
LABEL_16:
          __fastfail(3u);
        *v9 = (__int64 *)v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        *((_QWORD *)this + 24) = 0LL;
      }
      *((_BYTE *)this + 312) &= 0xF8u;
      v10 = *(_QWORD *)this;
      v11 = *(_QWORD *)this + 44616LL;
      v12 = *(__int64 ***)(*(_QWORD *)this + 44624LL);
      if ( *v12 != (__int64 *)v11 )
        goto LABEL_16;
      *((_QWORD *)this + 24) = v12;
      *v7 = v11;
      *v12 = v7;
      *(_QWORD *)(v11 + 8) = v7;
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)v10 + 24LL), 0, 0);
      *((_BYTE *)this + 312) = *((_BYTE *)this + 312) & 0xF8 | 3;
      KeSetEvent(*(PRKEVENT *)(**(_QWORD **)this + 24LL), 0, 0);
    }
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  v5 = *(_QWORD *)v3;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, (struct _KTHREAD **)(v3 + 44552));
  if ( (*((_BYTE *)this + 312) & 7) == 4 )
  {
    VidMmSwapSuspendList(v5, (__int64)this, 1u);
    VidMmNotifyTaskWork(
      (struct VIDMM_WORKER_THREAD2 *)v5,
      (struct VIDMM_SCHCLASS *)(v5 + 5520),
      (VIDMM_DEVICE *)((char *)this + 320),
      1u);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
}
