/*
 * XREFs of ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14026C404 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiExitThreadWaitReschedule @ 0x1402F39F4 (KiExitThreadWaitReschedule.c)
 *     KiEnterLongDpcProcessing @ 0x140314FA4 (KiEnterLongDpcProcessing.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KiApplyForegroundBoostThread @ 0x1404F46AC (KiApplyForegroundBoostThread.c)
 *     KiFinalizeCoreControlBlockAssignment @ 0x1405B2DCC (KiFinalizeCoreControlBlockAssignment.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BE298 (KiAdjustCoreIsolationReasonThread.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405C4100 (KiForceParkDutyCycleDpcCallback.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354 (EtwTraceXSchedulerPriorityKickSend.c)
 */

void __fastcall KiCompleteRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KPRCB *a2,
        struct _KTHREAD *a3,
        struct _KTHREAD_SCHEDULE_REASON_DATA *a4)
{
  char v4; // al
  _KPRCB *Prcb; // rsi
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rax
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  int v14; // edx
  int v15; // eax
  bool v16; // zf
  _DWORD *v17; // rcx
  __int64 Number; // rdi
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
