/*
 * XREFs of KeDelayExecutionThread @ 0x14027A990
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140205500 (FsRtlCreateSectionForDataScan.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CEB0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDeleteEmptySubsectionProtoPool @ 0x1402A67D8 (MiDeleteEmptySubsectionProtoPool.c)
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     PoBlockConsoleSwitchEx @ 0x140311910 (PoBlockConsoleSwitchEx.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     MiFlushAllPagesWorker @ 0x1403A75B4 (MiFlushAllPagesWorker.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     MiDelayFaultingThread @ 0x1403BF998 (MiDelayFaultingThread.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiFlushAllStoreSwapPages @ 0x1403C1088 (MiFlushAllStoreSwapPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1403C2B98 (MiCheckSystemTrimEndCriteria.c)
 *     ExpExpandResourceOwnerTable @ 0x1403DFACC (ExpExpandResourceOwnerTable.c)
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 *     MiAllocatePagesForMdl @ 0x1404157CC (MiAllocatePagesForMdl.c)
 *     IopCancelIrpsInFileObjectList @ 0x14041AEB0 (IopCancelIrpsInFileObjectList.c)
 *     MiRemoveUnusedSegments @ 0x140459644 (MiRemoveUnusedSegments.c)
 *     CcInitializeCacheMapInternal @ 0x14045E3B0 (CcInitializeCacheMapInternal.c)
 *     IopKeepAliveWorker @ 0x140489720 (IopKeepAliveWorker.c)
 *     MiCreateSystemSection @ 0x14049DE3C (MiCreateSystemSection.c)
 *     MiFlushAllFilesystemPages @ 0x1404D7D5C (MiFlushAllFilesystemPages.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140577BE8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcErrorCallbackRoutine @ 0x140577FA0 (CcErrorCallbackRoutine.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140579638 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x14058BFA0 (InbvRotateGuiBootDisplay.c)
 *     PnpBootDeviceWait @ 0x1405A05F8 (PnpBootDeviceWait.c)
 *     KasaniTelemetryThread @ 0x1405A7530 (KasaniTelemetryThread.c)
 *     KcsaniTelemetryThread @ 0x1405ABA80 (KcsaniTelemetryThread.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x1406005F0 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x140605B10 (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x140621120 (DifKeDelayExecutionThreadWrapper.c)
 *     ExpPrmWaitForForZeroActiveCount @ 0x14064B9B0 (ExpPrmWaitForForZeroActiveCount.c)
 *     MiReadPagefilePage @ 0x14065E95C (MiReadPagefilePage.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     sub_140689930 @ 0x140689930 (sub_140689930.c)
 *     IpmiLibpDelay @ 0x140694BF4 (IpmiLibpDelay.c)
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 *     sub_1406EEAB8 @ 0x1406EEAB8 (sub_1406EEAB8.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14072DF08 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PoShutdownBugCheck @ 0x140747350 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407B0420 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x1407B7430 (WheaRemoveErrorSource.c)
 *     PnpAllocateCriticalMemory @ 0x14082F488 (PnpAllocateCriticalMemory.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140830954 (PnpQueuePendingSurpriseRemoval.c)
 *     NtDelayExecution @ 0x14085AEF0 (NtDelayExecution.c)
 *     CmUnloadKey @ 0x1408644F8 (CmUnloadKey.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x1408C2D6C (PfpOpenHandleCreate.c)
 *     NtCreateJobObject @ 0x1408DB4B0 (NtCreateJobObject.c)
 *     MmGetSystemRoutineAddress @ 0x1408E84F0 (MmGetSystemRoutineAddress.c)
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1408F526C (IoCancelThreadIo.c)
 *     PfTLoggingWorker @ 0x140922920 (PfTLoggingWorker.c)
 *     MmCreateSpecialImageSection @ 0x14093AC3C (MmCreateSpecialImageSection.c)
 *     MmManagePartitionMemoryInformation @ 0x14093BA7C (MmManagePartitionMemoryInformation.c)
 *     PnpCompleteDeviceEvent @ 0x14096DC54 (PnpCompleteDeviceEvent.c)
 *     IopCancelAlertedRequest @ 0x1409868F0 (IopCancelAlertedRequest.c)
 *     EtwpFlushActiveBuffers @ 0x14098F3D0 (EtwpFlushActiveBuffers.c)
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 *     CmpTransMgrCommit @ 0x1409D8E1C (CmpTransMgrCommit.c)
 *     NtCancelIoFile @ 0x1409E3D30 (NtCancelIoFile.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A0E364 (EtwpWaitForBufferReferenceCount.c)
 *     PopAcquireAdaptiveLock @ 0x140A22A64 (PopAcquireAdaptiveLock.c)
 *     PopPolicyWorkerNotify @ 0x140A50D90 (PopPolicyWorkerNotify.c)
 *     NtNotifyChangeSession @ 0x140A64890 (NtNotifyChangeSession.c)
 *     CmFcpConnectToAlpcServer @ 0x140A8FB5C (CmFcpConnectToAlpcServer.c)
 *     CmpUuidCreate @ 0x140A9B448 (CmpUuidCreate.c)
 *     MiGetReadyInPageBlock @ 0x140A9EAE8 (MiGetReadyInPageBlock.c)
 *     CmpRetryBackOff @ 0x140AB50F4 (CmpRetryBackOff.c)
 *     IopFreeBandwidthContract @ 0x140ABF604 (IopFreeBandwidthContract.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140B87918 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140B9E214 (HdlspPutMore.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C116BC (PiCreateDriverDataDirectoryRoot.c)
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
 * Callees:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14027BF9C (KiRcuReportQuiescentState.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRcuFlushCompleted @ 0x1404F7CEC (KiRcuFlushCompleted.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BD788 (KiSrcuReportQuiescent.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rdi
  PLARGE_INTEGER v4; // r14
  BOOLEAN v5; // r15
  __int64 v6; // rbp
  NTSTATUS v8; // r12d
  unsigned __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rsi
  LONGLONG v12; // r13
  unsigned __int8 WaitIrql; // dl
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned int v16; // ebx
  unsigned __int64 v17; // r13
  NTSTATUS v18; // esi
  unsigned __int64 v19; // rax
  struct _KPRCB *v20; // rbp
  unsigned int v21; // esi
  _KWAIT_STATUS_REGISTER v22; // al
  int v23; // ebx
  unsigned __int64 v24; // rdi
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 ThreadTimerDelay; // rdx
  NTSTATUS v27; // eax
  unsigned int v28; // esi
  ULONG_PTR WobPriority; // rdx
  unsigned __int8 v30; // al
  unsigned __int8 v31; // si
  unsigned __int8 v32; // al
  unsigned int v33; // eax
  unsigned int v34; // eax
  ULONG_PTR v35; // rcx
  unsigned __int8 v36; // al
  unsigned __int8 v37; // al
  unsigned int v38; // eax
  unsigned int v39; // eax
  char v40; // al
  ULONG v41; // eax
  ULONG v42; // ett
  char v43; // al
  unsigned __int64 *AwaitingCompletion; // r13
  char v45; // r9
  ULONG LowPart; // eax
  __int64 v47; // rdx
  ULONG v48; // ett
  _LIST_ENTRY *v49; // rax
  unsigned __int64 *v50; // rax
  LARGE_INTEGER *QuadPart; // rax
  unsigned __int32 *v52; // r9
  unsigned __int32 v53; // eax
  __int64 v54; // rdx
  unsigned __int32 v55; // ett
  _QWORD *v56; // rax
  LARGE_INTEGER v57; // rdx
  __int64 v58; // rdx
  ULONG v59; // ett
  unsigned __int64 **v60; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+28h] [rbp-70h]
  int v63; // [rsp+30h] [rbp-68h]
  __int64 v64; // [rsp+38h] [rbp-60h] BYREF
  LONGLONG v65; // [rsp+40h] [rbp-58h]
  __int64 v66; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 i; // [rsp+B0h] [rbp+18h]
  int v69; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = Interval;
  v5 = Alertable;
  v6 = WaitMode;
  if ( !Interval->QuadPart && WaitMode && !Alertable && (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 )
    return KeYieldExecution(0LL);
  v8 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v63 = 0;
  v9 = 2LL;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    v63 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel > 1u )
    goto LABEL_14;
  if ( CurrentPrcb->RcuData.AwaitingCompletion )
  {
    v43 = KeDisableInterrupts(v9, Alertable, Interval);
    AwaitingCompletion = (unsigned __int64 *)CurrentPrcb->RcuData.AwaitingCompletion;
    v45 = v43;
    if ( !AwaitingCompletion )
    {
      if ( !v43 )
        goto LABEL_12;
      v9 = (unsigned __int64)KeGetCurrentPrcb();
      Interval = *(PLARGE_INTEGER *)(v9 + 36536);
      if ( !Interval )
        goto LABEL_147;
      _m_prefetchw(Interval);
      LowPart = Interval->LowPart;
      do
      {
        v47 = LowPart;
        *(_DWORD *)&Alertable = LowPart & 0xFFDFFFFF;
        v48 = LowPart;
        LowPart = _InterlockedCompareExchange((volatile signed __int32 *)Interval, LowPart & 0xFFDFFFFF, LowPart);
      }
      while ( v48 != LowPart );
      goto LABEL_145;
    }
    Interval = (PLARGE_INTEGER)(AwaitingCompletion - 1);
    v49 = (_LIST_ENTRY *)*AwaitingCompletion;
    if ( *(AwaitingCompletion - 1) )
    {
      if ( AwaitingCompletion != (unsigned __int64 *)v49 )
        CurrentPrcb->RcuData.AwaitingCompletion = v49;
    }
    else
    {
      if ( v49 == (_LIST_ENTRY *)AwaitingCompletion )
      {
        CurrentPrcb->RcuData.AwaitingCompletion = 0LL;
      }
      else
      {
        CurrentPrcb->RcuData.AwaitingCompletion = v49;
        v9 = *AwaitingCompletion;
        v50 = (unsigned __int64 *)AwaitingCompletion[1];
        if ( *(unsigned __int64 **)(*AwaitingCompletion + 8) != AwaitingCompletion
          || (unsigned __int64 *)*v50 != AwaitingCompletion )
        {
          goto LABEL_176;
        }
        *v50 = v9;
        *(_QWORD *)(v9 + 8) = v50;
      }
      QuadPart = (LARGE_INTEGER *)Interval[7].QuadPart;
      *AwaitingCompletion = 0LL;
      Interval[3] = QuadPart[7];
    }
    if ( v45 )
    {
      v9 = (unsigned __int64)KeGetCurrentPrcb();
      v52 = *(unsigned __int32 **)(v9 + 36536);
      if ( v52 )
      {
        _m_prefetchw(v52);
        v53 = *v52;
        do
        {
          v54 = v53;
          *(_DWORD *)&Alertable = v53 & 0xFFDFFFFF;
          v55 = v53;
          v53 = _InterlockedCompareExchange((volatile signed __int32 *)v52, v53 & 0xFFDFFFFF, v53);
        }
        while ( v55 != v53 );
        if ( (v53 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick(v9);
          Interval = (PLARGE_INTEGER)(AwaitingCompletion - 1);
        }
      }
      _enable();
    }
    if ( Interval[3].QuadPart == Interval[4].QuadPart )
      goto LABEL_12;
    v56 = (_QWORD *)Interval[6].QuadPart;
    v57 = Interval[5];
    if ( (*v56 & *(_QWORD *)(v57.QuadPart + 40)) == 0LL )
    {
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))KiSrcuReportQuiescent)(
                           Interval,
                           (LARGE_INTEGER)Interval[3].QuadPart) )
        KiSrcuFlushCompleted(AwaitingCompletion[6]);
      goto LABEL_12;
    }
    Interval = (PLARGE_INTEGER)(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KeDisableInterrupts)(
                                                  *v56,
                                                  (LARGE_INTEGER)v57.QuadPart,
                                                  Interval);
    if ( *AwaitingCompletion )
      goto LABEL_169;
    v9 = (unsigned __int64)CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v9 )
    {
      AwaitingCompletion[1] = (unsigned __int64)AwaitingCompletion;
      *AwaitingCompletion = (unsigned __int64)AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = (_LIST_ENTRY *)AwaitingCompletion;
LABEL_169:
      if ( !(_BYTE)Interval )
        goto LABEL_12;
      v9 = (unsigned __int64)KeGetCurrentPrcb();
      Interval = *(PLARGE_INTEGER *)(v9 + 36536);
      if ( !Interval )
      {
LABEL_147:
        _enable();
        goto LABEL_12;
      }
      _m_prefetchw(Interval);
      LowPart = Interval->LowPart;
      do
      {
        v58 = LowPart;
        *(_DWORD *)&Alertable = LowPart & 0xFFDFFFFF;
        v59 = LowPart;
        LowPart = _InterlockedCompareExchange((volatile signed __int32 *)Interval, LowPart & 0xFFDFFFFF, LowPart);
      }
      while ( v59 != LowPart );
LABEL_145:
      if ( (LowPart & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v9);
      goto LABEL_147;
    }
    v60 = *(unsigned __int64 ***)(v9 + 8);
    if ( *v60 == (unsigned __int64 *)v9 )
    {
      *AwaitingCompletion = v9;
      AwaitingCompletion[1] = (unsigned __int64)v60;
      *v60 = AwaitingCompletion;
      *(_QWORD *)(v9 + 8) = AwaitingCompletion;
      goto LABEL_169;
    }
LABEL_176:
    __fastfail(3u);
  }
LABEL_12:
  if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
  {
    v40 = KeDisableInterrupts(v9, Alertable, Interval);
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      CurrentPrcb->RcuData.GracePeriodNeeded = 0;
      _InterlockedOr(v61, 0);
      v9 = qword_140F204A8;
      CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F204A8;
    }
    if ( v40 )
    {
      v9 = (unsigned __int64)KeGetCurrentPrcb();
      Interval = *(PLARGE_INTEGER *)(v9 + 36536);
      if ( Interval )
      {
        _m_prefetchw(Interval);
        v41 = Interval->LowPart;
        do
        {
          v42 = v41;
          v41 = _InterlockedCompareExchange((volatile signed __int32 *)Interval, v41 & 0xFFDFFFFF, v41);
        }
        while ( v42 != v41 );
        if ( (v41 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
      _enable();
    }
  }
  if ( CurrentPrcb->RcuData.GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
  {
    v9 = (unsigned __int64)&KiRcuData + 32 * CurrentPrcb->Number;
    Interval = *(PLARGE_INTEGER *)v9;
    if ( (*(_QWORD *)v9 & *(_QWORD *)(*(_QWORD *)(v9 + 8) + 56LL)) == 0LL )
    {
      if ( (unsigned int)KiRcuReportQuiescentState() )
        KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
    }
  }
LABEL_14:
  if ( v4->HighPart < 0 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    Interval = (PLARGE_INTEGER)0xFFFFF780000003B0LL;
    v69 = 2;
    v9 = v4->QuadPart + CurrentThread->RelativeTimerBias;
    v12 = InterruptTimePrecise.QuadPart - MEMORY[0xFFFFF780000003B0] - v9;
  }
  else
  {
    v12 = v4->QuadPart;
    v69 = 1;
  }
  v65 = v12;
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v66 = 0LL;
    for ( i = WaitIrql; ; CurrentThread->WaitIrql = i )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v6;
      if ( v5 )
        CurrentThread->MiscFlags |= 0x10u;
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      v15 = i;
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || i )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v9 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v9);
    }
    v16 = v63;
    v17 = v65;
    if ( !v5 )
      break;
    if ( CurrentThread->Alerted[v6] )
    {
      CurrentThread->Alerted[v6] = 0;
      v18 = 257;
    }
    else if ( !(_BYTE)v6
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
      goto LABEL_31;
LABEL_39:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 4;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v19 = v17;
    CurrentThread->ThreadLock = 0LL;
    if ( v69 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v9 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v19 = v17;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v19 = ThreadTimerDelay + v17;
      }
    }
    else
    {
      if ( !v17 )
        goto LABEL_41;
      v9 = MEMORY[0xFFFFF78000000014];
    }
    if ( v9 > v19 )
    {
LABEL_41:
      v20 = KeGetCurrentPrcb();
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v61, 0);
      if ( CurrentThread->ThreadLock )
      {
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        CurrentThread->ThreadLock = 0LL;
      }
      v64 = 0LL;
      if ( v16 >= 2 )
      {
        v28 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v28 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
            {
              HvlNotifyLongSpinWait(v28);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( CurrentThread->ThreadLock );
        }
        WobPriority = CurrentThread->WobPriority;
        Interval = (PLARGE_INTEGER)WobPriority;
        v30 = CurrentThread->PriorityFloorCounts[WobPriority];
        if ( !v30 )
          KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, WobPriority, 2uLL, 0LL);
        v32 = v30 - 1;
        CurrentThread->PriorityFloorCounts[WobPriority] = v32;
        if ( !v32 )
        {
          v33 = CurrentThread->PriorityFloorSummary ^ (1 << WobPriority);
          CurrentThread->PriorityFloorSummary = v33;
          if ( v33 < 1 << WobPriority && CurrentThread->Priority <= 31 )
          {
            v34 = KiComputeThreadPriority(CurrentThread, 0LL);
            if ( (int)v34 < CurrentThread->Priority )
              KiSetPriorityThread(CurrentThread, &v64, v34);
          }
        }
        CurrentThread->WobPriority = 32;
        CurrentThread->ThreadLock = 0LL;
      }
      v22.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      v23 = v16 & 1;
      if ( (v22.Flags & 0x38) != 0 )
      {
        if ( (v22.Flags & 0x18) != 0 )
        {
          KiExitThreadWaitReschedule(v20);
        }
        else
        {
          LOBYTE(Interval) = 1;
          KiProcessDeferredReadyList(v20, &v64, Interval);
          KiDeliverApc(0LL, 0LL, 0LL);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
          __writecr8(0LL);
        }
      }
      else
      {
        v24 = CurrentThread->WaitIrql;
        if ( v23 )
        {
          KiProcessDeferredReadyList(v20, &v64, (unsigned __int8)v24);
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v24);
          __writecr8(v24);
        }
      }
      if ( !v4->QuadPart )
        return KeYieldExecution(0LL);
      return v8;
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    v62 = 0LL;
    CurrentThread->WaitBlockCount = 1;
    v27 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v16, v62);
    v63 = 0;
    if ( v27 != 256 )
    {
      if ( v27 != 258 )
        return v27;
      return v8;
    }
    v31 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v31);
    CurrentThread->WaitIrql = v31;
  }
  if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !(_BYTE)v6 )
    goto LABEL_39;
  v18 = 192;
LABEL_31:
  if ( v16 >= 2 )
  {
    v35 = CurrentThread->WobPriority;
    v36 = CurrentThread->PriorityFloorCounts[v35];
    if ( !v36 )
      KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v35, 2uLL, 0LL);
    v37 = v36 - 1;
    CurrentThread->PriorityFloorCounts[v35] = v37;
    if ( !v37 )
    {
      v38 = CurrentThread->PriorityFloorSummary ^ (1 << v35);
      CurrentThread->PriorityFloorSummary = v38;
      if ( v38 < 1 << v35 && CurrentThread->Priority <= 31 )
      {
        v39 = KiComputeThreadPriority(CurrentThread, 0LL);
        if ( (int)v39 < CurrentThread->Priority )
          KiSetPriorityThread(CurrentThread, &v66, v39);
      }
    }
    v15 = i;
    CurrentThread->WobPriority = 32;
  }
  CurrentThread->ThreadLock = 0LL;
  if ( (v16 & 1) != 0 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v66, (unsigned __int8)v15);
    return v18;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
    __writecr8(i);
    return v18;
  }
}
