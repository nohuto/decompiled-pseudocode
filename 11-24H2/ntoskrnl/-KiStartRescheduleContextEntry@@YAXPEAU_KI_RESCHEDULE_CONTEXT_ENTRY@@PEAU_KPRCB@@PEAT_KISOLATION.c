/*
 * XREFs of ?KiStartRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KTHREAD@@@Z @ 0x140285600
 * Callers:
 *     KiAdjustRescheduleContextForProcessorAddition @ 0x1405C54F8 (KiAdjustRescheduleContextForProcessorAddition.c)
 * Callees:
 *     KiTryToUpdateVPBackingThreadPriorityBeforePreemption @ 0x140285700 (KiTryToUpdateVPBackingThreadPriorityBeforePreemption.c)
 */

void __fastcall KiStartRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KPRCB *a2,
        union _KISOLATION_UNIT_LOCK_HANDLE *a3,
        struct _KTHREAD *a4)
{
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  _KTHREAD *NextThread; // rcx
  unsigned __int8 AllCompareThreadStateFlags; // dl
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // dl
  unsigned __int8 IdleState; // al
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdx
  unsigned __int64 NonParkedSet; // rax

  a1->Prcb = a2;
  a1->SharedReadyQueue = 0LL;
  SharedReadyQueue = a2->SharedReadyQueue;
  if ( SharedReadyQueue )
  {
    IdleState = a2->IdleState;
    if ( (IdleState & 0x10) == 0
      || ((SchedulerSubNode = a2->SchedulerSubNode, KiForceParkingConfiguration) && (IdleState & 0x20) != 0
        ? (NonParkedSet = ~SchedulerSubNode->ForceParkRequestSet)
        : (NonParkedSet = SchedulerSubNode->NonParkedSet),
          (NonParkedSet & SharedReadyQueue->Affinity) == 0) )
    {
      a1->SharedReadyQueue = a2->SharedReadyQueue;
    }
  }
  NextThread = a2->NextThread;
  a1->CompareThread = NextThread;
  if ( !NextThread )
  {
    NextThread = a2->CurrentThread;
    a1->CompareThread = NextThread;
  }
  if ( a2->NextThread == NextThread )
  {
    a1->AllCompareThreadStateFlags |= 4u;
  }
  else
  {
    AllCompareThreadStateFlags = a1->AllCompareThreadStateFlags;
    if ( a2 == KeGetCurrentPrcb() )
      v9 = AllCompareThreadStateFlags | 4;
    else
      v9 = AllCompareThreadStateFlags & 0xFB;
    a1->AllCompareThreadStateFlags = v9;
  }
  KiTryToUpdateVPBackingThreadPriorityBeforePreemption((ULONG_PTR)NextThread);
  v10 = ((a2->IdleState & 1) == 0) | a1->AllCompareThreadStateFlags & 0xFE;
  a1->AllCompareThreadStateFlags = v10;
  a1->AllCompareThreadStateFlags = v10 ^ (v10 ^ (a2->PriorityState->AllFields >> 6)) & 2;
}
