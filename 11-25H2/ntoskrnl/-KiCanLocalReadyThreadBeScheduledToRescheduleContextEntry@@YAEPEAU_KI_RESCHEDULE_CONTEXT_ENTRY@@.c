/*
 * XREFs of ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317E50
 * Callers:
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x140317FB0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 * Callees:
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     KiIsThreadExemptFromForcePark @ 0x14031888C (KiIsThreadExemptFromForcePark.c)
 *     KiShouldPreemptionBeDeferred @ 0x140350F00 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 */

unsigned __int8 __fastcall KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KTHREAD *a2,
        struct _KPRCB *a3,
        struct _KSHARED_READY_QUEUE *a4)
{
  _KPRCB *Prcb; // rbx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v6; // r9
  struct _KSHARED_READY_QUEUE *SharedReadyQueue; // rax
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdi
  int v11; // eax
  __int64 v12; // r9
  unsigned int CurrentRunTime; // r8d
  __int64 v14; // r8
  unsigned __int64 AvailableMask; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  __int64 v18; // rdx

  Prcb = a1->Prcb;
  v6 = a1;
  if ( KiForceParkingConfiguration
    && (Prcb->IdleState & 0x20) != 0
    && !(unsigned __int8)KiIsThreadExemptFromForcePark(a2, a2, a3) )
  {
    return 0;
  }
  if ( !a4 && Prcb == a3 )
    return 1;
  SharedReadyQueue = v6->SharedReadyQueue;
  if ( !SharedReadyQueue || SharedReadyQueue != a4 )
    return 0;
  SchedulerSubNode = Prcb->SchedulerSubNode;
  v11 = KiComputeThreadQos(a2);
  CurrentRunTime = a2->CurrentRunTime;
  if ( CurrentRunTime <= a2->ExpectedRunTime )
    CurrentRunTime = a2->ExpectedRunTime;
  if ( ((v14 = a2->HardwareFeedbackClass
             + SchedulerSubNode->WorkloadClasses
             * ((unsigned int)(CurrentRunTime >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * v11),
         AvailableMask = SchedulerSubNode->HeteroSets[v14].AvailableMask,
         (AvailableMask & Prcb->GroupSetMember) != 0)
     || (AvailableMask & a4->Affinity & SchedulerSubNode->NonParkedSet) == 0)
    && (Prcb == a3
     || (SchedulingGroup = a2->SchedulingGroup) == 0LL
     || !(unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(
                            a2,
                            (char *)SchedulingGroup + Prcb->ScbOffset,
                            v14,
                            v12)
     || !KiCheckForMaxOverQuotaScb(v18)
     || (unsigned __int8)KiShouldPreemptionBeDeferred(a2)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
