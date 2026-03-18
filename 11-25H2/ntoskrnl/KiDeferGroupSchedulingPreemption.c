/*
 * XREFs of KiDeferGroupSchedulingPreemption @ 0x1402762CC
 * Callers:
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F5510 (KiAddThreadToPrcbQueue.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x140318430 (-KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiShouldPreemptionBeDeferred @ 0x140350F00 (KiShouldPreemptionBeDeferred.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x140350F20 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiInsertDeferredPreemptionApc @ 0x140351CBC (KiInsertDeferredPreemptionApc.c)
 *     KiInsertDeferredReadyList @ 0x140352190 (KiInsertDeferredReadyList.c)
 *     KiIsPrcbThread @ 0x140353BC0 (KiIsPrcbThread.c)
 *     ?KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@EE@Z @ 0x140353BF0 (-KiAdjustRescheduleContextEntryForThreadRemoval@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHRE.c)
 *     KiAddThreadToScbQueue @ 0x140430214 (KiAddThreadToScbQueue.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall KiDeferGroupSchedulingPreemption(__int64 a1, struct _KPRCB *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // r14d
  __int64 v6; // rcx
  _KTHREAD *NextThread; // r15
  _WORD *v8; // rdx
  __int64 Group; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  struct _KSCB *v11; // rbx
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // r9
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  struct _KTHREAD *CurrentThread; // r12
  char v18; // r8
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v19; // r13
  _KPRCB *v20; // rax
  _KTHREAD *v21; // rcx
  unsigned __int8 v22; // dl
  __int64 j; // r11
  unsigned __int8 *v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r10
  bool v28; // zf
  unsigned __int64 v29; // rax
  struct _KTHREAD *v30; // rdx
  unsigned __int8 v31; // al
  unsigned __int8 v32; // cl
  __int64 v33; // r8
  char v34; // al
  struct _KTHREAD *v35; // r15
  char v36; // bl
  unsigned int v37; // r13d
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // rbx
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rax
  unsigned int SingleTargetIndex; // edx
  unsigned __int16 *p_Count; // r15
  void **p_SchedulerAssist; // rcx
  int v45; // eax
  void **v46; // r8
  _DWORD *v47; // rdx
  __int64 Number; // r15
  __int64 v49; // rdx
  int v50; // r8d
  __int64 v51; // r9
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v53; // r10
  struct _KTHREAD *AllCompareThreadStateFlags; // rdx
  _KPRCB *Prcb; // r9
  int v56; // r8d
  _KTHREAD *IdleThread; // rax
  _KTHREAD *v58; // rax
  unsigned int i; // r11d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v60; // rcx
  unsigned __int8 v61; // al
  char v62; // al
  unsigned __int8 v63; // al
  __int64 v64; // rdx
  __int64 v65; // r10
  __int64 v66; // rcx
  __int64 v67; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v68; // rax
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v69; // r10
  struct _KTHREAD *v70; // rdx
  _KPRCB *v71; // r9
  int v72; // r8d
  _KTHREAD *v73; // rax
  _KTHREAD *v74; // rax
  unsigned int m; // r11d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v76; // rcx
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v77; // rcx
  __int64 k; // r12
  unsigned int v79; // [rsp+30h] [rbp-20h] BYREF
  __int64 v80; // [rsp+38h] [rbp-18h] BYREF
  __int64 v81; // [rsp+40h] [rbp-10h] BYREF
  struct _KTHREAD *v82; // [rsp+48h] [rbp-8h]
  char v84; // [rsp+A0h] [rbp+50h]
  bool v85; // [rsp+A0h] [rbp+50h]
  __int64 v86; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_QWORD *)(a1 + 104);
  v4 = a1;
  v79 = 0;
  v80 = 0LL;
  if ( !v3 || !(v3 + a2->ScbOffset) || !(unsigned __int8)KiShouldPreemptionBeDeferred() )
  {
    LOBYTE(v5) = 0;
    return v5;
  }
  while ( 2 )
  {
    v5 = 0;
    v84 = 0;
    KiAcquirePrcbLocksForIsolationUnit(a2, 1LL, &v80);
    v6 = *(_QWORD *)(v4 + 104);
    NextThread = a2->NextThread;
    if ( !v6 )
      goto LABEL_13;
    if ( !(v6 + a2->ScbOffset) )
      goto LABEL_13;
    if ( NextThread == a2->IdleThread )
      goto LABEL_13;
    v8 = *(_WORD **)(v4 + 576);
    Group = a2->Group;
    if ( (unsigned __int16)Group >= *v8 || ((*(_QWORD *)&v8[4 * Group + 4] >> a2->GroupIndex) & 1) == 0 )
      goto LABEL_13;
    SchedulingGroup = NextThread->SchedulingGroup;
    if ( SchedulingGroup )
    {
      v11 = (struct _KSCB *)((char *)SchedulingGroup + a2->ScbOffset);
      if ( !v11 )
        goto LABEL_11;
      if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a2->NextThread, v11, 0LL, v11->ShareRank)
        && !(unsigned __int8)KiShouldPreemptionBeDeferred() )
      {
        if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v11) )
        {
          v5 = -1;
        }
        else
        {
          do
          {
            v5 += *(_DWORD *)(v13 + 124);
            if ( v15 )
            {
              v14 += **(_DWORD **)(v13 + 128);
            }
            else if ( v5 )
            {
              break;
            }
            v13 = *(_QWORD *)(v13 + 416);
          }
          while ( v13 );
          v84 = 1;
          if ( v14 )
          {
LABEL_26:
            if ( v5 )
              goto LABEL_27;
            goto LABEL_11;
          }
        }
      }
      v84 = 0;
      goto LABEL_26;
    }
    v11 = 0LL;
LABEL_11:
    if ( NextThread->Priority > *(_BYTE *)(v4 + 195) )
    {
      LOBYTE(v5) = 0;
      goto LABEL_13;
    }
LABEL_27:
    StaticRescheduleContext = a2->StaticRescheduleContext;
    v86 = 0LL;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v80);
    v81 = 0LL;
    CurrentThread = a2->CurrentThread;
    v82 = CurrentThread;
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x1000) != 0 || CurrentThread == a2->SmtIsolationThread )
    {
      RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a2);
      v53 = RescheduleContextEntryForPrcb;
      AllCompareThreadStateFlags = (struct _KTHREAD *)RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
      Prcb = RescheduleContextEntryForPrcb->Prcb;
      v56 = (RescheduleContextEntryForPrcb->AllCompareThreadStateFlags >> 1) & 1;
      if ( ((unsigned __int8)AllCompareThreadStateFlags & 0x20) == 0 )
        RescheduleContextEntryForPrcb->___u5[0] |= 1u;
      RescheduleContextEntryForPrcb->___u5[0] &= ~2u;
      IdleThread = Prcb->IdleThread;
      LOBYTE(AllCompareThreadStateFlags) = (unsigned __int8)AllCompareThreadStateFlags & 0xC0 | 5;
      v53->AllCompareThreadStateFlags = (unsigned __int8)AllCompareThreadStateFlags;
      v53->CompareThread = IdleThread;
      v58 = Prcb->IdleThread;
      *((_BYTE *)&v53->0 + 1) &= ~1u;
      v53->NewThread = v58;
      if ( v56 )
      {
        for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
        {
          v60 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i);
          if ( v60 != v53 )
            KiAdjustRescheduleContextEntryForThreadRemoval(v60, AllCompareThreadStateFlags, 1u, 0);
        }
        goto LABEL_37;
      }
    }
    else
    {
      v19 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a2);
      if ( (unsigned __int8)(v18 & 2) <= (unsigned __int8)(*(_BYTE *)(&NextThread->MiscFlags + 1) & 2) )
      {
LABEL_30:
        v20 = v19->Prcb;
        v21 = v19->Prcb->CurrentThread;
        v19->CompareThread = v21;
        v22 = v19->AllCompareThreadStateFlags & 0xFE | (v21 == v20->IdleThread);
        v19->AllCompareThreadStateFlags = v22;
        LODWORD(v20) = *((_DWORD *)&v21->0 + 1);
        v19->NewThread = 0LL;
        *((_BYTE *)&v19->0 + 1) &= ~1u;
        v19->___u5[0] |= 1u;
        v19->AllCompareThreadStateFlags = (v22 & 0xFD ^ (2 * (((unsigned __int8)v20 & 2) != 0))) & 0xC3 | 4;
        if ( ((*((_BYTE *)&NextThread->MiscFlags + 4) | *((_BYTE *)&CurrentThread->MiscFlags + 4)) & 2) != 0 )
        {
          for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
          {
            v24 = (unsigned __int8 *)StaticRescheduleContext->ProcessorEntries + 32 * j + 8 * (unsigned int)j;
            if ( v19 != (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)v24 )
            {
              v25 = *(&CurrentThread->MiscFlags + 1);
              v26 = *((_QWORD *)v24 + 3);
              v81 = 0LL;
              v27 = *(_QWORD *)v24;
              v28 = (v25 & 2) == 0;
              v29 = v26 - 1;
              if ( v28 )
              {
                v30 = *(struct _KTHREAD **)(v27 + 24);
                v82 = v30;
                if ( v29 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v26) )
                {
                  if ( (v24[33] & 1) != 0 )
                    *(_DWORD *)(v67 + 116) |= 2u;
                  *(_BYTE *)(v67 + 565) = 1;
                  KiInsertDeferredReadyList(&v81, v67);
                  v30 = v82;
                }
                v31 = v24[32] | 1;
                *((_QWORD *)v24 + 2) = v30;
                v24[32] = v31;
                v32 = (v31 & 0xFD ^ (2 * ((*((_DWORD *)&v30->0 + 1) & 2) != 0))) & 0xC3 | 4;
              }
              else
              {
                v30 = *(struct _KTHREAD **)(v27 + 36480);
                v82 = v30;
                if ( v29 <= 0xFFFFFFFFFFFFFFFCuLL && !(unsigned __int8)KiIsPrcbThread(v26) )
                {
                  if ( (v24[33] & 1) != 0 )
                    *(_DWORD *)(v66 + 116) |= 2u;
                  *(_BYTE *)(v66 + 565) = 1;
                  KiInsertDeferredReadyList(&v81, v66);
                  v30 = v82;
                }
                v61 = v24[32] & 0xFE;
                *((_QWORD *)v24 + 2) = CurrentThread;
                v24[32] = v61;
                v62 = (v61 & 0xFD ^ (2 * ((*((_DWORD *)&CurrentThread->0 + 1) & 2) != 0))) & 0xE3 | 4;
                v32 = v62 | 0x20;
                v63 = v62 & 0xDF;
                if ( CurrentThread == v30 )
                  v32 = v63;
              }
              v24[32] = v32;
              v24[33] &= ~1u;
              *((_QWORD *)v24 + 3) = v30;
              if ( !(unsigned __int8)KiIsPrcbThread(v30) )
                *(_DWORD *)(v64 + 536) = *(_DWORD *)(v65 + 36);
            }
          }
        }
        StaticRescheduleContext->MaximumThreadIsolationWidth = (*((_DWORD *)&CurrentThread->0 + 1) >> 1) & 1;
        goto LABEL_38;
      }
      for ( k = 0LL; ; k = (unsigned int)(k + 1) )
      {
        if ( (unsigned int)k >= StaticRescheduleContext->ProcessorCount )
        {
          CurrentThread = v82;
          goto LABEL_30;
        }
        v77 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                             + 32 * k
                                             + 8 * (unsigned int)k);
        if ( v19 != v77 && !KiDoesThreadDominateRescheduleContextEntry(v77, v82, 2u, 0LL) )
          break;
      }
      v68 = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a2);
      v69 = v68;
      v70 = (struct _KTHREAD *)v68->AllCompareThreadStateFlags;
      v71 = v68->Prcb;
      v72 = (v68->AllCompareThreadStateFlags >> 1) & 1;
      if ( ((unsigned __int8)v70 & 0x20) == 0 )
        v68->___u5[0] |= 1u;
      v68->___u5[0] &= ~2u;
      v73 = v71->IdleThread;
      LOBYTE(v70) = (unsigned __int8)v70 & 0xC0 | 5;
      v69->AllCompareThreadStateFlags = (unsigned __int8)v70;
      v69->CompareThread = v73;
      v74 = v71->IdleThread;
      *((_BYTE *)&v69->0 + 1) &= ~1u;
      v69->NewThread = v74;
      if ( v72 )
      {
        for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
        {
          v76 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * m + 8 * m);
          if ( v76 != v69 )
            KiAdjustRescheduleContextEntryForThreadRemoval(v76, v70, 1u, 0);
        }
LABEL_37:
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
LABEL_38:
    NextThread->WaitBlockFill6[68] = 1;
    if ( v11 )
    {
      v5 = 0;
      if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(NextThread, v11, 0LL, v11->ShareRank)
        && !(unsigned __int8)KiShouldPreemptionBeDeferred() )
      {
        if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v11) )
        {
          v5 = -1;
        }
        else
        {
          do
          {
            v5 += *(_DWORD *)(v49 + 124);
            if ( v51 )
            {
              v50 += **(_DWORD **)(v49 + 128);
            }
            else if ( v5 )
            {
              break;
            }
            v49 = *(_QWORD *)(v49 + 416);
          }
          while ( v49 );
          v84 = 1;
          if ( v50 )
            goto LABEL_39;
        }
      }
      v84 = 0;
    }
LABEL_39:
    if ( v5 )
    {
      KiAddThreadToScbQueue(a2, v11);
      v33 = 2LL;
      v79 = 2;
    }
    else
    {
      KiAddThreadToPrcbQueue((_DWORD)a2, (_DWORD)NextThread, NextThread->Priority, 1, v84, (__int64)&v79);
      v33 = v79;
    }
    if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
      EtwTraceReadyQueueInsertion(NextThread, a2->Number, v33, 0LL);
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v34 = KiCommitRescheduleContext(StaticRescheduleContext, a2, 0LL, &v86);
    v82 = a2->NextThread;
    v35 = v82;
    v36 = v34;
    LOBYTE(v5) = v82 == 0LL;
    v85 = v82 == 0LL;
    KiReleasePrcbLocksForIsolationUnit(&v80);
    if ( !v36 )
      goto LABEL_59;
    v37 = 0;
    if ( !StaticRescheduleContext->ProcessorCount )
      goto LABEL_58;
    do
    {
      v38 = StaticRescheduleContext->ProcessorEntries[v37].___u6[0];
      v39 = StaticRescheduleContext->ProcessorEntries[v37].Prcb;
      if ( (v38 & 0x10) != 0 || (v38 & 8) != 0 && v39->IdleHalt )
      {
        TargetType = a2->DeferredDispatchInterrupts.TargetType;
        if ( !TargetType )
        {
          a2->DeferredDispatchInterrupts.TargetType = 1;
          a2->DeferredDispatchInterrupts.SingleTargetIndex = v39->Number;
          goto LABEL_50;
        }
        if ( TargetType == 1 )
        {
          SingleTargetIndex = a2->DeferredDispatchInterrupts.SingleTargetIndex;
          if ( SingleTargetIndex == v39->Number )
            goto LABEL_50;
          p_Count = &a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count;
          a2->DeferredDispatchInterrupts.TargetType = 2;
          KeAddProcessorAffinityEx(&a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
        }
        else
        {
          p_Count = &a2->DeferredDispatchInterrupts.MultipleTargetAffinity.Count;
        }
        KeAddGroupAffinityEx(p_Count, v39->Group, v39->GroupSetMember);
      }
LABEL_50:
      if ( (StaticRescheduleContext->ProcessorEntries[v37].___u6[0] & 2) != 0 )
        EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[v37].NewThread, v39, 0LL);
      if ( (StaticRescheduleContext->ProcessorEntries[v37].___u6[0] & 4) != 0 )
      {
        SchedulerAssist = (int *)v39->SchedulerAssist;
        if ( SchedulerAssist )
        {
          p_SchedulerAssist = &a2->SchedulerAssist;
          if ( a2->SchedulerAssist )
          {
            if ( a2 != v39 )
            {
              v45 = *SchedulerAssist;
              v46 = &a2->SchedulerAssist;
              if ( (v45 & 0x40000) != 0 )
                v46 = &a2->SchedulerAssist;
              if ( (v45 & 0x100000) != 0
                || (v45 & 0x40000) != 0
                && (p_SchedulerAssist = v46,
                    (unsigned __int8)v45 < StaticRescheduleContext->ProcessorEntries[v37].KickPriority) )
              {
                v28 = HvlpVirtualProcessorsIdentityMapped == 0;
                v47 = *p_SchedulerAssist;
                *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                Number = v39->Number;
                if ( v28 )
                  LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                v47[2] = Number;
                if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                  EtwTraceXSchedulerPriorityKickSend(v39->Number, 2LL);
                __writemsr(0x400000C2u, (unsigned int)Number);
              }
            }
          }
        }
      }
      if ( (StaticRescheduleContext->ProcessorEntries[v37].___u6[0] & 1) != 0 )
        _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v37].NewThread->KeReferenceCount);
      ++v37;
    }
    while ( v37 < StaticRescheduleContext->ProcessorCount );
    LOBYTE(v5) = v85;
    v35 = v82;
LABEL_58:
    KiFlushSoftwareInterruptBatch(&a2->DeferredDispatchInterrupts);
LABEL_59:
    if ( v86 )
    {
      KiReadyDeferredReadyList(a2, &v86);
      if ( v35 )
        goto LABEL_13;
      if ( !a2->NextThread )
      {
LABEL_61:
        KiInsertDeferredPreemptionApc(a2, a1, 0LL);
        goto LABEL_13;
      }
      v4 = a1;
      continue;
    }
    break;
  }
  if ( !v35 )
    goto LABEL_61;
LABEL_13:
  if ( v80 )
    KiReleasePrcbLocksForIsolationUnit(&v80);
  return v5;
}
