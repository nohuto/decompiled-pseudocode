/*
 * XREFs of KeWaitForMultipleObjects @ 0x14027C240
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopFxProcessWorkPool @ 0x14034D940 (PopFxProcessWorkPool.c)
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     MiStoreEvictThread @ 0x14036EC70 (MiStoreEvictThread.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140393600 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403A0C80 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x1403A9EE0 (CcQueueLazyWriteScanThreadForVolume.c)
 *     MiWaitForAvailablePages @ 0x1403BEAEC (MiWaitForAvailablePages.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 *     PopSleepDeviceList @ 0x140431774 (PopSleepDeviceList.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140456650 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiDereferenceSegmentThread @ 0x140458D80 (MiDereferenceSegmentThread.c)
 *     MiIssueSegmentDereferenceWork @ 0x140458FA0 (MiIssueSegmentDereferenceWork.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14045B73C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     MiRebuildLargePagesThread @ 0x140475C40 (MiRebuildLargePagesThread.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C8A30 (CcAsyncLazywriteWorkerMulti.c)
 *     MiWaitForAsynchronousFlushes @ 0x1404CF440 (MiWaitForAsynchronousFlushes.c)
 *     CcAsyncReadWorker @ 0x1404DFB90 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x1405772C0 (CcQueueLazyWriteScanThread.c)
 *     KeBalanceSetManager @ 0x1405C0270 (KeBalanceSetManager.c)
 *     DifKeWaitForMultipleObjectsWrapper @ 0x140625530 (DifKeWaitForMultipleObjectsWrapper.c)
 *     CmSiWaitForMultipleEvents @ 0x14065D0FC (CmSiWaitForMultipleEvents.c)
 *     MiPartitionWorkingSetManager @ 0x140667880 (MiPartitionWorkingSetManager.c)
 *     MiZeroNodeConductorWait @ 0x140684C78 (MiZeroNodeConductorWait.c)
 *     MiZeroPageThread @ 0x140685110 (MiZeroPageThread.c)
 *     PfGenerateTrace @ 0x14073A35C (PfGenerateTrace.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407A30E0 (EtwpCovSampCaptureWorkerThread.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     CmpDoFileWrite @ 0x14091083C (CmpDoFileWrite.c)
 *     PfTLoggingWorker @ 0x140922920 (PfTLoggingWorker.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1409EC8F0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     PopThermalReadCounters @ 0x1409FC328 (PopThermalReadCounters.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 *     PnprQuiesceWorker @ 0x140B450A0 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x140B5223C (MiZeroAllPageFiles.c)
 *     KiComputeDispatchInterruptCost @ 0x140C16508 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KiWaitForAllObjects @ 0x14027DDF0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyOther @ 0x14027FA20 (KiWaitSatisfyOther.c)
 *     KiWaitSatisfyMutant @ 0x140280980 (KiWaitSatisfyMutant.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x1402E6090 (KiPerformWaitDeferredWork.c)
 *     KiSatisfyThreadWait @ 0x1402F4960 (KiSatisfyThreadWait.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __report_rangecheckfailure @ 0x1404F290C (__report_rangecheckfailure.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  unsigned __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 *p_WaitIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r14
  unsigned int v18; // esi
  ULONG v19; // r13d
  int v20; // esi
  int v21; // eax
  unsigned __int8 v22; // bl
  PKWAIT_BLOCK v23; // r14
  unsigned int v24; // r15d
  volatile UCHAR *p_BlockState; // r14
  int v26; // ebx
  PVOID *__attribute__((__org_arrdim(0,0))) v27; // r12
  char *v28; // rsi
  unsigned int v29; // r12d
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // esi
  unsigned __int64 v33; // r15
  unsigned int v34; // r14d
  PVOID *__attribute__((__org_arrdim(0,0))) v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r12
  unsigned __int8 v38; // si
  unsigned int v39; // r14d
  __int64 ThreadTimerDelay; // rdx
  struct _KPRCB *v41; // r10
  unsigned int v42; // esi
  unsigned int v43; // r14d
  unsigned __int64 v45; // rdi
  PVOID *__attribute__((__org_arrdim(0,0))) v46; // rbx
  unsigned __int64 v47; // rax
  char v48; // r12
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rcx
  unsigned int v52; // r14d
  __int64 v53; // rax
  _BYTE *v54; // r12
  char *v55; // rsi
  char v56; // al
  signed __int32 v57; // eax
  signed __int32 v58; // ett
  unsigned __int8 v59; // al
  _LIST_ENTRY *AwaitingCompletion; // r15
  unsigned __int32 v61; // eax
  unsigned __int32 v62; // ett
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY **p_Flink; // rax
  struct _LIST_ENTRY *v65; // rax
  unsigned __int32 *v66; // r8
  unsigned __int32 v67; // eax
  unsigned __int32 v68; // ett
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v70; // rdx
  unsigned __int64 **v71; // rax
  unsigned __int32 v72; // ett
  signed __int32 v74[8]; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v75; // [rsp+40h] [rbp-B8h]
  int v76; // [rsp+44h] [rbp-B4h]
  PVOID *__attribute__((__org_arrdim(0,0))) v77; // [rsp+48h] [rbp-B0h]
  struct _KPRCB *v78; // [rsp+50h] [rbp-A8h]
  unsigned __int64 *v79; // [rsp+58h] [rbp-A0h]
  unsigned __int8 *v80; // [rsp+60h] [rbp-98h]
  PKWAIT_BLOCK v81; // [rsp+68h] [rbp-90h]
  LONGLONG QuadPart; // [rsp+70h] [rbp-88h]
  ULONG v83; // [rsp+78h] [rbp-80h]
  KWAIT_REASON v84; // [rsp+7Ch] [rbp-7Ch]
  int v85; // [rsp+80h] [rbp-78h]
  int v86; // [rsp+84h] [rbp-74h]
  int v87; // [rsp+88h] [rbp-70h]
  unsigned __int64 *v88; // [rsp+90h] [rbp-68h] BYREF
  struct _KTHREAD *v89; // [rsp+98h] [rbp-60h]
  _QWORD v90[3]; // [rsp+A0h] [rbp-58h] BYREF

  WaitBlock = WaitBlockArray;
  v9 = 0;
  v84 = WaitReason;
  v77 = Object;
  v83 = Count;
  v81 = WaitBlockArray;
  QuadPart = 0LL;
  if ( Count == 1 )
  {
    LODWORD(v11) = KeWaitForSingleObject(*Object, WaitReason, WaitMode, Alertable, Timeout);
    return v11;
  }
  CurrentThread = KeGetCurrentThread();
  v89 = CurrentThread;
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
    v81 = CurrentThread->WaitBlock;
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
  v12 = 2LL;
  v88 = 0LL;
  v76 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
    v76 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v80 = p_WaitIrql;
  if ( CurrentPrcb->NestingLevel <= 1u )
  {
    if ( !CurrentPrcb->RcuData.AwaitingCompletion )
      goto LABEL_16;
    v59 = KeDisableInterrupts(v12, Object, *(_QWORD *)&WaitType);
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    *(_QWORD *)&WaitType = v59;
    if ( !AwaitingCompletion )
    {
      if ( !v59 )
      {
LABEL_220:
        p_WaitIrql = &CurrentThread->WaitIrql;
LABEL_16:
        if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
        {
          v56 = KeDisableInterrupts(v12, Object, *(_QWORD *)&WaitType);
          if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
          {
            CurrentPrcb->RcuData.GracePeriodNeeded = 0;
            _InterlockedOr(v74, 0);
            v12 = qword_140F204A8;
            CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F204A8;
          }
          if ( v56 )
          {
            v12 = (unsigned __int64)KeGetCurrentPrcb();
            *(_QWORD *)&WaitType = *(_QWORD *)(v12 + 36536);
            if ( *(_QWORD *)&WaitType )
            {
              _m_prefetchw(*(const void **)&WaitType);
              v57 = **(_DWORD **)&WaitType;
              do
              {
                v58 = v57;
                v57 = _InterlockedCompareExchange(*(volatile signed __int32 **)&WaitType, v57 & 0xFFDFFFFF, v57);
              }
              while ( v58 != v57 );
              if ( (v57 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v12);
            }
            _enable();
          }
        }
        Object = (PVOID *)CurrentPrcb->RcuData.GraceSequenceQuiescent;
        if ( Object != (PVOID *)CurrentPrcb->RcuData.GraceSequenceReported )
        {
          v12 = (unsigned __int64)&KiRcuData + 32 * CurrentPrcb->Number;
          *(_QWORD *)&WaitType = *(_QWORD *)v12;
          if ( (*(_QWORD *)v12 & *(_QWORD *)(*(_QWORD *)(v12 + 8) + 56LL)) == 0LL )
          {
            if ( (unsigned int)KiRcuReportQuiescentState((unsigned __int64 *)v12, (signed __int64)Object) )
              KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
          }
        }
        goto LABEL_18;
      }
      v12 = (unsigned __int64)KeGetCurrentPrcb();
      *(_QWORD *)&WaitType = *(_QWORD *)(v12 + 36536);
      if ( !*(_QWORD *)&WaitType )
      {
LABEL_189:
        _enable();
        goto LABEL_220;
      }
      _m_prefetchw(*(const void **)&WaitType);
      v61 = **(_DWORD **)&WaitType;
      do
      {
        Object = (PVOID *)v61;
        LODWORD(Object) = v61 & 0xFFDFFFFF;
        v62 = v61;
        v61 = _InterlockedCompareExchange(*(volatile signed __int32 **)&WaitType, v61 & 0xFFDFFFFF, v61);
      }
      while ( v62 != v61 );
LABEL_187:
      if ( (v61 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v12);
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
        v12 = (unsigned __int64)AwaitingCompletion->Flink;
        p_Flink = &AwaitingCompletion->Blink->Flink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || *p_Flink != AwaitingCompletion )
          goto LABEL_49;
        *p_Flink = (_LIST_ENTRY *)v12;
        *(_QWORD *)(v12 + 8) = p_Flink;
      }
      v65 = AwaitingCompletion[3].Flink;
      AwaitingCompletion->Flink = 0LL;
      AwaitingCompletion[1].Flink = v65[3].Blink;
    }
    if ( (_BYTE)WaitType )
    {
      v12 = (unsigned __int64)KeGetCurrentPrcb();
      v66 = *(unsigned __int32 **)(v12 + 36536);
      if ( v66 )
      {
        _m_prefetchw(v66);
        v67 = *v66;
        do
        {
          Object = (PVOID *)v67;
          LODWORD(Object) = v67 & 0xFFDFFFFF;
          v68 = v67;
          v67 = _InterlockedCompareExchange((volatile signed __int32 *)v66, v67 & 0xFFDFFFFF, v67);
        }
        while ( v68 != v67 );
        if ( (v67 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
      _enable();
    }
    *(_QWORD *)&WaitType = AwaitingCompletion[1].Flink;
    if ( *(struct _LIST_ENTRY **)&WaitType == AwaitingCompletion[1].Blink )
      goto LABEL_220;
    Blink = AwaitingCompletion[2].Blink;
    v70 = AwaitingCompletion[2].Flink;
    if ( ((__int64)Blink->Flink & (__int64)v70[2].Blink) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(&AwaitingCompletion[-1].Blink, AwaitingCompletion[1].Flink) )
        KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
      goto LABEL_220;
    }
    *(_QWORD *)&WaitType = (unsigned __int8)KeDisableInterrupts(Blink->Flink, v70, *(_QWORD *)&WaitType);
    if ( AwaitingCompletion->Flink )
      goto LABEL_213;
    v12 = (unsigned __int64)CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v12 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
LABEL_213:
      if ( !(_BYTE)WaitType )
        goto LABEL_220;
      v12 = (unsigned __int64)KeGetCurrentPrcb();
      *(_QWORD *)&WaitType = *(_QWORD *)(v12 + 36536);
      if ( !*(_QWORD *)&WaitType )
        goto LABEL_189;
      _m_prefetchw(*(const void **)&WaitType);
      v61 = **(_DWORD **)&WaitType;
      do
      {
        Object = (PVOID *)v61;
        LODWORD(Object) = v61 & 0xFFDFFFFF;
        v72 = v61;
        v61 = _InterlockedCompareExchange(*(volatile signed __int32 **)&WaitType, v61 & 0xFFDFFFFF, v61);
      }
      while ( v72 != v61 );
      goto LABEL_187;
    }
    v71 = *(unsigned __int64 ***)(v12 + 8);
    if ( *v71 == (unsigned __int64 *)v12 )
    {
      AwaitingCompletion->Flink = (struct _LIST_ENTRY *)v12;
      AwaitingCompletion->Blink = (struct _LIST_ENTRY *)v71;
      *v71 = (unsigned __int64 *)AwaitingCompletion;
      *(_QWORD *)(v12 + 8) = AwaitingCompletion;
      goto LABEL_213;
    }
LABEL_49:
    __fastfail(3u);
  }
LABEL_18:
  v16 = 0xFFFFF780000003B0uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v75 = 1;
      goto LABEL_23;
    }
    v75 = 2;
    QuadPart = MEMORY[0xFFFFF78000000008]
             - MEMORY[0xFFFFF780000003B0]
             - (Timeout->QuadPart
              + CurrentThread->RelativeTimerBias);
    p_WaitIrql = &CurrentThread->WaitIrql;
  }
  else
  {
    v75 = 0;
  }
  v80 = p_WaitIrql;
LABEL_23:
  while ( 2 )
  {
    v17 = *p_WaitIrql;
    v90[0] = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v17 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        LOBYTE(Object) = 1;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), Object);
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v12);
      *p_WaitIrql = 0;
    }
    v19 = v83;
    if ( Alertable )
    {
      v12 = WaitMode;
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v20 = 257;
      }
      else if ( !WaitMode
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( CurrentThread->Alerted[0] )
        {
          CurrentThread->Alerted[0] = 0;
          v20 = 257;
        }
        else
        {
          v20 = 0;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v20 = 192;
      }
      if ( v20 )
      {
LABEL_37:
        v21 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
        CurrentThread->ThreadLock = 0LL;
        if ( v21 )
        {
          KiProcessDeferredReadyList(KeGetCurrentPrcb(), v90, (unsigned __int8)v17);
          LODWORD(v11) = v20;
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v17);
          __writecr8(v17);
          LODWORD(v11) = v20;
        }
        return v11;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
    {
      v20 = 192;
      goto LABEL_37;
    }
    v22 = v84;
    v23 = v81;
    v24 = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    p_BlockState = &v23->BlockState;
    CurrentThread->WaitReason = v22;
    v26 = v76;
    v27 = v77;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v78 = KeGetCurrentPrcb();
    v79 = 0LL;
    do
    {
      v28 = (char *)v27[v24];
      v29 = 0;
      *((_BYTE *)p_BlockState - 1) = 1;
      *p_BlockState = 4;
      *(_WORD *)(p_BlockState + 1) = v24;
      *(_QWORD *)(p_BlockState + 7) = CurrentThread;
      *(_QWORD *)(p_BlockState + 15) = v28;
      if ( _interlockedbittestandset((volatile signed __int32 *)v28, 7u) )
      {
        do
        {
          if ( (++v29 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
          {
            HvlNotifyLongSpinWait(v29);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*(_DWORD *)v28 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v28, 7u) );
      }
      if ( (*v28 & 0x7F) != 2 )
      {
        if ( *((int *)v28 + 1) <= 0 )
          goto LABEL_48;
        v43 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v43 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
            {
              HvlNotifyLongSpinWait(v43);
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
          KiWaitSatisfyOther(v28, Object, *(_QWORD *)&WaitType, v16);
        }
        v41 = v78;
LABEL_133:
        _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
        goto LABEL_113;
      }
      if ( (v28[48] & 2) != 0 )
      {
        v12 = (unsigned __int64)v79;
        _bittestandset64((__int64 *)&v12, v24);
        v79 = (unsigned __int64 *)v12;
      }
      if ( *((int *)v28 + 1) > 0
        || CurrentThread == *((struct _KTHREAD **)v28 + 5)
        && (v12 = (unsigned __int64)v78, v28[2] == v78->DpcRoutineActive) )
      {
        if ( *((_DWORD *)v28 + 1) == 0x80000000 )
        {
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v9 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
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
          KiSatisfyThreadWait(v78, (ULONG_PTR)CurrentThread, v24);
          RtlRaiseStatus(-1073741423);
        }
        v39 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v39 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
            {
              HvlNotifyLongSpinWait(v39);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        v41 = v78;
        if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
        {
          CurrentThread->WaitStatus = v24;
          CurrentThread->AbWaitObject = 0LL;
          if ( (*((_DWORD *)v28 + 1))-- == 1 )
          {
            KiWaitSatisfyMutant(v28, CurrentThread, v41, v16);
            _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
            goto LABEL_113;
          }
        }
        goto LABEL_133;
      }
LABEL_48:
      Object = (PVOID *)*((_QWORD *)v28 + 2);
      v12 = (unsigned __int64)(v28 + 8);
      if ( *Object != v28 + 8 )
        goto LABEL_49;
      *(_QWORD *)(p_BlockState - 9) = Object;
      *(_QWORD *)(p_BlockState - 17) = v12;
      *Object = (PVOID)(p_BlockState - 17);
      *((_QWORD *)v28 + 2) = p_BlockState - 17;
      _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
      v27 = v77;
      ++v24;
      p_BlockState += 48;
    }
    while ( v24 < v19 );
    v30 = v75;
    v31 = QuadPart;
    if ( v75 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v30 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v31 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !*v80
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v31 = QuadPart + ThreadTimerDelay;
      }
LABEL_65:
      if ( v30 <= v31 )
        goto LABEL_66;
LABEL_118:
      v42 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v42 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
          {
            HvlNotifyLongSpinWait(v42);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      v41 = v78;
      if ( (CurrentThread->WaitRegister.Flags & 7) == 0 )
      {
        CurrentThread->WaitStatus = 258LL;
        CurrentThread->AbWaitObject = 0LL;
      }
LABEL_113:
      LODWORD(v11) = KiSatisfyThreadWait(v41, (ULONG_PTR)CurrentThread, v24);
      return v11;
    }
    if ( v75 )
    {
      if ( QuadPart )
      {
        v30 = MEMORY[0xFFFFF78000000014];
        goto LABEL_65;
      }
      goto LABEL_118;
    }
LABEL_66:
    v32 = 0;
    CurrentThread->WaitBlockCount = v19;
    v33 = 0LL;
    if ( v79 )
    {
      v45 = (unsigned __int64)v79;
      v46 = v27;
      do
      {
        _BitScanForward64(&v47, v45);
        v48 = v47;
        v85 = v47;
        _bittestandreset64((__int64 *)&v45, (unsigned int)v47);
        v49 = KeAbPreAcquire(v46[v47], 0LL, 0LL);
        v50 = v49;
        if ( !v49 )
          break;
        v33 |= 1LL << v48;
        KeAbPreWait(v49);
        v51 = v32++;
        *((_BYTE *)&v90[1] + v51 + 4) = (2 * (*(_BYTE *)(v50 + 8) & 0x3F)) | 1;
      }
      while ( v45 );
      v26 = v76;
      CurrentThread = v89;
    }
    v11 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v26, (__int64)&v88);
    v12 = (unsigned __int64)v88;
    v79 = (unsigned __int64 *)v11;
    v76 = 0;
    if ( v88 )
    {
      v52 = 0;
      Object = (PVOID *)v33;
      while ( Object )
      {
        _BitScanForward64((unsigned __int64 *)&v53, (unsigned __int64)Object);
        *(_QWORD *)&WaitType = (unsigned int)v53;
        v86 = v53;
        Object = (PVOID *)((unsigned __int64)Object & ~(1LL << v53));
        v16 = (unsigned __int64)v77[(unsigned int)v53];
        if ( v88 == (unsigned __int64 *)v16 )
        {
          v33 &= ~(1LL << v53);
          v54 = (char *)&v90[1] + v52 + 4;
          v55 = (char *)KeGetCurrentThread()->KernelAbEntries + 88 * ((unsigned __int64)(unsigned __int8)*v54 >> 1);
          KeAbPreAcquire(v16, v55 + 16, 0LL);
          v55[26] = 1;
          if ( v52 >= 6 )
            _report_rangecheckfailure();
          *v54 = 0;
          break;
        }
        ++v52;
      }
      LODWORD(v11) = (_DWORD)v79;
      CurrentThread->AbWaitObject = 0LL;
    }
    v34 = 0;
    if ( v33 )
    {
      v35 = v77;
      do
      {
        _BitScanForward64((unsigned __int64 *)&v36, v33);
        v37 = (unsigned int)v36;
        v87 = v36;
        v33 &= ~(1LL << v36);
        if ( !*((_BYTE *)&v90[1] + v34 + 4) )
          ++v34;
        KeAbPreAcquire(
          v35[(unsigned int)v36],
          &KeGetCurrentThread()->KernelAbEntries->Entries[(unsigned __int64)*((unsigned __int8 *)&v90[1] + v34 + 4) >> 1],
          0LL);
        KeAbPostReleaseEx((ULONG_PTR)v35[v37]);
        ++v34;
      }
      while ( v33 );
      CurrentThread = v89;
      LODWORD(v11) = (_DWORD)v79;
    }
    if ( (_DWORD)v11 == 256 )
    {
      v38 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v38);
      p_WaitIrql = v80;
      *v80 = v38;
      continue;
    }
    return v11;
  }
}
