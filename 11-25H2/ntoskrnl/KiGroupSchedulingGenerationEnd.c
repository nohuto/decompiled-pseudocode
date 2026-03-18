/*
 * XREFs of KiGroupSchedulingGenerationEnd @ 0x1403147F4
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140275710 (KiTransitionSchedulingGroupGeneration.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F5510 (KiAddThreadToPrcbQueue.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     KiResumeThreadCycleAccumulation @ 0x140313A04 (KiResumeThreadCycleAccumulation.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x140314F38 (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x140318430 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 *     KiIsPrcbThread @ 0x140353BC0 (KiIsPrcbThread.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140353BF0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiProcessScbTracingList @ 0x140454D48 (KiProcessScbTracingList.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiGroupSchedulingGenerationEnd(struct _KPRCB *a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  _KTHREAD *CurrentThread; // r13
  __int64 *v5; // r12
  _KTHREAD *IdleThread; // rbx
  __int64 v9; // rdx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  _KTHREAD *v11; // rdi
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // rdi
  char v15; // r15
  struct _LIST_ENTRY *v16; // rbx
  _KTHREAD *NextThread; // rax
  _KTHREAD *v19; // r13
  char v20; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v21; // rbx
  _KPRCB *v22; // rax
  char v23; // r11
  _KTHREAD *v24; // rcx
  unsigned __int8 v25; // dl
  __int64 v26; // r10
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v27; // r9
  int v28; // eax
  _KTHREAD *NewThread; // rcx
  _KPRCB *v30; // r15
  bool v31; // zf
  unsigned __int64 v32; // rax
  _KTHREAD *SmtIsolationThread; // r12
  __int64 v34; // rcx
  char v35; // cl
  __int64 v36; // r12
  char v37; // al
  struct _KPRCB *v38; // rbx
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rcx
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  int v43; // ecx
  _DWORD *v44; // rcx
  __int64 Number; // r15
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v47; // r10
  struct _KTHREAD *AllCompareThreadStateFlags; // rdx
  _KPRCB *Prcb; // r8
  _KTHREAD *v50; // rax
  __int64 i; // r11
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v52; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v53; // r10
  struct _KTHREAD *v54; // rdx
  _KPRCB *v55; // r8
  _KTHREAD *v56; // rax
  __int64 Priority; // r8
  char v58; // al
  char v59; // al
  char v60; // cl
  char v61; // al
  __int64 v62; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v63; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v64; // rcx
  __int64 j; // r15
  __int64 k; // r11
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v67; // rcx
  __int64 v68; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v69; // [rsp+38h] [rbp-18h] BYREF
  __int64 v70; // [rsp+40h] [rbp-10h] BYREF
  _KTHREAD *v71; // [rsp+48h] [rbp-8h]
  bool v72; // [rsp+90h] [rbp+40h]
  unsigned int v74; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = a1->CurrentThread;
  v5 = a2;
  IdleThread = a1->IdleThread;
  v74 = 0;
  v69 = 0LL;
  v71 = CurrentThread;
  v72 = CurrentThread == IdleThread;
  KiCaptureTotalCyclesCurrentThread((__int64)a1, (__int64)CurrentThread, a3, a4);
  if ( CurrentThread != IdleThread )
    goto LABEL_2;
  NextThread = a1->NextThread;
  if ( !NextThread || NextThread == a1->IdleThread )
  {
    if ( (a1->IdleState & 1) != 0 )
LABEL_10:
      __fastfail(0x1Eu);
  }
  else if ( (a1->IdleState & 1) == 0 )
  {
    goto LABEL_10;
  }
LABEL_2:
  KiTransitionSchedulingGroupGeneration(a1, v9, a3, 0, &v69);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v68 = 0LL;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, v5);
  v11 = a1->NextThread;
  if ( v11 && !(unsigned __int8)KiIsPrcbThread(a1->NextThread) )
  {
    v19 = a1->CurrentThread;
    v70 = 0LL;
    if ( (*((_DWORD *)&v19->0 + 1) & 0x1000) != 0 || v19 == a1->SmtIsolationThread )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
      v47 = RescheduleContextEntryForPrcb;
      AllCompareThreadStateFlags = (struct _KTHREAD *)RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
      Prcb = RescheduleContextEntryForPrcb->Prcb;
      if ( ((unsigned __int8)AllCompareThreadStateFlags & 0x20) == 0 )
        RescheduleContextEntryForPrcb->___u5[0] |= 1u;
      RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
      RescheduleContextEntryForPrcb->CompareThread = Prcb->IdleThread;
      RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = (unsigned __int8)AllCompareThreadStateFlags & 0xC0 | 5;
      v50 = Prcb->IdleThread;
      *((_BYTE *)&v47->0 + 1) &= ~1u;
      v47->NewThread = v50;
      if ( ((unsigned __int8)AllCompareThreadStateFlags & 2) != 0 )
      {
        for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
        {
          v63 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                               + 32 * i
                                               + 8 * (unsigned int)i);
          if ( v63 != v47 )
            KiAdjustRescheduleContextEntryForThreadRemoval(v63, AllCompareThreadStateFlags, 1u, 0);
        }
LABEL_68:
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
    else
    {
      v21 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
      if ( (unsigned __int8)(v20 & 2) > (unsigned __int8)(*(_BYTE *)(&v11->MiscFlags + 1) & 2) )
      {
        for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
        {
          v64 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                               + 32 * j
                                               + 8 * (unsigned int)j);
          if ( v21 != v64 && !KiDoesThreadDominateRescheduleContextEntry(v64, v19, 2u, 0LL) )
          {
            v52 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
            v53 = v52;
            v54 = (struct _KTHREAD *)v52->AllCompareThreadStateFlags;
            v55 = v52->Prcb;
            if ( ((unsigned __int8)v54 & 0x20) == 0 )
              v52->___u5[0] |= 1u;
            v52->___u5[0] &= ~2u;
            v52->CompareThread = v55->IdleThread;
            v52->AllCompareThreadStateFlags = (unsigned __int8)v54 & 0xC0 | 5;
            v56 = v55->IdleThread;
            *((_BYTE *)&v53->0 + 1) &= ~1u;
            v53->NewThread = v56;
            if ( ((unsigned __int8)v54 & 2) != 0 )
            {
              for ( k = 0LL; (unsigned int)k < StaticRescheduleContext->ProcessorCount; k = (unsigned int)(k + 1) )
              {
                v67 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                     + 32 * k
                                                     + 8 * (unsigned int)k);
                if ( v67 != v53 )
                  KiAdjustRescheduleContextEntryForThreadRemoval(v67, v54, 1u, 0);
              }
              goto LABEL_68;
            }
            goto LABEL_72;
          }
        }
      }
      v22 = v21->Prcb;
      v23 = -2;
      v24 = v21->Prcb->CurrentThread;
      v21->CompareThread = v24;
      v25 = v21->AllCompareThreadStateFlags & 0xFE | (v24 == v22->IdleThread);
      v21->AllCompareThreadStateFlags = v25;
      LODWORD(v22) = *((_DWORD *)&v24->0 + 1);
      v21->NewThread = 0LL;
      *((_BYTE *)&v21->0 + 1) &= ~1u;
      v21->___u5[0] |= 1u;
      v21->AllCompareThreadStateFlags = (v25 & 0xFD ^ (2 * (((unsigned __int8)v22 & 2) != 0))) & 0xC3 | 4;
      if ( ((*((_BYTE *)&v11->MiscFlags + 4) | *((_BYTE *)&v19->MiscFlags + 4)) & 2) != 0 )
      {
        v26 = 0LL;
        if ( StaticRescheduleContext->ProcessorCount )
        {
          do
          {
            v27 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                 + 32 * v26
                                                 + 8 * (unsigned int)v26);
            if ( v21 != v27 )
            {
              v28 = *(&v19->MiscFlags + 1);
              NewThread = v27->NewThread;
              v70 = 0LL;
              v30 = v27->Prcb;
              v31 = (v28 & 2) == 0;
              v32 = (unsigned __int64)&NewThread[-1].Padding[4] + 7;
              if ( v31 )
              {
                SmtIsolationThread = v30->IdleThread;
                if ( v32 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(NewThread) )
                {
                  if ( (*((_BYTE *)&v27->0 + 1) & 1) != 0 )
                    *(_DWORD *)(v34 + 116) |= 2u;
                  *(_BYTE *)(v34 + 565) = 1;
                  KiInsertDeferredReadyList(&v70, v34);
                }
                v35 = v27->AllCompareThreadStateFlags | 1;
                v27->CompareThread = SmtIsolationThread;
                v27->AllCompareThreadStateFlags = v35;
                v27->AllCompareThreadStateFlags = (v35 & 0xFD ^ (2 * ((*((_DWORD *)&SmtIsolationThread->0 + 1) & 2) != 0))) & 0xC3 | 4;
              }
              else
              {
                SmtIsolationThread = v30->SmtIsolationThread;
                if ( v32 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(NewThread) )
                {
                  if ( (*((_BYTE *)&v27->0 + 1) & 1) != 0 )
                    *(_DWORD *)(v62 + 116) |= 2u;
                  *(_BYTE *)(v62 + 565) = 1;
                  KiInsertDeferredReadyList(&v70, v62);
                }
                v58 = v23 & v27->AllCompareThreadStateFlags;
                v27->CompareThread = v19;
                v27->AllCompareThreadStateFlags = v58;
                v59 = (v58 & 0xFD ^ (2 * ((*((_DWORD *)&v19->0 + 1) & 2) != 0))) & 0xE3 | 4;
                v60 = v59 | 0x20;
                v61 = v59 & 0xDF;
                if ( v19 == SmtIsolationThread )
                  v60 = v61;
                v27->AllCompareThreadStateFlags = v60;
              }
              *((_BYTE *)&v27->0 + 1) &= v23;
              v27->NewThread = SmtIsolationThread;
              if ( !(unsigned __int8)KiIsPrcbThread(SmtIsolationThread) )
                SmtIsolationThread->NextProcessor = v30->Number;
            }
            v26 = (unsigned int)(v26 + 1);
          }
          while ( (unsigned int)v26 < StaticRescheduleContext->ProcessorCount );
          v5 = a2;
        }
      }
      StaticRescheduleContext->MaximumThreadIsolationWidth = (*((_DWORD *)&v19->0 + 1) >> 1) & 1;
    }
LABEL_72:
    v11->WaitBlockFill6[68] = 1;
    Priority = (unsigned int)v11->Priority;
    v11->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    KiAddThreadToPrcbQueue((__int64)a1, (__int64)v11, Priority, 1LL, 0, &v74);
    if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
      EtwTraceReadyQueueInsertion((__int64)v11, a1->Number, v74, 0LL);
    CurrentThread = v71;
  }
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v68);
  v12 = KiCommitRescheduleContext(StaticRescheduleContext, a1, 0LL, &v68);
  v14 = v68;
  v15 = v12;
  v16 = v69;
  if ( !v12 && !v68 && !v69 )
    goto LABEL_6;
  KiReleasePrcbLocksForIsolationUnit(v5);
  if ( !v15 )
    goto LABEL_43;
  v36 = 0LL;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_42;
  do
  {
    v37 = StaticRescheduleContext->ProcessorEntries[v36].___u6[0];
    v38 = StaticRescheduleContext->ProcessorEntries[v36].Prcb;
    if ( (v37 & 0x10) != 0 )
    {
      KiAddProcessorToSoftwareInterruptBatch(
        &a1->DeferredDispatchInterrupts,
        StaticRescheduleContext->ProcessorEntries[v36].Prcb);
      goto LABEL_34;
    }
    if ( (v37 & 8) != 0 && v38->IdleHalt )
    {
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
        a1->DeferredDispatchInterrupts.TargetType = 1;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = v38->Number;
        goto LABEL_34;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == v38->Number )
          goto LABEL_34;
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
      }
      else
      {
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      KeAddGroupAffinityEx(&p_MultipleTargetAffinity->Count, v38->Group, v38->GroupSetMember);
    }
LABEL_34:
    if ( (StaticRescheduleContext->ProcessorEntries[v36].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread((__int64)StaticRescheduleContext->ProcessorEntries[v36].NewThread, (__int64)v38, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[v36].___u6[0] & 4) != 0 )
    {
      SchedulerAssist = (int *)v38->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( a1->SchedulerAssist )
        {
          if ( a1 != v38 )
          {
            v43 = *SchedulerAssist;
            if ( (v43 & 0x100000) != 0
              || (v43 & 0x40000) != 0
              && (unsigned __int8)v43 < StaticRescheduleContext->ProcessorEntries[v36].KickPriority )
            {
              v31 = HvlpVirtualProcessorsIdentityMapped == 0;
              v44 = a1->SchedulerAssist;
              v44[3] = 2;
              Number = v38->Number;
              if ( v31 )
                LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
              v44[2] = Number;
              if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(v38->Number, 2LL);
              __writemsr(0x400000C2u, (unsigned int)Number);
            }
          }
        }
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[v36].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v36].NewThread->KeReferenceCount);
    v36 = (unsigned int)(v36 + 1);
  }
  while ( (unsigned int)v36 < StaticRescheduleContext->ProcessorCount );
  v14 = v68;
  v16 = v69;
  CurrentThread = v71;
LABEL_42:
  KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
  v5 = a2;
LABEL_43:
  if ( v16 )
    KiProcessScbTracingList(a1, &v69);
  if ( v14 )
    KiReadyDeferredReadyList(a1, &v68);
  KiAcquirePrcbLocksForIsolationUnit(a1, 1LL, v5);
LABEL_6:
  LOBYTE(v13) = v72;
  return KiResumeThreadCycleAccumulation((__int64)a1, (__int64)CurrentThread, v13);
}
