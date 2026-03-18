/*
 * XREFs of KeSetActualBasePriorityThread @ 0x14020E620
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x14020DEF0 (IoApplyPriorityInfoThread.c)
 *     MiSetZeroPageThreadPriority @ 0x14020EE0C (MiSetZeroPageThreadPriority.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14032B938 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140349F10 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1403767C8 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140393600 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403A0C80 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiFlushAllStoreSwapPages @ 0x1403C1088 (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x1403C1310 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403C1B60 (MiStoreUpdateMemoryConditions.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     MiMappedPageWriter @ 0x14040C760 (MiMappedPageWriter.c)
 *     MiWakeZeroingThreads @ 0x140437060 (MiWakeZeroingThreads.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140456650 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14045E110 (SmKmStoreHelperWorker.c)
 *     PopCreatePowerThread @ 0x140497308 (PopCreatePowerThread.c)
 *     CmpSetPriorityThread @ 0x1404B1590 (CmpSetPriorityThread.c)
 *     ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404B30D4 (-SmCompressCtxUpdatePriority@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z.c)
 *     PfpServiceMainThreadBoost @ 0x1405C7F60 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadUnboost @ 0x1405C8060 (PfpServiceMainThreadUnboost.c)
 *     PopFxStaticWorkPoolThread @ 0x1405CD6C0 (PopFxStaticWorkPoolThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140716518 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     MiNodeZeroConductor @ 0x1407EF900 (MiNodeZeroConductor.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiSetBasePriorityAndClearDecrement @ 0x14020D7F0 (KiSetBasePriorityAndClearDecrement.c)
 *     EtwTracePriority @ 0x14020E1D8 (EtwTracePriority.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402A1FC8 (KiPriQueueThreadPriorityChanged.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402E673C (KiAdjustRealtimePriorityFloor.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14031AFA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(ULONG_PTR BugCheckParameter1, int a2)
{
  ULONG_PTR v2; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v5; // edi
  _KTHREAD *CurrentThread; // r14
  unsigned int v7; // ebp
  unsigned int v8; // eax
  char v9; // dl
  __int64 v10; // r8
  int v11; // ecx
  __int64 updated; // rax
  struct _KPRCB *v13; // rcx
  __int64 v14; // rdi
  signed __int32 *SchedulerAssist; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE *v18; // rcx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  v23 = a2;
  v22 = 0;
  v2 = BugCheckParameter1;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &KiInitialProcess )
    return 1LL;
  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1) )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v2 + 64) );
  }
  v7 = *(char *)(v2 + 563);
  *(_BYTE *)(v2 + 645) = 0;
  KiSetBasePriorityAndClearDecrement(v2, &v23);
  KiAdjustRealtimePriorityFloor(v2);
  v8 = KiComputeThreadPriority(v2, 0LL);
  v11 = *(char *)(v2 + 195);
  v22 = v8;
  if ( v8 != v11 )
  {
    if ( (_KTHREAD *)v2 == CurrentThread && CurrentPrcb->NestingLevel == v9 )
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v2, 0LL);
      v13 = KeGetCurrentPrcb();
      v14 = updated;
      SchedulerAssist = (signed __int32 *)v13->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v20 = *SchedulerAssist;
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange(SchedulerAssist, v20 & 0xFFDFFFFF, v20);
        }
        while ( v21 != v20 );
        if ( (v20 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
      _enable();
    }
    else
    {
      v14 = *(_QWORD *)(v2 + 72);
    }
    v16 = v14 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v2);
    if ( (*(_DWORD *)(v2 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v2 + 120), 5u);
    v17 = v22;
    *(_QWORD *)(v2 + 32) = v16;
    KiSetPriorityThread(v2, &v24, v17);
  }
  v18 = *(_BYTE **)(v2 + 232);
  if ( v18 && (*v18 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v18, v2);
  else
    *(_QWORD *)(v2 + 64) = 0LL;
  LOBYTE(v10) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v24, v10);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(v2, 0x531u, v7, v23, &v22);
  return v7;
}
