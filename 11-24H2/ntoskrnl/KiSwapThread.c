/*
 * XREFs of KiSwapThread @ 0x1402D60C0
 * Callers:
 *     KeTerminateThread @ 0x1402D5BB8 (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x1402D5EF4 (KiInSwapSingleProcess.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiExecuteDpcDelegate @ 0x1405C47B0 (KiExecuteDpcDelegate.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x1402A5E60 (KiSendHeteroRescheduleIntRequest.c)
 *     KiUpdateGroupSchedulingRank @ 0x1402A87A0 (KiUpdateGroupSchedulingRank.c)
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402DB968 (KiInsertDeferredPreemptionApc.c)
 *     KiCancelTimer @ 0x1402DC730 (KiCancelTimer.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiStartThreadCycleAccumulation @ 0x14036D230 (KiStartThreadCycleAccumulation.c)
 *     EtwpLogContextSwapEvent @ 0x140415D90 (EtwpLogContextSwapEvent.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14043D9A0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     KiProcessScbTracingList @ 0x140449184 (KiProcessScbTracingList.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwpCoverageSamplerContextSwap @ 0x140650808 (EtwpCoverageSamplerContextSwap.c)
 *     KiSwapContext @ 0x1406B3A00 (KiSwapContext.c)
 */

__int64 __fastcall KiSwapThread(ULONG_PTR BugCheckParameter1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r8
  __int64 v6; // r12
  _KCORE_CONTROL_BLOCK *v7; // rax
  _KPRCB **Prcbs; // rsi
  __int64 ProcessorCount; // rbp
  _KPRCB *v10; // rdi
  unsigned int v11; // ebx
  unsigned __int64 *v12; // r8
  int v13; // edx
  unsigned __int64 v14; // r9
  _KCORE_CONTROL_BLOCK *v15; // rax
  _KPRCB **v16; // rsi
  __int64 v17; // rbp
  _KPRCB *v18; // rdi
  unsigned int v19; // ebx
  _KTHREAD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _KTHREAD **v24; // rbx
  unsigned __int64 *v25; // r8
  int v26; // edx
  unsigned __int64 v27; // r9
  _KSCHEDULER_SUBNODE *v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 *v30; // r8
  int v31; // edx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r14
  char v34; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rsi
  char v46; // si
  unsigned int v47; // ebx
  __int64 v48; // rbx
  unsigned __int64 v50; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v51; // [rsp+38h] [rbp-50h] BYREF
  __int64 v52; // [rsp+90h] [rbp+8h] BYREF
  struct _SINGLE_LIST_ENTRY *v53; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v54; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v55; // [rsp+A8h] [rbp+20h] BYREF

  v54 = a3;
  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1u, 0, 2u);
  KiAbProcessPreContextSwitch((_QWORD *)BugCheckParameter1, 0);
  KiCaptureTotalCyclesCurrentThread(a2, BugCheckParameter1);
  v6 = 0LL;
  *(_DWORD *)(BugCheckParameter1 + 84) = (*(_DWORD *)(BugCheckParameter1 + 80) >> 1)
                                       + (*(_DWORD *)(BugCheckParameter1 + 84) >> 1);
  *(_DWORD *)(BugCheckParameter1 + 80) = 0;
  v52 = a2 | 1;
  v7 = *(_KCORE_CONTROL_BLOCK **)(a2 + 36440);
  Prcbs = v7->Prcbs;
  if ( v7->ProcessorCount )
  {
    ProcessorCount = v7->ProcessorCount;
    do
    {
      v10 = *Prcbs;
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v10->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v10->PrcbLock );
      }
      ++Prcbs;
      --ProcessorCount;
    }
    while ( ProcessorCount );
  }
  v53 = 0LL;
  KiUpdateGroupSchedulingRank(BugCheckParameter1, (struct _KPRCB *)a2, v5, 0, &v53);
  if ( v53 )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
    v55 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v52 & 1) != 0 )
    {
      if ( (v52 & 1) == 1 )
      {
        v12 = (unsigned __int64 *)(*(_QWORD *)(v14 + 36440) + 8LL);
        v13 = **(unsigned __int8 **)(v14 + 36440);
      }
      if ( !v13 )
        goto LABEL_23;
    }
    else
    {
      v12 = &v55;
      v13 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v12[--v13] + 48), 0LL);
    while ( v13 );
