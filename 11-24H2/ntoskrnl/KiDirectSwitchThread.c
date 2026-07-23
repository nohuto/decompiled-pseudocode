/*
 * XREFs of KiDirectSwitchThread @ 0x14041E720
 * Callers:
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x1402A7A00 (KiScheduleThreadToRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402A8750 (KiShouldPreemptionBeDeferred.c)
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KiCanDeferredReadyThreadBeScheduledToRescheduleContext @ 0x1402A9110 (KiCanDeferredReadyThreadBeScheduledToRescheduleContext.c)
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402A96E0 (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceReadyThread @ 0x1402C9340 (EtwTraceReadyThread.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     KiInswapAndReadyThread @ 0x1402DE624 (KiInswapAndReadyThread.c)
 *     KiDeferredReadyThread @ 0x1402DFBE0 (KiDeferredReadyThread.c)
 *     KiThreadSetUnusualBoost @ 0x1402E0094 (KiThreadSetUnusualBoost.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14036D540 (KiUpdateTotalCyclesCurrentThread.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     KiComputeEffectivePriority @ 0x1403FCAF0 (KiComputeEffectivePriority.c)
 *     KiGetComparisonRanks @ 0x1404869F0 (KiGetComparisonRanks.c)
 *     EtwTraceIdealProcessor @ 0x1404AC65C (EtwTraceIdealProcessor.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1404E1290 (KiComputeNewPriority.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

bool __fastcall KiDirectSwitchThread(struct _KPRCB *a1, int a2, char a3)
{
  struct _SINGLE_LIST_ENTRY *Next; // r9
  ULONG_PTR v5; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rax
  __int64 ScbOffset; // r12
  bool v9; // zf
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // r10
  __int64 *v19; // rbx
  __int64 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  __int64 *v22; // rcx
  __int64 **v23; // rax
  unsigned __int64 updated; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  unsigned __int64 QuantumTarget; // r15
  unsigned int v30; // ebx
  unsigned __int64 v31; // rdi
  char v32; // al
  int v33; // ebx
  int v34; // edi
  int v35; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  _KPRCB **Prcbs; // r14
  __int64 ProcessorCount; // r15
  _KPRCB *v39; // rsi
  unsigned int v40; // edi
  int v41; // ebx
  unsigned __int64 v42; // r14
  unsigned int v43; // ecx
  int v44; // esi
  int Priority; // edi
  unsigned int v46; // ebx
  int v47; // r15d
  int v48; // edi
  bool v49; // cc
  unsigned int v50; // ecx
  unsigned int v51; // ebx
  signed int v52; // r8d
  unsigned int v53; // r9d
  signed int v54; // eax
  unsigned int v55; // edx
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 v57; // rax
  signed int v58; // ecx
  struct _KPRCB *v59; // r12
  _WORD *v60; // rdx
  __int64 Group; // rax
  int v62; // eax
  unsigned __int64 v63; // rcx
  struct _KTHREAD *v64; // rax
  int QuantumReset; // eax
  __int64 v66; // r8
  __int64 v67; // rcx
  struct _KDPC *v68; // rcx
  PVOID *v69; // r8
  PVOID *p_DpcData; // rdx
  int v71; // eax
  volatile signed __int32 *v72; // rcx
  int v73; // edx
  int v74; // r8d
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  __int64 v76; // r9
  __int64 v77; // rdx
  char v78; // r10
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 i; // r8
  _BYTE *v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned __int8 CanDeferredReadyThreadBeScheduledToRescheduleContext; // al
  char v86; // al
  int v87; // edi
  unsigned __int8 v88; // al
  unsigned __int64 *v89; // r8
  unsigned __int64 v90; // r9
  int v91; // edx
  unsigned __int64 v92; // rdi
  unsigned int v93; // r14d
  unsigned __int64 v94; // rcx
  unsigned __int64 *v95; // r8
  int v96; // edx
  int v97; // eax
  int v99; // [rsp+30h] [rbp-79h] BYREF
  int v100; // [rsp+38h] [rbp-71h] BYREF
  int v101; // [rsp+3Ch] [rbp-6Dh]
  int v102; // [rsp+40h] [rbp-69h]
  struct _SINGLE_LIST_ENTRY v103; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v104; // [rsp+50h] [rbp-59h] BYREF
  signed int v105; // [rsp+58h] [rbp-51h]
  signed int v106; // [rsp+5Ch] [rbp-4Dh]
  unsigned __int64 v107; // [rsp+60h] [rbp-49h]
  unsigned __int64 v108; // [rsp+68h] [rbp-41h]
  struct _KTHREAD *v109; // [rsp+70h] [rbp-39h]
  __int64 v110; // [rsp+78h] [rbp-31h] BYREF
  __int128 v111; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v112[2]; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v113; // [rsp+A0h] [rbp-9h]
  unsigned __int64 v114; // [rsp+A8h] [rbp-1h] BYREF
  unsigned __int64 v115; // [rsp+B0h] [rbp+7h] BYREF
  struct _KPRCB *v116; // [rsp+110h] [rbp+67h] BYREF
  int v117; // [rsp+118h] [rbp+6Fh]
  char v118; // [rsp+120h] [rbp+77h]
  int v119; // [rsp+128h] [rbp+7Fh] BYREF

  v118 = a3;
  v117 = a2;
  v116 = a1;
  Next = a1->DeferredReadyListHead.Next;
  v103.Next = 0LL;
  v102 = -1;
  v101 = -1;
  if ( Next )
    a1->DeferredReadyListHead = (_SINGLE_LIST_ENTRY)Next->Next;
  v5 = (ULONG_PTR)&Next[-27];
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v5, 1, a2, 1);
  CurrentThread = a1->CurrentThread;
  v109 = CurrentThread;
  KiAbProcessPreContextSwitch(CurrentThread, 0);
  v7 = *(_QWORD *)(v5 + 104);
  v99 = 0;
  if ( v7 )
  {
    ScbOffset = a1->ScbOffset;
    v9 = v7 + ScbOffset == 0;
    v10 = v7 + ScbOffset;
    v110 = v10;
    if ( !v9 && KiIsThreadConstrainedBySchedulingGroup(v5) && !KiShouldPreemptionBeDeferred(v11) )
    {
      if ( KiCheckForMaxOverQuotaScb(v10) )
      {
        v99 = -1;
      }
      else
      {
        do
        {
          v13 += *(_DWORD *)(v12 + 124);
          if ( v13 )
            break;
          v12 = *(_QWORD *)(v12 + 416);
        }
        while ( v12 );
        v99 = v13;
        if ( !v13 )
          goto LABEL_26;
      }
      if ( CurrentThread->SchedulingGroup )
      {
        if ( KiIsThreadConstrainedBySchedulingGroup((__int64)CurrentThread) )
        {
          if ( KiShouldPreemptionBeDeferred(v14) )
          {
            v119 = 0;
          }
          else
          {
            if ( KiCheckForMaxOverQuotaScb(v15) )
            {
              v119 = -1;
            }
            else
            {
              do
              {
                v17 += *(_DWORD *)(v16 + 124);
                if ( v17 )
                  break;
                v16 = *(_QWORD *)(v16 + 416);
              }
              while ( v16 );
              v119 = v17;
              if ( !v17 )
                goto LABEL_26;
            }
            KiGetComparisonRanks(v10, v18, &v99, &v119);
          }
        }
        else
        {
          v119 = 0;
        }
      }
    }
  }
  else
  {
    v10 = 0LL;
    v110 = 0LL;
  }
LABEL_26:
  v19 = *(__int64 **)(v5 + 208);
  v20 = &v19[6 * *(unsigned __int8 *)(v5 + 587)];
  do
  {
    if ( *((_BYTE *)v19 + 17) < 5u )
    {
      v21 = (volatile signed __int32 *)v19[4];
      KiAcquireKobjectLockSafe(v21);
      if ( *((_BYTE *)v19 + 17) == 4 )
      {
        v22 = (__int64 *)*v19;
        v23 = (__int64 **)v19[1];
        if ( *(__int64 **)(*v19 + 8) != v19 || *v23 != v19 )
          __fastfail(3u);
        *v23 = v22;
        v22[1] = (__int64)v23;
      }
      _InterlockedAnd(v21, 0xFFFFFF7F);
    }
    v19 += 6;
  }
  while ( v19 != v20 );
  _disable();
  updated = KiUpdateTotalCyclesCurrentThread(a1, (__int64)CurrentThread, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v113 = updated;
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v27 = *SchedulerAssist;
    do
    {
      v28 = v27;
      v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
    }
    while ( v28 != v27 );
    if ( (v27 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  QuantumTarget = CurrentThread->QuantumTarget;
  v30 = 0;
  v31 = *(_QWORD *)(v5 + 72);
  v107 = QuantumTarget;
  v108 = v31;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    do
    {
      if ( (++v30 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v30);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v5 + 64) );
  }
  v32 = KiUpdateVPBackingThreadPriority(v5);
  v33 = 32 * (KiComputeEffectivePriority(v5, (unsigned __int8)v117, v31, v32) & 1);
  if ( *(_QWORD *)(v5 + 568) != KiCpuSetSequence && (*(_DWORD *)(v5 + 116) & 8) == 0 )
  {
    v34 = *(_DWORD *)(v5 + 588);
    v102 = v34;
    if ( (unsigned int)KiComputeThreadAffinity(v5) )
    {
      v35 = *(_DWORD *)(v5 + 588);
      v101 = v35;
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        v33 |= 0x200u;
      if ( (xmmword_140FC6B50 & 0x8000000) != 0 && v34 != v35 )
        v33 |= 0x400u;
      if ( (v33 & 0x600) != 0 )
        _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
    }
  }
  v104 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL | 1;
  CoreControlBlock = a1->CoreControlBlock;
  Prcbs = CoreControlBlock->Prcbs;
  if ( CoreControlBlock->ProcessorCount )
  {
    ProcessorCount = CoreControlBlock->ProcessorCount;
    do
    {
      v39 = *Prcbs;
      v40 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v39->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v40 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v40);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v39->PrcbLock );
      }
      ++Prcbs;
      --ProcessorCount;
    }
    while ( ProcessorCount );
    QuantumTarget = v107;
  }
  v41 = v33 | 0xF;
  v42 = v113;
  v43 = v41 & 0xFFFFFFFA;
  v44 = *(char *)(v5 + 195);
  Priority = v109->Priority;
  if ( v113 + (unsigned int)KiDirectQuantumTarget <= QuantumTarget )
    v43 = v41;
  v46 = v43 & 0xFFFFFFF3;
  if ( v118 )
    v46 = v43;
  v47 = 0;
  if ( v44 <= Priority )
  {
    if ( (v46 & 4) != 0 )
    {
      v47 = v109->Priority;
    }
    else
    {
      if ( (v46 & 8) == 0 )
        goto LABEL_86;
      v47 = KiComputeNewPriority(v109);
      if ( v47 > Priority )
        v47 = Priority;
    }
    if ( v47 >= 16 )
    {
      if ( v44 >= 16 )
      {
        v49 = v47 < v44;
        if ( v47 > v44 )
        {
          v47 = v44;
          goto LABEL_88;
        }
LABEL_87:
        v48 = v44;
        if ( v49 )
          goto LABEL_89;
LABEL_88:
        v48 = v47;
        goto LABEL_89;
      }
      v47 = 15;
    }
LABEL_86:
    v49 = v47 < v44;
    goto LABEL_87;
  }
  v48 = *(char *)(v5 + 195);
  v109->Preempted = 1;
  v46 &= ~1u;
LABEL_89:
  v50 = v46;
  v51 = v46 & 0xFFFFFFFD;
  if ( !v116->NextThread )
    v51 = v50;
  v52 = v48 + (v51 & 1);
  v53 = v116->SharedReadyQueue->ReadySummary | v116->ReadySummary;
  _BitScanReverse((unsigned int *)&v54, v53);
  v105 = v54;
  if ( v52 <= v54 )
    goto LABEL_105;
  if ( !v99 )
    goto LABEL_106;
  if ( v53 > 1 )
    goto LABEL_105;
  v55 = *(_DWORD *)(*(_QWORD *)(v10 + 424) + 124LL);
  Min = v116->ScbQueue.Min;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Min == (_RTL_BALANCED_NODE *)1 )
      goto LABEL_106;
    v57 = (unsigned __int64)Min ^ ((unsigned __int64)&v116->ScbQueue | 1);
  }
  else
  {
    v57 = (unsigned __int64)v116->ScbQueue.Min;
  }
  if ( v57 )
  {
    if ( *(_DWORD *)(v57 + 36) == v55 )
    {
      _BitScanReverse((unsigned int *)&v58, *(unsigned __int16 *)(v57 + 32));
      v106 = v58;
      if ( v52 > v58 )
        goto LABEL_106;
    }
    else if ( *(_DWORD *)(v57 + 36) > v55 )
    {
      goto LABEL_106;
    }
LABEL_105:
    v51 &= ~2u;
  }
LABEL_106:
  v59 = v116;
  v60 = *(_WORD **)(v5 + 576);
  Group = v116->Group;
  if ( (unsigned __int16)Group >= *v60 || ((*(_QWORD *)&v60[4 * Group + 4] >> v116->GroupIndex) & 1) == 0 )
    v51 &= ~2u;
  v62 = *(_DWORD *)(v5 + 120);
  if ( (v62 & 0x20000) == 0 || (v62 & 0x100000) != 0 )
    v51 &= ~2u;
  if ( (v51 & 1) != 0 )
  {
    if ( (v51 & 2) == 0 || (v53 & (1 << v48)) != 0 )
    {
      v42 = v107 - (unsigned int)KiDirectQuantumTarget;
      v63 = (unsigned int)KiDirectQuantumTarget + v108;
      if ( (v51 & 2) == 0 )
        *(_BYTE *)(v5 + 565) = 1;
    }
    else
    {
      v63 = v107 + v108 - v42;
    }
    v64 = v109;
    v51 &= ~0x20u;
    _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 5u);
    *(_QWORD *)(v5 + 32) = v63;
    v64->QuantumTarget = v42;
  }
  if ( (v51 & 0x20) != 0 )
  {
    QuantumReset = KiQueryQuantumReset(v5);
    v67 = v66 + (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
    if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
    *(_QWORD *)(v5 + 32) = v67;
  }
  if ( v48 != v44 )
  {
    KiThreadSetUnusualBoost(v5, v48);
    v68 = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (char)v48 > *(char *)(v5 + 195) )
    {
      if ( *(_BYTE *)(v5 + 792) )
      {
        v69 = (PVOID *)(v5 + 808);
        if ( *(_QWORD *)(v5 + 808) == 1LL )
        {
          p_DpcData = &v68[581].DpcData;
          if ( v68 != (struct _KDPC *)-37240LL )
          {
            *v69 = *p_DpcData;
            *p_DpcData = v69;
            _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
            KiAbQueueAutoBoostDpc(v68);
          }
        }
      }
    }
    *(_BYTE *)(v5 + 195) = v48;
    v71 = KiComputeThreadQos(v5);
    if ( v71 != *(unsigned __int8 *)(v5 + 516) )
      *(_BYTE *)(v5 + 516) = v71;
    if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    {
      v72 = *(volatile signed __int32 **)(v5 + 968);
      v73 = *(char *)(v5 + 195);
      v74 = (unsigned __int8)*v72;
      if ( v73 != v74 )
        _InterlockedAdd(v72, v73 - v74);
    }
  }
  *(_BYTE *)(v5 + 567) = v117;
  *(_BYTE *)(v5 + 566) = 0;
  if ( (v51 & 2) == 0 )
    goto LABEL_163;
  StaticRescheduleContext = v59->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, &v104);
  v76 = 0LL;
  v77 = 0LL;
  if ( StaticRescheduleContext->ProcessorCount )
  {
    while ( StaticRescheduleContext->ProcessorEntries[v77].Prcb != v59 )
    {
      v77 = (unsigned int)(v77 + 1);
      if ( (unsigned int)v77 >= StaticRescheduleContext->ProcessorCount )
        goto LABEL_140;
    }
    v76 = (__int64)&StaticRescheduleContext->ProcessorEntries[v77];
  }
LABEL_140:
  *(_BYTE *)(v76 + 34) |= 2u;
  v78 = *(_BYTE *)(v76 + 32);
  v79 = *(_QWORD *)v76;
  *(_QWORD *)(v76 + 16) = *(_QWORD *)(*(_QWORD *)v76 + 24LL);
  *(_BYTE *)(v76 + 32) = v78 & 0xC0 | 5;
  v80 = *(_QWORD *)(v79 + 24);
  *(_BYTE *)(v76 + 33) &= ~1u;
  *(_QWORD *)(v76 + 24) = v80;
  if ( (v78 & 2) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
    {
      v82 = (char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * (unsigned int)i;
      if ( v82 != (_BYTE *)v76 )
      {
        v82[34] |= 2u;
        v83 = *(_QWORD *)v82;
        *((_QWORD *)v82 + 2) = *(_QWORD *)(*(_QWORD *)v82 + 24LL);
        v82[32] = v82[32] & 0xC0 | 5;
        v84 = *(_QWORD *)(v83 + 24);
        v82[33] &= ~1u;
        *((_QWORD *)v82 + 3) = v84;
      }
    }
    if ( (v78 & 2) != 0 )
      StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
  }
  CanDeferredReadyThreadBeScheduledToRescheduleContext = KiCanDeferredReadyThreadBeScheduledToRescheduleContext(
                                                           &StaticRescheduleContext->ProcessorCount,
                                                           v5,
                                                           (__int64)v59,
                                                           0,
                                                           &v110);
  v51 ^= ((unsigned __int8)v51 ^ (unsigned __int8)(2 * CanDeferredReadyThreadBeScheduledToRescheduleContext)) & 2;
  if ( (CanDeferredReadyThreadBeScheduledToRescheduleContext & 1) == 0 )
  {
LABEL_163:
    v92 = v104;
    goto LABEL_164;
  }
  *(_BYTE *)(v5 + 565) = 0;
  v86 = KiScheduleThreadToRescheduleContext(
          &StaticRescheduleContext->ProcessorCount,
          v5,
          (__int64)v59,
          0,
          (__int64)&v103);
  v87 = v51 ^ ((unsigned __int8)v51 ^ (unsigned __int8)(v86 << 7)) & 0x80;
  if ( (v86 & 1) != 0 )
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, &v103);
  v88 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, v59, 0, &v103);
  v89 = 0LL;
  v90 = v104 & 0xFFFFFFFFFFFFFFFEuLL;
  v114 = v104 & 0xFFFFFFFFFFFFFFFEuLL;
  v91 = 0;
  if ( (v104 & 1) != 0 )
  {
    if ( (v104 & 1) == 1 )
    {
      v89 = (unsigned __int64 *)(*(_QWORD *)(v90 + 36440) + 8LL);
      v91 = **(unsigned __int8 **)(v90 + 36440);
    }
    if ( !v91 )
      goto LABEL_157;
  }
  else
  {
    v89 = &v114;
    v91 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v89[--v91] + 48), 0LL);
  while ( v91 );
LABEL_157:
  v51 = v87 ^ ((unsigned __int16)v87 ^ (unsigned __int16)(v88 << 8)) & 0x100 | 0x50;
  v104 = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
  v92 = 0LL;
  if ( (v51 & 0x100) != 0 )
  {
    WORD1(v116) = (unsigned __int8)v47;
    v93 = 0;
    v112[0] = &v116;
    LOWORD(v116) = (2 * (v51 & 1 | (2 * ((v51 >> 2) & 1 | (2 * ((v51 >> 3) & 1)))))) | 1;
    for ( v112[1] = 0x100000004LL; v93 < StaticRescheduleContext->ProcessorCount; ++v93 )
      KiCompleteRescheduleContextEntry(
        (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * v93 + 8 * v93),
        v59,
        (struct _KTHREAD *)v5,
        (struct _KTHREAD_SCHEDULE_REASON_DATA *)v112);
    KiFlushSoftwareInterruptBatch((char *)&v59->DeferredDispatchInterrupts);
  }
  if ( v103.Next )
    KiReadyDeferredReadyList((__int64)v59, &v103);
LABEL_164:
  if ( (v51 & 0x40) != 0 )
    goto LABEL_171;
  v94 = v92 & 0xFFFFFFFFFFFFFFFEuLL;
  v115 = v92 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v92 & 1) == 0 )
  {
    v95 = &v115;
    v96 = 1;
    goto LABEL_169;
  }
  v95 = (unsigned __int64 *)(*(_QWORD *)(v94 + 36440) + 8LL);
  v96 = **(unsigned __int8 **)(v94 + 36440);
  if ( **(_BYTE **)(v94 + 36440) )
  {
    do
LABEL_169:
      _InterlockedAnd64((volatile signed __int64 *)(v95[--v96] + 48), 0LL);
    while ( v96 );
  }
  v104 = 0LL;
  *(_QWORD *)(v5 + 64) = 0LL;
LABEL_171:
  if ( (v51 & 0x600) != 0 )
  {
    if ( (v51 & 0x200) != 0 )
      EtwTraceThreadAffinity(
        v5,
        *(_WORD *)(v5 + 584),
        (*(_DWORD *)(v5 + 116) & 8) != 0,
        0,
        *(unsigned __int16 **)(v5 + 576),
        1334);
    if ( (v51 & 0x400) != 0 && (xmmword_140FC6B50 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v5, 1350LL);
    _InterlockedDecrement16((volatile signed __int16 *)(v5 + 868));
  }
  if ( (v51 & 0x10) == 0 )
  {
    v100 = 0;
    BYTE2(v100) = v47;
    v111 = (unsigned __int64)&v100;
    v97 = *(_DWORD *)(v5 + 120);
    LOWORD(v100) = 2 * (v51 & 1 | (2 * ((v51 >> 2) & 1 | (2 * ((v51 >> 3) & 1)))));
    BYTE12(v111) = 1;
    DWORD2(v111) = 4;
    if ( (v97 & 0x20000) == 0 || (v97 & 0x100000) != 0 )
      KiInswapAndReadyThread(v59, v5, (__int64)&v111);
    else
      KiDeferredReadyThread(v59, v5, (__int64)&v111);
  }
  KiAbProcessPostContextSwitch((__int64)v109);
  return v59->DeferredReadyListHead.Next == 0LL;
}
