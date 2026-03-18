/*
 * XREFs of KiSetSystemAffinityThread @ 0x140278684
 * Callers:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C641C (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x1404CF0AC (KeRevertToUserMultipleGroupAffinityThread.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x1402720F8 (KiComputeThreadAffinity.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140276B70 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14027812C (KiUpdateNodeAffinitizedFlag.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceIdealProcessor @ 0x1404B0E7C (EtwTraceIdealProcessor.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiSetSystemAffinityThread(struct _KPRCB *a1, char *a2, __int64 *a3, unsigned int a4, __int64 a5)
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
  __int64 v23; // rcx
  __int64 *v24; // r15
  __int64 v25; // r12
  __int64 v26; // rbx
  unsigned int v27; // r14d
  _KAFFINITY_EX *v28; // r9
  __int64 v29; // rax
  signed __int16 Count; // r8
  __int64 v31; // r10
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  int v35; // eax
  int v36; // r15d
  unsigned __int16 v37; // ax
  unsigned __int16 Size; // cx
  unsigned __int16 v39; // r8
  unsigned __int16 v40; // cx
  $B38C3B1372D6E954799962D5DD404846 *v41; // r9
  __int64 v42; // r10
  signed __int64 v43; // rdx
  __int64 v44; // rax
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r9
  unsigned __int8 AllCompareThreadStateFlags; // dl
  _KPRCB *Prcb; // rax
  _KTHREAD *IdleThread; // rax
  char v50; // r9
  unsigned __int64 *v51; // r8
  unsigned int v52; // edx
  unsigned int v53; // r13d
  char v54; // al
  struct _KPRCB *v55; // rbx
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rax
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  void **p_SchedulerAssist; // rcx
  int v61; // eax
  void **v62; // r8
  bool v63; // zf
  _DWORD *v64; // rdx
  __int64 Number; // r15
  unsigned int v66; // r8d
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *v67; // rdx
  _KPRCB *v68; // rcx
  _KTHREAD *v69; // rax
  unsigned int IdealProcessor; // [rsp+30h] [rbp-20h]
  unsigned __int64 v71; // [rsp+38h] [rbp-18h] BYREF
  _KTHREAD *v72; // [rsp+40h] [rbp-10h]
  unsigned __int64 v73; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v74; // [rsp+A8h] [rbp+58h]

  v74 = a4;
  CurrentThread = a1->CurrentThread;
  v6 = a4;
  v71 = 0LL;
  v72 = CurrentThread;
  Affinity = CurrentThread->Affinity;
  v10 = 1;
  if ( a2 )
  {
    v37 = *(_WORD *)a2;
    Size = Affinity->Size;
    Affinity->Size = Size;
    v39 = Size;
    Affinity->Reserved = 0;
    if ( v37 <= Size )
      v39 = v37;
    v40 = 0;
    Affinity->Count = v39;
    if ( v39 )
    {
      v41 = &Affinity->8;
      v42 = v39;
      v43 = a2 - (char *)Affinity;
      v40 = v39;
      do
      {
        v41->Bitmap[0] = *(unsigned __int64 *)((char *)v41->Bitmap + v43);
        v41 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v41 + 8);
        --v42;
      }
      while ( v42 );
    }
    while ( v40 < Affinity->Size )
    {
      v44 = v40++;
      Affinity->Bitmap[v44] = 0LL;
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
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( (unsigned int)v6 >= 0x800 )
  {
    v14 = KiProcessorBlock[CurrentThread->IdealProcessor];
    v28 = CurrentThread->Affinity;
    v74 = CurrentThread->IdealProcessor;
    v29 = *(unsigned __int8 *)(v14 + 208);
    Count = v28->Count;
    if ( (unsigned __int16)v29 >= v28->Count || ((v28->Bitmap[v29] >> *(_BYTE *)(v14 + 209)) & 1) == 0 )
    {
      v31 = *(_QWORD *)(v14 + 192);
      v32 = *(unsigned __int16 *)(v31 + 136);
      if ( (unsigned __int16)v32 >= (unsigned __int16)Count )
        v33 = 0LL;
      else
        v33 = v28->Bitmap[v32];
      v34 = *(_QWORD *)(v31 + 128) & v33;
      if ( v34 )
      {
        v35 = *(unsigned __int16 *)(v31 + 136);
LABEL_45:
        _BitScanReverse64(&v34, v34);
        v36 = *((_DWORD *)qword_140F216A8 + (unsigned int)((v35 << 6) + v34));
      }
      else
      {
        while ( --Count >= 0 )
        {
          v34 = v28->Bitmap[Count];
          if ( v34 )
          {
            v35 = Count;
            goto LABEL_45;
          }
        }
        v36 = -1;
      }
      CurrentThread->IdealProcessor = v36;
      v74 = v36;
      v14 = KiProcessorBlock[v36];
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
  v71 = (unsigned __int64)a1 | 1;
  v23 = *(unsigned __int8 *)result;
  v24 = (__int64 *)(result + 8);
  if ( (_BYTE)v23 )
  {
    v25 = *(unsigned __int8 *)result;
    do
    {
      v26 = *v24;
      v27 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 48), 0LL) )
      {
        do
        {
          if ( (++v27 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
          {
            HvlNotifyLongSpinWait(v27);
          }
          else
          {
            _mm_pause();
          }
          result = *(_QWORD *)(v26 + 48);
        }
        while ( result );
      }
      ++v24;
      --v25;
    }
    while ( v25 );
    v22 = v71;
    CurrentThread = v72;
  }
  if ( a1->NextThread )
    goto LABEL_24;
  StaticRescheduleContext = a1->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v71);
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
      CurrentThread = v72;
    }
    StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
  }
  KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
  v50 = KiCommitRescheduleContext(StaticRescheduleContext, a1, 0LL, a5);
  v73 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v22 & 1) == 0 )
  {
    v51 = &v73;
    v52 = 1;
    do
    {
LABEL_61:
      result = --v52;
      _InterlockedAnd64((volatile signed __int64 *)(v51[v52] + 48), 0LL);
    }
    while ( v52 );
    goto LABEL_62;
  }
  result = *(_QWORD *)((v22 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
  v51 = (unsigned __int64 *)(result + 8);
  v52 = *(unsigned __int8 *)result;
  if ( *(_BYTE *)result )
    goto LABEL_61;
LABEL_62:
  v22 = 0LL;
  v71 = 0LL;
  CurrentThread->ThreadLock = 0LL;
  if ( !v50 )
    goto LABEL_28;
  v53 = 0;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_77;
  do
  {
    v54 = StaticRescheduleContext->ProcessorEntries[v53].___u6[0];
    v55 = StaticRescheduleContext->ProcessorEntries[v53].Prcb;
    if ( (v54 & 0x10) != 0 || (v54 & 8) != 0 && v55->IdleHalt )
    {
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
        a1->DeferredDispatchInterrupts.TargetType = 1;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = v55->Number;
        goto LABEL_69;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == v55->Number )
          goto LABEL_69;
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
      }
      else
      {
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      KeAddGroupAffinityEx(&p_MultipleTargetAffinity->Count, v55->Group, v55->GroupSetMember);
    }
LABEL_69:
    if ( (StaticRescheduleContext->ProcessorEntries[v53].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[v53].NewThread, v55, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[v53].___u6[0] & 4) != 0 )
    {
      SchedulerAssist = (int *)v55->SchedulerAssist;
      if ( SchedulerAssist )
      {
        p_SchedulerAssist = &a1->SchedulerAssist;
        if ( a1->SchedulerAssist )
        {
          if ( a1 != v55 )
          {
            v61 = *SchedulerAssist;
            v62 = &a1->SchedulerAssist;
            if ( (v61 & 0x40000) != 0 )
              v62 = &a1->SchedulerAssist;
            if ( (v61 & 0x100000) != 0
              || (v61 & 0x40000) != 0
              && (p_SchedulerAssist = v62,
                  (unsigned __int8)v61 < StaticRescheduleContext->ProcessorEntries[v53].KickPriority) )
            {
              v63 = HvlpVirtualProcessorsIdentityMapped == 0;
              v64 = *p_SchedulerAssist;
              *((_DWORD *)*p_SchedulerAssist + 3) = 2;
              Number = v55->Number;
              if ( v63 )
                LODWORD(Number) = (unsigned __int8)byte_140FCC261[2 * Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
              v64[2] = Number;
              if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(v55->Number, 2LL);
              __writemsr(0x400000C2u, (unsigned int)Number);
            }
          }
        }
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[v53].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v53].NewThread->KeReferenceCount);
    ++v53;
  }
  while ( v53 < StaticRescheduleContext->ProcessorCount );
  v22 = v71;
  CurrentThread = v72;
LABEL_77:
  result = KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts);
  v10 = 0;
LABEL_24:
  if ( v22 )
    result = KiReleasePrcbLocksForIsolationUnit((__int64 *)&v71);
  if ( v10 )
LABEL_27:
    CurrentThread->ThreadLock = 0LL;
LABEL_28:
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    result = EtwTraceThreadAffinity(
               (__int64)CurrentThread,
               CurrentThread->AffinityPrimaryGroup,
               (CurrentThread->MiscFlags & 8) != 0,
               0,
               &CurrentThread->Affinity->Count,
               1334);
  if ( (xmmword_140FC5B10 & 0x8000000) != 0 )
    return EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v74);
  return result;
}
