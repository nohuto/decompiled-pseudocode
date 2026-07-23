/*
 * XREFs of KeDelayExecutionThread @ 0x14031B140
 * Callers:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiDelayFaultingThread @ 0x140260C98 (MiDelayFaultingThread.c)
 *     MiFlushAllStoreSwapPages @ 0x1402611E0 (MiFlushAllStoreSwapPages.c)
 *     MiFlushAllPagesWorker @ 0x140263A34 (MiFlushAllPagesWorker.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1402F33B8 (MiCheckSystemTrimEndCriteria.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F9860 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     ExpExpandResourceOwnerTable @ 0x1403D6CCC (ExpExpandResourceOwnerTable.c)
 *     MiRemoveUnusedSegments @ 0x1403EDF30 (MiRemoveUnusedSegments.c)
 *     IopCancelIrpsInFileObjectList @ 0x1404089C0 (IopCancelIrpsInFileObjectList.c)
 *     PoBlockConsoleSwitchEx @ 0x140420E04 (PoBlockConsoleSwitchEx.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1404309A4 (CcDeletePrivateVolumeCacheMap.c)
 *     MiCreateSystemSection @ 0x140443248 (MiCreateSystemSection.c)
 *     FsRtlCreateSectionForDataScan @ 0x140443420 (FsRtlCreateSectionForDataScan.c)
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     MiDeleteEmptySubsectionProtoPool @ 0x140473E98 (MiDeleteEmptySubsectionProtoPool.c)
 *     IopKeepAliveWorker @ 0x140483EB0 (IopKeepAliveWorker.c)
 *     MiFlushAllFilesystemPages @ 0x1404CFFDC (MiFlushAllFilesystemPages.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x140578388 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcErrorCallbackRoutine @ 0x140578740 (CcErrorCallbackRoutine.c)
 *     CcDeletePartition @ 0x140579B7C (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140579DD8 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x14058C7A0 (InbvRotateGuiBootDisplay.c)
 *     PnpBootDeviceWait @ 0x1405A0CA8 (PnpBootDeviceWait.c)
 *     KasaniTelemetryThread @ 0x1405A7E30 (KasaniTelemetryThread.c)
 *     KcsaniTelemetryThread @ 0x1405AC380 (KcsaniTelemetryThread.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14060AC30 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x140610090 (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x14062B6A0 (DifKeDelayExecutionThreadWrapper.c)
 *     ExpPrmWaitForForZeroActiveCount @ 0x140656010 (ExpPrmWaitForForZeroActiveCount.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     sub_140695E50 @ 0x140695E50 (sub_140695E50.c)
 *     IpmiLibpDelay @ 0x1406A1098 (IpmiLibpDelay.c)
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 *     sub_1406F857C @ 0x1406F857C (sub_1406F857C.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407380C8 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PoShutdownBugCheck @ 0x140751760 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407C0040 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x1407C7080 (WheaRemoveErrorSource.c)
 *     NtCreateJobObject @ 0x14085C390 (NtCreateJobObject.c)
 *     NtDelayExecution @ 0x1408A3820 (NtDelayExecution.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     MmManagePartitionMemoryInformation @ 0x1408F7014 (MmManagePartitionMemoryInformation.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1408FE8DC (IoCancelThreadIo.c)
 *     MmGetSystemRoutineAddress @ 0x140906FD0 (MmGetSystemRoutineAddress.c)
 *     CmUnloadKey @ 0x14092D238 (CmUnloadKey.c)
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x1409543F8 (PfpOpenHandleCreate.c)
 *     PfTLoggingWorker @ 0x140970EA0 (PfTLoggingWorker.c)
 *     PnpAllocateCriticalMemory @ 0x1409BBC94 (PnpAllocateCriticalMemory.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 *     EtwpFlushActiveBuffers @ 0x1409D1730 (EtwpFlushActiveBuffers.c)
 *     NtCancelIoFile @ 0x1409DCE40 (NtCancelIoFile.c)
 *     PnpCompleteDeviceEvent @ 0x1409ED2C0 (PnpCompleteDeviceEvent.c)
 *     CmpTransMgrCommit @ 0x140A008C8 (CmpTransMgrCommit.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A0E164 (EtwpWaitForBufferReferenceCount.c)
 *     PopAcquireAdaptiveLock @ 0x140A24C58 (PopAcquireAdaptiveLock.c)
 *     PopPolicyWorkerNotify @ 0x140A4C540 (PopPolicyWorkerNotify.c)
 *     NtNotifyChangeSession @ 0x140A5FDF0 (NtNotifyChangeSession.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
 *     CmFcpConnectToAlpcServer @ 0x140A7ADE0 (CmFcpConnectToAlpcServer.c)
 *     CmpUuidCreate @ 0x140A9C598 (CmpUuidCreate.c)
 *     MiGetReadyInPageBlock @ 0x140A9E628 (MiGetReadyInPageBlock.c)
 *     CmpRetryBackOff @ 0x140AB45A0 (CmpRetryBackOff.c)
 *     IopFreeBandwidthContract @ 0x140ABE044 (IopFreeBandwidthContract.c)
 *     MmCreateSpecialImageSection @ 0x140AE8400 (MmCreateSpecialImageSection.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140B998F8 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140BB0214 (HdlspPutMore.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C247C8 (PiCreateDriverDataDirectoryRoot.c)
 *     StartFirstUserProcess @ 0x140C620B8 (StartFirstUserProcess.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14031C844 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405BE474 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405BEDC8 (KiSrcuReportQuiescent.c)
 */

