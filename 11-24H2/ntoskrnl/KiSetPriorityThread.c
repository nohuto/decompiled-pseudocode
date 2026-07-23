/*
 * XREFs of KiSetPriorityThread @ 0x1402801CC
 * Callers:
 *     KiSatisfyThreadWait @ 0x14027E6C0 (KiSatisfyThreadWait.c)
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14027F070 (KiAbIoBoostOwners.c)
 *     KiExitThreadWait @ 0x14027F5C0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x14027F7B0 (KiPerformWaitDeferredWork.c)
 *     KiAbCpuBoostOwners @ 0x14027F900 (KiAbCpuBoostOwners.c)
 *     KiFastExitThreadWait @ 0x14027FE50 (KiFastExitThreadWait.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KeAdjustWobPriority @ 0x1402D17A4 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1403305F0 (KiBeginThreadWait.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiClearPriorityFloor @ 0x140440D50 (KiClearPriorityFloor.c)
 *     KiSetDisableBoostThread @ 0x140446F84 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KeAdjustPriorityFloor @ 0x140470A3C (KeAdjustPriorityFloor.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402D8B94 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402DE7C8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403A0DB0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140432720 (KiHvEnlightenedGuestPriorityKick.c)
 */

char __fastcall KiSetPriorityThread(_KTHREAD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r13
  __int64 *v7; // rdx
  unsigned __int8 State; // r14
  struct _KPRCB *v9; // rsi
  volatile __int64 *v10; // r10
  char v11; // al
  __int64 NextProcessor; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  volatile signed __int32 *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // dl
  char v20; // al
  struct _KPRCB *CurrentPrcb; // rbx
  int Priority; // r12d
  int v23; // ecx
  int v24; // r14d
  int v25; // ecx
  int v26; // ecx
  _KTHREAD *NextThread; // rbx
  __int64 v28; // r12
  int v29; // ecx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT *v31; // rcx
  __int64 v32; // rbx
  struct _KPRCB *v33; // rdi
  int v35; // edx
  volatile __int64 *v36; // [rsp+30h] [rbp-28h]
  __int64 v37; // [rsp+38h] [rbp-20h] BYREF
  __int128 v38; // [rsp+40h] [rbp-18h] BYREF
  int v39; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+50h]
  int v41; // [rsp+B0h] [rbp+58h]
  struct _KPRCB *v42; // [rsp+B8h] [rbp+60h]

  v41 = a3;
  v40 = a2;
  v4 = a3;
  if ( a1->Priority == (_DWORD)a3 )
    return 0;
  StaticRescheduleContext = 0LL;
  v38 = 0LL;
  v37 = 0LL;
LABEL_3:
  v7 = KiProcessorBlock;
  while ( 1 )
  {
    while ( 1 )
    {
      State = a1->State;
      v9 = 0LL;
      LODWORD(v36) = 0;
      v10 = 0LL;
      if ( State == 1 )
        break;
      switch ( a1->WaitBlockFill6[68] )
      {
        case 2u:
LABEL_11:
          NextProcessor = a1->NextProcessor;
          if ( (int)NextProcessor >= 0 )
          {
            v9 = (struct _KPRCB *)KiProcessorBlock[NextProcessor];
            KiAcquirePrcbLocksForIsolationUnit(v9, 1LL, &v37);
            if ( a1 == v9->CurrentThread )
              goto LABEL_43;
            if ( a1->WaitBlockFill6[68] == 2 && a1->NextProcessor == (_DWORD)NextProcessor )
              __fastfail(0x4Au);
LABEL_42:
            KiReleasePrcbLocksForIsolationUnit(&v37);
            goto LABEL_3;
          }
          break;
        case 3u:
          v13 = a1->NextProcessor;
          if ( (int)v13 >= 0 )
          {
            v9 = (struct _KPRCB *)KiProcessorBlock[v13];
            KiAcquirePrcbLocksForIsolationUnit(v9, 1LL, &v37);
            if ( a1 == v9->NextThread )
              goto LABEL_43;
            if ( a1->WaitBlockFill6[68] == 3 && a1->NextProcessor == (_DWORD)v13 )
              __fastfail(0x1Eu);
            goto LABEL_42;
          }
          break;
        case 5u:
          v11 = a1->WaitRegister.Flags & 7;
          if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
            goto LABEL_44;
          State = 2;
          goto LABEL_11;
        default:
          goto LABEL_44;
      }
    }
    v14 = a1->NextProcessor;
    if ( (int)v14 >= 0 )
      break;
    v15 = (unsigned int)v14;
    LODWORD(v15) = v14 & 0x7FFFFFFF;
    v10 = *(volatile __int64 **)(KiProcessorBlock[v15] + 36424);
    v36 = v10;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v38 + 1) = *(_QWORD *)(KiProcessorBlock[v15] + 36424);
      *(_QWORD *)&v38 = 0LL;
      v7 = (__int64 *)_InterlockedExchange64(v10, (__int64)&v38);
      if ( !v7 )
        goto LABEL_31;
      KxWaitForLockOwnerShip(&v38, v7);
    }
    else
    {
      v39 = 0;
      v16 = (volatile signed __int32 *)v10;
      while ( _interlockedbittestandset64(v16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v39);
        while ( *(_QWORD *)v16 );
      }
      v4 = v41;
    }
    v10 = v36;
