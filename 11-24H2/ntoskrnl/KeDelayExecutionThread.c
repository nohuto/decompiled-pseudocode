/*
 * XREFs of KeDelayExecutionThread @ 0x14033BC60
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     MiFlushAllPagesWorker @ 0x1402CF240 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1402D01D8 (MiFlushAllStoreSwapPages.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     MiCheckSystemTrimEndCriteria @ 0x140378D38 (MiCheckSystemTrimEndCriteria.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C560 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     ExpExpandResourceOwnerTable @ 0x1403E912C (ExpExpandResourceOwnerTable.c)
 *     MiRemoveUnusedSegments @ 0x1403F734C (MiRemoveUnusedSegments.c)
 *     MiDeleteEmptySubsectionProtoPool @ 0x1403F8174 (MiDeleteEmptySubsectionProtoPool.c)
 *     MiAllocatePagesForMdl @ 0x14041225C (MiAllocatePagesForMdl.c)
 *     IopCancelIrpsInFileObjectList @ 0x140418C10 (IopCancelIrpsInFileObjectList.c)
 *     PoBlockConsoleSwitchEx @ 0x14042F0D4 (PoBlockConsoleSwitchEx.c)
 *     MiCreateSystemSection @ 0x14044C348 (MiCreateSystemSection.c)
 *     FsRtlCreateSectionForDataScan @ 0x14044C520 (FsRtlCreateSectionForDataScan.c)
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     IopKeepAliveWorker @ 0x140488DC0 (IopKeepAliveWorker.c)
 *     MiDelayFaultingThread @ 0x14048F028 (MiDelayFaultingThread.c)
 *     MiFlushAllFilesystemPages @ 0x1404D6B8C (MiFlushAllFilesystemPages.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x14057AEF8 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     CcErrorCallbackRoutine @ 0x14057B2B0 (CcErrorCallbackRoutine.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x14057C948 (CcDeleteSectionsForPartition.c)
 *     InbvRotateGuiBootDisplay @ 0x14058F780 (InbvRotateGuiBootDisplay.c)
 *     PnpBootDeviceWait @ 0x1405A3D68 (PnpBootDeviceWait.c)
 *     KasaniTelemetryThread @ 0x1405AAEC0 (KasaniTelemetryThread.c)
 *     KcsaniTelemetryThread @ 0x1405AF410 (KcsaniTelemetryThread.c)
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14060C670 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 *     MdlInvariantPostProcessing1 @ 0x140611AD0 (MdlInvariantPostProcessing1.c)
 *     DifKeDelayExecutionThreadWrapper @ 0x14062D0E0 (DifKeDelayExecutionThreadWrapper.c)
 *     ExpPrmWaitForForZeroActiveCount @ 0x140657910 (ExpPrmWaitForForZeroActiveCount.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MiMarkHugePfnBad @ 0x140670EEC (MiMarkHugePfnBad.c)
 *     sub_140694D80 @ 0x140694D80 (sub_140694D80.c)
 *     IpmiLibpDelay @ 0x14069FF94 (IpmiLibpDelay.c)
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 *     sub_1406FA93C @ 0x1406FA93C (sub_1406FA93C.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14073A198 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PoShutdownBugCheck @ 0x140753440 (PoShutdownBugCheck.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407BFBF0 (ExpNodeHotAddProcessorWorker.c)
 *     WheaRemoveErrorSource @ 0x1407C6C00 (WheaRemoveErrorSource.c)
 *     NtDelayExecution @ 0x14089B180 (NtDelayExecution.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     IoCancelThreadIo @ 0x1408A867C (IoCancelThreadIo.c)
 *     MmGetSystemRoutineAddress @ 0x1408B0D70 (MmGetSystemRoutineAddress.c)
 *     NtCreateJobObject @ 0x1408EAB60 (NtCreateJobObject.c)
 *     CmUnloadKey @ 0x14092B0F8 (CmUnloadKey.c)
 *     MmManagePartitionMemoryInformation @ 0x1409344F4 (MmManagePartitionMemoryInformation.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PfTLoggingWorker @ 0x14094E990 (PfTLoggingWorker.c)
 *     MiCreateSectionCommon @ 0x14096B594 (MiCreateSectionCommon.c)
 *     PfpOpenHandleCreate @ 0x14096B99C (PfpOpenHandleCreate.c)
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 *     EtwpFlushActiveBuffers @ 0x1409D8040 (EtwpFlushActiveBuffers.c)
 *     NtCancelIoFile @ 0x1409E2AE0 (NtCancelIoFile.c)
 *     PnpCompleteDeviceEvent @ 0x1409EF9F0 (PnpCompleteDeviceEvent.c)
 *     CmpTransMgrCommit @ 0x140A04398 (CmpTransMgrCommit.c)
 *     PnpAllocateCriticalMemory @ 0x140A0D890 (PnpAllocateCriticalMemory.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140A0E9B4 (PnpQueuePendingSurpriseRemoval.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140A15344 (EtwpWaitForBufferReferenceCount.c)
 *     PopAcquireAdaptiveLock @ 0x140A30168 (PopAcquireAdaptiveLock.c)
 *     PopPolicyWorkerNotify @ 0x140A545F0 (PopPolicyWorkerNotify.c)
 *     NtNotifyChangeSession @ 0x140A67010 (NtNotifyChangeSession.c)
 *     IopCancelAlertedRequest @ 0x140A7BD74 (IopCancelAlertedRequest.c)
 *     CmFcpConnectToAlpcServer @ 0x140A80380 (CmFcpConnectToAlpcServer.c)
 *     CmpUuidCreate @ 0x140AA1208 (CmpUuidCreate.c)
 *     MiGetReadyInPageBlock @ 0x140AA3298 (MiGetReadyInPageBlock.c)
 *     CmpRetryBackOff @ 0x140AB94E0 (CmpRetryBackOff.c)
 *     IopFreeBandwidthContract @ 0x140AC2D5C (IopFreeBandwidthContract.c)
 *     MmCreateSpecialImageSection @ 0x140AE6B20 (MmCreateSpecialImageSection.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 *     ViThunkHookExportAddress @ 0x140B978F8 (ViThunkHookExportAddress.c)
 *     HdlspPutMore @ 0x140BAE214 (HdlspPutMore.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C22798 (PiCreateDriverDataDirectoryRoot.c)
 *     StartFirstUserProcess @ 0x140C5FF68 (StartFirstUserProcess.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiRcuReportQuiescentState @ 0x14033D364 (KiRcuReportQuiescentState.c)
 *     KiRcuFlushCompleted @ 0x14033D510 (KiRcuFlushCompleted.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KiSrcuFlushCompleted @ 0x1405C0EA4 (KiSrcuFlushCompleted.c)
 *     KiSrcuReportQuiescent @ 0x1405C17F8 (KiSrcuReportQuiescent.c)
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
  _QWORD *v72; // [rsp+38h] [rbp-60h] BYREF
  LONGLONG v73; // [rsp+40h] [rbp-58h]
  _QWORD *v74; // [rsp+48h] [rbp-50h] BYREF
  __int64 v75; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 i; // [rsp+B0h] [rbp+18h]
  int v77; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v6 = WaitMode;
  if ( !Interval->QuadPart && WaitMode && !Alertable && (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 )
    return KeYieldExecution(0LL);
  v8 = 0;
  v75 = 0LL;
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
      CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F20C48;
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
    QuadPart = RtlGetInterruptTimePrecise(&v75)
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
      v72 = 0LL;
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
          KiExitThreadWaitReschedule(v19, (__int64)CurrentThread, (__int64)&v72);
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
