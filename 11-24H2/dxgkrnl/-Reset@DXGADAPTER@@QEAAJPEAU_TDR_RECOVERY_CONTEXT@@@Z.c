/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140195458
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D0450 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x140034740 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x140036D88 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z @ 0x140066308 (-VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140193794 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019AB14 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x14019D6E4 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CF6A0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?DxgkpAcquireTestLockForStopReset@@YAXXZ @ 0x1402028AC (-DxgkpAcquireTestLockForStopReset@@YAXXZ.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402AC160 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1402C8C30 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1403B61F4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1403F2C34 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, struct _KTHREAD **a2)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  BOOLEAN i; // al
  __int64 v9; // r8
  int FirstProfilerInterface; // eax
  __int64 v11; // rcx
  ADAPTER_RENDER *v12; // rcx
  struct _TDR_RECOVERY_CONTEXT *v13; // rdx
  ADAPTER_DISPLAY *v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+20h] [rbp-68h]
  char v18; // [rsp+90h] [rbp+8h] BYREF
  char v19; // [rsp+91h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+98h] [rbp+10h] BYREF
  union _LARGE_INTEGER v21; // [rsp+A0h] [rbp+18h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8875;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pTdrContext", 8875LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  DxgkpAcquireTestLockForStopReset();
  if ( !DXGADAPTER::IsDxgmms2(this) )
    KeSetEvent((PRKEVENT)this + 129, 0, 0);
  if ( !*((_QWORD *)this + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8893;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"this->IsRenderAdapter()", 8893LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v18);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 391), 4LL, 0xFFFFFFFFLL);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 18) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9020;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"OldCoreAccess != 0", 9020LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( bTracingEnabled
      && (qword_14015E4B0 & 0x1000000) != 0
      && (qword_14015E4B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
    {
      LODWORD(v17) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPreAcquireAdapterLock,
        v7,
        this,
        v17);
    }
    for ( i = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0);
          !i;
          i = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0) )
    {
      *((_DWORD *)this + 1229) = 2;
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
      v11 = *((_QWORD *)this + 391);
      *((_DWORD *)this + 1230) = FirstProfilerInterface;
      ADAPTER_RENDER::FlushScheduler(v11, 4LL, 0xFFFFFFFFLL);
      v21.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v21);
    }
    if ( bTracingEnabled
      && (qword_14015E4B0 & 0x1000000) != 0
      && (qword_14015E4B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
    {
      LODWORD(v17) = 1;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPostAcquireAdapterLock,
        v9,
        this,
        v17);
    }
    *((_DWORD *)this + 44) = 2;
    goto LABEL_45;
  }
  *((_QWORD *)this + 392) = CurrentThread;
  if ( CurrentThread == a2[363] )
    goto LABEL_23;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 50) != 1 )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_59;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8928;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"OldCoreAccess != 0", 8928LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( bTracingEnabled
    && (qword_14015E4B0 & 0x1000000) != 0
    && (qword_14015E4B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    LODWORD(v17) = 1;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventPreAcquireAdapterLock,
      v5,
      this,
      v17);
  }
  DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(this, 2LL);
  if ( bTracingEnabled
    && (qword_14015E4B0 & 0x1000000) != 0
    && (qword_14015E4B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
  {
    LODWORD(v17) = 1;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventPostAcquireAdapterLock,
      v6,
      this,
      v17);
  }
  *((_DWORD *)this + 44) = 2;
  if ( !a2[363] )
  {
LABEL_23:
    KeSetEvent((PRKEVENT)this + 129, 0, 0);
    VIDSCH_EXPORT::VidSchSetRecoveryThread(
      *(VIDSCH_EXPORT **)(*((_QWORD *)this + 391) + 736LL),
      *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 391) + 744LL),
      *((struct _KTHREAD **)this + 392));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)a2);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 391), 4LL, 0xFFFFFFFFLL);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 391));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 391) + 760LL) + 8LL) + 1088LL))(*(_QWORD *)(*((_QWORD *)this + 391) + 768LL));
    if ( CurrentThread != a2[363] )
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 391), 0LL, 0LL);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 391), 4LL, 0xFFFFFFFFLL);
LABEL_45:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 391), 4LL, 0xFFFFFFFFLL);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)a2);
    v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 391);
    *((_BYTE *)this + 3053) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v12, (struct _TDR_RECOVERY_CONTEXT *)a2) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9064;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 9064LL, 0LL, 0LL, 0LL, 0LL);
    }
    v14 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 390);
    if ( v14 && (int)ADAPTER_DISPLAY::Reset(v14, v13) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9072;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 9072LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)this + 392) = 0LL;
    KeResetEvent((PRKEVENT)this + 129);
  }
  if ( !DXGADAPTER::IsDxgmms2(this) || a2[363] != CurrentThread )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (qword_14015E4B0 & 0x1000000) != 0
      && (qword_14015E4B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventReleaseAdapterLock, v15, this);
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 21));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_59:
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v18);
  ExReleasePushLockSharedEx(&qword_1401606B0, 0LL);
  return 0LL;
}
