/*
 * XREFs of ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402979F0
 * Callers:
 *     KiSoftParkElectionUnparkProcessor @ 0x140201414 (KiSoftParkElectionUnparkProcessor.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiSearchForNewThread @ 0x140296D10 (KiSearchForNewThread.c)
 *     KiExitThreadWaitReschedule @ 0x140297854 (KiExitThreadWaitReschedule.c)
 *     KiAttemptToStealStandbyThread @ 0x140297D94 (KiAttemptToStealStandbyThread.c)
 *     KiEnterLongDpcProcessing @ 0x140298AA4 (KiEnterLongDpcProcessing.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403B21E0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403C9208 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1404F6D4C (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B6C9C (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405C2378 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C8320 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x140297C7C (EtwTraceScheduleThread.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F9C1C (EtwTraceXSchedulerPriorityKickSend.c)
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
  struct _KTHREAD_SCHEDULE_REASON_DATA *v20; // r8

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
      v20 = a4;
    else
      v20 = 0LL;
    EtwTraceScheduleThread(NewThread, Prcb, v20);
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
            if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
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
