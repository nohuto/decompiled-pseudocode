/*
 * XREFs of KeSetActualBasePriorityThread @ 0x14020A160
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140209640 (IoApplyPriorityInfoThread.c)
 *     MiSetZeroPageThreadPriority @ 0x14020A388 (MiSetZeroPageThreadPriority.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140247F78 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024C420 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiFlushAllStoreSwapPages @ 0x1402D01D8 (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x1402D0460 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402D10D4 (MiStoreUpdateMemoryConditions.c)
 *     MiMappedPageWriter @ 0x140369760 (MiMappedPageWriter.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140389780 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiWakeZeroingThreads @ 0x1403C7310 (MiWakeZeroingThreads.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140449540 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14045D450 (SmKmStoreHelperWorker.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140483444 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     KeSetThreadSchedulerAssist @ 0x140487FC8 (KeSetThreadSchedulerAssist.c)
 *     PopCreatePowerThread @ 0x140496E48 (PopCreatePowerThread.c)
 *     CmpSetPriorityThread @ 0x1404B2578 (CmpSetPriorityThread.c)
 *     ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404B32D4 (-SmCompressCtxUpdatePriority@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z.c)
 *     PfpServiceMainThreadBoost @ 0x1405CC530 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadUnboost @ 0x1405CC630 (PfpServiceMainThreadUnboost.c)
 *     PopFxStaticWorkPoolThread @ 0x1405D1F40 (PopFxStaticWorkPoolThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140722618 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     MiNodeZeroConductor @ 0x1407FF7C0 (MiNodeZeroConductor.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 *     ExpWorkQueueManagerThread @ 0x140A21D40 (ExpWorkQueueManagerThread.c)
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     EtwTracePriority @ 0x140209924 (EtwTracePriority.c)
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiQueryQuantumReset @ 0x1403241CC (KiQueryQuantumReset.c)
 *     KiAdjustRealtimePriorityFloor @ 0x140324448 (KiAdjustRealtimePriorityFloor.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14034F060 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1404337D0 (KiPriQueueThreadPriorityChanged.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140452644 (KiSetBasePriorityAndClearDecrement.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(ULONG_PTR BugCheckParameter1, int a2, __int64 a3)
{
  ULONG_PTR v3; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // edi
  _KTHREAD *CurrentThread; // r14
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int v10; // ecx
  __int64 updated; // rax
  struct _KPRCB *v12; // rcx
  __int64 v13; // rdi
  signed __int32 *SchedulerAssist; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE *v17; // rcx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF

  v22 = a2;
  v21 = 0;
  v3 = BugCheckParameter1;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &KiInitialProcess )
    return 1LL;
  v23 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, 2LL, a3);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v3 + 64) );
  }
  v8 = *(char *)(v3 + 563);
  *(_BYTE *)(v3 + 645) = 0;
  KiSetBasePriorityAndClearDecrement(v3, &v22);
  KiAdjustRealtimePriorityFloor(v3);
  v9 = KiComputeThreadPriority(v3, 0LL, 0LL);
  v10 = *(char *)(v3 + 195);
  v21 = v9;
  if ( v9 != v10 )
  {
    if ( (_KTHREAD *)v3 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      v13 = *(_QWORD *)(v3 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v3, 0LL);
      v12 = KeGetCurrentPrcb();
      v13 = updated;
      SchedulerAssist = (signed __int32 *)v12->SchedulerAssist;
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
          KiRemoveSystemWorkPriorityKick(v12);
      }
      _enable();
    }
    v15 = v13 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v3);
    if ( (*(_DWORD *)(v3 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v3 + 120), 5u);
    v16 = v21;
    *(_QWORD *)(v3 + 32) = v15;
    KiSetPriorityThread(v3, &v23, v16);
  }
  v17 = *(_BYTE **)(v3 + 232);
  if ( v17 && (*v17 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v17, v3);
  else
    *(_QWORD *)(v3 + 64) = 0LL;
  KiProcessDeferredReadyList(CurrentPrcb);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(v3, 0x531u, v8, v22, &v21);
  return v8;
}
