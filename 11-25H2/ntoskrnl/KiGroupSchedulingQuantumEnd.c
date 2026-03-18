/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x1403509D0
 * Callers:
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x140350788 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x140350974 (-KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z.c)
 *     KiShouldPreemptionBeDeferred @ 0x140350F00 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiInsertDeferredPreemptionApc @ 0x140351CBC (KiInsertDeferredPreemptionApc.c)
 *     ?KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z @ 0x140351D88 (-KiRecomputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KSCB@@PEAU_KPRCB@@@Z.c)
 *     ?KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z @ 0x140353968 (-KiRemoveSchedulingGroupQueue@@YAXPEAU_KPRCB@@PEAU_KSCB@@E@Z.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140353BF0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiProcessScbTracingList @ 0x140454D48 (KiProcessScbTracingList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_BYTE *__fastcall KiGroupSchedulingQuantumEnd(struct _KPRCB *a1, unsigned __int64 *a2, __int64 a3, char a4)
{
  char v7; // r15
  unsigned __int64 v8; // rbx
  _BYTE *result; // rax
  __int64 v10; // r9
  struct _KSCHEDULING_GROUP *v11; // rsi
  struct _KSCB *v12; // rdi
  _KTHREAD *NextThread; // r12
  struct _KSCB *v14; // r14
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  struct _SINGLE_LIST_ENTRY *p_TracingListEntry; // rbx
  unsigned __int16 PrcbLockFlags; // ax
  unsigned int Rank; // r9d
  union _KISOLATION_UNIT_LOCK_HANDLE *v19; // r8
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // r14
  char v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  unsigned __int16 v34; // dx
  __int64 v35; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v36; // r8
  unsigned __int8 v37; // dl
  unsigned int j; // edx
  _KI_RESCHEDULE_CONTEXT_ENTRY *v39; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r11
  unsigned __int8 AllCompareThreadStateFlags; // r8
  struct _KTHREAD *Prcb; // rdx
  _KTHREAD *SListFaultAddress; // rcx
  unsigned int i; // r10d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v45; // rcx
  __int64 v46; // r15
  char v47; // [rsp+20h] [rbp-68h]
  __int16 v48; // [rsp+22h] [rbp-66h]
  struct _SINGLE_LIST_ENTRY *v49; // [rsp+28h] [rbp-60h] BYREF
  struct _SINGLE_LIST_ENTRY v50; // [rsp+30h] [rbp-58h] BYREF
  _KTHREAD *v51; // [rsp+38h] [rbp-50h]
  char v52; // [rsp+90h] [rbp+8h]

  v52 = 0;
  v7 = 0;
  v47 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  v49 = 0LL;
  result = KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, a2);
  if ( v8 > a1->GenerationTarget )
    return (_BYTE *)KiGroupSchedulingGenerationEnd(a1, (__int64 *)a2, v8, v10);
  v11 = *(struct _KSCHEDULING_GROUP **)(a3 + 104);
  if ( v11 )
  {
    v12 = (struct _KSCB *)((char *)v11 + a1->ScbOffset);
    if ( v12 )
    {
      NextThread = a1->NextThread;
      v14 = 0LL;
      v51 = NextThread;
      if ( NextThread )
      {
        SchedulingGroup = NextThread->SchedulingGroup;
        if ( SchedulingGroup )
          v14 = (struct _KSCB *)((char *)SchedulingGroup + a1->ScbOffset);
      }
      p_TracingListEntry = v49;
      while ( 1 )
      {
        PrcbLockFlags = v12->PrcbLockFlags;
        Rank = v12->Rank;
        v19 = (union _KISOLATION_UNIT_LOCK_HANDLE *)PrcbLockFlags;
        LOWORD(v19) = PrcbLockFlags & 2;
        LODWORD(v49) = Rank;
        v48 = (__int16)v19;
        if ( (PrcbLockFlags & 4) != 0 )
          break;
        KiComputeGroupSchedulingRank(v11, a1, v19, v12);
        LOWORD(v19) = v48;
        Rank = (unsigned int)v49;
        if ( (*(_BYTE *)&v12->0 & 4) != 0 )
        {
          v52 = 1;
          v7 = 1;
          if ( v14 == v12 )
            v47 = 1;
        }
LABEL_12:
        if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
        {
          v34 = v12->PrcbLockFlags;
          if ( ((v34 >> 1) & 1) != ((_WORD)v19 != 0) || v12->Rank != Rank )
          {
            v12->PrcbLockFlags = v34 | 0x100;
            v12->TracingListEntry.Next = p_TracingListEntry;
            p_TracingListEntry = &v12->TracingListEntry;
          }
        }
        v12 = v12->Parent;
        if ( !v12 )
        {
          v20 = a3;
          v49 = p_TracingListEntry;
          v21 = *(_QWORD *)(a3 + 104);
          if ( v21 )
            v22 = v21 + a1->ScbOffset;
          else
            v22 = 0LL;
          StaticRescheduleContext = a1->StaticRescheduleContext;
          v50.Next = 0LL;
          memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
          KiStartRescheduleContext((__int64)StaticRescheduleContext, a2);
          if ( !v7 || v51 )
          {
            if ( v52 && v51 && v14 )
            {
              if ( v14 == (struct _KSCB *)v22 )
                goto LABEL_60;
              do
              {
                if ( !v14 )
                  break;
                v14 = v14->Parent;
              }
              while ( v14 != (struct _KSCB *)v22 );
              if ( (struct _KSCB *)v22 == v14 || v47 )
                goto LABEL_60;
            }
          }
          else
          {
            if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a3, v24, v25, v26)
              && !(unsigned __int8)KiShouldPreemptionBeDeferred(v35)
              && KiCheckForMaxOverQuotaScb(v22) )
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
                  v45 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                       + 32 * i
                                                       + 8 * i);
                  if ( v45 != RescheduleContextEntryForPrcb )
                    KiAdjustRescheduleContextEntryForThreadRemoval(v45, Prcb, 0, 0);
                }
                StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
              }
            }
            else
            {
              v36 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
              v37 = v36->AllCompareThreadStateFlags;
              v36->___u5[0] |= 2u;
              v36->AllCompareThreadStateFlags = v37 | 8;
              if ( (v37 & 2) != 0 )
              {
                for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
                {
                  v39 = &StaticRescheduleContext->ProcessorEntries[j];
                  if ( v39 != v36 )
                  {
                    v39->AllCompareThreadStateFlags |= 8u;
                    v39->___u5[0] |= 2u;
                  }
                }
              }
            }
LABEL_60:
            KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v50);
          }
          v27 = 0;
          v28 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 0, &v50);
          result = (_BYTE *)KiIsThreadConstrainedBySchedulingGroup(a3, v29, v30, v31);
          if ( (_BYTE)result )
          {
            result = (_BYTE *)KiShouldPreemptionBeDeferred(v32);
            if ( (_BYTE)result )
              v27 = (*(_DWORD *)(a3 + 120) & 0xC00) == 0;
          }
          Next = v50.Next;
          if ( v28 || v50.Next || v27 || v49 )
          {
            KiReleasePrcbLocksForIsolationUnit((__int64 *)a2);
            if ( v28 )
            {
              v46 = 0LL;
              if ( StaticRescheduleContext->ProcessorCount )
              {
                do
                {
                  KiCompleteRescheduleContextEntry(
                    (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                          + 32 * v46
                                                          + 8 * (unsigned int)v46),
                    a1,
                    0LL,
                    0LL);
                  v46 = (unsigned int)(v46 + 1);
                }
                while ( (unsigned int)v46 < StaticRescheduleContext->ProcessorCount );
                v20 = a3;
              }
              KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
            }
            if ( v49 )
              KiProcessScbTracingList(a1, &v49);
            if ( Next )
              KiReadyDeferredReadyList(a1, &v50);
            if ( v27 )
              KiInsertDeferredPreemptionApc(a1, v20, 0LL);
            return KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, a2);
          }
          return result;
        }
        v11 = (struct _KSCHEDULING_GROUP *)((char *)v12 - a1->ScbOffset);
      }
      if ( (PrcbLockFlags & 2) == 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(v12, v11) )
        {
          if ( (*(_BYTE *)&v12->0 & 1) != 0 )
            KiRemoveSchedulingGroupQueue(a1, v12, 1u);
        }
        else
        {
          if ( v12->GenerationCycles < v12->RankCycleTarget )
          {
            LOWORD(v19) = v48;
            Rank = (unsigned int)v49;
            if ( !a4 )
              goto LABEL_12;
            goto LABEL_11;
          }
          KiRecomputeGroupSchedulingRank(v11, v12, a1);
          if ( v14 == v12 )
            v47 = 1;
        }
        LOWORD(v19) = v48;
        Rank = (unsigned int)v49;
      }
      v52 = 1;
LABEL_11:
      v7 = 1;
      goto LABEL_12;
    }
  }
  return result;
}