NTSTATUS __stdcall KeDelayExecutionThread(KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Interval)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbp
  NTSTATUS v8; // r12d
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rsi
  LONGLONG QuadPart; // r13
  unsigned __int8 WaitIrql; // dl
  unsigned int v13; // esi
  __int64 v14; // rdx
  unsigned int v15; // ebx
  LONGLONG v16; // r13
  NTSTATUS v17; // esi
  unsigned __int64 v18; // rax
  struct _KPRCB *v19; // rbp
  unsigned int v20; // esi
  _KWAIT_STATUS_REGISTER v21; // al
  int v22; // ebx
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rcx
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v26; // rcx
  NTSTATUS v27; // eax
  unsigned int v28; // esi
  ULONG_PTR WobPriority; // rdx
  unsigned __int8 v30; // al
  __int64 v31; // rcx
  unsigned __int8 v32; // si
  unsigned __int8 v33; // al
  unsigned int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // r9
  ULONG_PTR v37; // rcx
  unsigned __int8 v38; // al
  unsigned __int8 v39; // al
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // r9
  bool v43; // al
  struct _KPRCB *v44; // rcx
  signed __int32 *v45; // r8
  signed __int32 v46; // eax
  signed __int32 v47; // ett
  bool v48; // al
  _LIST_ENTRY *AwaitingCompletion; // r13
  bool v50; // r9
  struct _KPRCB *v51; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v53; // eax
  signed __int32 v54; // ett
  struct _LIST_ENTRY **p_Blink; // r8
  _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v57; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v59; // rax
  struct _KPRCB *v60; // rcx
  signed __int32 *v61; // r9
  signed __int32 v62; // eax
  signed __int32 v63; // ett
  bool v64; // r8
  _LIST_ENTRY *v65; // rcx
  signed __int32 *v66; // r8
  signed __int32 v67; // ett
  struct _LIST_ENTRY *v68; // rax
  signed __int32 v69[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v70; // [rsp+28h] [rbp-70h]
  int v71; // [rsp+30h] [rbp-68h]
  struct _SINGLE_LIST_ENTRY v72; // [rsp+38h] [rbp-60h] BYREF
  LONGLONG v73; // [rsp+40h] [rbp-58h]
  _QWORD *v74; // [rsp+48h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 i; // [rsp+B0h] [rbp+18h]
  int v77; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = WaitMode;
  if ( !Interval->QuadPart && WaitMode && !Alertable && (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 )
    return KeYieldExecution(0LL);
  v8 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v71 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    v71 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel > 1u )
    goto LABEL_14;
  if ( CurrentPrcb->RcuData.AwaitingCompletion )
  {
    v48 = KeDisableInterrupts();
    AwaitingCompletion = CurrentPrcb->RcuData.AwaitingCompletion;
    v50 = v48;
    if ( !AwaitingCompletion )
    {
      if ( !v48 )
        goto LABEL_12;
      v51 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v51->SchedulerAssist;
      if ( !SchedulerAssist )
        goto LABEL_147;
      _m_prefetchw(SchedulerAssist);
      v53 = *SchedulerAssist;
      do
      {
        v54 = v53;
        v53 = _InterlockedCompareExchange(SchedulerAssist, v53 & 0xFFDFFFFF, v53);
      }
      while ( v54 != v53 );
      goto LABEL_145;
    }
    p_Blink = &AwaitingCompletion[-1].Blink;
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
        v57 = AwaitingCompletion->Flink;
        Blink = AwaitingCompletion->Blink;
        if ( AwaitingCompletion->Flink->Blink != AwaitingCompletion || Blink->Flink != AwaitingCompletion )
          goto LABEL_176;
        Blink->Flink = v57;
        v57->Blink = Blink;
      }
      v59 = p_Blink[7];
      AwaitingCompletion->Flink = 0LL;
      p_Blink[3] = v59[3].Blink;
    }
    if ( v50 )
    {
      v60 = KeGetCurrentPrcb();
      v61 = (signed __int32 *)v60->SchedulerAssist;
      if ( v61 )
      {
        _m_prefetchw(v61);
        v62 = *v61;
        do
        {
          v63 = v62;
          v62 = _InterlockedCompareExchange(v61, v62 & 0xFFDFFFFF, v62);
        }
        while ( v63 != v62 );
        if ( (v62 & 0x200000) != 0 )
        {
          KiRemoveSystemWorkPriorityKick((__int64)v60);
          p_Blink = &AwaitingCompletion[-1].Blink;
        }
      }
      _enable();
    }
    if ( p_Blink[3] == p_Blink[4] )
      goto LABEL_12;
    if ( ((__int64)p_Blink[6]->Flink & (__int64)p_Blink[5][2].Blink) == 0 )
    {
      if ( (unsigned int)KiSrcuReportQuiescent(p_Blink, p_Blink[3]) )
        KiSrcuFlushCompleted(AwaitingCompletion[3].Flink);
      goto LABEL_12;
    }
    v64 = KeDisableInterrupts();
    if ( AwaitingCompletion->Flink )
      goto LABEL_169;
    v65 = CurrentPrcb->RcuData.AwaitingCompletion;
    if ( !v65 )
    {
      AwaitingCompletion->Blink = AwaitingCompletion;
      AwaitingCompletion->Flink = AwaitingCompletion;
      CurrentPrcb->RcuData.AwaitingCompletion = AwaitingCompletion;
LABEL_169:
      if ( !v64 )
        goto LABEL_12;
      v51 = KeGetCurrentPrcb();
      v66 = (signed __int32 *)v51->SchedulerAssist;
      if ( !v66 )
      {
LABEL_147:
        _enable();
        goto LABEL_12;
      }
      _m_prefetchw(v66);
      v53 = *v66;
      do
      {
        v67 = v53;
        v53 = _InterlockedCompareExchange(v66, v53 & 0xFFDFFFFF, v53);
      }
      while ( v67 != v53 );
LABEL_145:
      if ( (v53 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v51);
      goto LABEL_147;
    }
    v68 = v65->Blink;
    if ( v68->Flink == v65 )
    {
      AwaitingCompletion->Flink = v65;
      AwaitingCompletion->Blink = v68;
      v68->Flink = AwaitingCompletion;
      v65->Blink = AwaitingCompletion;
      goto LABEL_169;
    }
LABEL_176:
    __fastfail(3u);
  }
