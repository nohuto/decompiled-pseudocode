/*
 * XREFs of KiParkCurrentProcessor @ 0x1403E0254
 * Callers:
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     KeTransitionProcessorParkState @ 0x1403DFF18 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140275710 (KiTransitionSchedulingGroupGeneration.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x140313D98 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiFlushSharedReadyQueueReadyLists @ 0x140351F9C (KiFlushSharedReadyQueueReadyLists.c)
 *     KiFlushPrcbReadyLists @ 0x140351FF0 (KiFlushPrcbReadyLists.c)
 *     KiAdjustRescheduleContextForParking @ 0x140353A94 (KiAdjustRescheduleContextForParking.c)
 *     KiIsPrcbThread @ 0x140353BC0 (KiIsPrcbThread.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiProcessScbTracingList @ 0x140454D48 (KiProcessScbTracingList.c)
 *     KiGetCurrentScheduledThreadProcessor @ 0x14046CB50 (KiGetCurrentScheduledThreadProcessor.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceParkTransition @ 0x140641C78 (EtwTraceParkTransition.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall KiParkCurrentProcessor(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        char a6)
{
  unsigned int v6; // r15d
  char v11; // r14
  unsigned __int64 GroupSetMember; // rsi
  __int64 v13; // rdx
  char v14; // al
  unsigned __int8 v15; // al
  __int64 CurrentScheduledThreadProcessor; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdi
  struct _KPRCB **v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  char v26; // di
  unsigned int i; // edi
  char result; // al
  struct _SINGLE_LIST_ENTRY v29; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v30; // [rsp+38h] [rbp-18h] BYREF
  __int128 v31; // [rsp+40h] [rbp-10h] BYREF
  char v32; // [rsp+90h] [rbp+40h] BYREF
  int v33; // [rsp+98h] [rbp+48h] BYREF

  v6 = a5;
  v32 = 0;
  v29.Next = 0LL;
  v30 = 0LL;
  if ( (a1->IdleState & 0x10) == 0 || (v11 = 1, a5 != 3) )
    v11 = 0;
  GroupSetMember = a1->GroupSetMember;
  if ( !v11 )
    _InterlockedXor64((volatile signed __int64 *)(a2 + 80), GroupSetMember);
  KiAdjustReadyQueueScanOwnerOnParkingChange((__int64)a1, a2, &v32);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 120));
  v14 = 48;
  if ( v6 != 3 )
    v14 = 16;
  v15 = a1->IdleState | v14;
  a1->IdleState = v15;
  if ( (v15 & 1) == 0 && !v11 )
  {
    if ( (unsigned int)Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline() )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), ~GroupSetMember);
    }
    else
    {
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
      {
        do
          KeYieldProcessorEx(&v33);
        while ( *(_QWORD *)a2 );
      }
      *(_QWORD *)(a2 + 8) ^= GroupSetMember;
      _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
      v6 = a5;
    }
  }
  if ( !v11 )
  {
    CurrentScheduledThreadProcessor = KiGetCurrentScheduledThreadProcessor(a1, v13, a1->IdleThread);
    KiUpdateThreadPriority(v18, v17, v19, 63, CurrentScheduledThreadProcessor == v19);
  }
  if ( KiGroupSchedulingEnabled )
    KiTransitionSchedulingGroupGeneration(a1, v13, MEMORY[0xFFFFF78000000320], 1, &v30);
  KiFlushPrcbReadyLists((__int64)a1, (__int64)&v29);
  if ( v32 )
  {
    SharedReadyQueue = a1->SharedReadyQueue;
    v31 = 0LL;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v31 + 1) = SharedReadyQueue;
      *(_QWORD *)&v31 = 0LL;
      v21 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)SharedReadyQueue, (__int64)&v31);
      if ( v21 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&v31, v21);
    }
    else
    {
      a5 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
      {
        do
          KeYieldProcessorEx(&a5);
        while ( SharedReadyQueue->Lock );
      }
    }
    KiFlushSharedReadyQueueReadyLists((__int64)SharedReadyQueue, (__int64)&v29);
    if ( (KiVelocityFlags & 0x200000) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
      goto LABEL_36;
    }
    _m_prefetchw(&v31);
    v22 = v31;
    if ( !(_QWORD)v31 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v31 + 1), 0LL, (signed __int64)&v31) == &v31 )
        goto LABEL_36;
      v22 = KxWaitForLockChainValid((__int64 *)&v31);
    }
    *(_QWORD *)&v31 = 0LL;
    v23 = *((_QWORD *)&v31 + 1);
    if ( (((unsigned __int8)v23 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v22 + 8),
                                                     *((__int64 *)&v31 + 1))) & 4) != 0 )
      KeWakeAddressAll(v22 + 8, v23);
  }
LABEL_36:
  if ( !a6 && (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) == 0 && !KiIsPrcbThread((__int64)a1->CurrentThread) )
    _interlockedbittestandset((volatile signed __int32 *)(v24 + 120), 0xCu);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, a3);
  KiAdjustRescheduleContextForParking((__int64)StaticRescheduleContext, a1);
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v29);
  v26 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 1u, &v29);
  if ( !v11 )
    _InterlockedDecrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  KiReleasePrcbLocksForIsolationUnit(a3);
  if ( v26 )
  {
    for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
      KiCompleteRescheduleContextEntry(
        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i),
        a1,
        0LL,
        0LL);
    KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
  }
  if ( v30 )
    KiProcessScbTracingList(a1, &v30);
  result = KiProcessDeferredReadyList(a1, &v29, 2u);
  if ( (WORD2(xmmword_140FC5B10) & 0x2000) != 0 )
    return EtwTraceParkTransition(a1, v6, a4);
  return result;
}
