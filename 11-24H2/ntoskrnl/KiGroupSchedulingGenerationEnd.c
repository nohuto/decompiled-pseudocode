/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x1402DA488
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiIsPrcbThread @ 0x1402A6700 (KiIsPrcbThread.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     EtwTraceScheduleThread @ 0x1402A6768 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402A8000 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1402A92A0 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x1402DAC1C (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KiResumeThreadCycleAccumulation @ 0x1402DBC80 (KiResumeThreadCycleAccumulation.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402DBCD0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x1403BC7F0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 *     KiProcessScbTracingList @ 0x140449184 (KiProcessScbTracingList.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F74FC (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(struct _KPRCB *a1, unsigned __int64 *a2)
{
  _KTHREAD *CurrentThread; // r13
  unsigned __int64 *v3; // r12
  _KTHREAD *IdleThread; // rbx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  _KTHREAD *v7; // rdi
  __int64 v8; // r8
  char v9; // r15
  __int64 v10; // rdi
  int m; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v13; // al
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  __int64 v15; // rbx
  _KTHREAD *NextThread; // rax
  _KTHREAD *v18; // r13
  char v19; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v20; // rbx
  _KPRCB *v21; // rax
  char v22; // r11
  _KTHREAD *v23; // rcx
  unsigned __int8 v24; // dl
  __int64 v25; // r10
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v26; // r9
  int v27; // eax
  __int64 NewThread; // rcx
  _KPRCB *v29; // r15
  bool v30; // zf
  unsigned __int64 v31; // rax
  __int64 SmtIsolationThread; // r12
  __int64 v33; // rcx
  char v34; // cl
  __int64 v35; // r12
  char v36; // al
  struct _KPRCB *v37; // rbx
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rcx
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  int v42; // ecx
  _DWORD *v43; // rcx
  __int64 Number; // r15
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v46; // r10
  struct _KTHREAD *AllCompareThreadStateFlags; // rdx
  _KPRCB *Prcb; // r8
  _KTHREAD *v49; // rax
  __int64 i; // r11
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v51; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v52; // r10
  struct _KTHREAD *v53; // rdx
  _KPRCB *v54; // r8
  _KTHREAD *v55; // rax
  __int64 Priority; // r8
  char v57; // al
  char v58; // al
  char v59; // cl
  char v60; // al
  __int64 v61; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v62; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v63; // rcx
  __int64 j; // r15
  __int64 k; // r11
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v66; // rcx
  struct _SINGLE_LIST_ENTRY v67; // [rsp+30h] [rbp-20h] BYREF
  __int64 v68; // [rsp+38h] [rbp-18h] BYREF
  __int64 v69; // [rsp+40h] [rbp-10h] BYREF
  _KTHREAD *v70; // [rsp+48h] [rbp-8h]
  bool v71; // [rsp+90h] [rbp+40h]
  unsigned int v73; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = a1->CurrentThread;
  v3 = a2;
  IdleThread = a1->IdleThread;
  v73 = 0;
  v68 = 0LL;
  v70 = CurrentThread;
  v71 = CurrentThread == IdleThread;
  KiCaptureTotalCyclesCurrentThread(a1, CurrentThread);
  if ( CurrentThread != IdleThread )
    goto LABEL_2;
  NextThread = a1->NextThread;
  if ( !NextThread || NextThread == a1->IdleThread )
  {
    if ( (a1->IdleState & 1) != 0 )
LABEL_15:
      __fastfail(0x1Eu);
  }
  else if ( (a1->IdleState & 1) == 0 )
  {
    goto LABEL_15;
  }
LABEL_2:
  KiTransitionSchedulingGroupGeneration(a1, (__int64)&v68);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v67.Next = 0LL;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, v3);
  v7 = a1->NextThread;
  if ( v7 && !KiIsPrcbThread((__int64)a1->NextThread) )
  {
    v18 = a1->CurrentThread;
    v69 = 0LL;
    if ( (*((_DWORD *)&v18->0 + 1) & 0x1000) != 0 || v18 == a1->SmtIsolationThread )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
      v46 = RescheduleContextEntryForPrcb;
      AllCompareThreadStateFlags = (struct _KTHREAD *)RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
      Prcb = RescheduleContextEntryForPrcb->Prcb;
      if ( ((unsigned __int8)AllCompareThreadStateFlags & 0x20) == 0 )
        RescheduleContextEntryForPrcb->___u5[0] |= 1u;
      RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
      RescheduleContextEntryForPrcb->CompareThread = Prcb->IdleThread;
      RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = (unsigned __int8)AllCompareThreadStateFlags & 0xC0 | 5;
      v49 = Prcb->IdleThread;
      *((_BYTE *)&v46->0 + 1) &= ~1u;
      v46->NewThread = v49;
      if ( ((unsigned __int8)AllCompareThreadStateFlags & 2) != 0 )
      {
        for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
        {
          v62 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                               + 32 * i
                                               + 8 * (unsigned int)i);
          if ( v62 != v46 )
            KiAdjustRescheduleContextEntryForThreadRemoval(v62, AllCompareThreadStateFlags, 1u, 0);
        }
LABEL_71:
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
    else
    {
      v20 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
      if ( (unsigned __int8)(v19 & 2) > (unsigned __int8)(*(_BYTE *)(&v7->MiscFlags + 1) & 2) )
      {
        for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
        {
          v63 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                               + 32 * j
                                               + 8 * (unsigned int)j);
          if ( v20 != v63 && !KiDoesThreadDominateRescheduleContextEntry(v63, v18, 2LL, 0LL) )
          {
            v51 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
            v52 = v51;
            v53 = (struct _KTHREAD *)v51->AllCompareThreadStateFlags;
            v54 = v51->Prcb;
            if ( ((unsigned __int8)v53 & 0x20) == 0 )
              v51->___u5[0] |= 1u;
            v51->___u5[0] &= ~2u;
            v51->CompareThread = v54->IdleThread;
            v51->AllCompareThreadStateFlags = (unsigned __int8)v53 & 0xC0 | 5;
            v55 = v54->IdleThread;
            *((_BYTE *)&v52->0 + 1) &= ~1u;
            v52->NewThread = v55;
            if ( ((unsigned __int8)v53 & 2) != 0 )
            {
              for ( k = 0LL; (unsigned int)k < StaticRescheduleContext->ProcessorCount; k = (unsigned int)(k + 1) )
              {
                v66 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                     + 32 * k
                                                     + 8 * (unsigned int)k);
                if ( v66 != v52 )
                  KiAdjustRescheduleContextEntryForThreadRemoval(v66, v53, 1u, 0);
              }
              goto LABEL_71;
            }
            goto LABEL_75;
          }
        }
      }
      v21 = v20->Prcb;
      v22 = -2;
      v23 = v20->Prcb->CurrentThread;
      v20->CompareThread = v23;
      v24 = v20->AllCompareThreadStateFlags & 0xFE | (v23 == v21->IdleThread);
      v20->AllCompareThreadStateFlags = v24;
      LODWORD(v21) = *((_DWORD *)&v23->0 + 1);
      v20->NewThread = 0LL;
      *((_BYTE *)&v20->0 + 1) &= ~1u;
      v20->___u5[0] |= 1u;
      v20->AllCompareThreadStateFlags = (v24 & 0xFD ^ (2 * (((unsigned __int8)v21 & 2) != 0))) & 0xC3 | 4;
      if ( ((*((_BYTE *)&v7->MiscFlags + 4) | *((_BYTE *)&v18->MiscFlags + 4)) & 2) != 0 )
      {
        v25 = 0LL;
        if ( StaticRescheduleContext->ProcessorCount )
        {
          do
          {
            v26 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                 + 32 * v25
                                                 + 8 * (unsigned int)v25);
            if ( v20 != v26 )
            {
              v27 = *(&v18->MiscFlags + 1);
              NewThread = (__int64)v26->NewThread;
              v69 = 0LL;
              v29 = v26->Prcb;
              v30 = (v27 & 2) == 0;
              v31 = NewThread - 1;
              if ( v30 )
              {
                SmtIsolationThread = (__int64)v29->IdleThread;
                if ( v31 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(NewThread) )
                {
                  if ( (*((_BYTE *)&v26->0 + 1) & 1) != 0 )
                    *(_DWORD *)(v33 + 116) |= 2u;
                  *(_BYTE *)(v33 + 565) = 1;
                  KiInsertDeferredReadyList(&v69, v33);
                }
                v34 = v26->AllCompareThreadStateFlags | 1;
                v26->CompareThread = (_KTHREAD *)SmtIsolationThread;
                v26->AllCompareThreadStateFlags = v34;
                v26->AllCompareThreadStateFlags = (v34 & 0xFD ^ (2 * ((*(_DWORD *)(SmtIsolationThread + 120) & 2) != 0))) & 0xC3 | 4;
              }
              else
              {
                SmtIsolationThread = (__int64)v29->SmtIsolationThread;
                if ( v31 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(NewThread) )
                {
                  if ( (*((_BYTE *)&v26->0 + 1) & 1) != 0 )
                    *(_DWORD *)(v61 + 116) |= 2u;
                  *(_BYTE *)(v61 + 565) = 1;
                  KiInsertDeferredReadyList(&v69, v61);
                }
                v57 = v22 & v26->AllCompareThreadStateFlags;
                v26->CompareThread = v18;
                v26->AllCompareThreadStateFlags = v57;
                v58 = (v57 & 0xFD ^ (2 * ((*((_DWORD *)&v18->0 + 1) & 2) != 0))) & 0xE3 | 4;
                v59 = v58 | 0x20;
                v60 = v58 & 0xDF;
                if ( v18 == (_KTHREAD *)SmtIsolationThread )
                  v59 = v60;
                v26->AllCompareThreadStateFlags = v59;
              }
              *((_BYTE *)&v26->0 + 1) &= v22;
              v26->NewThread = (_KTHREAD *)SmtIsolationThread;
              if ( !KiIsPrcbThread(SmtIsolationThread) )
                *(_DWORD *)(SmtIsolationThread + 536) = v29->Number;
            }
            v25 = (unsigned int)(v25 + 1);
          }
          while ( (unsigned int)v25 < StaticRescheduleContext->ProcessorCount );
          v3 = a2;
        }
      }
      StaticRescheduleContext->MaximumThreadIsolationWidth = (*((_DWORD *)&v18->0 + 1) >> 1) & 1;
    }
LABEL_75:
    v7->WaitBlockFill6[68] = 1;
    Priority = (unsigned int)v7->Priority;
    v7->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    KiAddThreadToPrcbQueue((__int64)a1, (__int64)v7, Priority, 1LL, 0, &v73);
    if ( (WORD2(xmmword_140FC6B50) & 0x800) != 0 )
      EtwTraceReadyQueueInsertion(v7, a1->Number, v73, 0LL);
    CurrentThread = v70;
  }
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v67);
  v9 = 0;
  v10 = 0LL;
  for ( m = (DWORD1(xmmword_140FC6B50) >> 9) & 2;
        (unsigned int)v10 < StaticRescheduleContext->ProcessorCount;
        v10 = (unsigned int)(v10 + 1) )
  {
    v9 |= KiCommitRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                  + 32 * v10
                                                  + 8 * (unsigned int)v10),
            a1,
            m,
            &v67);
  }
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    v13 = CoreControlBlock->ScanStartIndex + 1;
    CoreControlBlock->ScanStartIndex = v13;
    if ( v13 >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  Next = v67.Next;
  v15 = v68;
  if ( !v9 && !v67.Next && !v68 )
    goto LABEL_11;
  KiReleasePrcbLocksForIsolationUnit(v3);
  if ( !v9 )
    goto LABEL_48;
  v35 = 0LL;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_47;
  do
  {
    v36 = StaticRescheduleContext->ProcessorEntries[v35].___u6[0];
    v37 = StaticRescheduleContext->ProcessorEntries[v35].Prcb;
    if ( (v36 & 0x10) != 0 )
    {
      KiAddProcessorToSoftwareInterruptBatch(
        &a1->DeferredDispatchInterrupts,
        StaticRescheduleContext->ProcessorEntries[v35].Prcb);
      goto LABEL_39;
    }
    if ( (v36 & 8) != 0 && v37->IdleHalt )
    {
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
        a1->DeferredDispatchInterrupts.TargetType = 1;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = v37->Number;
        goto LABEL_39;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == v37->Number )
          goto LABEL_39;
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
      }
      else
      {
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      KeAddGroupAffinityEx(&p_MultipleTargetAffinity->Count, v37->Group, v37->GroupSetMember);
    }
LABEL_39:
    if ( (StaticRescheduleContext->ProcessorEntries[v35].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread((__int64)StaticRescheduleContext->ProcessorEntries[v35].NewThread, (__int64)v37, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[v35].___u6[0] & 4) != 0 )
    {
      SchedulerAssist = (int *)v37->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( a1->SchedulerAssist )
        {
          if ( a1 != v37 )
          {
            v42 = *SchedulerAssist;
            if ( (v42 & 0x100000) != 0
              || (v42 & 0x40000) != 0
              && (unsigned __int8)v42 < StaticRescheduleContext->ProcessorEntries[v35].KickPriority )
            {
              v30 = HvlpVirtualProcessorsIdentityMapped == 0;
              v43 = a1->SchedulerAssist;
              v43[3] = 2;
              Number = v37->Number;
              if ( v30 )
                LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
              v43[2] = Number;
              if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(v37->Number, 2LL);
              __writemsr(0x400000C2u, (unsigned int)Number);
            }
          }
        }
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[v35].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v35].NewThread->KeReferenceCount);
    v35 = (unsigned int)(v35 + 1);
  }
  while ( (unsigned int)v35 < StaticRescheduleContext->ProcessorCount );
  Next = v67.Next;
  v15 = v68;
  CurrentThread = v70;
LABEL_47:
  KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
  v3 = a2;
LABEL_48:
  if ( v15 )
    KiProcessScbTracingList(a1, &v68);
  if ( Next )
    KiReadyDeferredReadyList((__int64)a1, &v67);
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1LL, v3);
LABEL_11:
  LOBYTE(v8) = v71;
  return KiResumeThreadCycleAccumulation(a1, CurrentThread, v8);
}
