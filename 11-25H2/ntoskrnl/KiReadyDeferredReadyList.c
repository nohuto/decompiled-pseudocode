/*
 * XREFs of KiReadyDeferredReadyList @ 0x140315830
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiEnterLongDpcProcessing @ 0x140314FA4 (KiEnterLongDpcProcessing.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KiAttemptToStealStandbyThread @ 0x14032E858 (KiAttemptToStealStandbyThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiProcessPendingForegroundBoosts @ 0x1404BAD50 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiSendSoftwareInterruptAffinity @ 0x140253D64 (KiSendSoftwareInterruptAffinity.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiReadyDeferredReadyList(struct _KPRCB *a1, struct _SINGLE_LIST_ENTRY *a2)
{
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  char v5; // bp
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v9; // edx
  char Level; // r8
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned int SingleTargetIndex; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+2Ch] [rbp-2Ch]

  Next = a2->Next;
  v5 = 0;
  if ( a2->Next )
  {
    a2->Next = Next->Next;
    do
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], a2, 0LL);
      Next = a2->Next;
      ++v5;
      if ( a2->Next )
        a2->Next = Next->Next;
      p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
      if ( (v5 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
    }
    while ( Next );
  }
  else
  {
    p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
  }
  result = p_DeferredDispatchInterrupts->TargetType;
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = 31;
      Level = p_DeferredDispatchInterrupts->Level;
      SingleTargetIndex = p_DeferredDispatchInterrupts->SingleTargetIndex;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      v11 = 6LL;
      v13 = 0LL;
      if ( Level != 1 )
        v9 = 47;
      result = HalpInterruptSendIpi(&v11, v9);
    }
    else
    {
      result = KiSendSoftwareInterruptAffinity(
                 &p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count,
                 p_DeferredDispatchInterrupts->Level);
    }
    if ( p_DeferredDispatchInterrupts->TargetType == 2 )
    {
      *(_QWORD *)&p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count = 2097153LL;
      result = (__int64)memset_0(
                          &p_DeferredDispatchInterrupts->MultipleTargetAffinity.8,
                          0,
                          sizeof(p_DeferredDispatchInterrupts->MultipleTargetAffinity.8));
    }
    p_DeferredDispatchInterrupts->TargetType = 0;
    p_DeferredDispatchInterrupts->SingleTargetIndex = 0xFFFF;
  }
  return result;
}