LABEL_12:
  if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
  {
    v43 = KeDisableInterrupts();
    if ( CurrentPrcb->RcuData.GracePeriodNeeded && !CurrentPrcb->RcuData.NestingLevel )
    {
      CurrentPrcb->RcuData.GracePeriodNeeded = 0;
      _InterlockedOr(v69, 0);
      CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F205C8;
    }
    if ( v43 )
    {
      v44 = KeGetCurrentPrcb();
      v45 = (signed __int32 *)v44->SchedulerAssist;
      if ( v45 )
      {
        _m_prefetchw(v45);
        v46 = *v45;
        do
        {
          v47 = v46;
          v46 = _InterlockedCompareExchange(v45, v46 & 0xFFDFFFFF, v46);
        }
        while ( v47 != v46 );
        if ( (v46 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v44);
      }
      _enable();
    }
  }
  if ( CurrentPrcb->RcuData.GraceSequenceQuiescent != CurrentPrcb->RcuData.GraceSequenceReported )
  {
    v24 = (_QWORD *)((char *)&KiRcuData + 32 * CurrentPrcb->Number);
    if ( (*v24 & *(_QWORD *)(v24[1] + 56LL)) == 0LL )
    {
      if ( (unsigned int)KiRcuReportQuiescentState() )
        KiRcuFlushCompleted(CurrentPrcb->RcuData.ExpediteReporting);
    }
  }
LABEL_14:
  if ( Interval->HighPart < 0 )
  {
    v77 = 2;
    QuadPart = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
             - MEMORY[0xFFFFF780000003B0]
             - (Interval->QuadPart
              + CurrentThread->RelativeTimerBias);
  }
  else
  {
    QuadPart = Interval->QuadPart;
    v77 = 1;
  }
  v73 = QuadPart;
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v74 = 0LL;
    for ( i = WaitIrql; ; CurrentThread->WaitIrql = i )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v6;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      v14 = i;
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || i )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v31 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v31, 2LL);
    }
    v15 = v71;
    v16 = v73;
    if ( !Alertable )
      break;
    if ( CurrentThread->Alerted[v6] )
    {
      CurrentThread->Alerted[v6] = 0;
      v17 = 257;
    }
    else if ( !(_BYTE)v6
           || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
    {
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v17 = 257;
      }
      else
      {
        v17 = 0;
      }
    }
    else
    {
      CurrentThread->ApcState.UserApcPendingAll |= 2u;
      v17 = 192;
    }
    if ( v17 )
      goto LABEL_31;
