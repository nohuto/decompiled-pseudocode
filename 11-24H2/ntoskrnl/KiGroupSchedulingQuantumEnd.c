/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x1402D9F5C
 * Callers:
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x1402D8368 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1402D8768 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x1402D89A8 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402DB968 (KiInsertDeferredPreemptionApc.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402DBA34 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403BC7F0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiProcessScbTracingList @ 0x140449184 (KiProcessScbTracingList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int8 __fastcall KiGroupSchedulingQuantumEnd(struct _KPRCB *a1, unsigned __int64 *a2, __int64 a3, char a4)
{
  char v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int8 result; // al
  struct _KSCHEDULING_GROUP *v9; // rsi
  struct _KSCB *v10; // rdi
  _KTHREAD *NextThread; // r12
  struct _KSCB *v12; // r14
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // rbx
  unsigned __int16 PrcbLockFlags; // ax
  unsigned int Rank; // r9d
  union _KISOLATION_UNIT_LOCK_HANDLE *v17; // r8
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rbx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  bool v22; // r14
  char v23; // r15
  __int64 v24; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v28; // r8
  unsigned __int8 v29; // dl
  unsigned int j; // edx
  _KI_RESCHEDULE_CONTEXT_ENTRY *v31; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r11
  unsigned __int8 AllCompareThreadStateFlags; // r8
  struct _KTHREAD *Prcb; // rdx
  _KTHREAD *SListFaultAddress; // rcx
  unsigned int i; // r10d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v37; // rcx
  __int64 v38; // r15
  char v39; // [rsp+20h] [rbp-68h]
  __int16 v40; // [rsp+22h] [rbp-66h]
  struct _SINGLE_LIST_ENTRY *v41; // [rsp+28h] [rbp-60h] BYREF
  struct _SINGLE_LIST_ENTRY v42; // [rsp+30h] [rbp-58h] BYREF
  _KTHREAD *v43; // [rsp+38h] [rbp-50h]
  char v44; // [rsp+90h] [rbp+8h]

  v44 = 0;
  v6 = 0;
  v39 = 0;
  v7 = MEMORY[0xFFFFF78000000320];
  v41 = 0LL;
  result = (unsigned __int8)KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1LL, a2);
  if ( v7 > a1->GenerationTarget )
    return KiGroupSchedulingGenerationEnd(a1);
  v9 = *(struct _KSCHEDULING_GROUP **)(a3 + 104);
  if ( v9 )
  {
    v10 = (struct _KSCB *)((char *)v9 + a1->ScbOffset);
    if ( v10 )
    {
      NextThread = a1->NextThread;
      v12 = 0LL;
      v43 = NextThread;
      if ( NextThread )
      {
        SchedulingGroup = NextThread->SchedulingGroup;
        if ( SchedulingGroup )
          v12 = (struct _KSCB *)((char *)SchedulingGroup + a1->ScbOffset);
      }
      p_TracingListEntry = v41;
      while ( 1 )
      {
        PrcbLockFlags = v10->PrcbLockFlags;
        Rank = v10->Rank;
        v17 = (union _KISOLATION_UNIT_LOCK_HANDLE *)PrcbLockFlags;
        LOWORD(v17) = PrcbLockFlags & 2;
        LODWORD(v41) = Rank;
        v40 = (__int16)v17;
        if ( (PrcbLockFlags & 4) != 0 )
          break;
        KiComputeGroupSchedulingRank(v9, a1, v17, v10);
        LOWORD(v17) = v40;
        Rank = (unsigned int)v41;
        if ( (*(_BYTE *)&v10->0 & 4) != 0 )
        {
          v44 = 1;
          v6 = 1;
          if ( v12 == v10 )
            v39 = 1;
        }
LABEL_12:
        if ( (WORD2(xmmword_140FC6B50) & 0x4000) != 0 )
        {
          v26 = v10->PrcbLockFlags;
          if ( ((v26 >> 1) & 1) != ((_WORD)v17 != 0) || v10->Rank != Rank )
          {
            v10->PrcbLockFlags = v26 | 0x100;
            v10->TracingListEntry.Next = p_TracingListEntry;
            p_TracingListEntry = &v10->TracingListEntry;
          }
        }
        v10 = v10->Parent;
        if ( !v10 )
        {
          v18 = a3;
          v41 = p_TracingListEntry;
          v19 = *(_QWORD *)(a3 + 104);
          if ( v19 )
            v20 = v19 + a1->ScbOffset;
          else
            v20 = 0LL;
          StaticRescheduleContext = a1->StaticRescheduleContext;
          v42.Next = 0LL;
          memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
          KiStartRescheduleContext((__int64)StaticRescheduleContext, a2);
          if ( !v6 || v43 )
          {
            if ( v44 && v43 && v12 )
            {
              if ( v12 == (struct _KSCB *)v20 )
                goto LABEL_56;
              do
              {
                if ( !v12 )
                  break;
                v12 = v12->Parent;
              }
              while ( v12 != (struct _KSCB *)v20 );
              if ( (struct _KSCB *)v20 == v12 || v39 )
                goto LABEL_56;
            }
          }
          else
          {
            if ( KiIsThreadConstrainedBySchedulingGroup(a3)
              && !KiShouldPreemptionBeDeferred(v27)
              && KiCheckForMaxOverQuotaScb(v20) )
            {
              RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
              RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
              AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
              Prcb = (struct _KTHREAD *)RescheduleContextEntryForPrcb->Prcb;
              RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
              RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
              SListFaultAddress = (_KTHREAD *)Prcb->SListFaultAddress;
              *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
              RescheduleContextEntryForPrcb->NewThread = SListFaultAddress;
              if ( (AllCompareThreadStateFlags & 2) != 0 )
              {
                for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
                {
                  v37 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                       + 32 * i
                                                       + 8 * i);
                  if ( v37 != RescheduleContextEntryForPrcb )
                    KiAdjustRescheduleContextEntryForThreadRemoval(v37, Prcb, 0, 0);
                }
                StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
              }
            }
            else
            {
              v28 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
              v29 = v28->AllCompareThreadStateFlags;
              v28->___u5[0] |= 2u;
              v28->AllCompareThreadStateFlags = v29 | 8;
              if ( (v29 & 2) != 0 )
              {
                for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
                {
                  v31 = &StaticRescheduleContext->ProcessorEntries[j];
                  if ( v31 != v28 )
                  {
                    v31->AllCompareThreadStateFlags |= 8u;
                    v31->___u5[0] |= 2u;
                  }
                }
              }
            }
LABEL_56:
            KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v42);
          }
          v22 = 0;
          v23 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 0, &v42);
          result = KiIsThreadConstrainedBySchedulingGroup(a3);
          if ( result )
          {
            result = KiShouldPreemptionBeDeferred(v24);
            if ( result )
              v22 = (*(_DWORD *)(a3 + 120) & 0xC00) == 0;
          }
          Next = v42.Next;
          if ( v23 || v42.Next || v22 || v41 )
          {
            KiReleasePrcbLocksForIsolationUnit(a2);
            if ( v23 )
            {
              v38 = 0LL;
              if ( StaticRescheduleContext->ProcessorCount )
              {
                do
                {
                  KiCompleteRescheduleContextEntry(
                    (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                          + 32 * v38
                                                          + 8 * (unsigned int)v38),
                    a1,
                    0LL,
                    0LL);
                  v38 = (unsigned int)(v38 + 1);
                }
                while ( (unsigned int)v38 < StaticRescheduleContext->ProcessorCount );
                v18 = a3;
              }
              KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
            }
            if ( v41 )
              KiProcessScbTracingList(a1, &v41);
            if ( Next )
              KiReadyDeferredReadyList((__int64)a1, &v42);
            if ( v22 )
              KiInsertDeferredPreemptionApc(a1, v18, 0LL);
            return (unsigned __int8)KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1LL, a2);
          }
          return result;
        }
        v9 = (struct _KSCHEDULING_GROUP *)((char *)v10 - a1->ScbOffset);
      }
      if ( (PrcbLockFlags & 2) == 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(v10, v9) )
        {
          if ( (*(_BYTE *)&v10->0 & 1) != 0 )
            KiRemoveSchedulingGroupQueue(a1, v10, 1);
        }
        else
        {
          if ( v10->GenerationCycles < v10->RankCycleTarget )
          {
            LOWORD(v17) = v40;
            Rank = (unsigned int)v41;
            if ( !a4 )
              goto LABEL_12;
            goto LABEL_11;
          }
          KiRecomputeGroupSchedulingRank(v9, v10, a1);
          if ( v12 == v10 )
            v39 = 1;
        }
        LOWORD(v17) = v40;
        Rank = (unsigned int)v41;
      }
      v44 = 1;
LABEL_11:
      v6 = 1;
      goto LABEL_12;
    }
  }
  return result;
}