LABEL_31:
    if ( a1->WaitBlockFill6[68] == 1 && a1->NextProcessor == (_DWORD)v14 )
      goto LABEL_44;
    if ( (KiVelocityFlags & 0x200000) == 0 )
    {
      _InterlockedAnd64(v10, 0LL);
      goto LABEL_3;
    }
    _m_prefetchw(&v38);
    v17 = v38;
    if ( (_QWORD)v38 )
    {
LABEL_37:
      v18 = v17 + 8;
      *(_QWORD *)&v38 = 0LL;
      v19 = BYTE8(v38);
      v20 = v19 ^ _InterlockedExchange64((volatile __int64 *)(v17 + 8), *((__int64 *)&v38 + 1));
      v7 = KiProcessorBlock;
      if ( (v20 & 4) != 0 )
      {
        KeWakeAddressAll(v18, KiProcessorBlock, a3, a4);
        goto LABEL_3;
      }
    }
    else
    {
      v7 = KiProcessorBlock;
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v38 + 1), 0LL, (signed __int64)&v38) != &v38 )
      {
        v17 = KxWaitForLockChainValid(&v38);
        goto LABEL_37;
      }
    }
  }
  v9 = (struct _KPRCB *)KiProcessorBlock[v14];
  KiAcquirePrcbLocksForIsolationUnit(v9, 0LL, &v37);
  if ( a1->WaitBlockFill6[68] != 1 || a1->NextProcessor != (_DWORD)v14 )
    goto LABEL_42;
LABEL_43:
  v10 = 0LL;
LABEL_44:
  CurrentPrcb = KeGetCurrentPrcb();
  Priority = a1->Priority;
  v23 = State;
  v24 = 0;
  LOBYTE(v39) = 0;
  v42 = CurrentPrcb;
  LOBYTE(v41) = 0;
  v25 = v23 - 1;
  if ( !v25 )
  {
    KiRemoveThreadFromAnyReadyQueue(v9, v10, a1, (unsigned int)Priority);
    KiUpdateThreadPriority(0, v35, (_DWORD)a1, v4, 0);
    v28 = v40;
    KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v4, v40);
    goto LABEL_57;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    NextThread = v9->NextThread;
    KiUpdateThreadPriority((_DWORD)v9, (_DWORD)v7, (_DWORD)a1, v4, NextThread == 0LL);
    if ( !NextThread )
    {
      if ( v4 >= Priority )
      {
        if ( v4 > Priority )
        {
          CurrentPrcb = v42;
          v28 = v40;
          if ( a1->WaitBlockFill6[68] == 2 )
            v24 = v4;
          goto LABEL_57;
        }
      }
      else if ( a1->WaitBlockFill6[68] == 2 )
      {
        LOBYTE(v41) = 1;
      }
      else if ( (v9->ReadySummary | v9->SharedReadyQueue->ReadySummary) >> (v4 + 1) )
      {
        a1->WaitRegister.Flags |= 0x10u;
      }
    }
    CurrentPrcb = v42;
    goto LABEL_56;
  }
  if ( v26 == 1 )
  {
    KiUpdateThreadPriority((_DWORD)v9, (_DWORD)v7, (_DWORD)a1, v4, 1);
    if ( v4 >= Priority )
      v24 = v4;
    LOBYTE(v41) = v4 < Priority;
  }
  else
  {
    KiUpdateThreadPriority(0, (_DWORD)v7, (_DWORD)a1, v4, 0);
  }
LABEL_56:
  v28 = v40;
LABEL_57:
  KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( (_BYTE)v41 )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    KiStartRescheduleContext(StaticRescheduleContext, &v37, 0LL);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v9);
    RescheduleContextEntryForPrcb->___u5[0] |= 2u;
    KiSearchForNewThreadsForRescheduleContext(v31);
    LOBYTE(v39) = KiCommitRescheduleContext(StaticRescheduleContext, CurrentPrcb, 0LL, v28);
  }
  KiReleaseThreadStateLock(v29, (_DWORD)v9, (unsigned int)&v37, (_DWORD)v36, (__int64)&v38);
  if ( (_BYTE)v39 )
  {
    v32 = 0LL;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      v33 = v42;
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                + 32 * v32
                                                + 8 * (unsigned int)v32),
          v33,
          0LL,
          0LL);
        v32 = (unsigned int)(v32 + 1);
      }
      while ( (unsigned int)v32 < StaticRescheduleContext->ProcessorCount );
    }
    CurrentPrcb = v42;
    KiFlushSoftwareInterruptBatch(&v42->DeferredDispatchInterrupts);
  }
  if ( v24 > 0 )
    KiHvEnlightenedGuestPriorityKick(CurrentPrcb, v9, (unsigned int)v24);
  return 1;
}