LABEL_23:
    KiProcessScbTracingList(a2, &v53);
    v15 = *(_KCORE_CONTROL_BLOCK **)(a2 + 36440);
    v16 = v15->Prcbs;
    if ( v15->ProcessorCount )
    {
      v17 = v15->ProcessorCount;
      do
      {
        v18 = *v16;
        v19 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v19 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v19);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v18->PrcbLock );
        }
        ++v16;
        --v17;
      }
      while ( v17 );
    }
  }
  v20 = KiSearchForNewThread((struct _KPRCB *)a2, 0, (unsigned __int64 *)&v52);
  v24 = (_KTHREAD **)(a2 + 24);
  if ( !(unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(v22, v21, v23) )
  {
    if ( v20 == *(_KTHREAD **)(a2 + 24) )
    {
      v24 = (_KTHREAD **)(a2 + 24);
      if ( KeHeteroSystem )
      {
        v24 = (_KTHREAD **)(a2 + 24);
        if ( !KeHeteroSystemVirtual )
        {
          v25 = 0LL;
          v26 = 0;
          v27 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
          v50 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
          if ( (v52 & 1) != 0 )
          {
            if ( (v52 & 1) == 1 )
            {
              v25 = (unsigned __int64 *)(*(_QWORD *)(v27 + 36440) + 8LL);
              v26 = **(unsigned __int8 **)(v27 + 36440);
            }
            if ( !v26 )
              goto LABEL_46;
          }
          else
          {
            v25 = &v50;
            v26 = 1;
          }
          do
            _InterlockedAnd64((volatile signed __int64 *)(v25[--v26] + 48), 0LL);
          while ( v26 );
LABEL_46:
          v52 = 0LL;
          KiSendHeteroRescheduleIntRequest((_QWORD *)a2);
          KiAcquirePrcbLocksForIsolationUnit(a2, 0LL, (unsigned __int64 *)&v52);
          v24 = (_KTHREAD **)(a2 + 24);
LABEL_52:
          v20 = *(_KTHREAD **)(a2 + 16);
        }
      }
    }
LABEL_53:
    if ( v20 == *v24 )
      goto LABEL_59;
    goto LABEL_54;
  }
  if ( v20 == *v24 )
  {
    if ( KeHeteroSystem && !KeHeteroSystemVirtual && !*(_BYTE *)(a2 + 14523) )
    {
      KiReleasePrcbLocksForIsolationUnit(&v52);
      KiSendHeteroRescheduleIntRequest((_QWORD *)a2);
      KiAcquirePrcbLocksForIsolationUnit(a2, 0LL, (unsigned __int64 *)&v52);
      goto LABEL_52;
    }
    goto LABEL_53;
  }
LABEL_54:
  if ( v20 != (_KTHREAD *)BugCheckParameter1 && v20->Running )
  {
    v20 = *v24;
    *(_QWORD *)(a2 + 8) = *v24;
    if ( v20->WaitBlockFill6[68] == 1 )
      v20->ReadyTime += MEMORY[0xFFFFF78000000320] - v20->WaitBlock[2].SpareLong;
    v20->WaitBlockFill6[68] = 2;
    goto LABEL_63;
  }
LABEL_59:
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 8) = v20;
  if ( v20->WaitBlockFill6[68] == 1 )
    v20->ReadyTime += MEMORY[0xFFFFF78000000320] - v20->WaitBlock[2].SpareLong;
  v20->WaitBlockFill6[68] = 2;
  v28 = *(_KSCHEDULER_SUBNODE **)(a2 + 192);
  v29 = *(_QWORD *)(a2 + 200);
  if ( (v28->StealableStandbyThreads & v29) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)&v28->StealableStandbyThreads, ~v29);
LABEL_63:
  v30 = 0LL;
  v31 = 0;
  v32 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
  v51 = v52 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v52 & 1) == 0 )
  {
    v30 = &v51;
    v31 = 1;
    do
LABEL_69:
      _InterlockedAnd64((volatile signed __int64 *)(v30[--v31] + 48), 0LL);
    while ( v31 );
    goto LABEL_70;
  }
  if ( (v52 & 1) == 1 )
  {
    v30 = (unsigned __int64 *)(*(_QWORD *)(v32 + 36440) + 8LL);
    v31 = **(unsigned __int8 **)(v32 + 36440);
  }
  if ( v31 )
    goto LABEL_69;
