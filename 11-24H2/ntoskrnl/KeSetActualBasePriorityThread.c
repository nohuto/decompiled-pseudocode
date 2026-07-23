/*
 * XREFs of KeSetActualBasePriorityThread @ 0x140331740
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiFlushAllStoreSwapPages @ 0x1402611E0 (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x140261468 (MiWakeModifiedPageWriter.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402E21C4 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiMappedPageWriter @ 0x1402EB500 (MiMappedPageWriter.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x1402F4534 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402F4DDC (MiStoreUpdateMemoryConditions.c)
 *     IoApplyPriorityInfoThread @ 0x140330C20 (IoApplyPriorityInfoThread.c)
 *     MiSetZeroPageThreadPriority @ 0x140331968 (MiSetZeroPageThreadPriority.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403763F0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403830C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWakeZeroingThreads @ 0x140412F50 (MiWakeZeroingThreads.c)
 *     SmKmStoreHelperWorker @ 0x140452510 (SmKmStoreHelperWorker.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     PopCreatePowerThread @ 0x1404917D8 (PopCreatePowerThread.c)
 *     CmpSetPriorityThread @ 0x1404ACE08 (CmpSetPriorityThread.c)
 *     ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404ADAE4 (-SmCompressCtxUpdatePriority@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z.c)
 *     PfpServiceMainThreadBoost @ 0x1405C9CA0 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadUnboost @ 0x1405C9DA0 (PfpServiceMainThreadUnboost.c)
 *     PopFxStaticWorkPoolThread @ 0x1405CF660 (PopFxStaticWorkPoolThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407201A8 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 *     EtwpLogger @ 0x1409D33F0 (EtwpLogger.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402CCFD8 (KiAdjustRealtimePriorityFloor.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402D8290 (KiPriQueueThreadPriorityChanged.c)
 *     EtwTracePriority @ 0x140330F04 (EtwTracePriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1404476F4 (KiSetBasePriorityAndClearDecrement.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
  int v9; // ecx
  __int64 updated; // rax
  struct _KPRCB *v11; // rcx
  __int64 v12; // rdi
  signed __int32 *SchedulerAssist; // r8
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  volatile signed __int32 *v17; // rcx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v23; // [rsp+70h] [rbp+18h] BYREF

  v22 = a2;
  v21 = 0;
  v2 = BugCheckParameter1;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &KiInitialProcess )
    return 1LL;
  v23 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, 2LL);
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
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
  KiSetBasePriorityAndClearDecrement(v2, &v22);
  KiAdjustRealtimePriorityFloor(v2, v22);
  v8 = KiComputeThreadPriority(v2, 0, 0);
  v9 = *(char *)(v2 + 195);
  v21 = v8;
  if ( v8 != v9 )
  {
    if ( (_KTHREAD *)v2 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      v12 = *(_QWORD *)(v2 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v2, 0LL);
      v11 = KeGetCurrentPrcb();
      v12 = updated;
      SchedulerAssist = (signed __int32 *)v11->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v19 = *SchedulerAssist;
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v11);
      }
      _enable();
    }
    v14 = v12 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v2);
    if ( (*(_DWORD *)(v2 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v2 + 120), 5u);
    v16 = v21;
    *(_QWORD *)(v2 + 32) = v14;
    KiSetPriorityThread((_KTHREAD *)v2, (__int64)&v23, v16, v15);
  }
  v17 = *(volatile signed __int32 **)(v2 + 232);
  if ( v17 && (*(_BYTE *)v17 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v17, v2);
  else
    *(_QWORD *)(v2 + 64) = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb, &v23, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(v2, 0x531u, v7, v22, &v21);
  return v7;
}
