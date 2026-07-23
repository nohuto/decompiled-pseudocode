/*
 * XREFs of ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8B40
 * Callers:
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8CA0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 * Callees:
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KiIsThreadExemptFromForcePark @ 0x1402A968C (KiIsThreadExemptFromForcePark.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 */

unsigned __int8 __fastcall KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        __int64 a2,
        struct _KPRCB *a3,
        struct _KSHARED_READY_QUEUE *a4)
{
  _KPRCB *Prcb; // rbx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v6; // r9
  struct _KSHARED_READY_QUEUE *SharedReadyQueue; // rax
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdi
  int v11; // eax
  unsigned int v12; // r8d
  unsigned __int64 AvailableMask; // rcx
  __int64 v15; // rdx

  Prcb = a1->Prcb;
  v6 = a1;
  if ( KiForceParkingConfiguration
    && (Prcb->IdleState & 0x20) != 0
    && !(unsigned __int8)KiIsThreadExemptFromForcePark(a2) )
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
  v12 = *(_DWORD *)(a2 + 80);
  if ( v12 <= *(_DWORD *)(a2 + 84) )
    v12 = *(_DWORD *)(a2 + 84);
  if ( ((AvailableMask = SchedulerSubNode->HeteroSets[*(unsigned __int8 *)(a2 + 517)
                                                    + SchedulerSubNode->WorkloadClasses
                                                    * ((unsigned int)(v12 >= KiDynamicHeteroCpuPolicyExpectedCycles)
                                                     + 2 * v11)].AvailableMask,
         (AvailableMask & Prcb->GroupSetMember) != 0)
     || (AvailableMask & a4->Affinity & SchedulerSubNode->NonParkedSet) == 0)
    && (Prcb == a3
     || !*(_QWORD *)(a2 + 104)
     || !(unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a2)
     || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v15, v15)
     || KiShouldPreemptionBeDeferred(a2)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