LABEL_39:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 4;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v18 = v16;
    CurrentThread->ThreadLock = 0LL;
    if ( v77 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v26 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v18 = v16;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v18 = ThreadTimerDelay + v16;
      }
    }
    else
    {
      if ( !v16 )
        goto LABEL_41;
      v26 = MEMORY[0xFFFFF78000000014];
    }
    if ( v26 > v18 )
    {
LABEL_41:
      v19 = KeGetCurrentPrcb();
      CurrentThread->WaitBlockFill6[68] = 2;
      _InterlockedOr(v69, 0);
      if ( CurrentThread->ThreadLock )
      {
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v20);
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
      v72.Next = 0LL;
      if ( v15 >= 2 )
      {
        v28 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
          {
            if ( (++v28 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
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
        v30 = CurrentThread->PriorityFloorCounts[WobPriority];
        if ( !v30 )
          KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, WobPriority, 2uLL, 0LL);
        v33 = v30 - 1;
        CurrentThread->PriorityFloorCounts[WobPriority] = v33;
        if ( !v33 )
        {
          v34 = CurrentThread->PriorityFloorSummary ^ (1 << WobPriority);
          CurrentThread->PriorityFloorSummary = v34;
          if ( v34 < 1 << WobPriority && CurrentThread->Priority <= 31 )
          {
            v35 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
            if ( (int)v35 < CurrentThread->Priority )
              KiSetPriorityThread(CurrentThread, (__int64)&v72, v35, v36);
          }
        }
        CurrentThread->WobPriority = 32;
        CurrentThread->ThreadLock = 0LL;
      }
      v21.Flags = (unsigned __int8)CurrentThread->WaitRegister;
      v22 = v15 & 1;
      if ( (v21.Flags & 0x38) != 0 )
      {
        if ( (v21.Flags & 0x18) != 0 )
        {
          KiExitThreadWaitReschedule(v19, (__int64)CurrentThread, &v72);
        }
        else
        {
          KiProcessDeferredReadyList(v19, &v72, 1u);
          KiDeliverApc(0, 0LL, 0LL);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
          __writecr8(0LL);
        }
      }
      else
      {
        v23 = CurrentThread->WaitIrql;
        if ( v22 )
        {
          KiProcessDeferredReadyList(v19, &v72, v23);
        }
        else
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v23);
          __writecr8(v23);
        }
      }
      if ( !Interval->QuadPart )
        return KeYieldExecution(0LL);
      return v8;
    }
    CurrentThread->WaitBlock[0].Object = (PVOID)-1LL;
    CurrentThread->WaitBlockFill4[17] = 5;
    v70 = 0LL;
    CurrentThread->WaitBlockCount = 1;
    v27 = KiCommitThreadWait((ULONG_PTR)CurrentThread, v15, v70);
    v71 = 0;
    if ( v27 != 256 )
    {
      if ( v27 != 258 )
        return v27;
      return v8;
    }
    v32 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v32, 2LL);
    CurrentThread->WaitIrql = v32;
  }
  if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !(_BYTE)v6 )
    goto LABEL_39;
  v17 = 192;
LABEL_31:
  if ( v15 >= 2 )
  {
    v37 = CurrentThread->WobPriority;
    v38 = CurrentThread->PriorityFloorCounts[v37];
    if ( !v38 )
      KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, v37, 2uLL, 0LL);
    v39 = v38 - 1;
    CurrentThread->PriorityFloorCounts[v37] = v39;
    if ( !v39 )
    {
      v40 = CurrentThread->PriorityFloorSummary ^ (1 << v37);
      CurrentThread->PriorityFloorSummary = v40;
      if ( v40 < 1 << v37 && CurrentThread->Priority <= 31 )
      {
        v41 = KiComputeThreadPriority((__int64)CurrentThread, 0, 0);
        if ( (int)v41 < CurrentThread->Priority )
          KiSetPriorityThread(CurrentThread, (__int64)&v74, v41, v42);
      }
    }
    v14 = i;
    CurrentThread->WobPriority = 32;
  }
  CurrentThread->ThreadLock = 0LL;
  if ( (v15 & 1) != 0 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v74, v14);
    return v17;
  }
  else
  {
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      LOBYTE(v14) = i;
    }
    __writecr8((unsigned __int8)v14);
    return v17;
  }
}
