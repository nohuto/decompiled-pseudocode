/*
 * XREFs of KiSoftParkElectionUnparkProcessor @ 0x140201414
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x1402011F0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x140204120 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiStartRescheduleContext @ 0x140254D50 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402979F0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x140299450 (KiCommitRescheduleContext.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     EtwTraceParkTransition @ 0x14064DC44 (EtwTraceParkTransition.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall KiSoftParkElectionUnparkProcessor(struct _KPRCB *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r12
  char v5; // r14
  char v6; // bp
  _KCORE_CONTROL_BLOCK *v10; // rax
  __int64 ProcessorCount; // rcx
  _KPRCB **Prcbs; // r15
  _KPRCB *v13; // rsi
  unsigned int v14; // ebp
  unsigned __int64 v15; // rsi
  int v16; // r8d
  int v17; // r15d
  int v18; // edx
  char v19; // si
  __int64 i; // rsi
  unsigned __int8 TargetType; // al
  _KAFFINITY_EX *p_MultipleTargetAffinity; // rbx
  __int64 v23; // [rsp+30h] [rbp-48h]
  _QWORD v24[8]; // [rsp+38h] [rbp-40h] BYREF
  char v25; // [rsp+80h] [rbp+8h]

  StaticRescheduleContext = a1->StaticRescheduleContext;
  v5 = 0;
  v6 = 0;
  v25 = 0;
  v24[0] = a2 | 1;
  v10 = *(_KCORE_CONTROL_BLOCK **)(a2 + 36440);
  ProcessorCount = v10->ProcessorCount;
  Prcbs = v10->Prcbs;
  if ( (_BYTE)ProcessorCount )
  {
    v23 = v10->ProcessorCount;
    do
    {
      v13 = *Prcbs;
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v13->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(ProcessorCount) )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v13->PrcbLock );
      }
      ++Prcbs;
      --v23;
    }
    while ( v23 );
    v6 = 0;
  }
  if ( (*(_BYTE *)(a2 + 35) & 0x14) == 0x14 )
  {
    v15 = *(_QWORD *)(a2 + 200);
    _InterlockedXor64((volatile signed __int64 *)(a3 + 80), v15);
    KiAdjustReadyQueueScanOwnerOnParkingChange(a2, a3, 0LL);
    v17 = v16 + 1;
    LOBYTE(v18) = *(_BYTE *)(a2 + 35) & 0xCF;
    if ( ((unsigned __int8)v18 & (unsigned __int8)(v16 + 1)) != 0 )
    {
      *(_BYTE *)(a2 + 35) = v18;
      v19 = 0;
    }
    else
    {
      _InterlockedOr64((volatile signed __int64 *)(a3 + 8), v15);
      *(_BYTE *)(a2 + 35) = v18;
      v19 = v16 + 1;
      *(_BYTE *)(a2 + 14523) = v17;
      if ( (struct _KPRCB *)a2 != a1 )
        v5 = v16 + 1;
    }
    KiUpdateThreadPriority(a2, v18, *(_QWORD *)(a2 + 24), 0, v19);
    _InterlockedAdd16((volatile signed __int16 *)(MmWriteableSharedUserData + 874), v17);
    v6 = v17;
    if ( v19 )
    {
      memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
      KiStartRescheduleContext(StaticRescheduleContext, v24, 0LL);
      KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
      v25 = KiCommitRescheduleContext(StaticRescheduleContext, a1, 0LL, a4);
    }
  }
  else
  {
    v17 = 1;
  }
  KiReleasePrcbLocksForIsolationUnit(v24);
  if ( v25 )
  {
    for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(v17 + i) )
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
      if ( TargetType == (_BYTE)v17 )
      {
        if ( a1->DeferredDispatchInterrupts.SingleTargetIndex == *(_DWORD *)(a2 + 36) )
          goto LABEL_33;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
        KeAddProcessorAffinityEx(p_MultipleTargetAffinity);
      }
      else
      {
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      KeAddGroupAffinityEx(p_MultipleTargetAffinity, *(unsigned __int8 *)(a2 + 208), *(_QWORD *)(a2 + 200));
      goto LABEL_33;
    }
    a1->DeferredDispatchInterrupts.TargetType = v17;
    a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(a2 + 36);
  }
LABEL_33:
  if ( (WORD2(xmmword_140FC5B10) & 0x2000) != 0 && v6 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a3 + 120));
    EtwTraceParkTransition(a2, 0LL, 2LL);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a3 + 120));
  }
}
