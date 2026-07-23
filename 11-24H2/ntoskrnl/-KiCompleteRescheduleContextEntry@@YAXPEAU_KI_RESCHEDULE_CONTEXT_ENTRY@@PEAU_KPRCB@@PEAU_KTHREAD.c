/*
 * XREFs of ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220
 * Callers:
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 *     KiAttemptToStealStandbyThread @ 0x1402A6884 (KiAttemptToStealStandbyThread.c)
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402E1088 (KiExitThreadWaitReschedule.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x140329B04 (KiSoftParkElectionUnparkProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F4630 (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B3F5C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BF948 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C5A50 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x1402A6768 (EtwTraceScheduleThread.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F74FC (EtwTraceXSchedulerPriorityKickSend.c)
 */

void __fastcall KiCompleteRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KPRCB *a2,
        struct _KTHREAD *a3,
        struct _KTHREAD_SCHEDULE_REASON_DATA *a4)
{
  char v4; // al
  _KPRCB *Prcb; // rdi
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rax
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  int v14; // edx
  int v15; // eax
  bool v16; // zf
  _DWORD *v17; // rcx
  __int64 Number; // rsi
  struct _KTHREAD *NewThread; // rcx
  __int64 *v20; // r8

  v4 = a1->___u6[0];
  Prcb = a1->Prcb;
  if ( (v4 & 0x10) != 0 || (v4 & 8) != 0 && Prcb->IdleHalt )
  {
    TargetType = a2->DeferredDispatchInterrupts.TargetType;
    if ( !TargetType )
    {
      a2->DeferredDispatchInterrupts.TargetType = 1;
      a2->DeferredDispatchInterrupts.SingleTargetIndex = Prcb->Number;
      goto LABEL_6;
    }
    if ( TargetType == 1 )
    {
      SingleTargetIndex = a2->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( SingleTargetIndex == Prcb->Number )
        goto LABEL_6;
      p_MultipleTargetAffinity = &a2->DeferredDispatchInterrupts.MultipleTargetAffinity;
      a2->DeferredDispatchInterrupts.TargetType = 2;
      KeAddProcessorAffinityEx(&a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
    }
    else
    {
      p_MultipleTargetAffinity = &a2->DeferredDispatchInterrupts.MultipleTargetAffinity;
    }
    KeAddGroupAffinityEx(&p_MultipleTargetAffinity->Count, Prcb->Group, Prcb->GroupSetMember);
  }
LABEL_6:
  if ( (a1->___u6[0] & 2) != 0 )
  {
    NewThread = a1->NewThread;
    if ( NewThread == a3 )
      v20 = (__int64 *)a4;
    else
      v20 = 0LL;
    EtwTraceScheduleThread((__int64)NewThread, (__int64)Prcb, v20);
  }
  if ( (a1->___u6[0] & 4) != 0 )
  {
    SchedulerAssist = (int *)Prcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( a2->SchedulerAssist )
      {
        if ( a2 != Prcb )
        {
          v14 = *SchedulerAssist;
          v15 = *SchedulerAssist & 0x40000;
          if ( (v14 & 0x100000) != 0 || v15 && (unsigned __int8)v14 < a1->KickPriority )
          {
            v16 = HvlpVirtualProcessorsIdentityMapped == 0;
            v17 = a2->SchedulerAssist;
            v17[3] = 2;
            Number = Prcb->Number;
            if ( v16 )
              LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
            v17[2] = Number;
            if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
              EtwTraceXSchedulerPriorityKickSend(Prcb->Number, 2LL);
            __writemsr(0x400000C2u, (unsigned int)Number);
          }
        }
      }
    }
  }
  if ( (a1->___u6[0] & 1) != 0 )
    _InterlockedDecrement16(&a1->NewThread->KeReferenceCount);
}
