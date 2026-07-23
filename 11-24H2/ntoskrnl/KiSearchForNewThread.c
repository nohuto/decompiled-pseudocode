/*
 * XREFs of KiSearchForNewThread @ 0x1402A59F0
 * Callers:
 *     KiIdleSchedule @ 0x1402A5920 (KiIdleSchedule.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403D78B0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1404E0CE0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinL1SearchContext @ 0x1404E0D04 (KiSearchForNewThreadsWithinL1SearchContext.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E34 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_KTHREAD *__fastcall KiSearchForNewThread(struct _KPRCB *a1, char a2, unsigned __int64 *a3)
{
  _KTHREAD *NextThread; // rbx
  __int64 v4; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // r8
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rbp
  _KI_RESCHEDULE_CONTEXT_ENTRY *v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned __int8 AllCompareThreadStateFlags; // dl
  _KPRCB *Prcb; // rcx
  _KTHREAD *IdleThread; // rax
  unsigned int i; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rbx
  char v26; // r14
  unsigned __int64 v27; // rcx
  unsigned __int8 *v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  unsigned __int8 *v31; // rax
  __int64 v32; // rcx
  unsigned int j; // r14d
  unsigned __int8 IdleState; // al
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rbp
  unsigned __int64 GroupSetMember; // rcx
  unsigned __int64 v38; // [rsp+30h] [rbp-38h]
  unsigned __int64 v39; // [rsp+38h] [rbp-30h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v41; // [rsp+70h] [rbp+8h] BYREF

  NextThread = a1->NextThread;
  LODWORD(v4) = 0;
  v41 = 0LL;
  if ( !NextThread || NextThread == a1->IdleThread )
  {
    StaticRescheduleContext = a1->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, a3);
    if ( !a2 && !NextThread )
    {
      v14 = 0LL;
      v15 = 0;
      if ( StaticRescheduleContext->ProcessorCount )
      {
        while ( 1 )
        {
          v16 = v15;
          if ( StaticRescheduleContext->ProcessorEntries[v16].Prcb == a1 )
            break;
          if ( ++v15 >= StaticRescheduleContext->ProcessorCount )
            goto LABEL_20;
        }
        v14 = &StaticRescheduleContext->ProcessorEntries[v16];
      }
LABEL_20:
      v14->___u5[0] |= 2u;
      AllCompareThreadStateFlags = v14->AllCompareThreadStateFlags;
      Prcb = v14->Prcb;
      v14->CompareThread = v14->Prcb->IdleThread;
      v14->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
      IdleThread = Prcb->IdleThread;
      *((_BYTE *)&v14->0 + 1) &= ~1u;
      v14->NewThread = IdleThread;
      if ( (AllCompareThreadStateFlags & 2) != 0 )
      {
        for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
        {
          v21 = (__int64)&StaticRescheduleContext->ProcessorEntries[i];
          if ( (_KI_RESCHEDULE_CONTEXT_ENTRY *)v21 != v14 )
          {
            *(_BYTE *)(v21 + 34) |= 2u;
            v22 = *(_QWORD *)v21;
            *(_QWORD *)(v21 + 16) = *(_QWORD *)(*(_QWORD *)v21 + 24LL);
            *(_BYTE *)(v21 + 32) = *(_BYTE *)(v21 + 32) & 0xC0 | 5;
            v23 = *(_QWORD *)(v22 + 24);
            *(_BYTE *)(v21 + 33) &= ~1u;
            *(_QWORD *)(v21 + 24) = v23;
          }
        }
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v24 = KiCommitRescheduleContext(StaticRescheduleContext, a1, 1LL, &v41);
    v25 = v41;
    v26 = v24;
    if ( v41 || v24 )
    {
      KiReleasePrcbLocksForIsolationUnit(a3);
      if ( v26 )
      {
        for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * j + 8 * j),
            a1,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts);
      }
      if ( v25 )
        KiReadyDeferredReadyList(a1, &v41);
      KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 0LL, a3);
    }
    else
    {
      v27 = *a3;
      v28 = 0LL;
      v29 = 0LL;
      v30 = *a3 & 0xFFFFFFFFFFFFFFFEuLL;
      v39 = v30;
      if ( (v27 & 1) != 0 )
      {
        v31 = *(unsigned __int8 **)(v30 + 36440);
        v29 = *v31;
        v28 = v31 + 8;
        LODWORD(v32) = 0;
        if ( *v31 )
        {
          do
          {
            if ( v30 == *(_QWORD *)v28 )
            {
              v32 = (unsigned int)(v32 + 1);
              if ( (_DWORD)v32 == 1 )
                v30 = -1LL;
              else
                v30 = *(&v39 + v32);
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v28 + 48LL), 0LL);
            }
            v28 += 8;
            --v29;
          }
          while ( v29 );
        }
        *a3 &= ~1uLL;
      }
    }
    NextThread = a1->NextThread;
    if ( !NextThread || NextThread == a1->IdleThread )
    {
      IdleState = a1->IdleState;
      if ( (IdleState & 1) != 0 )
        __fastfail(0x21u);
      if ( KiForceParkingConfiguration && (IdleState & 8) != 0 )
        KiDisarmForceParkDutyCyclingIfNecessary(a1, 0LL, v28, v29);
      if ( (a1->IdleState & 0x10) != 0 )
      {
        if ( !NextThread )
          KiReleasePrcbLocksForIsolationUnit(a3);
      }
      else
      {
        KiReleasePrcbLocksForIsolationUnit(a3);
        NextThread = 0LL;
        if ( !a1->SearchContexts[0]
          || (NextThread = (_KTHREAD *)KiSearchForNewThreadsWithinL0SearchContext(a1, a3)) == 0LL )
        {
          if ( a1->SearchContexts[1] )
            NextThread = (_KTHREAD *)KiSearchForNewThreadsWithinL1SearchContext(a1, a3);
        }
        if ( !NextThread )
        {
          SchedulerSubNode = a1->SchedulerSubNode;
          GroupSetMember = a1->GroupSetMember;
          if ( (GroupSetMember & SchedulerSubNode->NonParkedSet) != 0
            && (GroupSetMember & SchedulerSubNode->SoftParkRequestSet) != 0 )
          {
            ExAcquireSpinLockExclusiveAtDpcLevel(&SchedulerSubNode->ParkLock);
            KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1LL, a3);
            NextThread = a1->NextThread;
            if ( NextThread && NextThread != a1->IdleThread )
            {
              KiDowngradeIsolationUnitLockHandle(a3, 0LL);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                SchedulerSubNode->ParkLock = 0;
              else
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SchedulerSubNode->ParkLock, retaddr);
              return NextThread;
            }
            KiParkCurrentProcessor(a1, 2, 1);
          }
          NextThread = 0LL;
          if ( !a2 )
          {
            KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 0LL, a3);
            return a1->NextThread;
          }
        }
      }
    }
  }
  else
  {
    v8 = *a3;
    v9 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
    v38 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v8 & 1) != 0 )
    {
      v10 = *(_BYTE **)(v9 + 36440);
      v11 = v10 + 8;
      if ( *v10 )
      {
        v12 = (unsigned __int8)*v10;
        do
        {
          if ( v9 == *(_QWORD *)v11 )
          {
            v4 = (unsigned int)(v4 + 1);
            if ( (_DWORD)v4 == 1 )
              v9 = -1LL;
            else
              v9 = *(&v38 + v4);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v11 + 48LL), 0LL);
          }
          v11 += 8;
          --v12;
        }
        while ( v12 );
      }
      *a3 &= ~1uLL;
    }
  }
  return NextThread;
}
