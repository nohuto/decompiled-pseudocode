/*
 * XREFs of ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317FB0
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317E50 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x140318430 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403184D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadExemptFromForcePark @ 0x14031888C (KiIsThreadExemptFromForcePark.c)
 *     KiShouldPreemptionBeDeferred @ 0x140350F00 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 */

struct _KPRCB *__fastcall KiCanLocalReadyThreadBeScheduledToRescheduleContext(
        struct _KI_RESCHEDULE_CONTEXT *a1,
        unsigned __int64 NonParkedSet,
        unsigned __int64 a3,
        struct _KSHARED_READY_QUEUE *a4)
{
  struct _KPRCB *v5; // r15
  _KISOLATION_WIDTH v6; // eax
  struct _KTHREAD *v7; // rsi
  _KISOLATION_WIDTH MaximumThreadIsolationWidth; // ecx
  __int64 k; // r14
  _KPRCB *Prcb; // r13
  char *v13; // r12
  struct _KSHARED_READY_QUEUE *v14; // rax
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rbx
  int v16; // eax
  __int64 v17; // r9
  unsigned int CurrentRunTime; // r8d
  unsigned __int64 AvailableMask; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  __int64 v21; // rdx
  char v22; // al
  char Priority; // cl
  __int64 i; // rbx
  __int64 j; // rbx
  char *v26; // r14
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  v5 = (struct _KPRCB *)a3;
  v6 = (*(_DWORD *)(NonParkedSet + 120) >> 1) & 1;
  v7 = (struct _KTHREAD *)NonParkedSet;
  if ( v6 > a1->IsolationWidth )
    return 0LL;
  MaximumThreadIsolationWidth = a1->MaximumThreadIsolationWidth;
  if ( v6 < MaximumThreadIsolationWidth )
    v6 = MaximumThreadIsolationWidth;
  if ( v6 )
  {
    for ( i = 0LL; (unsigned int)i < a1->ProcessorCount; i = (unsigned int)(i + 1) )
    {
      if ( !KiDoesThreadDominateRescheduleContextEntry(
              (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)a1->ProcessorEntries + 32 * i + 8 * (unsigned int)i),
              v7,
              0,
              0LL) )
        return 0LL;
    }
    for ( j = 0LL; (unsigned int)j < a1->ProcessorCount; j = (unsigned int)(j + 1) )
    {
      v26 = (char *)a1 + 40 * j;
      if ( KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(
             (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)(v26 + 16),
             v7,
             v5,
             a4) )
      {
        return (struct _KPRCB *)*((_QWORD *)v26 + 2);
      }
    }
  }
  else
  {
    for ( k = 0LL; (unsigned int)k < a1->ProcessorCount; k = (unsigned int)(k + 1) )
    {
      Prcb = a1->ProcessorEntries[k].Prcb;
      v13 = (char *)a1 + 40 * k;
      if ( !KiForceParkingConfiguration
        || (Prcb->IdleState & 0x20) == 0
        || (unsigned __int8)KiIsThreadExemptFromForcePark(v7, NonParkedSet, a3) )
      {
        if ( !a4 && Prcb == v5 )
          goto LABEL_18;
        v14 = (struct _KSHARED_READY_QUEUE *)*((_QWORD *)v13 + 3);
        if ( v14 && v14 == a4 )
        {
          SchedulerSubNode = Prcb->SchedulerSubNode;
          v16 = KiComputeThreadQos(v7);
          CurrentRunTime = v7->CurrentRunTime;
          if ( CurrentRunTime <= v7->ExpectedRunTime )
            CurrentRunTime = v7->ExpectedRunTime;
          a3 = v7->HardwareFeedbackClass
             + SchedulerSubNode->WorkloadClasses
             * ((unsigned int)(CurrentRunTime >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * v16);
          AvailableMask = SchedulerSubNode->HeteroSets[a3].AvailableMask;
          NonParkedSet = SchedulerSubNode->NonParkedSet;
          if ( ((AvailableMask & Prcb->GroupSetMember) != 0 || (AvailableMask & a4->Affinity & NonParkedSet) == 0)
            && (Prcb == v5
             || (SchedulingGroup = v7->SchedulingGroup) == 0LL
             || !(unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(
                                    v7,
                                    (char *)SchedulingGroup + Prcb->ScbOffset,
                                    a3,
                                    v17)
             || !KiCheckForMaxOverQuotaScb(v21)
             || (unsigned __int8)KiShouldPreemptionBeDeferred(v7)) )
          {
LABEL_18:
            v27 = 0LL;
            if ( KiGroupSchedulingEnabled )
            {
              if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v13 + 16, v7, 0LL, &v27) )
                return (struct _KPRCB *)*((_QWORD *)v13 + 2);
            }
            else
            {
              v22 = v13[48];
              NonParkedSet = *((_QWORD *)v13 + 4);
              if ( (v22 & 1) != 0 )
                return (struct _KPRCB *)*((_QWORD *)v13 + 2);
              Priority = v7->Priority;
              if ( Priority > *(char *)(NonParkedSet + 195)
                || Priority == *(_BYTE *)(NonParkedSet + 195) && (v22 & 0x18) != 0 )
              {
                return (struct _KPRCB *)*((_QWORD *)v13 + 2);
              }
              if ( (v22 & 0x10) != 0 && Priority )
                return (struct _KPRCB *)*((_QWORD *)v13 + 2);
            }
          }
        }
      }
    }
  }
  return 0LL;
}
