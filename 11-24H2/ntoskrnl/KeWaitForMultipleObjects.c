/*
 * XREFs of KeWaitForMultipleObjects @ 0x14033D720
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024C420 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiRebuildLargePagesThread @ 0x14030ACC0 (MiRebuildLargePagesThread.c)
 *     MiStoreEvictThread @ 0x140365C20 (MiStoreEvictThread.c)
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140389780 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x140397070 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiDereferenceSegmentThread @ 0x1403F7700 (MiDereferenceSegmentThread.c)
 *     MiIssueSegmentDereferenceWork @ 0x1403F7920 (MiIssueSegmentDereferenceWork.c)
 *     PopSleepDeviceList @ 0x140427CE4 (PopSleepDeviceList.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14043C240 (CcQueueLazyWriteScanThreadForVolume.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140449540 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWaitForAvailablePages @ 0x14048F10C (MiWaitForAvailablePages.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C768C (CcAsyncLazywriteWorkerMulti.c)
 *     MiWaitForAsynchronousFlushes @ 0x1404CF344 (MiWaitForAsynchronousFlushes.c)
 *     CcAsyncReadWorker @ 0x1404DF280 (CcAsyncReadWorker.c)
 *     PopFxProcessWorkPool @ 0x1404EB530 (PopFxProcessWorkPool.c)
 *     CcQueueLazyWriteScanThread @ 0x14057A5C0 (CcQueueLazyWriteScanThread.c)
 *     KeBalanceSetManager @ 0x1405C45C0 (KeBalanceSetManager.c)
 *     DifKeWaitForMultipleObjectsWrapper @ 0x1406314F0 (DifKeWaitForMultipleObjectsWrapper.c)
 *     CmSiWaitForMultipleEvents @ 0x140668BCC (CmSiWaitForMultipleEvents.c)
 *     MiPartitionWorkingSetManager @ 0x1406732E0 (MiPartitionWorkingSetManager.c)
 *     MiZeroNodeConductorWait @ 0x1406900D8 (MiZeroNodeConductorWait.c)
 *     MiZeroPageThread @ 0x140690570 (MiZeroPageThread.c)
 *     PfGenerateTrace @ 0x14074637C (PfGenerateTrace.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B24B0 (EtwpCovSampCaptureWorkerThread.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     PfTLoggingWorker @ 0x14094E990 (PfTLoggingWorker.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409E6800 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PiUEventNotifyUserMode @ 0x1409EEFC4 (PiUEventNotifyUserMode.c)
 *     PopThermalReadCounters @ 0x1409FE178 (PopThermalReadCounters.c)
 *     ExpWorkQueueManagerThread @ 0x140A21D40 (ExpWorkQueueManagerThread.c)
 *     CmpDoFileWrite @ 0x140A4F8F0 (CmpDoFileWrite.c)
 *     PnprQuiesceWorker @ 0x140B550A0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140B6236C (MiZeroAllPageFiles.c)
 *     KiComputeDispatchInterruptCost @ 0x140C27598 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     KiWaitSatisfyOther @ 0x140205BC0 (KiWaitSatisfyOther.c)
 *     KiWaitForAllObjects @ 0x140205C00 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyMutant @ 0x140206670 (KiWaitSatisfyMutant.c)
 *     KiSatisfyThreadWait @ 0x14024E0B0 (KiSatisfyThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x14024F1A0 (KiPerformWaitDeferredWork.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __report_rangecheckfailure @ 0x1404F51BC (__report_rangecheckfailure.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

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
  unsigned __int64 v15; // r14
  unsigned int v16; // esi
  int v17; // ebx
  int v18; // esi
  int v19; // eax
  unsigned __int8 v20; // r12
  __int64 *v21; // r14
  unsigned __int64 v22; // r8
  unsigned int v23; // r15d
  char *v24; // r14
  ULONG v25; // r13d
  PVOID *__attribute__((__org_arrdim(0,0))) v26; // r12
  struct _KPRCB *v27; // r10
  __int64 v28; // rsi
  unsigned int v29; // r12d
  _QWORD *v30; // rdx
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
  PVOID v57; // r9
  _BYTE *v58; // r12
  char *v59; // rsi
  bool v60; // al
  struct _KPRCB *v61; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v63; // eax
  signed __int32 v64; // ett
  bool v65; // al
  _LIST_ENTRY *AwaitingCompletion; // r15
  bool v67; // r8
  struct _KPRCB *v68; // rcx
  signed __int32 *v69; // r8
  signed __int32 v70; // eax
  signed __int32 v71; // ett
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v73; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v75; // rax
  struct _KPRCB *v76; // rcx
  signed __int32 *v77; // r8
  signed __int32 v78; // eax
  signed __int32 v79; // ett
  bool v80; // r8
  _LIST_ENTRY *v81; // rcx
  struct _LIST_ENTRY *v82; // rax
  signed __int32 *v83; // r8
  signed __int32 v84; // ett
  signed __int32 v86[8]; // [rsp+0h] [rbp-F8h] BYREF
  ULONG v87; // [rsp+40h] [rbp-B8h]
  int v88[2]; // [rsp+48h] [rbp-B0h]
  int v89; // [rsp+50h] [rbp-A8h]
  __int64 v90; // [rsp+58h] [rbp-A0h]
  PVOID *__attribute__((__org_arrdim(0,0))) v91; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v92; // [rsp+68h] [rbp-90h]
  $170BED6759C51D14495B6D160899A925 *v93; // [rsp+70h] [rbp-88h]
  LONGLONG QuadPart; // [rsp+78h] [rbp-80h]
  KWAIT_REASON v95; // [rsp+80h] [rbp-78h]
  int v96; // [rsp+84h] [rbp-74h]
  int v97; // [rsp+88h] [rbp-70h]
  int v98; // [rsp+8Ch] [rbp-6Ch]
  __int64 v99; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v100[3]; // [rsp+98h] [rbp-60h] BYREF

  WaitBlock = WaitBlockArray;
  v9 = 0;
  v95 = WaitReason;
  v91 = Object;
  v87 = Count;
  v93 = ($170BED6759C51D14495B6D160899A925 *)WaitBlockArray;
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
    v93 = &CurrentThread->320;
  }
  if ( WaitType == WaitAll )
  {
    LODWORD(v11) = KiWaitForAllObjects(
                     Count,
                     (volatile signed __int32 **)Object,
                     WaitReason,
                     WaitMode,
                     Alertable,
                     (__int64)Timeout,
                     (__int64)WaitBlock);
    return v11;
  }
  v99 = 0LL;
  v88[0] = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
    v88[0] = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
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
  v92 = p_WaitIrql;
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( !CurrentPrcb->RcuData.AwaitingCompletion )
      goto LABEL_16;
    v65 = KeDisableInterrupts();
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    v67 = v65;
    if ( !AwaitingCompletion )
    {
      if ( !v65 )
      {
LABEL_220:
        p_WaitIrql = &CurrentThread->WaitIrql;
LABEL_16:
        if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
        {
          v60 = KeDisableInterrupts();
          if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
          {
            CurrentPrcb->RcuData.GracePeriodNeeded = 0;
            _InterlockedOr(v86, 0);
            CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F20C48;
          }
          if ( v60 )
          {
            v61 = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)v61->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v63 = *SchedulerAssist;
              do
              {
                v64 = v63;
                v63 = _InterlockedCompareExchange(SchedulerAssist, v63 & 0xFFDFFFFF, v63);
              }
              while ( v64 != v63 );
              if ( (v63 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)v61);
            }
            _enable();
          }
        }
        Object = (PVOID *)CurrentPrcb->RcuData.GraceSequenceQuiescent;
        if ( Object != (PVOID *)CurrentPrcb->RcuData.GraceSequenceReported )
        {
          v31 = (unsigned __int64 *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
          if ( (*v31 & *(_QWORD *)(v31[1] + 56)) == 0 )
          {
            if ( (unsigned int)KiRcuReportQuiescentState(v31, (signed __int64)Object) )
              KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
          }
        }
        goto LABEL_18;
      }
      v68 = KeGetCurrentPrcb();
      v69 = (signed __int32 *)v68->SchedulerAssist;
      if ( !v69 )
      {
LABEL_189:
        _enable();
        goto LABEL_220;
      }
      _m_prefetchw(v69);
      v70 = *v69;
      do
      {
        v71 = v70;
        v70 = _InterlockedCompareExchange(v69, v70 & 0xFFDFFFFF, v70);
      }
      while ( v71 != v70 );
LABEL_187:
      if ( (v70 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v68);
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
        v73 = AwaitingCompletion->Flink;
        Blink = AwaitingCompletion->Blink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
          goto LABEL_49;
        Blink->Flink = v73;
        v73->Blink = Blink;
      }
      v75 = AwaitingCompletion[3].Flink;
      AwaitingCompletion->Flink = 0LL;
      AwaitingCompletion[1].Flink = v75[3].Blink;
    }
    if ( v67 )
    {
      v76 = KeGetCurrentPrcb();
      v77 = (signed __int32 *)v76->SchedulerAssist;
      if ( v77 )
      {
        _m_prefetchw(v77);
        v78 = *v77;
        do
        {
          v79 = v78;
          v78 = _InterlockedCompareExchange(v77, v78 & 0xFFDFFFFF, v78);
        }
        while ( v79 != v78 );
        if ( (v78 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v76);
      }
      _enable();
    }
    if ( AwaitingCompletion[1].Flink == AwaitingCompletion[1].Blink )
      goto LABEL_220;
    if ( ((__int64)AwaitingCompletion[2].Blink->Flink & (__int64)AwaitingCompletion[2].Flink[2].Blink) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
        KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
      goto LABEL_220;
    }
    v80 = KeDisableInterrupts();
    if ( AwaitingCompletion->Flink )
      goto LABEL_213;
    v81 = CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v81 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
LABEL_213:
      if ( !v80 )
        goto LABEL_220;
      v68 = KeGetCurrentPrcb();
      v83 = (signed __int32 *)v68->SchedulerAssist;
      if ( !v83 )
        goto LABEL_189;
      _m_prefetchw(v83);
      v70 = *v83;
      do
      {
        v84 = v70;
        v70 = _InterlockedCompareExchange(v83, v70 & 0xFFDFFFFF, v70);
      }
      while ( v84 != v70 );
      goto LABEL_187;
    }
    v82 = v81->Blink;
    if ( v82->Flink == v81 )
    {
      AwaitingCompletion->Flink = v81;
      AwaitingCompletion->Blink = v82;
      v82->Flink = AwaitingCompletion;
      v81->Blink = AwaitingCompletion;
      goto LABEL_213;
    }
LABEL_49:
    __fastfail(3u);
  }
LABEL_18:
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v89 = 1;
      goto LABEL_23;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    v89 = 2;
    QuadPart = MEMORY[0xFFFFF78000000008]
             - MEMORY[0xFFFFF780000003B0]
             - (Timeout->QuadPart
              + CurrentThread->RelativeTimerBias);
  }
  else
  {
    v89 = 0;
  }
  v92 = p_WaitIrql;
LABEL_23:
  while ( 2 )
  {
    v15 = *p_WaitIrql;
    v100[0] = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v16);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v15 )
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
    v17 = v88[0];
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v18 = 257;
      }
      else if ( !WaitMode
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          v18 = 257;
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v18 = 192;
      }
      if ( v18 )
      {
LABEL_37:
        v19 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread, v17, 1, (__int64)v100);
        CurrentThread->ThreadLock = 0LL;
        if ( v19 )
        {
          KiProcessDeferredReadyList(KeGetCurrentPrcb(), v100, v15);
          LODWORD(v11) = v18;
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v15);
          __writecr8(v15);
          LODWORD(v11) = v18;
        }
        return v11;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
    {
      v18 = 192;
      goto LABEL_37;
    }
    v20 = v95;
    v21 = (__int64 *)v93;
    v22 = 0LL;
    CurrentThread->WaitBlockFill6[68] = 5;
    v23 = 0;
    CurrentThread->WaitReason = v20;
    v24 = (char *)v21 + 17;
    v25 = v87;
    v26 = v91;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v27 = KeGetCurrentPrcb();
    *(_QWORD *)v88 = v27;
    v90 = 0LL;
    do
    {
      v28 = (__int64)v26[v23];
      v29 = 0;
      *(v24 - 1) = 1;
      *v24 = 4;
      *(_WORD *)(v24 + 1) = v23;
      *(_QWORD *)(v24 + 7) = CurrentThread;
      *(_QWORD *)(v24 + 15) = v28;
      if ( _interlockedbittestandset((volatile signed __int32 *)v28, 7u) )
      {
        do
        {
          if ( (++v29 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v29);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*(_DWORD *)v28 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v28, 7u) );
        v22 = v90;
        v27 = *(struct _KPRCB **)v88;
      }
      if ( (*(_BYTE *)v28 & 0x7F) != 2 )
      {
        if ( *(int *)(v28 + 4) <= 0 )
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
          CurrentThread->WaitStatus = v23;
          CurrentThread->AbWaitObject = 0LL;
          KiWaitSatisfyOther(v28);
        }
        v45 = *(struct _KPRCB **)v88;
LABEL_130:
        _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
        goto LABEL_113;
      }
      if ( (*(_BYTE *)(v28 + 48) & 2) != 0 )
      {
        _bittestandset64((__int64 *)&v22, v23);
        v90 = v22;
      }
      if ( *(int *)(v28 + 4) > 0
        || CurrentThread == *(struct _KTHREAD **)(v28 + 40) && *(_BYTE *)(v28 + 2) == v27->DpcRoutineActive )
      {
        if ( *(_DWORD *)(v28 + 4) == 0x80000000 )
        {
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
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
          KiSatisfyThreadWait(*(struct _KPRCB **)v88, (ULONG_PTR)CurrentThread, v17, (__int64 *)v93, v23);
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
        v45 = *(struct _KPRCB **)v88;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v23;
          CurrentThread->AbWaitObject = 0LL;
          if ( (*(_DWORD *)(v28 + 4))-- == 1 )
          {
            KiWaitSatisfyMutant((int *)v28, (__int64)CurrentThread, (__int64)v45);
            _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
            goto LABEL_113;
          }
        }
        goto LABEL_130;
      }
LABEL_48:
      v30 = *(_QWORD **)(v28 + 16);
      if ( *v30 != v28 + 8 )
        goto LABEL_49;
      *(_QWORD *)(v24 - 9) = v30;
      *(_QWORD *)(v24 - 17) = v28 + 8;
      *v30 = v24 - 17;
      *(_QWORD *)(v28 + 16) = v24 - 17;
      _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
      v26 = v91;
      ++v23;
      v24 += 48;
    }
    while ( v23 < v25 );
    v33 = QuadPart;
    if ( v89 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v34 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v33 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !*v92
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
      v45 = *(struct _KPRCB **)v88;
      if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
      {
        CurrentThread->WaitStatus = 258LL;
        CurrentThread->AbWaitObject = 0LL;
      }
LABEL_113:
      LODWORD(v11) = KiSatisfyThreadWait(v45, (ULONG_PTR)CurrentThread, v17, (__int64 *)v93, v23);
      return v11;
    }
    if ( v89 )
    {
      if ( QuadPart )
      {
        v34 = MEMORY[0xFFFFF78000000014];
        goto LABEL_85;
      }
      goto LABEL_115;
    }
LABEL_86:
    CurrentThread->WaitBlockCount = v25;
    v35 = 0;
    v36 = 0LL;
    if ( v22 )
    {
      v49 = v26;
      do
      {
        _BitScanForward64(&v50, v22);
        v51 = v50;
        v96 = v50;
        v90 = v22 & ~(1LL << v50);
        v52 = KeAbPreAcquire(v49[v50], 0LL, 0LL);
        v53 = v52;
        if ( !v52 )
          break;
        v36 |= 1LL << v51;
        KeAbPreWait(v52);
        v22 = v90;
        v54 = v35++;
        *((_BYTE *)&v100[1] + v54 + 4) = (2 * (*(_BYTE *)(v53 + 8) & 0x3F)) | 1;
      }
      while ( v22 );
    }
    v11 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v17, (__int64)&v99);
    v90 = v11;
    v88[0] = 0;
    if ( v99 )
    {
      v55 = 0;
      Object = (PVOID *)v36;
      while ( Object )
      {
        _BitScanForward64((unsigned __int64 *)&v56, (unsigned __int64)Object);
        v97 = v56;
        Object = (PVOID *)((unsigned __int64)Object & ~(1LL << v56));
        v57 = v91[(unsigned int)v56];
        if ( (PVOID)v99 == v57 )
        {
          v36 &= ~(1LL << v56);
          v58 = (char *)&v100[1] + v55 + 4;
          v59 = (char *)KeGetCurrentThread()->KernelAbEntries + 88 * ((unsigned __int64)(unsigned __int8)*v58 >> 1);
          KeAbPreAcquire(v57, v59 + 16, 0LL);
          v59[26] = 1;
          if ( v55 >= 6 )
            _report_rangecheckfailure();
          *v58 = 0;
          break;
        }
        ++v55;
      }
      LODWORD(v11) = v90;
      CurrentThread->AbWaitObject = 0LL;
    }
    v37 = 0;
    if ( v36 )
    {
      v38 = v91;
      do
      {
        _BitScanForward64((unsigned __int64 *)&v39, v36);
        v40 = (unsigned int)v39;
        v98 = v39;
        v36 &= ~(1LL << v39);
        if ( !*((_BYTE *)&v100[1] + v37 + 4) )
          ++v37;
        v41 = (char *)KeGetCurrentThread()->KernelAbEntries
            + 88 * ((unsigned __int64)*((unsigned __int8 *)&v100[1] + v37 + 4) >> 1);
        KeAbPreAcquire(v38[(unsigned int)v39], v41 + 16, 0LL);
        KeAbPostReleaseEx((ULONG_PTR)v38[v40], (ULONG_PTR)(v41 + 16));
        ++v37;
      }
      while ( v36 );
      LODWORD(v11) = v90;
    }
    if ( (_DWORD)v11 == 256 )
    {
      v42 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v42, 2LL);
      p_WaitIrql = v92;
      *v92 = v42;
      continue;
    }
    return v11;
  }
}
