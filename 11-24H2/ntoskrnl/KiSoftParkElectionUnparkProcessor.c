/*
 * XREFs of KiSoftParkElectionUnparkProcessor @ 0x140329B04
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x1403298E0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14032B704 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     EtwTraceParkTransition @ 0x14064C254 (EtwTraceParkTransition.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiSoftParkElectionUnparkProcessor(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r12
  char v5; // r14
  char v6; // bp
  _BYTE *v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rsi
  unsigned int v13; // ebp
  unsigned __int64 v14; // rsi
  int v15; // r8d
  int v16; // r15d
  __int64 v17; // rdx
  char v18; // si
  __int64 i; // rsi
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // rbx
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int64 v24[8]; // [rsp+38h] [rbp-40h] BYREF
  char v25; // [rsp+80h] [rbp+8h]

  StaticRescheduleContext = a1->StaticRescheduleContext;
  v5 = 0;
  v6 = 0;
  v25 = 0;
  v24[0] = a2 | 1;
  v10 = *(_BYTE **)(a2 + 36440);
  v11 = (__int64 *)(v10 + 8);
  if ( *v10 )
  {
    v23 = (unsigned __int8)*v10;
    do
    {
      v12 = *v11;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 48), 0LL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v12 + 48) );
      }
      ++v11;
      --v23;
    }
    while ( v23 );
    v6 = 0;
  }
  if ( (*(_BYTE *)(a2 + 35) & 0x14) == 0x14 )
  {
    v14 = *(_QWORD *)(a2 + 200);
    _InterlockedXor64((volatile signed __int64 *)(a3 + 80), v14);
    KiAdjustReadyQueueScanOwnerOnParkingChange(a2, a3, 0LL);
    v16 = v15 + 1;
    LOBYTE(v17) = *(_BYTE *)(a2 + 35) & 0xCF;
    if ( ((unsigned __int8)v17 & (unsigned __int8)(v15 + 1)) != 0 )
    {
      *(_BYTE *)(a2 + 35) = v17;
      v18 = 0;
    }
    else
    {
      _InterlockedOr64((volatile signed __int64 *)(a3 + 8), v14);
      *(_BYTE *)(a2 + 35) = v17;
      v18 = v15 + 1;
      *(_BYTE *)(a2 + 14523) = v16;
      if ( (struct _KPRCB *)a2 != a1 )
        v5 = v15 + 1;
    }
    KiUpdateThreadPriority(a2, v17, *(_QWORD *)(a2 + 24), 0, v18);
    _InterlockedAdd16((volatile signed __int16 *)(MmWriteableSharedUserData + 874), v16);
    v6 = v16;
    if ( v18 )
    {
      memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
      KiStartRescheduleContext((__int64)StaticRescheduleContext, v24);
      KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, a4);
      v25 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 0, a4);
    }
  }
  else
  {
    v16 = 1;
  }
  KiReleasePrcbLocksForIsolationUnit(v24);
  if ( v25 )
  {
    for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(v16 + i) )
      KiCompleteRescheduleContextEntry(
        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                              + 32 * i
                                              + 8 * (unsigned int)i),
        a1,
        0LL,
        0LL);
  }
  if ( v5 )
  {
    TargetType = a1->DeferredDispatchInterrupts.TargetType;
    if ( TargetType )
    {
      if ( TargetType == (_BYTE)v16 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == *(_DWORD *)(a2 + 36) )
          goto LABEL_33;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
        KeAddProcessorAffinityEx(&p_MultipleTargetAffinity->Count, SingleTargetIndex);
      }
      else
      {
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      KeAddGroupAffinityEx(&p_MultipleTargetAffinity->Count, *(unsigned __int8 *)(a2 + 208), *(_QWORD *)(a2 + 200));
      goto LABEL_33;
    }
    a1->DeferredDispatchInterrupts.TargetType = v16;
    a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(a2 + 36);
  }
LABEL_33:
  if ( (WORD2(xmmword_140FC6B50) & 0x2000) != 0 && v6 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 120));
    EtwTraceParkTransition(a2, 0LL, 2LL);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a3 + 120));
  }
}
