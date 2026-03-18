/*
 * XREFs of KiSoftParkElectionUnparkProcessor @ 0x140313EBC
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x1403137E0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x140313CB4 (EtwTraceScheduleThread.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x140313D98 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1403173E0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline @ 0x1404F0A14 (Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x1404F7354 (EtwTraceXSchedulerPriorityKickSend.c)
 *     EtwTraceParkTransition @ 0x140641C78 (EtwTraceParkTransition.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall KiSoftParkElectionUnparkProcessor(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  char v5; // r10
  struct _SINGLE_LIST_ENTRY *v6; // r12
  __int64 v7; // r13
  _KCORE_CONTROL_BLOCK *v10; // rax
  __int64 ProcessorCount; // rcx
  _KPRCB **Prcbs; // r15
  __int64 v13; // r12
  _KPRCB *v14; // rbx
  unsigned int v15; // ebp
  __int64 v16; // rbp
  unsigned int v17; // ebx
  char v18; // r13
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 v20; // al
  unsigned __int64 *v21; // r9
  int v22; // edx
  unsigned __int8 *v23; // rax
  __int64 v24; // r12
  char v25; // al
  struct _KPRCB *Prcb; // rbx
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rcx
  unsigned __int8 v29; // al
  unsigned int SingleTargetIndex; // edx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // rbp
  int v32; // ecx
  bool v33; // zf
  _DWORD *v34; // rcx
  __int64 Number; // rbp
  unsigned int v36; // edx
  _KAFFINITY_EX *v37; // rdi
  char v38; // bl
  unsigned __int64 v39; // rbp
  int v40; // edx
  char v41; // r8
  unsigned __int8 v42; // bl
  char v43; // [rsp+30h] [rbp-58h]
  int v44; // [rsp+34h] [rbp-54h] BYREF
  __int64 v45[10]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp+8h] BYREF
  char v47; // [rsp+98h] [rbp+10h]
  __int64 v48; // [rsp+A0h] [rbp+18h]
  struct _SINGLE_LIST_ENTRY *v49; // [rsp+A8h] [rbp+20h]

  v49 = a4;
  v48 = a3;
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v5 = 0;
  LOBYTE(v46) = 0;
  v6 = a4;
  v47 = 0;
  v7 = a3;
  v43 = 0;
  v45[0] = a2 | 1;
  v10 = *(_KCORE_CONTROL_BLOCK **)(a2 + 36440);
  ProcessorCount = v10->ProcessorCount;
  Prcbs = v10->Prcbs;
  if ( (_BYTE)ProcessorCount )
  {
    v13 = v10->ProcessorCount;
    do
    {
      v14 = *Prcbs;
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v14->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(ProcessorCount) )
          {
            HvlNotifyLongSpinWait(v15);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v14->PrcbLock );
      }
      ++Prcbs;
      --v13;
    }
    while ( v13 );
    v7 = v48;
    v6 = v49;
    v5 = v46;
  }
  if ( (*(_BYTE *)(a2 + 35) & 0x14) == 0x14 )
  {
    v39 = *(_QWORD *)(a2 + 200);
    _InterlockedXor64((volatile signed __int64 *)(v7 + 80), v39);
    KiAdjustReadyQueueScanOwnerOnParkingChange(a2, v7, 0LL);
    v42 = *(_BYTE *)(a2 + 35) & 0xCF;
    if ( (v42 & (unsigned __int8)(v41 + 1)) != 0 )
    {
      *(_BYTE *)(a2 + 35) = v42;
      v38 = 0;
      v47 = 0;
    }
    else
    {
      if ( (unsigned int)Feature_LockFreeIdleMasks__private_IsEnabledNoReportingNoInline() )
      {
        _InterlockedOr64((volatile signed __int64 *)(v7 + 8), v39);
      }
      else
      {
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(_QWORD *)v7 );
        }
        *(_QWORD *)(v7 + 8) ^= v39;
        _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
      }
      *(_BYTE *)(a2 + 35) = v42;
      *(_BYTE *)(a2 + 14523) = 1;
      v38 = 1;
      v47 = 0;
      if ( (struct _KPRCB *)a2 != a1 )
        v47 = 1;
    }
    KiUpdateThreadPriority(a2, v40, *(_QWORD *)(a2 + 24), 0, v38);
    _InterlockedAdd16((volatile signed __int16 *)(MmWriteableSharedUserData + 874), 1u);
    v43 = 1;
    if ( v38 )
    {
      memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
      KiStartRescheduleContext((__int64)StaticRescheduleContext, v45);
      KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
      v5 = 0;
      v16 = 0LL;
      v17 = (DWORD1(xmmword_140FC5B10) >> 9) & 2;
      if ( StaticRescheduleContext->ProcessorCount )
      {
        v18 = 0;
        do
        {
          v18 |= KiCommitRescheduleContextEntry(
                   (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                         + 32 * v16
                                                         + 8 * (unsigned int)v16),
                   a1,
                   v17,
                   v6);
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < StaticRescheduleContext->ProcessorCount );
        LOBYTE(v46) = v18;
        v7 = v48;
        v5 = v46;
      }
      if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
      {
        CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
        v20 = CoreControlBlock->ScanStartIndex + 1;
        CoreControlBlock->ScanStartIndex = v20;
        if ( v20 >= CoreControlBlock->ProcessorCount )
          CoreControlBlock->ScanStartIndex = 0;
      }
    }
    else
    {
      v5 = v46;
    }
  }
  v21 = 0LL;
  v22 = 0;
  v46 = v45[0] & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v45[0] & 1) == 0 )
  {
    v21 = &v46;
    v22 = 1;
    do
LABEL_29:
      _InterlockedAnd64((volatile signed __int64 *)(v21[--v22] + 48), 0LL);
    while ( v22 );
    goto LABEL_30;
  }
  if ( (v45[0] & 1) == 1 )
  {
    v23 = *(unsigned __int8 **)((v45[0] & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
    v22 = *v23;
    v21 = (unsigned __int64 *)(v23 + 8);
  }
  if ( v22 )
    goto LABEL_29;
LABEL_30:
  v45[0] = 0LL;
  if ( v5 )
  {
    v24 = 0LL;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      while ( 1 )
      {
        v25 = StaticRescheduleContext->ProcessorEntries[v24].___u6[0];
        Prcb = StaticRescheduleContext->ProcessorEntries[v24].Prcb;
        if ( (v25 & 0x10) == 0 && ((v25 & 8) == 0 || !Prcb->IdleHalt) )
          goto LABEL_37;
        TargetType = a1->DeferredDispatchInterrupts.TargetType;
        if ( TargetType )
        {
          if ( TargetType != 1 )
          {
            p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
            goto LABEL_53;
          }
          SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
          if ( SingleTargetIndex != Prcb->Number )
          {
            p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
            a1->DeferredDispatchInterrupts.TargetType = 2;
            KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count, SingleTargetIndex);
LABEL_53:
            KeAddGroupAffinityEx(&p_MultipleTargetAffinity->Count, Prcb->Group, Prcb->GroupSetMember);
          }
        }
        else
        {
          a1->DeferredDispatchInterrupts.TargetType = 1;
          a1->DeferredDispatchInterrupts.SingleTargetIndex = Prcb->Number;
        }
LABEL_37:
        if ( (StaticRescheduleContext->ProcessorEntries[v24].___u6[0] & 2) != 0 )
          EtwTraceScheduleThread((__int64)StaticRescheduleContext->ProcessorEntries[v24].NewThread, (__int64)Prcb, 0LL);
        if ( (StaticRescheduleContext->ProcessorEntries[v24].___u6[0] & 4) != 0 )
        {
          SchedulerAssist = (int *)Prcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( a1->SchedulerAssist )
            {
              if ( a1 != Prcb )
              {
                v32 = *SchedulerAssist;
                if ( (v32 & 0x100000) != 0
                  || (v32 & 0x40000) != 0
                  && (unsigned __int8)v32 < StaticRescheduleContext->ProcessorEntries[v24].KickPriority )
                {
                  v33 = HvlpVirtualProcessorsIdentityMapped == 0;
                  v34 = a1->SchedulerAssist;
                  v34[3] = 2;
                  Number = Prcb->Number;
                  if ( v33 )
                    LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                  v34[2] = Number;
                  if ( (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
                    EtwTraceXSchedulerPriorityKickSend(Prcb->Number, 2LL);
                  __writemsr(0x400000C2u, (unsigned int)Number);
                }
              }
            }
          }
        }
        if ( (StaticRescheduleContext->ProcessorEntries[v24].___u6[0] & 1) != 0 )
          _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v24].NewThread->KeReferenceCount);
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= StaticRescheduleContext->ProcessorCount )
        {
          v7 = v48;
          break;
        }
      }
    }
  }
  if ( v47 )
  {
    v29 = a1->DeferredDispatchInterrupts.TargetType;
    if ( !v29 )
    {
      a1->DeferredDispatchInterrupts.TargetType = 1;
      a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(a2 + 36);
      goto LABEL_48;
    }
    if ( v29 == 1 )
    {
      v36 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( v36 == *(_DWORD *)(a2 + 36) )
        goto LABEL_48;
      a1->DeferredDispatchInterrupts.TargetType = 2;
      v37 = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      KeAddProcessorAffinityEx(&v37->Count, v36);
    }
    else
    {
      v37 = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
    }
    KeAddGroupAffinityEx(&v37->Count, *(unsigned __int8 *)(a2 + 208), *(_QWORD *)(a2 + 200));
  }
LABEL_48:
  if ( (WORD2(xmmword_140FC5B10) & 0x2000) != 0 )
  {
    if ( v43 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 120));
      EtwTraceParkTransition(a2, 0LL, 2LL);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 120));
    }
  }
}
