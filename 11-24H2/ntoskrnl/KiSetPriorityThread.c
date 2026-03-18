/*
 * XREFs of KiSetPriorityThread @ 0x14024FBBC
 * Callers:
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x140209010 (KiBeginThreadWait.c)
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KiSatisfyThreadWait @ 0x14024E0B0 (KiSatisfyThreadWait.c)
 *     KiAbSetMinimumThreadPriority @ 0x14024E520 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14024EA60 (KiAbIoBoostOwners.c)
 *     KiExitThreadWait @ 0x14024EFB0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x14024F1A0 (KiPerformWaitDeferredWork.c)
 *     KiAbCpuBoostOwners @ 0x14024F2F0 (KiAbCpuBoostOwners.c)
 *     KiFastExitThreadWait @ 0x14024F840 (KiFastExitThreadWait.c)
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     KeAdjustWobPriority @ 0x1402A2074 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     KeRemoveQueueEx @ 0x1402A49D0 (KeRemoveQueueEx.c)
 *     KiWakePriQueueWaiter @ 0x1403248F0 (KiWakePriQueueWaiter.c)
 *     KiSetPriorityBoost @ 0x140338930 (KiSetPriorityBoost.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KiClearPriorityFloor @ 0x140448630 (KiClearPriorityFloor.c)
 *     KiSetDisableBoostThread @ 0x140451ED4 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14045201C (KeSetPriorityAndQuantumProcess.c)
 *     KeAdjustPriorityFloor @ 0x140474C2C (KeAdjustPriorityFloor.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14049E5FC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KeBoostPriorityThread @ 0x1404E7068 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404E7260 (KeSetBasePriorityThread.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140254D50 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402979F0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x140299450 (KiCommitRescheduleContext.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14030D3E8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14033817C (KiPrepareReadyThreadForRescheduling.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403B25A0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1403CA100 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x14043E030 (KiHvEnlightenedGuestPriorityKick.c)
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
      KxWaitForLockOwnerShip(&v38);
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
        v17 = KxWaitForLockChainValid(&v38, KiProcessorBlock, a3, a4);
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
