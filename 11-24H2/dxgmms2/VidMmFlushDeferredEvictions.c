/*
 * XREFs of VidMmFlushDeferredEvictions @ 0x1400E9AD4
 * Callers:
 *     VidMmHandleRecoverablePageInFailure @ 0x1400E9904 (VidMmHandleRecoverablePageInFailure.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400355F0 (-GetNextPendingTermination@VIDMM_GLOBAL@@QEAAPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidMmProcessFrozenProcesses @ 0x1400D6804 (VidMmProcessFrozenProcesses.c)
 *     VidMmSelectReadyEvictQueue @ 0x1400E099C (VidMmSelectReadyEvictQueue.c)
 *     VidMmFlushEvictQueue @ 0x1400E0B80 (VidMmFlushEvictQueue.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x1400F6C1C (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 */

char __fastcall VidMmFlushDeferredEvictions(struct VIDMM_WORKER_THREAD *a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  KSPIN_LOCK *v5; // rcx
  char v6; // r15
  struct VIDMM_ALLOC *NextPendingTermination; // rbx
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rbx
  DXGPUSHLOCK *v10; // r14
  __int64 **v11; // rsi
  __int64 *v12; // rbx
  __int64 v13; // rax
  char v14; // si
  __int64 **v15; // rax
  char v16; // bl
  _QWORD v18[2]; // [rsp+40h] [rbp-59h] BYREF
  char v19; // [rsp+50h] [rbp-49h]
  _QWORD v20[18]; // [rsp+60h] [rbp-39h] BYREF
  bool v21; // [rsp+100h] [rbp+67h] BYREF
  bool v22; // [rsp+110h] [rbp+77h] BYREF
  struct VIDMM_ALLOC *v23; // [rsp+118h] [rbp+7Fh] BYREF

  v19 = 1;
  v18[1] = (char *)a1 + 320;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*((_DWORD *)a1 + 92);
  v5 = *(KSPIN_LOCK **)a1;
  v6 = 0;
  v18[0] = PerformanceCounter.QuadPart;
  v21 = 0;
  NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(v5, &v21);
  if ( NextPendingTermination )
  {
    v6 = 1;
    do
    {
      memset(v20, 0, 0x58uLL);
      v8 = *(VIDMM_GLOBAL **)a1;
      v23 = 0LL;
      v20[2] = NextPendingTermination;
      LODWORD(v20[0]) = 200;
      v22 = 0;
      VIDMM_GLOBAL::ProcessDeferredCommand(v8, (struct _VIDMM_DEFERRED_COMMAND *)v20, &v22, 0, 0LL, 0LL, 0, &v23);
      NextPendingTermination = VIDMM_GLOBAL::GetNextPendingTermination(*(KSPIN_LOCK **)a1, &v21);
    }
    while ( NextPendingTermination );
  }
  KeWaitForSingleObject((PVOID)(*(_QWORD *)a1 + 41192LL), Executive, 0, 0, 0LL);
  v9 = *(_QWORD *)a1;
  v10 = (DXGPUSHLOCK *)(*(_QWORD *)a1 + 39984LL);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v11 = (__int64 **)(v9 + 39968);
  while ( 1 )
  {
    v12 = *v11;
    v13 = **v11;
    if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
      __fastfail(3u);
    *v11 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( v12 == (__int64 *)v11 )
      break;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v12[2] + 24LL))(
      v12[2],
      0LL,
      v12[3],
      v12[4],
      v12[5]);
    operator delete(v12);
  }
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  v14 = 0;
  v15 = VidMmSelectReadyEvictQueue(a1);
  if ( v15 )
  {
    v14 = 1;
    do
    {
      VidMmFlushEvictQueue(a1, (struct VIDMM_PAGING_QUEUE *)v15);
      v15 = VidMmSelectReadyEvictQueue(a1);
    }
    while ( v15 );
  }
  v16 = v6 | v14 | VidMmProcessFrozenProcesses((__int64)a1, a2);
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)v18);
  return v16;
}
