/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D5D58
 * Callers:
 *     ExecutePagingCommand @ 0x1400A0AE0 (ExecutePagingCommand.c)
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140039D28 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z @ 0x140091098 (-VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B1AC0 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x1400D5958 (GetBucketIdForAllocationSizePow2.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D6050 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1400D6100 (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x1400D61F4 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x1400D621C (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, bool a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  char v10; // al
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rcx
  VIDMM_GLOBAL *v14; // rcx
  DXGAUTOPUSHLOCK *v15; // rcx
  __int64 v16; // rcx
  char v17; // al
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  VIDMM_COMMIT_TELEMETRY *v21; // rcx
  struct VIDMM_WORKER_THREAD2 *v23; // rcx
  unsigned int BucketIdForAllocationSizePow2; // eax
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r9
  _BYTE v28[24]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v29[24]; // [rsp+48h] [rbp-30h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = *((_BYTE *)this + 312) & 7;
    WdLogGlobalForLineNumber = 1190;
  }
  PerformanceCounter.QuadPart = 0LL;
  v10 = *((_BYTE *)this + 58) | 2;
  *((_BYTE *)this + 58) = v10;
  if ( (v10 & 4) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v11 = *((_QWORD *)this + 4);
  v12 = 0;
  if ( v11 && (*(_BYTE *)(v11 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 200), 0, 0))
    || (v12 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, a2, a3, a4), v12 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    v13 = *((_QWORD *)this + 4);
    if ( v13 )
      VidSchSuspendResumeDevice(v13, 0, 0, 0);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      *((struct VIDMM_PROCESS **)this + 1),
      this,
      1u);
    if ( (*(_BYTE *)(*(_QWORD *)this + 40937LL) & 0x10) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 98);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
        (struct _KTHREAD **)(*(_QWORD *)this + 44552LL));
      VidMmRemoveFromSuspendList(v23, this);
      v15 = (DXGAUTOPUSHLOCK *)v28;
    }
    else
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v29,
        (struct _KTHREAD **)(*(_QWORD *)this + 44552LL));
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v14, (struct _LIST_ENTRY *)((char *)this + 184));
      v15 = (DXGAUTOPUSHLOCK *)v29;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v15);
    *((_QWORD *)this + 28) = *((_QWORD *)this + 29) + VidMmiQuerySystemTime();
    v17 = *((_BYTE *)this + 58) & 0xED;
    *((_QWORD *)this + 29) = 0LL;
    *((_BYTE *)this + 58) = v17;
    *((_QWORD *)this + 30) = 0LL;
    if ( (v17 & 4) != 0 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 44696LL);
      *((_BYTE *)this + 58) &= ~4u;
      KeQueryPerformanceCounter(0LL);
      BucketIdForAllocationSizePow2 = GetBucketIdForAllocationSizePow2(*(_QWORD *)(**(_QWORD **)this + 280LL));
      ++*(_DWORD *)(v26 + 4LL * BucketIdForAllocationSizePow2 + 8);
      *(_QWORD *)(v26 + 8LL * BucketIdForAllocationSizePow2 + 96) += v27;
      *(_QWORD *)(v26 + 8LL * BucketIdForAllocationSizePow2 + 272) += v25 - PerformanceCounter.QuadPart;
      *(_BYTE *)(v26 + 976) = 1;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
      v18[3] = this;
      v19 = *((_BYTE *)this + 312) & 7;
      v18[5] = 0LL;
      v18[4] = v19;
      WdLogGlobalForLineNumber = 1294;
    }
    if ( (*((_BYTE *)this + 312) & 7) == 3 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 40LL) + 408LL) & 4) != 0 )
    {
      v20 = **(_QWORD **)this + 216LL;
      VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v20, *(struct VIDMM_GLOBAL **)this, this, 0LL);
      VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(v21, this, 0);
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = 0LL;
      *(_QWORD *)v20 = 0LL;
      *(_BYTE *)(v20 + 24) = 0;
    }
    *((_BYTE *)this + 312) &= 0xF8u;
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    *((_BYTE *)this + 58) &= ~2u;
    WdLogGlobalForLineNumber = 1211;
  }
  return (unsigned int)v12;
}
