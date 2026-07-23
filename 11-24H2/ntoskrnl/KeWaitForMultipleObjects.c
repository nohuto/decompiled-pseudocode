/*
 * XREFs of KeWaitForMultipleObjects @ 0x14031CC00
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiIssueAsynchronousFlush @ 0x14025ADBC (MiIssueAsynchronousFlush.c)
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiWaitForAvailablePages @ 0x1402618C0 (MiWaitForAvailablePages.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140265C20 (CcQueueLazyWriteScanThreadForVolume.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     MiRebuildLargePagesThread @ 0x140314BA0 (MiRebuildLargePagesThread.c)
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1403529EC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403763F0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403830C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiDereferenceSegmentThread @ 0x1403ED670 (MiDereferenceSegmentThread.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 *     PopSleepDeviceList @ 0x14041BE74 (PopSleepDeviceList.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 *     MiWaitForAsynchronousFlushes @ 0x1404C860C (MiWaitForAsynchronousFlushes.c)
 *     CcAsyncReadWorker @ 0x1404D8CA0 (CcAsyncReadWorker.c)
 *     PopFxProcessWorkPool @ 0x1404E24A0 (PopFxProcessWorkPool.c)
 *     CcQueueLazyWriteScanThread @ 0x140577A50 (CcQueueLazyWriteScanThread.c)
 *     KeBalanceSetManager @ 0x1405C1BE0 (KeBalanceSetManager.c)
 *     DifKeWaitForMultipleObjectsWrapper @ 0x14062FAB0 (DifKeWaitForMultipleObjectsWrapper.c)
 *     CmSiWaitForMultipleEvents @ 0x140669DA4 (CmSiWaitForMultipleEvents.c)
 *     MiPartitionWorkingSetManager @ 0x1406744B0 (MiPartitionWorkingSetManager.c)
 *     MiZeroNodeConductorWait @ 0x1406911A8 (MiZeroNodeConductorWait.c)
 *     MiZeroPageThread @ 0x140691640 (MiZeroPageThread.c)
 *     PfGenerateTrace @ 0x14074466C (PfGenerateTrace.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B2900 (EtwpCovSampCaptureWorkerThread.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 *     PfTLoggingWorker @ 0x140970EA0 (PfTLoggingWorker.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409E17C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 *     PopThermalReadCounters @ 0x1409F73E8 (PopThermalReadCounters.c)
 *     CmpDoFileWrite @ 0x140A466A0 (CmpDoFileWrite.c)
 *     PnprQuiesceWorker @ 0x140B570F0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140B6443C (MiZeroAllPageFiles.c)
 *     KiComputeDispatchInterruptCost @ 0x140C29574 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KiSatisfyThreadWait @ 0x14027E6C0 (KiSatisfyThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x14027F7B0 (KiPerformWaitDeferredWork.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiWaitSatisfyOther @ 0x14032D1A0 (KiWaitSatisfyOther.c)
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x14032DC50 (KiWaitSatisfyMutant.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeWaitForMultipleObjects(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  PKWAIT_BLOCK WaitBlock; // rax
  unsigned int v9; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rax
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 *p_WaitIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r14
  unsigned int v17; // esi
  unsigned int v18; // ebx
  int v19; // esi
  int v20; // eax
  unsigned __int8 v21; // r12
  __int64 *v22; // r14
  unsigned __int64 v23; // r8
  unsigned int v24; // r15d
  char *v25; // r14
  ULONG v26; // r13d
  PVOID *__attribute__((__org_arrdim(0,0))) v27; // r12
  struct _KPRCB *v28; // r10
  char *v29; // rsi
  unsigned int v30; // r12d
  unsigned __int64 *v31; // rcx
  unsigned int v32; // r14d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned int v35; // esi
  unsigned __int64 v36; // r15
  unsigned int v37; // r14d
  PVOID *__attribute__((__org_arrdim(0,0))) v38; // r13
  __int64 v39; // rax
  __int64 v40; // r12
  char *v41; // rsi
  unsigned __int8 v42; // si
  __int64 ThreadTimerDelay; // rdx
  __int64 v44; // rcx
  struct _KPRCB *v45; // r10
  unsigned int v46; // esi
  unsigned int v47; // r14d
  PVOID *__attribute__((__org_arrdim(0,0))) v49; // r13
  unsigned __int64 v50; // rax
  char v51; // r12
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // rcx
  unsigned int v55; // r14d
  __int64 v56; // rax
  _BYTE *v57; // r12
  char *v58; // rsi
  bool v59; // al
  struct _KPRCB *v60; // rcx
  signed __int32 v61; // eax
  signed __int32 v62; // ett
  bool v63; // al
  _LIST_ENTRY *AwaitingCompletion; // r15
  struct _KPRCB *v65; // rcx
  signed __int32 v66; // eax
  signed __int32 v67; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v69; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v71; // rax
  struct _KPRCB *v72; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v74; // eax
  signed __int32 v75; // ett
  _LIST_ENTRY *v76; // rcx
  struct _LIST_ENTRY *v77; // rax
  signed __int32 v78; // ett
  signed __int32 v80[8]; // [rsp+0h] [rbp-F8h] BYREF
  ULONG v81; // [rsp+40h] [rbp-B8h]
  int v82[2]; // [rsp+48h] [rbp-B0h]
  int v83; // [rsp+50h] [rbp-A8h]
  __int64 v84; // [rsp+58h] [rbp-A0h]
  PVOID *__attribute__((__org_arrdim(0,0))) v85; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v86; // [rsp+68h] [rbp-90h]
  $0C9BAADE586F3878B709A13404AA1ECE *v87; // [rsp+70h] [rbp-88h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-80h]
  KWAIT_REASON v89; // [rsp+80h] [rbp-78h]
  int v90; // [rsp+84h] [rbp-74h]
  int v91; // [rsp+88h] [rbp-70h]
  int v92; // [rsp+8Ch] [rbp-6Ch]
  __int64 v93; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v94[3]; // [rsp+98h] [rbp-60h] BYREF

  WaitBlock = WaitBlockArray;
  v9 = 0;
  v89 = WaitReason;
  v85 = Object;
  v81 = Count;
  v87 = ($0C9BAADE586F3878B709A13404AA1ECE *)WaitBlockArray;
  QuadPart = 0LL;
  if ( Count == 1 )
  {
    LODWORD(v11) = KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
    return v11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( WaitBlockArray )
  {
    if ( Count > 0x40 )
LABEL_4:
      KeBugCheck(0xCu);
  }
  else
  {
    if ( Count > 3 )
      goto LABEL_4;
    WaitBlock = CurrentThread->WaitBlock;
    v87 = &CurrentThread->320;
  }
  if ( WaitType == WaitAll )
  {
    LODWORD(v11) = KiWaitForAllObjects(
                     Count,
                     (_DWORD)Object,
                     WaitReason,
                     (unsigned __int8)WaitMode,
                     Alertable,
                     (__int64)Timeout,
                     (__int64)WaitBlock);
    return v11;
  }
  v93 = 0LL;
  v82[0] = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
    v82[0] = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v86 = p_WaitIrql;
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( !CurrentPrcb->RcuData.AwaitingCompletion )
      goto LABEL_16;
    v63 = KeDisableInterrupts();
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    *(_QWORD *)&WaitType = v63;
    if ( !AwaitingCompletion )
    {
      if ( !v63 )
      {
LABEL_220:
        p_WaitIrql = &CurrentThread->WaitIrql;
LABEL_16:
        if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
        {
          v59 = KeDisableInterrupts();
          if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
          {
            CurrentPrcb->RcuData.GracePeriodNeeded = 0;
            _InterlockedOr(v80, 0);
            CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F205C8;
          }
          if ( v59 )
          {
            v60 = KeGetCurrentPrcb();
            *(_QWORD *)&WaitType = v60->SchedulerAssist;
            if ( *(_QWORD *)&WaitType )
            {
              _m_prefetchw(*(const void **)&WaitType);
              v61 = **(_DWORD **)&WaitType;
              do
              {
                v62 = v61;
                v61 = _InterlockedCompareExchange(*(volatile signed __int32 **)&WaitType, v61 & 0xFFDFFFFF, v61);
              }
              while ( v62 != v61 );
              if ( (v61 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v60);
            }
            _enable();
          }
        }
        Object = (PVOID *)CurrentPrcb->RcuData.GraceSequenceQuiescent;
        if ( Object != (PVOID *)CurrentPrcb->RcuData.GraceSequenceReported )
        {
          v31 = (unsigned __int64 *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
          *(_QWORD *)&WaitType = *v31;
          if ( (*v31 & *(_QWORD *)(v31[1] + 56)) == 0 )
          {
            if ( (unsigned int)KiRcuReportQuiescentState(v31, (signed __int64)Object) )
              KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting, (__int64)Object);
          }
        }
        goto LABEL_18;
      }
      v65 = KeGetCurrentPrcb();
      *(_QWORD *)&WaitType = v65->SchedulerAssist;
      if ( !*(_QWORD *)&WaitType )
      {
LABEL_189:
        _enable();
        goto LABEL_220;
      }
      _m_prefetchw(*(const void **)&WaitType);
      v66 = **(_DWORD **)&WaitType;
      do
      {
        v67 = v66;
        v66 = _InterlockedCompareExchange(*(volatile signed __int32 **)&WaitType, v66 & 0xFFDFFFFF, v66);
      }
      while ( v67 != v66 );
LABEL_187:
      if ( (v66 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v65);
      goto LABEL_189;
    }
    Flink = AwaitingCompletion->Flink;
    if ( AwaitingCompletion[-1].Blink )
    {
      if ( AwaitingCompletion != Flink )
        CurrentPrcb->RcuData.AwaitingCompletion = Flink;
    }
    else
    {
      if ( Flink == AwaitingCompletion )
      {
        CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
      }
      else
      {
        CurrentPrcb->RcuData.AwaitingCompletion = Flink;
        v69 = AwaitingCompletion->Flink;
        Blink = AwaitingCompletion->Blink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
          goto LABEL_49;
        Blink->Flink = v69;
        v69->Blink = Blink;
      }
      v71 = AwaitingCompletion[3].Flink;
      AwaitingCompletion->Flink = 0LL;
      AwaitingCompletion[1].Flink = v71[3].Blink;
    }
    if ( (_BYTE)WaitType )
    {
      v72 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v72->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v74 = *SchedulerAssist;
        do
        {
          v75 = v74;
          v74 = _InterlockedCompareExchange(SchedulerAssist, v74 & 0xFFDFFFFF, v74);
        }
        while ( v75 != v74 );
        if ( (v74 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v72);
      }
      _enable();
    }
    *(_QWORD *)&WaitType = AwaitingCompletion[1].Flink;
    if ( *(struct _LIST_ENTRY **)&WaitType == AwaitingCompletion[1].Blink )
      goto LABEL_220;
    if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
        KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
      goto LABEL_220;
    }
    *(_QWORD *)&WaitType = KeDisableInterrupts();
    if ( AwaitingCompletion->Flink )
      goto LABEL_213;
    v76 = CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v76 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
LABEL_213:
      if ( !(_BYTE)WaitType )
        goto LABEL_220;
      v65 = KeGetCurrentPrcb();
      *(_QWORD *)&WaitType = v65->SchedulerAssist;
      if ( !*(_QWORD *)&WaitType )
        goto LABEL_189;
      _m_prefetchw(*(const void **)&WaitType);
      v66 = **(_DWORD **)&WaitType;
      do
      {
        v78 = v66;
        v66 = _InterlockedCompareExchange(*(volatile signed __int32 **)&WaitType, v66 & 0xFFDFFFFF, v66);
      }
      while ( v78 != v66 );
      goto LABEL_187;
    }
    v77 = v76->Blink;
    if ( v77->Flink == v76 )
    {
      AwaitingCompletion->Flink = v76;
      AwaitingCompletion->Blink = v77;
      v77->Flink = AwaitingCompletion;
      v76->Blink = AwaitingCompletion;
      goto LABEL_213;
    }
LABEL_49:
    __fastfail(3u);
  }
LABEL_18:
  v15 = 0xFFFFF780000003B0uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v83 = 1;
      goto LABEL_23;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    v83 = 2;
    QuadPart = MEMORY[0xFFFFF78000000008]
             - MEMORY[0xFFFFF780000003B0]
             - (Timeout->QuadPart
              + CurrentThread->RelativeTimerBias);
  }
  else
  {
    v83 = 0;
  }
  v86 = p_WaitIrql;
LABEL_23:
  while ( 2 )
  {
    v16 = *p_WaitIrql;
    v94[0] = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v16 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        LOBYTE(Object) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), Object);
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v44 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(Object) = 2;
        KiRaiseIrqlProcessIrqlFlags(v44, Object);
      }
      *p_WaitIrql = 0;
    }
    v18 = v82[0];
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v19 = 257;
      }
      else if ( !WaitMode
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          v19 = 257;
        }
        else
        {
          v19 = 0;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v19 = 192;
      }
      if ( v19 )
      {
LABEL_37:
        LOBYTE(WaitType) = 1;
        v20 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread, v18, *(__int64 *)&WaitType, (__int64)v94);
        CurrentThread->ThreadLock = 0LL;
        if ( v20 )
        {
          KiProcessDeferredReadyList(KeGetCurrentPrcb(), v94, v16);
          LODWORD(v11) = v19;
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v16);
          __writecr8(v16);
          LODWORD(v11) = v19;
        }
        return v11;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
    {
      v19 = 192;
      goto LABEL_37;
    }
    v21 = v89;
    v22 = (__int64 *)v87;
    v23 = 0LL;
    CurrentThread->WaitBlockFill6[68] = 5;
    v24 = 0;
    CurrentThread->WaitReason = v21;
    v25 = (char *)v22 + 17;
    v26 = v81;
    v27 = v85;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v28 = KeGetCurrentPrcb();
    *(_QWORD *)v82 = v28;
    v84 = 0LL;
    do
    {
      v29 = (char *)v27[v24];
      v30 = 0;
      *(v25 - 1) = 1;
      *v25 = 4;
      *(_WORD *)(v25 + 1) = v24;
      *(_QWORD *)(v25 + 7) = CurrentThread;
      *(_QWORD *)(v25 + 15) = v29;
      if ( _interlockedbittestandset((volatile signed __int32 *)v29, 7u) )
      {
        do
        {
          if ( (++v30 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v30);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*(_DWORD *)v29 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v29, 7u) );
        v23 = v84;
        v28 = *(struct _KPRCB **)v82;
      }
      if ( (*v29 & 0x7F) != 2 )
      {
        if ( *((int *)v29 + 1) <= 0 )
          goto LABEL_48;
        v47 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v47 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v47);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v24;
          CurrentThread->AbWaitObject = 0LL;
          KiWaitSatisfyOther(v29, Object, v23, v15);
        }
        v45 = *(struct _KPRCB **)v82;
LABEL_130:
        _InterlockedAnd((volatile signed __int32 *)v29, 0xFFFFFF7F);
        goto LABEL_113;
      }
      if ( (v29[48] & 2) != 0 )
      {
        _bittestandset64((__int64 *)&v23, v24);
        v84 = v23;
      }
      if ( *((int *)v29 + 1) > 0 || CurrentThread == *((struct _KTHREAD **)v29 + 5) && v29[2] == v28->DpcRoutineActive )
      {
        if ( *((_DWORD *)v29 + 1) == 0x80000000 )
        {
          _InterlockedAnd((volatile signed __int32 *)v29, 0xFFFFFF7F);
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v9 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v9);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( CurrentThread->ThreadLock );
          }
          KiSatisfyThreadWait(*(struct _KPRCB **)v82, (ULONG_PTR)CurrentThread, v18, (__int64 *)v87, v24);
          RtlRaiseStatus(-1073741423);
        }
        v32 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v32 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v32);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v45 = *(struct _KPRCB **)v82;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v24;
          CurrentThread->AbWaitObject = 0LL;
          if ( (*((_DWORD *)v29 + 1))-- == 1 )
          {
            KiWaitSatisfyMutant(v29, CurrentThread);
            _InterlockedAnd((volatile signed __int32 *)v29, 0xFFFFFF7F);
            goto LABEL_113;
          }
        }
        goto LABEL_130;
      }
LABEL_48:
      Object = (PVOID *)*((_QWORD *)v29 + 2);
      if ( *Object != v29 + 8 )
        goto LABEL_49;
      *(_QWORD *)(v25 - 9) = Object;
      *(_QWORD *)(v25 - 17) = v29 + 8;
      *Object = v25 - 17;
      *((_QWORD *)v29 + 2) = v25 - 17;
      _InterlockedAnd((volatile signed __int32 *)v29, 0xFFFFFF7F);
      v27 = v85;
      ++v24;
      v25 += 48;
    }
    while ( v24 < v26 );
    v33 = QuadPart;
    if ( v83 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v34 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v33 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !*v86
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v33 = QuadPart + ThreadTimerDelay;
      }
LABEL_85:
      if ( v34 <= v33 )
        goto LABEL_86;
LABEL_115:
      v46 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v46 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v46);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      v45 = *(struct _KPRCB **)v82;
      if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
      {
        CurrentThread->WaitStatus = 258LL;
        CurrentThread->AbWaitObject = 0LL;
      }
LABEL_113:
      LODWORD(v11) = KiSatisfyThreadWait(v45, (ULONG_PTR)CurrentThread, v18, (__int64 *)v87, v24);
      return v11;
    }
    if ( v83 )
    {
      if ( QuadPart )
      {
        v34 = MEMORY[0xFFFFF78000000014];
        goto LABEL_85;
      }
      goto LABEL_115;
    }
LABEL_86:
    CurrentThread->WaitBlockCount = v26;
    v35 = 0;
    v36 = 0LL;
    if ( v23 )
    {
      v49 = v27;
      do
      {
        _BitScanForward64(&v50, v23);
        v51 = v50;
        v90 = v50;
        v84 = v23 & ~(1LL << v50);
        v52 = KeAbPreAcquire(v49[v50], 0LL, 0LL);
        v53 = v52;
        if ( !v52 )
          break;
        v36 |= 1LL << v51;
        KeAbPreWait(v52);
        v23 = v84;
        v54 = v35++;
        *((_BYTE *)&v94[1] + v54 + 4) = (2 * (*(_BYTE *)(v53 + 8) & 0x3F)) | 1;
      }
      while ( v23 );
    }
    v11 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v18, (__int64)&v93);
    v84 = v11;
    v82[0] = 0;
    if ( v93 )
    {
      v55 = 0;
      Object = (PVOID *)v36;
      while ( Object )
      {
        _BitScanForward64((unsigned __int64 *)&v56, (unsigned __int64)Object);
        *(_QWORD *)&WaitType = (unsigned int)v56;
        v91 = v56;
        Object = (PVOID *)((unsigned __int64)Object & ~(1LL << v56));
        v15 = (unsigned __int64)v85[(unsigned int)v56];
        if ( v93 == v15 )
        {
          v36 &= ~(1LL << v56);
          v57 = (char *)&v94[1] + v55 + 4;
          v58 = (char *)KeGetCurrentThread()->KernelAbEntries + 88 * ((unsigned __int64)(unsigned __int8)*v57 >> 1);
          KeAbPreAcquire(v15, v58 + 16, 0LL);
          v58[26] = 1;
          if ( v55 >= 6 )
            _report_rangecheckfailure();
          *v57 = 0;
          break;
        }
        ++v55;
      }
      LODWORD(v11) = v84;
      CurrentThread->AbWaitObject = 0LL;
    }
    v37 = 0;
    if ( v36 )
    {
      v38 = v85;
      do
      {
        _BitScanForward64((unsigned __int64 *)&v39, v36);
        v40 = (unsigned int)v39;
        v92 = v39;
        v36 &= ~(1LL << v39);
        if ( !*((_BYTE *)&v94[1] + v37 + 4) )
          ++v37;
        v41 = (char *)KeGetCurrentThread()->KernelAbEntries
            + 88 * ((unsigned __int64)*((unsigned __int8 *)&v94[1] + v37 + 4) >> 1);
        KeAbPreAcquire(v38[(unsigned int)v39], v41 + 16, 0LL);
        KeAbPostReleaseEx((ULONG_PTR)v38[v40], (ULONG_PTR)(v41 + 16));
        ++v37;
      }
      while ( v36 );
      LODWORD(v11) = v84;
    }
    if ( (_DWORD)v11 == 256 )
    {
      v42 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v42, 2LL);
      p_WaitIrql = v86;
      *v86 = v42;
      continue;
    }
    return v11;
  }
}
