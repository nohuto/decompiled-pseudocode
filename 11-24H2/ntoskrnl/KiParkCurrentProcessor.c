/*
 * XREFs of KiParkCurrentProcessor @ 0x1403D7544
 * Callers:
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAdjustRescheduleContextForParking @ 0x1402A65D0 (KiAdjustRescheduleContextForParking.c)
 *     KiIsPrcbThread @ 0x1402A6700 (KiIsPrcbThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14032B704 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiFlushReadyLists @ 0x1403BC52C (KiFlushReadyLists.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiProcessScbTracingList @ 0x140449184 (KiProcessScbTracingList.c)
 *     KiGetCurrentScheduledThreadProcessor @ 0x140463F58 (KiGetCurrentScheduledThreadProcessor.c)
 *     EtwTraceParkTransition @ 0x14064C254 (EtwTraceParkTransition.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KiParkCurrentProcessor(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        char a6)
{
  char v10; // r14
  unsigned __int64 GroupSetMember; // rsi
  __int64 v12; // rdx
  char v13; // al
  unsigned __int8 v14; // al
  __int64 CurrentScheduledThreadProcessor; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r9
  _KSHARED_READY_QUEUE *v20; // rdi
  _QWORD *v21; // rdx
  _KSCHEDULER_SUBNODE *SubNode; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  char v28; // di
  unsigned int i; // edi
  char result; // al
  struct _SINGLE_LIST_ENTRY v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h] BYREF
  __int128 v33; // [rsp+40h] [rbp-10h] BYREF
  char v34; // [rsp+80h] [rbp+30h] BYREF
  int v35; // [rsp+88h] [rbp+38h] BYREF

  v34 = 0;
  v32 = 0LL;
  if ( (a1->IdleState & 0x10) == 0 || (v10 = 1, a5 != 3) )
    v10 = 0;
  GroupSetMember = a1->GroupSetMember;
  if ( !v10 )
    _InterlockedXor64((volatile signed __int64 *)(a2 + 80), GroupSetMember);
  KiAdjustReadyQueueScanOwnerOnParkingChange((__int64)a1, a2, &v34);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 120));
  v13 = 48;
  if ( a5 != 3 )
    v13 = 16;
  v14 = a1->IdleState | v13;
  a1->IdleState = v14;
  if ( (v14 & 1) == 0 && !v10 )
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), ~GroupSetMember);
  if ( !v10 )
  {
    CurrentScheduledThreadProcessor = KiGetCurrentScheduledThreadProcessor(a1, v12, a1->IdleThread);
    KiUpdateThreadPriority(v17, v16, v18, 63, CurrentScheduledThreadProcessor == v18);
  }
  if ( KiGroupSchedulingEnabled )
    KiTransitionSchedulingGroupGeneration(a1, v12, MEMORY[0xFFFFF78000000320], 1, (struct _LIST_ENTRY **)&v32);
  SharedReadyQueue = a1->SharedReadyQueue;
  v31.Next = 0LL;
  KiFlushReadyLists((__int64)a1->DispatcherReadyListHead, &a1->ReadySummary, (__int64)&v31, (__int64)SharedReadyQueue);
  a1->ReadyThreadCount = 0;
  a1->ReadyQueueExpectedRunTime = 0LL;
  if ( !a1->ScbQueue.Root )
    _InterlockedAnd64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, ~a1->GroupSetMember);
  if ( v34 )
  {
    v20 = a1->SharedReadyQueue;
    v33 = 0LL;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v33 + 1) = v20;
      *(_QWORD *)&v33 = 0LL;
      v21 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v20, (__int64)&v33);
      if ( v21 )
        KxWaitForLockOwnerShip((__int64)&v33, v21);
    }
    else
    {
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( v20->Lock );
      }
    }
    KiFlushReadyLists((__int64)v20->ReadyListHead, &v20->ReadySummary, (__int64)&v31, (__int64)v20);
    SubNode = v20->SubNode;
    v23 = ~v20->Affinity;
    v20->ReadyThreadCount = 0;
    v20->ReadyQueueExpectedRunTime = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)&SubNode->StealableSharedReadyQueues, v23);
    if ( (KiVelocityFlags & 0x200000) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v20, 0LL);
      goto LABEL_32;
    }
    _m_prefetchw(&v33);
    v24 = v33;
    if ( !(_QWORD)v33 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v33 + 1), 0LL, (signed __int64)&v33) == &v33 )
        goto LABEL_32;
      v24 = KxWaitForLockChainValid((__int64 *)&v33);
    }
    *(_QWORD *)&v33 = 0LL;
    v25 = *((_QWORD *)&v33 + 1);
    if ( (((unsigned __int8)v25 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v24 + 8),
                                                     *((__int64 *)&v33 + 1))) & 4) != 0 )
      KeWakeAddressAll(v24 + 8, v25);
  }
LABEL_32:
  if ( !a6 && (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) == 0 && !KiIsPrcbThread((__int64)a1->CurrentThread) )
    _interlockedbittestandset((volatile signed __int32 *)(v26 + 120), 0xCu);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, a3);
  KiAdjustRescheduleContextForParking((__int64)StaticRescheduleContext, a1);
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v31);
  v28 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 1u, &v31);
  if ( !v10 )
    _InterlockedDecrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  KiReleasePrcbLocksForIsolationUnit(a3);
  if ( v28 )
  {
    for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      KiCompleteRescheduleContextEntry(
        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i),
        a1,
        0LL,
        0LL);
    KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
  }
  if ( v32 )
    KiProcessScbTracingList(a1, &v32);
  result = KiProcessDeferredReadyList(a1, &v31, 2u);
  if ( (WORD2(xmmword_140FC6B50) & 0x2000) != 0 )
    return EtwTraceParkTransition(a1, a5, a4);
  return result;
}
