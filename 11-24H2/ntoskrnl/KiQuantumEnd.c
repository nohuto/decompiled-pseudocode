/*
 * XREFs of KiQuantumEnd @ 0x140293C70
 * Callers:
 *     KiDispatchInterrupt @ 0x1402936B0 (KiDispatchInterrupt.c)
 *     KiIdleLoop @ 0x1406ABC30 (KiIdleLoop.c)
 * Callees:
 *     KiAbProcessPostContextSwitch @ 0x14020FA80 (KiAbProcessPostContextSwitch.c)
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiStartRescheduleContext @ 0x140254D50 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140293190 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140294FC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402979F0 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140299320 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x140299450 (KiCommitRescheduleContext.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14029D8F0 (KiCheckPreferredHeteroProcessor.c)
 *     KeCheckAndApplyBamQos @ 0x14029DF30 (KeCheckAndApplyBamQos.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14030AEFC (KiGroupSchedulingQuantumEnd.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14030EBE4 (KiReadGuestSchedulerAssistPriority.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KiQueryQuantumReset @ 0x1403241CC (KiQueryQuantumReset.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1403386A0 (KiDeferredReadyThread.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14034DCD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403B1E60 (KiAcquireThreadStateLockForWrite.c)
 *     KzRefreshWorkloadProperties @ 0x1403B260C (KzRefreshWorkloadProperties.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1403CBEA0 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403E9C10 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     KeIsUserVaAccessAllowed @ 0x14042FDA0 (KeIsUserVaAccessAllowed.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x1404457F0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     KiScanSharedReadyThreads @ 0x1404657E0 (KiScanSharedReadyThreads.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14046FED0 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404E6D30 (KiUpdateVPBackingThreadPriority.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C5094 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceAntiStarvationBoost @ 0x14064D430 (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x1406B2A60 (KiSwapContext.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

unsigned __int64 KiQuantumEnd()
{
  struct _KPRCB *CurrentPrcb; // r11
  ULONG_PTR CurrentThread; // r14
  unsigned __int64 v2; // r12
  unsigned int v3; // ebx
  struct _KPRCB *v4; // r13
  int QuantumReset; // ebx
  int IsEnabledNoReportingNoInline; // eax
  char v7; // cl
  int v8; // r15d
  char v9; // dl
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  char v13; // dl
  char v14; // al
  __int64 v15; // rbx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  _KPRCB **Prcbs; // rsi
  __int64 ProcessorCount; // r14
  _KPRCB *v19; // rdi
  unsigned int v20; // ebx
  int v21; // edx
  unsigned __int64 v22; // rcx
  unsigned __int64 *v23; // r8
  int v24; // edx
  unsigned int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  _WORD *v29; // rcx
  __int64 v30; // rcx
  unsigned __int8 v31; // al
  int v32; // r9d
  int v33; // ecx
  int v34; // r13d
  char v35; // r15
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  _KCORE_CONTROL_BLOCK *v37; // rax
  _KPRCB **v38; // rsi
  __int64 v39; // r14
  _KPRCB *v40; // rdi
  unsigned int v41; // ebx
  unsigned int ReadySummary; // r12d
  int v43; // r12d
  _LIST_ENTRY *DispatcherReadyListHead; // rdx
  unsigned int QueueIndex; // r13d
  __int64 v46; // r8
  struct _LIST_ENTRY **p_Flink; // r10
  int v48; // esi
  unsigned int v49; // r12d
  unsigned int v50; // eax
  __int64 v51; // r9
  _LIST_ENTRY *v52; // r15
  _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY **p_Blink; // rbx
  bool v55; // cl
  bool v56; // zf
  _LIST_ENTRY *v57; // rdi
  int GuestSchedulerAssistPriority; // eax
  int v59; // esi
  struct _LIST_ENTRY *v60; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _KSHARED_READY_QUEUE *v62; // rcx
  int v63; // edx
  unsigned int v64; // ebx
  unsigned __int64 *v65; // r8
  unsigned __int64 v66; // r9
  int v67; // edx
  unsigned __int64 v68; // r12
  volatile signed __int32 *v69; // rdi
  char v70; // r14
  unsigned __int64 v71; // rsi
  int v72; // ebx
  __int16 v73; // cx
  int v74; // edx
  unsigned __int64 v75; // rcx
  _KCORE_CONTROL_BLOCK *v76; // rax
  _KPRCB **v77; // rsi
  __int64 v78; // r14
  _KPRCB *v79; // rdi
  unsigned int v80; // ebx
  int v81; // eax
  __int64 v82; // r14
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rdi
  unsigned int v84; // r8d
  __int64 v85; // r9
  struct _KPRCB *v86; // r13
  int v87; // edx
  char v88; // r10
  __int64 v89; // rcx
  __int64 v90; // rax
  unsigned int i; // r8d
  _BYTE *v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  char v95; // cl
  unsigned int j; // edx
  _KI_RESCHEDULE_CONTEXT_ENTRY *v97; // rax
  char v98; // al
  __int64 v99; // rbx
  char v100; // si
  unsigned int k; // esi
  _KTHREAD *NextThread; // rbx
  char IsUserVaAccessAllowed; // di
  __int64 v104; // r8
  unsigned __int64 result; // rax
  unsigned int v106; // edx
  unsigned __int64 v107; // r8
  unsigned __int64 *v108; // r14
  __int64 v109; // [rsp+20h] [rbp-99h]
  struct _KPRCB *v110; // [rsp+30h] [rbp-89h]
  __int64 v111; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v112; // [rsp+40h] [rbp-79h]
  struct _LIST_ENTRY *v113; // [rsp+48h] [rbp-71h]
  ULONG_PTR v114; // [rsp+50h] [rbp-69h]
  __int64 v115; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v116; // [rsp+60h] [rbp-59h]
  unsigned int v117; // [rsp+64h] [rbp-55h]
  unsigned __int64 *v118; // [rsp+68h] [rbp-51h]
  __int64 v119; // [rsp+70h] [rbp-49h] BYREF
  __int64 v120; // [rsp+78h] [rbp-41h] BYREF
  __int64 v121; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int64 v122; // [rsp+88h] [rbp-31h] BYREF
  _LIST_ENTRY *v123; // [rsp+90h] [rbp-29h]
  unsigned __int64 v124; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v125; // [rsp+A0h] [rbp-19h] BYREF
  _OWORD v126[6]; // [rsp+A8h] [rbp-11h] BYREF
  char v127; // [rsp+120h] [rbp+67h]
  unsigned int v128; // [rsp+128h] [rbp+6Fh]
  int v129; // [rsp+130h] [rbp+77h]
  int v130; // [rsp+138h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v118 = 0LL;
  v115 = 0LL;
  v127 = 0;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v110 = CurrentPrcb;
  v111 = 0LL;
  v114 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
    goto LABEL_75;
  v2 = *(_QWORD *)(CurrentThread + 72);
  if ( (unsigned int)Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline()
    || v2 >= *(_QWORD *)(CurrentThread + 32) )
  {
    v3 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(CurrentThread + 64) );
    }
    if ( v2 < *(_QWORD *)(CurrentThread + 32) )
    {
      v4 = v110;
LABEL_71:
      v119 = 0LL;
      v120 = 0LL;
      v121 = 0LL;
      v126[0] = 0LL;
      v31 = KiAcquireThreadStateLockForWrite(
              CurrentThread,
              (unsigned int)&v119,
              (unsigned int)&v121,
              (unsigned int)&v120,
              (__int64)v126);
      KzRefreshWorkloadProperties(CurrentThread, v31, v119, v32, v109);
      KiReleaseThreadStateLock(v33, v119, (unsigned int)&v121, v120, (__int64)v126);
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, v4, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      *(_QWORD *)(CurrentThread + 64) = 0LL;
      goto LABEL_74;
    }
    if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
    {
      v4 = v110;
      QuantumReset = 127;
LABEL_60:
      v25 = KiCyclesPerClockQuantum * QuantumReset;
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
      *(_QWORD *)(CurrentThread + 32) = v2 + v25;
      if ( v4->GroupSetMember != v4->CoreProcessorSet
        && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
        && (v4->CoreProcessorSet & (v4->GroupSetMember | v4->SchedulerSubNode->IdleCpuSet)) != v4->CoreProcessorSet )
      {
        v26 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
        v27 = *(_QWORD *)(v26 + 24) & *(_QWORD *)(v26 + 80);
        v28 = *(unsigned __int16 *)(v26 + 136);
        v29 = *(_WORD **)(CurrentThread + 576);
        v30 = (unsigned __int16)v28 >= *v29 ? 0LL : *(_QWORD *)&v29[4 * v28 + 4];
        if ( (v30 & v27) != 0 )
        {
          *(_DWORD *)(CurrentThread + 116) |= 0x80u;
          _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        }
      }
      goto LABEL_71;
    }
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline();
    v7 = *(_BYTE *)(CurrentThread + 195);
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v7 >= 16 && (*(_DWORD *)(CurrentThread + 120) & 0x400000) == 0 )
      {
        v8 = *(char *)(CurrentThread + 195);
        goto LABEL_39;
      }
      v13 = 2;
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v13 = 3;
        if ( (*(_BYTE *)(CurrentThread + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(CurrentThread + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(CurrentThread + 518) &= 0xFFF0u;
        }
      }
      v8 = KiComputeThreadPriority(CurrentThread, v13, 1);
    }
    else
    {
      if ( v7 >= 16 && (*(_DWORD *)(CurrentThread + 120) & 0x400000) == 0 )
      {
        v8 = *(char *)(CurrentThread + 195);
        goto LABEL_39;
      }
      v9 = 6;
      v10 = *(char *)(CurrentThread + 870);
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v9 = 7;
        if ( (*(_BYTE *)(CurrentThread + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(CurrentThread + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(CurrentThread + 518) &= 0xFFF0u;
        }
      }
      v11 = KiComputeThreadPriority(CurrentThread, v9, 0);
      v12 = *(char *)(CurrentThread + 563);
      v8 = v11;
      if ( (char)v10 >= 1 )
        v12 = v10 + v12 - 1;
      if ( v11 < v12 )
        v8 = v12;
    }
    *(_WORD *)(CurrentThread + 518) &= 0xF00Fu;
    v14 = *(_BYTE *)(CurrentThread + 870);
    if ( v14 >= 1 )
      *(_BYTE *)(CurrentThread + 870) = v14 - 1;
    else
      *(_BYTE *)(CurrentThread + 870) = 0;
LABEL_39:
    v4 = v110;
    v15 = (unsigned __int64)v110 | 1;
    v111 = (unsigned __int64)v110 | 1;
    CoreControlBlock = v110->CoreControlBlock;
    Prcbs = CoreControlBlock->Prcbs;
    if ( CoreControlBlock->ProcessorCount )
    {
      ProcessorCount = CoreControlBlock->ProcessorCount;
      do
      {
        v19 = *Prcbs;
        v20 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v19->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v19->PrcbLock );
        }
        ++Prcbs;
        --ProcessorCount;
      }
      while ( ProcessorCount );
      v15 = v111;
      CurrentThread = v114;
    }
    if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
      KiUpdateThreadPriority((_DWORD)v110, v21, CurrentThread, v8, v110->NextThread == 0LL);
    v22 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
    v122 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v15 & 1) != 0 )
    {
      v23 = (unsigned __int64 *)(*(_QWORD *)(v22 + 36440) + 8LL);
      v24 = **(unsigned __int8 **)(v22 + 36440);
      if ( !**(_BYTE **)(v22 + 36440) )
      {
LABEL_59:
        v111 = 0LL;
        v127 = 1;
        QuantumReset = KiQueryQuantumReset(CurrentThread);
        KiTryScheduleNextForegroundBoost(CurrentThread);
        goto LABEL_60;
      }
    }
    else
    {
      v23 = &v122;
      v24 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v23[--v24] + 48), 0LL);
    while ( v24 );
    goto LABEL_59;
  }
LABEL_74:
  CurrentPrcb = v110;
LABEL_75:
  v34 = MEMORY[0xFFFFF78000000320];
  v35 = 0;
  if ( (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0 )
  {
    v35 = 1;
    if ( (!KiForceParkingConfiguration || (CurrentPrcb->IdleState & 0x20) == 0)
      && (CurrentPrcb->SharedQueueScanOwner || (CurrentPrcb->IdleState & 0x10) != 0 && CurrentPrcb->SharedReadyQueueMask) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
      {
        KiScanSharedReadyThreads(CurrentPrcb, SharedReadyQueue, 0LL);
        CurrentPrcb = v110;
      }
    }
  }
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb);
LABEL_97:
    CurrentPrcb = v110;
    goto LABEL_98;
  }
  v111 = (unsigned __int64)CurrentPrcb | 1;
  v37 = CurrentPrcb->CoreControlBlock;
  v38 = v37->Prcbs;
  if ( v37->ProcessorCount )
  {
    v39 = v37->ProcessorCount;
    do
    {
      v40 = *v38;
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v40->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v41 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v41);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v40->PrcbLock );
      }
      ++v38;
      --v39;
    }
    while ( v39 );
    goto LABEL_97;
  }
LABEL_98:
  if ( !v35 )
    goto LABEL_173;
  ReadySummary = CurrentPrcb->ReadySummary;
  CurrentPrcb->ReadyScanTick = v34 + 75;
  v43 = ReadySummary & 0x7FFE;
  if ( !v43 )
    goto LABEL_173;
  DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  QueueIndex = CurrentPrcb->QueueIndex;
  v117 = KiLockQuantumTarget;
  v46 = 10LL;
  v123 = CurrentPrcb->DispatcherReadyListHead;
  v126[1] = 0LL;
  v113 = 0LL;
  p_Flink = 0LL;
  v128 = 10;
  v48 = MEMORY[0xFFFFF78000000320] - 300;
  v130 = 16;
  v129 = MEMORY[0xFFFFF78000000320] - 300;
  v49 = __ROR4__(v43, QueueIndex);
  do
  {
    _BitScanForward(&v50, v49);
    v49 ^= 1 << v50;
    v116 = v50;
    v51 = ((_BYTE)v50 + (_BYTE)QueueIndex) & 0x1F;
    v52 = &DispatcherReadyListHead[v51];
    v112 = ((_BYTE)v50 + (_BYTE)QueueIndex) & 0x1F;
    Flink = v52->Flink;
    do
    {
      p_Blink = &Flink[-14].Blink;
      v55 = 0;
      v56 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
      v57 = Flink;
      Flink = Flink->Flink;
      if ( !v56 )
      {
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink, 0LL, v46, v51);
        p_Flink = &v113->Flink;
        CurrentPrcb = v110;
        v55 = GuestSchedulerAssistPriority != *((_DWORD *)p_Blink + 256);
        v46 = v128;
        LOBYTE(v51) = v112;
      }
      v59 = v48 - *((_DWORD *)p_Blink + 109);
      if ( v59 > 0 || v55 )
      {
        if ( ((_DWORD)p_Blink[15] & 0x400000) != 0 )
          _InterlockedAnd((volatile signed __int32 *)p_Blink[121], 0xFFFBFFFF);
        v60 = v57->Flink;
        Blink = v57->Blink;
        if ( v57->Flink->Blink != v57 || Blink->Flink != v57 )
          __fastfail(3u);
        Blink->Flink = v60;
        v60->Blink = Blink;
        if ( Blink == v60 )
          CurrentPrcb->ReadySummary ^= 1 << v51;
        v56 = CurrentPrcb->ReadyThreadCount-- == 1;
        if ( v56 && !CurrentPrcb->ScbQueue.Root )
          _InterlockedAnd64(
            (volatile signed __int64 *)&CurrentPrcb->SchedulerSubNode->StealableLocalReadyQueues,
            ~CurrentPrcb->GroupSetMember);
        v62 = CurrentPrcb->SharedReadyQueue;
        CurrentPrcb->ReadyQueueExpectedRunTime -= *((unsigned int *)p_Blink + 446);
        KiUpdateSoftParkElectionStatisticsOnRemoval(v62, p_Blink, 0LL);
        KiEnterDeferredReadyState(p_Blink);
        v46 = v128;
        p_Flink = p_Blink + 27;
        p_Blink[27] = v113;
        v113 = (struct _LIST_ENTRY *)(p_Blink + 27);
        if ( v59 > 0 )
          v46 = --v128;
      }
      v63 = --v130;
      if ( Flink == v52 )
        break;
      if ( !(_DWORD)v46 )
        break;
      v48 = v129;
      CurrentPrcb = v110;
      v51 = v112;
    }
    while ( v63 );
    if ( !v49 )
      break;
    if ( !(_DWORD)v46 )
      break;
    v48 = v129;
    v56 = v63 == 0;
    DispatcherReadyListHead = v123;
    CurrentPrcb = v110;
  }
  while ( !v56 );
  if ( p_Flink )
  {
    v64 = 0;
    v65 = 0LL;
    v66 = v111 & 0xFFFFFFFFFFFFFFFEuLL;
    v67 = 0;
    v124 = v111 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v111 & 1) != 0 )
    {
      if ( (v111 & 1) == 1 )
      {
        v65 = (unsigned __int64 *)(*(_QWORD *)(v66 + 36440) + 8LL);
        v67 = **(unsigned __int8 **)(v66 + 36440);
      }
      if ( !v67 )
        goto LABEL_131;
    }
    else
    {
      v65 = &v124;
      v67 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v65[--v67] + 48), 0LL);
    while ( v67 );
LABEL_131:
    v68 = v117;
    v111 = 0LL;
    while ( 1 )
    {
      v69 = (volatile signed __int32 *)(p_Flink - 27);
      v70 = 0;
      v71 = (unsigned __int64)*(p_Flink - 18);
      v113 = *p_Flink;
      while ( _interlockedbittestandset64(v69 + 16, 0LL) )
      {
        do
        {
          if ( (++v64 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v64);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *((_QWORD *)v69 + 8) );
      }
      v72 = *((char *)v69 + 195);
      if ( v129 - *((_DWORD *)v69 + 109) > 0 && v72 < 15 )
      {
        v73 = *((_WORD *)v69 + 259);
        v74 = 4080;
        v70 = 1;
        if ( (v73 & 0xFF0u) < 0xF0 )
        {
          v74 = 61695;
          *((_WORD *)v69 + 259) = v73 & 0xF00F | 0xF0;
        }
        KiUpdateThreadPriority(0, v74, (_DWORD)v69, 15, 0);
        v75 = *((_QWORD *)v69 + 4);
        if ( v71 > v75 || v75 - v71 < v68 )
          *((_QWORD *)v69 + 4) = v71 + v68;
      }
      *((_QWORD *)v69 + 8) = 0LL;
      if ( v70 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v69, (unsigned int)v72);
      KiDeferredReadyThread(v110, v69, 0LL);
      p_Flink = &v113->Flink;
      if ( !v113 )
        break;
      v64 = 0;
    }
    CurrentPrcb = v110;
    v111 = (unsigned __int64)v110 | 1;
    v76 = v110->CoreControlBlock;
    v77 = v76->Prcbs;
    if ( v76->ProcessorCount )
    {
      v78 = v76->ProcessorCount;
      do
      {
        v79 = *v77;
        v80 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v79->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v80 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v80);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v79->PrcbLock );
        }
        ++v77;
        --v78;
      }
      while ( v78 );
      CurrentPrcb = v110;
    }
    goto LABEL_167;
  }
  CurrentPrcb = v110;
LABEL_167:
  if ( v130 && v128 )
  {
    v81 = 1;
  }
  else
  {
    v81 = 1;
    if ( v112 + 1 <= 0xE )
      v81 = v112 + 1;
  }
  CurrentPrcb->QueueIndex = v81;
LABEL_173:
  v82 = v114;
  if ( !CurrentPrcb->NextThread && (v127 || (*(_DWORD *)(v114 + 120) & 0x1000) != 0) )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v111);
    v84 = StaticRescheduleContext->ProcessorCount;
    v85 = 0LL;
    v86 = v110;
    v87 = 0;
    if ( (*(_DWORD *)(v82 + 120) & 0x1000) != 0 )
    {
      if ( StaticRescheduleContext->ProcessorCount )
      {
        while ( StaticRescheduleContext->ProcessorEntries[v87].Prcb != v110 )
        {
          if ( ++v87 >= v84 )
            goto LABEL_183;
        }
        v85 = (__int64)&StaticRescheduleContext->ProcessorEntries[v87];
      }
LABEL_183:
      *(_BYTE *)(v85 + 34) |= 2u;
      v88 = *(_BYTE *)(v85 + 32);
      v89 = *(_QWORD *)v85;
      *(_QWORD *)(v85 + 16) = *(_QWORD *)(*(_QWORD *)v85 + 24LL);
      *(_BYTE *)(v85 + 32) = v88 & 0xC0 | 5;
      v90 = *(_QWORD *)(v89 + 24);
      *(_BYTE *)(v85 + 33) &= ~1u;
      *(_QWORD *)(v85 + 24) = v90;
      if ( (v88 & 2) != 0 )
      {
        for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
        {
          v92 = (char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i;
          if ( v92 != (_BYTE *)v85 )
          {
            v92[34] |= 2u;
            v93 = *(_QWORD *)v92;
            *((_QWORD *)v92 + 2) = *(_QWORD *)(*(_QWORD *)v92 + 24LL);
            v92[32] = v92[32] & 0xC0 | 5;
            v94 = *(_QWORD *)(v93 + 24);
            v92[33] &= ~1u;
            *((_QWORD *)v92 + 3) = v94;
          }
        }
        if ( (v88 & 2) != 0 )
          StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
    else
    {
      if ( StaticRescheduleContext->ProcessorCount )
      {
        while ( StaticRescheduleContext->ProcessorEntries[v87].Prcb != v110 )
        {
          if ( ++v87 >= v84 )
            goto LABEL_195;
        }
        v85 = (__int64)&StaticRescheduleContext->ProcessorEntries[v87];
      }
LABEL_195:
      v95 = *(_BYTE *)(v85 + 32);
      *(_BYTE *)(v85 + 34) |= 2u;
      *(_BYTE *)(v85 + 32) = v95 | 8;
      if ( (v95 & 2) != 0 )
      {
        for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
        {
          v97 = &StaticRescheduleContext->ProcessorEntries[j];
          if ( v97 != (_KI_RESCHEDULE_CONTEXT_ENTRY *)v85 )
          {
            v97->AllCompareThreadStateFlags |= 8u;
            v97->___u5[0] |= 2u;
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v98 = KiCommitRescheduleContext(StaticRescheduleContext, v110, 0LL, &v115);
    v99 = v115;
    v100 = v98;
    if ( v98 || v115 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v111);
      if ( v100 )
      {
        for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * k + 8 * k),
            v110,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch(&v110->DeferredDispatchInterrupts);
      }
      if ( v99 )
        KiReadyDeferredReadyList(v110, &v115);
      KiAcquirePrcbLocksForIsolationUnit((__int64)v110, 0, (unsigned __int64 *)&v111);
    }
  }
  else
  {
    v86 = v110;
  }
  KiDowngradeIsolationUnitLockHandle(&v111, 0LL);
  NextThread = v86->NextThread;
  if ( NextThread )
  {
    if ( v127 )
      *(_BYTE *)(v82 + 565) = 0;
    if ( (_KTHREAD *)v82 != v86->IdleThread )
    {
      v86->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(v86, v82);
      KiUpdatePriorityMatrixForRunningTransition(v86, NextThread);
      *(_BYTE *)(v82 + 643) = 30;
      KiQueueReadyThread(v86);
      KiAbProcessPreContextSwitch(v82, 1LL);
      IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
      if ( KeSmapEnabled )
        __asm { stac }
      LOBYTE(v104) = 1;
      KiSwapContext(v82, NextThread, v104);
      if ( !IsUserVaAccessAllowed && KeSmapEnabled )
        __asm { clac }
      return KiAbProcessPostContextSwitch(v82);
    }
  }
  v106 = 0;
  v107 = v111 & 0xFFFFFFFFFFFFFFFEuLL;
  v125 = v111 & 0xFFFFFFFFFFFFFFFEuLL;
  result = v111 & 1;
  if ( (v111 & 1) != 0 )
  {
    if ( (_DWORD)result == 1 )
    {
      v118 = (unsigned __int64 *)(*(_QWORD *)(v107 + 36440) + 8LL);
      result = *(_QWORD *)(v107 + 36440);
      v106 = *(unsigned __int8 *)result;
    }
    if ( !v106 )
      goto LABEL_229;
  }
  else
  {
    v106 = 1;
    v118 = &v125;
  }
  v108 = v118;
  do
  {
    result = --v106;
    _InterlockedAnd64((volatile signed __int64 *)(v108[v106] + 48), 0LL);
  }
  while ( v106 );
  v82 = v114;
LABEL_229:
  if ( (_KTHREAD *)v82 != v86->IdleThread )
    return KeCheckAndApplyBamQos(v86, v82);
  return result;
}