LABEL_70:
  v33 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
  v52 = 0LL;
  if ( (_KTHREAD *)BugCheckParameter1 == v20 )
  {
    v34 = v20->ApcState.KernelApcPending && !v20->SpecialApcDisable && !(_BYTE)v33;
    _disable();
    KiStartThreadCycleAccumulation(a2, v20, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v37 = *SchedulerAssist;
      do
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange(SchedulerAssist, v37 & 0xFFDFFFFF, v37);
      }
      while ( v38 != v37 );
      if ( (v37 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    KiAbProcessPostContextSwitch(BugCheckParameter1);
    if ( (*((_DWORD *)&v20->0 + 1) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)&v20->116 + 1, 0xBu);
      KiInsertDeferredPreemptionApc(a2, v20, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
    {
      v40 = *(_QWORD *)(BugCheckParameter1 + 1688);
      if ( v40 == -3 )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1520LL);
      }
      else if ( v40 )
      {
        do
        {
          if ( *(_QWORD *)(v40 + 1504) )
            break;
          v40 = *(_QWORD *)(v40 + 1304);
        }
        while ( v40 );
      }
      else
      {
        v40 = 0LL;
      }
      v41 = *(_QWORD *)(BugCheckParameter1 + 1688);
      if ( v41 == -3 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 544) + 1520LL);
      }
      else if ( v41 )
      {
        while ( v41 && !*(_QWORD *)(v41 + 1504) )
          v41 = *(_QWORD *)(v41 + 1304);
        v6 = v41;
      }
      v42 = &PspHostSiloGlobals;
      v43 = &PspHostSiloGlobals;
      if ( v40 )
        v43 = *(_QWORD **)(v40 + 1504);
      v44 = v43[104];
      if ( v6 )
        v42 = *(_QWORD **)(v6 + 1504);
      v45 = v42[104];
      if ( EtwpHostSiloState != -4844 && (*(_DWORD *)(EtwpHostSiloState + 4848) & 4) != 0 )
        EtwpCoverageSamplerContextSwap(BugCheckParameter1);
      EtwpLogContextSwapEvent(EtwpHostSiloState, BugCheckParameter1, BugCheckParameter1);
      if ( v40 == v6 )
      {
        if ( v40 && v44 )
        {
          EtwpLogContextSwapEvent(v44, BugCheckParameter1, BugCheckParameter1);
          goto LABEL_136;
        }
      }
      else if ( v40 && v44 )
      {
        EtwpLogContextSwapEvent(v44, BugCheckParameter1, 0LL);
      }
      if ( v6 && v45 )
        EtwpLogContextSwapEvent(v45, 0LL, BugCheckParameter1);
    }
  }
  else
  {
    v46 = 0;
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 && *(_BYTE *)(BugCheckParameter1 + 388) == 5 )
    {
      if ( !*(_BYTE *)(BugCheckParameter1 + 792) )
      {
        v34 = KiSwapContext(BugCheckParameter1, v20, (unsigned __int8)v33);
        KiAbProcessPostContextSwitch(BugCheckParameter1);
        goto LABEL_136;
      }
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      {
        do
        {
          if ( (++v47 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v47);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 && *(_BYTE *)(BugCheckParameter1 + 388) == 5 )
      {
        if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
          _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x40000u);
        KiUpdateVPBackingThreadPriority(BugCheckParameter1);
        v46 = 1;
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    }
    v34 = KiSwapContext(BugCheckParameter1, v20, (unsigned __int8)v33);
    KiAbProcessPostContextSwitch(BugCheckParameter1);
    if ( v46 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFFBFFFF);
  }
LABEL_136:
  v48 = *(_QWORD *)(BugCheckParameter1 + 200);
  if ( _bittestandreset((signed __int32 *)(BugCheckParameter1 + 116), 9u) )
  {
    LOBYTE(v39) = 1;
    if ( !(unsigned __int8)KiCancelTimer(BugCheckParameter1 + 256, v39) )
    {
      *(_BYTE *)(BugCheckParameter1 + 481) = 4;
      *(_QWORD *)(BugCheckParameter1 + 264) = BugCheckParameter1 + 464;
      *(_QWORD *)(BugCheckParameter1 + 272) = BugCheckParameter1 + 464;
    }
  }
  if ( v54 )
    *v54 = *(_QWORD *)(BugCheckParameter1 + 976);
  if ( v34 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v39) = 1;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
    }
    __writecr8(1uLL);
    KiDeliverApc(0, 0LL, 0LL);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v33);
  __writecr8(v33);
  return v48;
}
