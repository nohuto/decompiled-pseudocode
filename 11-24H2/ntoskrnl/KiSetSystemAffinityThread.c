/*
 * XREFs of KiSetSystemAffinityThread @ 0x140318DD4
 * Callers:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14031AB50 (HalpTimerStallExecutionProcessor.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C003C (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404C80DC (KeRevertToUserMultipleGroupAffinityThread.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x1402A6730 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     EtwTraceScheduleThread @ 0x1402A6768 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14031887C (KiUpdateNodeAffinitizedFlag.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1404AC65C (EtwTraceIdealProcessor.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F74FC (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiSetSystemAffinityThread(
        struct _KPRCB *a1,
        char *a2,
        __int64 *a3,
        unsigned int a4,
        struct _SINGLE_LIST_ENTRY *a5)
{
  _KTHREAD *CurrentThread; // rdi
  __int64 v6; // r15
  _KAFFINITY_EX *Affinity; // rbx
  char v10; // r13
  _KAFFINITY_EX *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // edx
  _KAFFINITY_EX *v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _KAFFINITY_EX *v20; // rdx
  __int64 result; // rax
  unsigned __int64 v22; // rbx
  __int64 *v23; // r15
  __int64 v24; // r12
  __int64 v25; // rbx
  unsigned int v26; // r14d
  _KAFFINITY_EX *v27; // r9
  __int64 v28; // rax
  signed __int16 Count; // r8
  __int64 v30; // r10
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  int v34; // eax
  int v35; // r15d
  unsigned __int16 v36; // ax
  unsigned __int16 Size; // cx
  unsigned __int16 v38; // r8
  unsigned __int16 v39; // cx
  $B38C3B1372D6E954799962D5DD404846 *v40; // r9
  __int64 v41; // r10
  signed __int64 v42; // rdx
  __int64 v43; // rax
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r9
  unsigned __int8 AllCompareThreadStateFlags; // dl
  _KPRCB *Prcb; // rax
  _KTHREAD *IdleThread; // rax
  char v49; // r9
  unsigned __int64 *v50; // r8
  unsigned int v51; // edx
  unsigned int v52; // r13d
  char v53; // al
  struct _KPRCB *v54; // rbx
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rax
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  void **p_SchedulerAssist; // rcx
  int v60; // eax
  void **v61; // r8
  bool v62; // zf
  _DWORD *v63; // rdx
  __int64 Number; // r15
  unsigned int v65; // r8d
  unsigned int v66; // r8d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v67; // rdx
  _KPRCB *v68; // rcx
  _KTHREAD *v69; // rax
  unsigned __int64 v70; // [rsp+38h] [rbp-18h] BYREF
  _KTHREAD *v71; // [rsp+40h] [rbp-10h]
  unsigned __int64 v72; // [rsp+48h] [rbp-8h] BYREF

  CurrentThread = a1->CurrentThread;
  v6 = a4;
  v70 = 0LL;
  v71 = CurrentThread;
  Affinity = CurrentThread->Affinity;
  v10 = 1;
  if ( a2 )
  {
    v36 = *(_WORD *)a2;
    Size = Affinity->Size;
    Affinity->Size = Size;
    v38 = Size;
    Affinity->Reserved = 0;
    if ( v36 <= Size )
      v38 = v36;
    v39 = 0;
    Affinity->Count = v38;
    if ( v38 )
    {
      v40 = &Affinity->8;
      v41 = v38;
      v42 = a2 - (char *)Affinity;
      v39 = v38;
      do
      {
        v40->Bitmap[0] = *(unsigned __int64 *)((char *)v40->Bitmap + v42);
        v40 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v40 + 8);
        --v41;
      }
      while ( v41 );
    }
    while ( v39 < Affinity->Size )
    {
      v43 = v39++;
      Affinity->Bitmap[v43] = 0LL;
    }
  }
  else
  {
    memset_0(&Affinity->8, 0, 8LL * Affinity->Count);
    Affinity->Count = 1;
    v11 = CurrentThread->Affinity;
    v12 = *((unsigned __int16 *)a3 + 4);
    v13 = *a3;
    if ( v11->Count > (unsigned __int16)v12 )
    {
LABEL_3:
      v11->Bitmap[v12] |= v13;
      goto LABEL_4;
    }
    if ( v11->Size > (unsigned __int16)v12 )
    {
      v11->Count = v12 + 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  if ( (unsigned int)v6 >= 0x800 )
  {
    v14 = KiProcessorBlock[CurrentThread->IdealProcessor];
    v27 = CurrentThread->Affinity;
    v28 = *(unsigned __int8 *)(v14 + 208);
    Count = v27->Count;
    if ( (unsigned __int16)v28 >= v27->Count || ((v27->Bitmap[v28] >> *(_BYTE *)(v14 + 209)) & 1) == 0 )
    {
      v30 = *(_QWORD *)(v14 + 192);
      v31 = *(unsigned __int16 *)(v30 + 136);
      if ( (unsigned __int16)v31 >= (unsigned __int16)Count )
        v32 = 0LL;
      else
        v32 = v27->Bitmap[v31];
      v33 = *(_QWORD *)(v30 + 128) & v32;
      if ( v33 )
      {
        v34 = *(unsigned __int16 *)(v30 + 136);
LABEL_45:
        _BitScanReverse64(&v33, v33);
        v35 = *((_DWORD *)qword_140F22998 + (unsigned int)((v34 << 6) + v33));
      }
      else
      {
        while ( --Count >= 0 )
        {
          v33 = v27->Bitmap[Count];
          if ( v33 )
          {
            v34 = Count;
            goto LABEL_45;
          }
        }
        v35 = -1;
      }
      CurrentThread->IdealProcessor = v35;
      v14 = KiProcessorBlock[v35];
    }
  }
  else
  {
    _mm_lfence();
    CurrentThread->IdealProcessor = v6;
    v14 = KiProcessorBlock[v6];
  }
  CurrentThread->AffinityPrimaryGroup = *(unsigned __int8 *)(v14 + 208);
  if ( (CurrentThread->MiscFlags & 8) != 0 || !(unsigned int)KiComputeThreadAffinity((__int64)CurrentThread) )
  {
    v15 = *(_QWORD *)(v14 + 36416);
    v16 = 0;
    if ( v15 )
    {
      v17 = CurrentThread->Affinity;
      v18 = *(unsigned __int8 *)(v14 + 208);
      if ( (unsigned __int16)v18 >= v17->Count )
        v19 = 0LL;
      else
        v19 = v17->Bitmap[v18];
      LOBYTE(v16) = (v15 & v19) == v15;
    }
    if ( v16 != ((*((_DWORD *)&CurrentThread->0 + 1) >> 13) & 1) )
      _InterlockedXor((volatile signed __int32 *)&CurrentThread->116 + 1, 0x2000u);
    KiUpdateNodeAffinitizedFlag((__int64)CurrentThread);
  }
  v20 = CurrentThread->Affinity;
  result = a1->Group;
  if ( (unsigned __int16)result < v20->Count && ((v20->Bitmap[result] >> a1->GroupIndex) & 1) != 0 )
    goto LABEL_27;
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xCu);
  result = (__int64)a1->NextThread;
  if ( result )
    goto LABEL_27;
  result = (__int64)a1->CoreControlBlock;
  v22 = (unsigned __int64)a1 | 1;
  v70 = (unsigned __int64)a1 | 1;
  v23 = (__int64 *)(result + 8);
  if ( *(_BYTE *)result )
  {
    v24 = *(unsigned __int8 *)result;
    do
    {
      v25 = *v23;
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 48), 0LL) )
      {
        do
        {
          if ( (++v26 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v26);
          }
          else
          {
            _mm_pause();
          }
          result = *(_QWORD *)(v25 + 48);
        }
        while ( result );
      }
      ++v23;
      --v24;
    }
    while ( v24 );
    v22 = v70;
    CurrentThread = v71;
  }
  if ( a1->NextThread )
    goto LABEL_24;
  StaticRescheduleContext = a1->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v70);
  RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
  AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
  RescheduleContextEntryForPrcb->___u5[0] |= 2u;
  Prcb = RescheduleContextEntryForPrcb->Prcb;
  RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
  RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
  IdleThread = Prcb->IdleThread;
  *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
  RescheduleContextEntryForPrcb->NewThread = IdleThread;
  if ( (AllCompareThreadStateFlags & 2) != 0 )
  {
    v66 = 0;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      do
      {
        v67 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * v66 + 8 * v66);
        if ( v67 != RescheduleContextEntryForPrcb )
        {
          v67->___u5[0] |= 2u;
          v68 = v67->Prcb;
          v67->CompareThread = v67->Prcb->IdleThread;
          v67->AllCompareThreadStateFlags = v67->AllCompareThreadStateFlags & 0xC0 | 5;
          v69 = v68->IdleThread;
          *((_BYTE *)&v67->0 + 1) &= ~1u;
          v67->NewThread = v69;
        }
        ++v66;
      }
      while ( v66 < StaticRescheduleContext->ProcessorCount );
      CurrentThread = v71;
    }
    StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
  }
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, a5);
  v49 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 0, a5);
  v72 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v22 & 1) == 0 )
  {
    v50 = &v72;
    v51 = 1;
    do
    {
LABEL_61:
      result = --v51;
      _InterlockedAnd64((volatile signed __int64 *)(v50[v51] + 48), 0LL);
    }
    while ( v51 );
    goto LABEL_62;
  }
  result = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
  v50 = (unsigned __int64 *)(result + 8);
  v51 = *(unsigned __int8 *)result;
  if ( *(_BYTE *)result )
    goto LABEL_61;
LABEL_62:
  v22 = 0LL;
  v70 = 0LL;
  CurrentThread->ThreadLock = 0LL;
  if ( !v49 )
    goto LABEL_28;
  v52 = 0;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_77;
  do
  {
    v53 = StaticRescheduleContext->ProcessorEntries[v52].___u6[0];
    v54 = StaticRescheduleContext->ProcessorEntries[v52].Prcb;
    if ( (v53 & 0x10) != 0 || (v53 & 8) != 0 && v54->IdleHalt )
    {
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
        a1->DeferredDispatchInterrupts.TargetType = 1;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = v54->Number;
        goto LABEL_69;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == v54->Number )
          goto LABEL_69;
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
      }
      else
      {
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      KeAddGroupAffinityEx(&p_MultipleTargetAffinity->Count, v54->Group, v54->GroupSetMember);
    }
LABEL_69:
    if ( (StaticRescheduleContext->ProcessorEntries[v52].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread((__int64)StaticRescheduleContext->ProcessorEntries[v52].NewThread, (__int64)v54, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[v52].___u6[0] & 4) != 0 )
    {
      SchedulerAssist = (int *)v54->SchedulerAssist;
      if ( SchedulerAssist )
      {
        p_SchedulerAssist = &a1->SchedulerAssist;
        if ( a1->SchedulerAssist )
        {
          if ( a1 != v54 )
          {
            v60 = *SchedulerAssist;
            v61 = &a1->SchedulerAssist;
            if ( (v60 & 0x40000) != 0 )
              v61 = &a1->SchedulerAssist;
            if ( (v60 & 0x100000) != 0
              || (v60 & 0x40000) != 0
              && (p_SchedulerAssist = v61,
                  (unsigned __int8)v60 < StaticRescheduleContext->ProcessorEntries[v52].KickPriority) )
            {
              v62 = HvlpVirtualProcessorsIdentityMapped == 0;
              v63 = *p_SchedulerAssist;
              *((_DWORD *)*p_SchedulerAssist + 3) = 2;
              Number = v54->Number;
              if ( v62 )
                LODWORD(Number) = (unsigned __int8)byte_140FCD2A1[2 * Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
              v63[2] = Number;
              if ( (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(v54->Number, 2LL);
              __writemsr(0x400000C2u, (unsigned int)Number);
            }
          }
        }
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[v52].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v52].NewThread->KeReferenceCount);
    ++v52;
  }
  while ( v52 < StaticRescheduleContext->ProcessorCount );
  v22 = v70;
  CurrentThread = v71;
LABEL_77:
  result = KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
  v10 = 0;
LABEL_24:
  if ( v22 )
    result = KiReleasePrcbLocksForIsolationUnit((__int64 *)&v70);
  if ( v10 )
LABEL_27:
    CurrentThread->ThreadLock = 0LL;
LABEL_28:
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
  {
    v65 = (unsigned int)CurrentThread->MiscFlags >> 3;
    LOBYTE(v65) = (CurrentThread->MiscFlags & 8) != 0;
    result = EtwTraceThreadAffinity(
               (_DWORD)CurrentThread,
               CurrentThread->AffinityPrimaryGroup,
               v65,
               0,
               (__int64)CurrentThread->Affinity,
               1334);
  }
  if ( (xmmword_140FC6B50 & 0x8000000) != 0 )
    return EtwTraceIdealProcessor(CurrentThread, 1350LL);
  return result;
}
