/*
 * XREFs of KiSetPriorityThread @ 0x1402E7840
 * Callers:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KiSetDisableBoostThread @ 0x140269078 (KiSetDisableBoostThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14029BB60 (KiAbThreadRemoveBoostsSlow.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x14029EC50 (KeRemoveQueueEx.c)
 *     KiExitThreadWait @ 0x1402E5EA0 (KiExitThreadWait.c)
 *     KiPerformWaitDeferredWork @ 0x1402E6090 (KiPerformWaitDeferredWork.c)
 *     KiAbIoBoostOwners @ 0x1402E61E0 (KiAbIoBoostOwners.c)
 *     KiWakePriQueueWaiter @ 0x1402E6BE0 (KiWakePriQueueWaiter.c)
 *     KiFastExitThreadWait @ 0x1402E7020 (KiFastExitThreadWait.c)
 *     KiAbCpuBoostOwners @ 0x1402E72F0 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402E9E70 (KiAbSetMinimumThreadPriority.c)
 *     KiSatisfyThreadWait @ 0x1402F4960 (KiSatisfyThreadWait.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KiBeginThreadWait @ 0x1403059F0 (KiBeginThreadWait.c)
 *     KeAdjustWobPriority @ 0x140306698 (KeAdjustWobPriority.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     KiSetPriorityBoost @ 0x140326B50 (KiSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     KiClearPriorityFloor @ 0x14044D0F8 (KiClearPriorityFloor.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 *     KeAdjustPriorityFloor @ 0x140475A2C (KeAdjustPriorityFloor.c)
 *     KeBoostPriorityThread @ 0x1404B71EC (KeBoostPriorityThread.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140271CE0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402F0F0C (KiPrepareReadyThreadForRescheduling.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140315960 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140352764 (KiRemoveThreadFromAnyReadyQueue.c)
 */

char __fastcall KiSetPriorityThread(_BYTE *a1, __int64 a2, int a3)
{
  int v3; // eax
  char v6; // al
  int v7; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  int v9; // r15d
  int v10; // r12d
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r13
  struct _KPRCB *v12; // rdi
  __int64 v13; // r12
  _KTHREAD *NextThread; // rbx
  int v15; // edx
  unsigned __int64 v16; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT *v18; // rcx
  unsigned int i; // ebx
  struct _KPRCB *v21; // [rsp+30h] [rbp-38h]
  volatile __int64 *v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h] BYREF
  _OWORD v24[2]; // [rsp+48h] [rbp-20h] BYREF
  char v25; // [rsp+B0h] [rbp+48h]
  bool v27; // [rsp+C0h] [rbp+58h]
  struct _KPRCB *v28; // [rsp+C8h] [rbp+60h] BYREF

  v3 = (char)a1[195];
  v28 = 0LL;
  v22 = 0LL;
  if ( v3 == a3 )
    return 0;
  v23 = 0LL;
  v24[0] = 0LL;
  v6 = KiAcquireThreadStateLockForWrite((__int64)a1, (__int64 *)&v28, &v23, &v22, (volatile signed __int64 **)v24);
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  v10 = (char)a1[195];
  StaticRescheduleContext = 0LL;
  v25 = 0;
  v21 = CurrentPrcb;
  v27 = 0;
  if ( v6 == 1 )
  {
    v12 = v28;
    KiRemoveThreadFromAnyReadyQueue(v28, v22, a1, (unsigned int)v10);
    KiUpdateThreadPriority(0, v15, (_DWORD)a1, a3, 0);
    v13 = a2;
    KiPrepareReadyThreadForRescheduling(a1, (unsigned int)a3, a2);
  }
  else
  {
    if ( v6 == 2 )
    {
      v12 = v28;
      NextThread = v28->NextThread;
      KiUpdateThreadPriority((_DWORD)v28, v7, (_DWORD)a1, a3, NextThread == 0LL);
      if ( !NextThread )
      {
        if ( a3 >= v10 )
        {
          if ( a3 > v10 )
          {
            v12 = v28;
            CurrentPrcb = v21;
            v13 = a2;
            if ( a1[388] == 2 )
              v9 = a3;
            goto LABEL_21;
          }
        }
        else
        {
          v12 = v28;
          if ( a1[388] != 2 )
          {
            CurrentPrcb = v21;
            v13 = a2;
            if ( (v28->ReadySummary | v28->SharedReadyQueue->ReadySummary) >> (a3 + 1) )
              a1[112] |= 0x10u;
            goto LABEL_21;
          }
          v27 = 1;
        }
      }
      CurrentPrcb = v21;
    }
    else if ( v6 == 3 )
    {
      v12 = v28;
      KiUpdateThreadPriority((_DWORD)v28, v7, (_DWORD)a1, a3, 1);
      if ( a3 >= v10 )
        v9 = a3;
      v27 = a3 < v10;
    }
    else
    {
      KiUpdateThreadPriority(0, v7, (_DWORD)a1, a3, 0);
      v12 = v28;
    }
    v13 = a2;
  }
LABEL_21:
  KiUpdateSharedReadyQueueAffinityThread(0LL, (__int64)a1);
  if ( v27 )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v23);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, v12);
    RescheduleContextEntryForPrcb->___u5[0] |= 2u;
    KiSearchForNewThreadsForRescheduleContext(v18);
    v25 = KiCommitRescheduleContext(StaticRescheduleContext, CurrentPrcb, 0LL, v13);
  }
  KiReleaseThreadStateLock(v16, (__int64)v12, &v23, v22, (volatile signed __int64 **)v24);
  if ( v25 )
  {
    for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      KiCompleteRescheduleContextEntry(
        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i),
        v21,
        0LL,
        0LL);
    CurrentPrcb = v21;
    KiFlushSoftwareInterruptBatch((char *)&v21->DeferredDispatchInterrupts);
  }
  if ( v9 > 0 )
    KiHvEnlightenedGuestPriorityKick(CurrentPrcb, v12, (unsigned int)v9);
  return 1;
}
