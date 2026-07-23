/*
 * XREFs of ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8CA0
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8B40 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1402A92A0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402A9340 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadExemptFromForcePark @ 0x1402A968C (KiIsThreadExemptFromForcePark.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 */

struct _KPRCB *__fastcall KiCanLocalReadyThreadBeScheduledToRescheduleContext(
        struct _KI_RESCHEDULE_CONTEXT *a1,
        struct _KTHREAD *a2,
        struct _KPRCB *a3,
        struct _KSHARED_READY_QUEUE *a4)
{
  _KISOLATION_WIDTH v6; // eax
  _KISOLATION_WIDTH MaximumThreadIsolationWidth; // ecx
  __int64 k; // r14
  _KPRCB *Prcb; // r13
  char *v13; // r12
  struct _KSHARED_READY_QUEUE *v14; // rax
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rbx
  int v16; // eax
  unsigned int CurrentRunTime; // r8d
  unsigned __int64 AvailableMask; // rcx
  __int64 v19; // rdx
  char v20; // al
  __int64 v21; // rdx
  char Priority; // cl
  __int64 i; // rbx
  __int64 j; // rbx
  char *v25; // r14
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v6 = (*((_DWORD *)&a2->0 + 1) >> 1) & 1;
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
              a2,
              0,
              0LL) )
        return 0LL;
    }
    for ( j = 0LL; (unsigned int)j < a1->ProcessorCount; j = (unsigned int)(j + 1) )
    {
      v25 = (char *)a1 + 40 * j;
      if ( KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(
             (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)(v25 + 16),
             (__int64)a2,
             a3,
             a4) )
      {
        return (struct _KPRCB *)*((_QWORD *)v25 + 2);
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
        || (unsigned __int8)KiIsThreadExemptFromForcePark(a2) )
      {
        if ( !a4 && Prcb == a3 )
          goto LABEL_18;
        v14 = (struct _KSHARED_READY_QUEUE *)*((_QWORD *)v13 + 3);
        if ( v14 && v14 == a4 )
        {
          SchedulerSubNode = Prcb->SchedulerSubNode;
          v16 = KiComputeThreadQos(a2);
          CurrentRunTime = a2->CurrentRunTime;
          if ( CurrentRunTime <= a2->ExpectedRunTime )
            CurrentRunTime = a2->ExpectedRunTime;
          AvailableMask = SchedulerSubNode->HeteroSets[a2->HardwareFeedbackClass
                                                     + SchedulerSubNode->WorkloadClasses
                                                     * ((unsigned int)(CurrentRunTime >= KiDynamicHeteroCpuPolicyExpectedCycles)
                                                      + 2 * v16)].AvailableMask;
          if ( ((AvailableMask & Prcb->GroupSetMember) != 0
             || (AvailableMask & a4->Affinity & SchedulerSubNode->NonParkedSet) == 0)
            && (Prcb == a3
             || !a2->SchedulingGroup
             || !(unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a2)
             || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v19, v19)
             || KiShouldPreemptionBeDeferred((__int64)a2)) )
          {
LABEL_18:
            v26 = 0LL;
            if ( KiGroupSchedulingEnabled )
            {
              if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v13 + 16, a2, 0LL, &v26) )
                return (struct _KPRCB *)*((_QWORD *)v13 + 2);
            }
            else
            {
              v20 = v13[48];
              v21 = *((_QWORD *)v13 + 4);
              if ( (v20 & 1) != 0 )
                return (struct _KPRCB *)*((_QWORD *)v13 + 2);
              Priority = a2->Priority;
              if ( Priority > *(char *)(v21 + 195) || Priority == *(_BYTE *)(v21 + 195) && (v20 & 0x18) != 0 )
                return (struct _KPRCB *)*((_QWORD *)v13 + 2);
              if ( (v20 & 0x10) != 0 && Priority )
                return (struct _KPRCB *)*((_QWORD *)v13 + 2);
            }
          }
        }
      }
    }
  }
  return 0LL;
}
