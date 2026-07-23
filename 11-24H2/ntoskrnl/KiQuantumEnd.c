/*
 * XREFs of KiQuantumEnd @ 0x1402A3870
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiIdleLoop @ 0x1406ACBD0 (KiIdleLoop.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiStartRescheduleContext @ 0x140285360 (KiStartRescheduleContext.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiCommitRescheduleContext @ 0x1402A7F40 (KiCommitRescheduleContext.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402AC3E0 (KiCheckPreferredHeteroProcessor.c)
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402D8644 (KiReadGuestSchedulerAssistPriority.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402D9F5C (KiGroupSchedulingQuantumEnd.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1402DFBE0 (KiDeferredReadyThread.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402E1220 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAbProcessPostContextSwitch @ 0x140338DE0 (KiAbProcessPostContextSwitch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14036C1B0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KzRefreshWorkloadProperties @ 0x1403A0E1C (KzRefreshWorkloadProperties.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1403BC6D0 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403D78B0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KeIsUserVaAccessAllowed @ 0x140421850 (KeIsUserVaAccessAllowed.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14043D9A0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     KiScanSharedReadyThreads @ 0x14045BDC8 (KiScanSharedReadyThreads.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14046A2F8 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceAntiStarvationBoost @ 0x14064BA40 (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x1406B3A00 (KiSwapContext.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  _WORD *v30; // rcx
  __int64 v31; // rcx
  unsigned __int8 v32; // al
  int v33; // r9d
  int v34; // ecx
  int v35; // r12d
  char v36; // r15
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rdx
  _KCORE_CONTROL_BLOCK *v38; // rax
  _KPRCB **v39; // rsi
  __int64 v40; // r14
  _KPRCB *v41; // rdi
  unsigned int v42; // ebx
  unsigned int v43; // ecx
  unsigned int ReadySummary; // r12d
  int v45; // r12d
  _LIST_ENTRY *DispatcherReadyListHead; // rdx
  unsigned int QueueIndex; // r13d
  __int64 v48; // r8
  struct _LIST_ENTRY **p_Flink; // r10
  int v50; // esi
  unsigned int v51; // r12d
  unsigned int v52; // eax
  __int64 v53; // r9
  _LIST_ENTRY *v54; // r15
  _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY **p_Blink; // rbx
  bool v57; // cl
  bool v58; // zf
  _LIST_ENTRY *v59; // rdi
  int GuestSchedulerAssistPriority; // eax
  int v61; // esi
  struct _LIST_ENTRY *v62; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _KSHARED_READY_QUEUE *v64; // rcx
  int v65; // edx
  unsigned int v66; // ebx
  unsigned __int64 *v67; // r8
  unsigned __int64 v68; // r9
  int v69; // edx
  unsigned __int64 v70; // r12
  volatile signed __int32 *v71; // rdi
  char v72; // r14
  unsigned __int64 v73; // rsi
  int v74; // ebx
  __int16 v75; // cx
  int v76; // edx
  unsigned __int64 v77; // rcx
  _KCORE_CONTROL_BLOCK *v78; // rax
  _KPRCB **v79; // rsi
  __int64 v80; // r14
  _KPRCB *v81; // rdi
  unsigned int v82; // ebx
  int v83; // eax
  ULONG_PTR v84; // r14
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rdi
  unsigned int v86; // r8d
  __int64 v87; // r9
  struct _KPRCB *v88; // r13
  int v89; // edx
  char v90; // r10
  __int64 v91; // rcx
  __int64 v92; // rax
  unsigned int i; // r8d
  _BYTE *v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  char v97; // cl
  unsigned int j; // edx
  _KI_RESCHEDULE_CONTEXT_ENTRY *v99; // rax
  char v100; // al
  __int64 v101; // rbx
  char v102; // si
  unsigned int k; // esi
  _KTHREAD *NextThread; // rbx
  char IsUserVaAccessAllowed; // di
  __int64 v106; // r8
  unsigned __int64 result; // rax
  unsigned int v108; // edx
  unsigned __int64 v109; // r8
  unsigned __int64 *v110; // r14
  __int64 v111; // [rsp+20h] [rbp-99h]
  struct _KPRCB *v112; // [rsp+30h] [rbp-89h]
  __int64 v113; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v114; // [rsp+40h] [rbp-79h]
  struct _LIST_ENTRY *v115; // [rsp+48h] [rbp-71h]
  ULONG_PTR v116; // [rsp+50h] [rbp-69h]
  __int64 v117; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v118; // [rsp+60h] [rbp-59h]
  unsigned int v119; // [rsp+64h] [rbp-55h]
  unsigned __int64 *v120; // [rsp+68h] [rbp-51h]
  __int64 v121; // [rsp+70h] [rbp-49h] BYREF
  __int64 v122; // [rsp+78h] [rbp-41h] BYREF
  __int64 v123; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int64 v124; // [rsp+88h] [rbp-31h] BYREF
  _LIST_ENTRY *v125; // [rsp+90h] [rbp-29h]
  unsigned __int64 v126; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v127; // [rsp+A0h] [rbp-19h] BYREF
  _OWORD v128[6]; // [rsp+A8h] [rbp-11h] BYREF
  char v129; // [rsp+120h] [rbp+67h]
  unsigned int v130; // [rsp+128h] [rbp+6Fh]
  int v131; // [rsp+130h] [rbp+77h]
  int v132; // [rsp+138h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  v120 = 0LL;
  v117 = 0LL;
  v129 = 0;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v112 = CurrentPrcb;
  v113 = 0LL;
  v116 = CurrentThread;
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
      v4 = v112;
LABEL_71:
      v121 = 0LL;
      v122 = 0LL;
      v123 = 0LL;
      v128[0] = 0LL;
      v32 = KiAcquireThreadStateLockForWrite(
              CurrentThread,
              (unsigned int)&v121,
              (unsigned int)&v123,
              (unsigned int)&v122,
              (__int64)v128);
      KzRefreshWorkloadProperties(CurrentThread, v32, v121, v33, v111);
      KiReleaseThreadStateLock(v34, v121, (unsigned int)&v123, v122, (__int64)v128);
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, v4, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      *(_QWORD *)(CurrentThread + 64) = 0LL;
      goto LABEL_74;
    }
    if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
    {
      v4 = v112;
      QuantumReset = 127;
LABEL_60:
      v26 = KiCyclesPerClockQuantum * QuantumReset;
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
      *(_QWORD *)(CurrentThread + 32) = v2 + v26;
      if ( v4->GroupSetMember != v4->CoreProcessorSet
        && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
        && (v4->CoreProcessorSet & (v4->GroupSetMember | v4->SchedulerSubNode->IdleCpuSet)) != v4->CoreProcessorSet )
      {
        v27 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
        v28 = *(_QWORD *)(v27 + 24) & *(_QWORD *)(v27 + 80);
        v29 = *(unsigned __int16 *)(v27 + 136);
        v30 = *(_WORD **)(CurrentThread + 576);
        v31 = (unsigned __int16)v29 >= *v30 ? 0LL : *(_QWORD *)&v30[4 * v29 + 4];
        if ( (v31 & v28) != 0 )
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
    v4 = v112;
    v15 = (unsigned __int64)v112 | 1;
    v113 = (unsigned __int64)v112 | 1;
    CoreControlBlock = v112->CoreControlBlock;
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
      v15 = v113;
      CurrentThread = v116;
    }
    if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
      KiUpdateThreadPriority((_DWORD)v112, v21, CurrentThread, v8, v112->NextThread == 0LL);
    v22 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
    v124 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v15 & 1) != 0 )
    {
      v23 = (unsigned __int64 *)(*(_QWORD *)(v22 + 36440) + 8LL);
      v24 = **(unsigned __int8 **)(v22 + 36440);
      if ( !**(_BYTE **)(v22 + 36440) )
      {
LABEL_59:
        v113 = 0LL;
        v129 = 1;
        QuantumReset = KiQueryQuantumReset(CurrentThread, v24, v23);
        KiTryScheduleNextForegroundBoost(CurrentThread);
        goto LABEL_60;
      }
    }
    else
    {
      v23 = &v124;
      LODWORD(v24) = 1;
    }
    do
    {
      v25 = (unsigned int)(v24 - 1);
      v24 = v25;
      _InterlockedAnd64((volatile signed __int64 *)(v23[v25] + 48), 0LL);
    }
    while ( (_DWORD)v25 );
    goto LABEL_59;
  }
LABEL_74:
  CurrentPrcb = v112;
LABEL_75:
  v35 = MEMORY[0xFFFFF78000000320];
  v36 = 0;
  if ( (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0 )
  {
    v36 = 1;
    if ( (!KiForceParkingConfiguration || (CurrentPrcb->IdleState & 0x20) == 0)
      && (CurrentPrcb->SharedQueueScanOwner || (CurrentPrcb->IdleState & 0x10) != 0 && CurrentPrcb->SharedReadyQueueMask) )
    {
      SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
      if ( (SharedReadyQueue->ReadySummary & 0x7FFE) != 0 )
      {
        KiScanSharedReadyThreads(CurrentPrcb, SharedReadyQueue, 0LL);
        CurrentPrcb = v112;
      }
    }
  }
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb);
LABEL_97:
    CurrentPrcb = v112;
    goto LABEL_98;
  }
  v113 = (unsigned __int64)CurrentPrcb | 1;
  v38 = CurrentPrcb->CoreControlBlock;
  v39 = v38->Prcbs;
  if ( v38->ProcessorCount )
  {
    v40 = v38->ProcessorCount;
    do
    {
      v41 = *v39;
      v42 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v41->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v42 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v42);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v41->PrcbLock );
      }
      ++v39;
      --v40;
    }
    while ( v40 );
    goto LABEL_97;
  }
LABEL_98:
  if ( !v36 )
    goto LABEL_173;
  v43 = v35 + KiPriorityBoostScanLatencyTicks;
  ReadySummary = CurrentPrcb->ReadySummary;
  CurrentPrcb->ReadyScanTick = v43;
  v45 = ReadySummary & 0x7FFE;
  if ( !v45 )
    goto LABEL_173;
  DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  QueueIndex = CurrentPrcb->QueueIndex;
  v48 = (unsigned int)KiPriorityBoostMaximumThreadReadyCount;
  v128[1] = 0LL;
  v132 = KiPriorityBoostMaximumThreadScanCount;
  p_Flink = 0LL;
  v50 = MEMORY[0xFFFFF78000000320] - KiPriorityBoostReadyTimeTicks;
  v131 = MEMORY[0xFFFFF78000000320] - KiPriorityBoostReadyTimeTicks;
  v51 = __ROR4__(v45, QueueIndex);
  v130 = KiPriorityBoostMaximumThreadReadyCount;
  v125 = CurrentPrcb->DispatcherReadyListHead;
  v115 = 0LL;
  v119 = KiLockQuantumTarget;
  do
  {
    _BitScanForward(&v52, v51);
    v51 ^= 1 << v52;
    v118 = v52;
    v53 = ((_BYTE)v52 + (_BYTE)QueueIndex) & 0x1F;
    v54 = &DispatcherReadyListHead[v53];
    v114 = ((_BYTE)v52 + (_BYTE)QueueIndex) & 0x1F;
    Flink = v54->Flink;
    do
    {
      p_Blink = &Flink[-14].Blink;
      v57 = 0;
      v58 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
      v59 = Flink;
      Flink = Flink->Flink;
      if ( !v58 )
      {
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink, 0LL, v48, v53);
        p_Flink = &v115->Flink;
        CurrentPrcb = v112;
        v57 = GuestSchedulerAssistPriority != *((_DWORD *)p_Blink + 256);
        v48 = v130;
        LOBYTE(v53) = v114;
      }
      v61 = v50 - *((_DWORD *)p_Blink + 109);
      if ( v61 > 0 || v57 )
      {
        if ( ((_DWORD)p_Blink[15] & 0x400000) != 0 )
          _InterlockedAnd((volatile signed __int32 *)p_Blink[121], 0xFFFBFFFF);
        v62 = v59->Flink;
        Blink = v59->Blink;
        if ( v59->Flink->Blink != v59 || Blink->Flink != v59 )
          __fastfail(3u);
        Blink->Flink = v62;
        v62->Blink = Blink;
        if ( Blink == v62 )
          CurrentPrcb->ReadySummary ^= 1 << v53;
        v58 = CurrentPrcb->ReadyThreadCount-- == 1;
        if ( v58 && !CurrentPrcb->ScbQueue.Root )
          _InterlockedAnd64(
            (volatile signed __int64 *)&CurrentPrcb->SchedulerSubNode->StealableLocalReadyQueues,
            ~CurrentPrcb->GroupSetMember);
        v64 = CurrentPrcb->SharedReadyQueue;
        CurrentPrcb->ReadyQueueExpectedRunTime -= *((unsigned int *)p_Blink + 446);
        KiUpdateSoftParkElectionStatisticsOnRemoval(v64, p_Blink, 0LL);
        KiEnterDeferredReadyState(p_Blink);
        v48 = v130;
        p_Flink = p_Blink + 27;
        p_Blink[27] = v115;
        v115 = (struct _LIST_ENTRY *)(p_Blink + 27);
        if ( v61 > 0 )
          v48 = --v130;
      }
      v65 = --v132;
      if ( Flink == v54 )
        break;
      if ( !(_DWORD)v48 )
        break;
      v50 = v131;
      CurrentPrcb = v112;
      v53 = v114;
    }
    while ( v65 );
    if ( !v51 )
      break;
    if ( !(_DWORD)v48 )
      break;
    v50 = v131;
    v58 = v65 == 0;
    DispatcherReadyListHead = v125;
    CurrentPrcb = v112;
  }
  while ( !v58 );
  if ( p_Flink )
  {
    v66 = 0;
    v67 = 0LL;
    v68 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
    v69 = 0;
    v126 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v113 & 1) != 0 )
    {
      if ( (v113 & 1) == 1 )
      {
        v67 = (unsigned __int64 *)(*(_QWORD *)(v68 + 36440) + 8LL);
        v69 = **(unsigned __int8 **)(v68 + 36440);
      }
      if ( !v69 )
        goto LABEL_131;
    }
    else
    {
      v67 = &v126;
      v69 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v67[--v69] + 48), 0LL);
    while ( v69 );
LABEL_131:
    v70 = v119;
    v113 = 0LL;
    while ( 1 )
    {
      v71 = (volatile signed __int32 *)(p_Flink - 27);
      v72 = 0;
      v73 = (unsigned __int64)*(p_Flink - 18);
      v115 = *p_Flink;
      while ( _interlockedbittestandset64(v71 + 16, 0LL) )
      {
        do
        {
          if ( (++v66 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v66);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *((_QWORD *)v71 + 8) );
      }
      v74 = *((char *)v71 + 195);
      if ( v131 - *((_DWORD *)v71 + 109) > 0 && v74 < 15 )
      {
        v75 = *((_WORD *)v71 + 259);
        v76 = 4080;
        v72 = 1;
        if ( (v75 & 0xFF0u) < 0xF0 )
        {
          v76 = 61695;
          *((_WORD *)v71 + 259) = v75 & 0xF00F | 0xF0;
        }
        KiUpdateThreadPriority(0, v76, (_DWORD)v71, 15, 0);
        v77 = *((_QWORD *)v71 + 4);
        if ( v73 > v77 || v77 - v73 < v70 )
          *((_QWORD *)v71 + 4) = v73 + v70;
      }
      *((_QWORD *)v71 + 8) = 0LL;
      if ( v72 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v71, (unsigned int)v74);
      KiDeferredReadyThread(v112, v71, 0LL);
      p_Flink = &v115->Flink;
      if ( !v115 )
        break;
      v66 = 0;
    }
    CurrentPrcb = v112;
    v113 = (unsigned __int64)v112 | 1;
    v78 = v112->CoreControlBlock;
    v79 = v78->Prcbs;
    if ( v78->ProcessorCount )
    {
      v80 = v78->ProcessorCount;
      do
      {
        v81 = *v79;
        v82 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v81->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v82 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v82);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v81->PrcbLock );
        }
        ++v79;
        --v80;
      }
      while ( v80 );
      CurrentPrcb = v112;
    }
    goto LABEL_167;
  }
  CurrentPrcb = v112;
LABEL_167:
  if ( v132 && v130 )
  {
    v83 = 1;
  }
  else
  {
    v83 = 1;
    if ( v114 + 1 <= 0xE )
      v83 = v114 + 1;
  }
  CurrentPrcb->QueueIndex = v83;
LABEL_173:
  v84 = v116;
  if ( !CurrentPrcb->NextThread && (v129 || (*(_DWORD *)(v116 + 120) & 0x1000) != 0) )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)StaticRescheduleContext, &v113);
    v86 = StaticRescheduleContext->ProcessorCount;
    v87 = 0LL;
    v88 = v112;
    v89 = 0;
    if ( (*(_DWORD *)(v84 + 120) & 0x1000) != 0 )
    {
      if ( StaticRescheduleContext->ProcessorCount )
      {
        while ( StaticRescheduleContext->ProcessorEntries[v89].Prcb != v112 )
        {
          if ( ++v89 >= v86 )
            goto LABEL_183;
        }
        v87 = (__int64)&StaticRescheduleContext->ProcessorEntries[v89];
      }
LABEL_183:
      *(_BYTE *)(v87 + 34) |= 2u;
      v90 = *(_BYTE *)(v87 + 32);
      v91 = *(_QWORD *)v87;
      *(_QWORD *)(v87 + 16) = *(_QWORD *)(*(_QWORD *)v87 + 24LL);
      *(_BYTE *)(v87 + 32) = v90 & 0xC0 | 5;
      v92 = *(_QWORD *)(v91 + 24);
      *(_BYTE *)(v87 + 33) &= ~1u;
      *(_QWORD *)(v87 + 24) = v92;
      if ( (v90 & 2) != 0 )
      {
        for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
        {
          v94 = (char *)StaticRescheduleContext->ProcessorEntries + 32 * i + 8 * i;
          if ( v94 != (_BYTE *)v87 )
          {
            v94[34] |= 2u;
            v95 = *(_QWORD *)v94;
            *((_QWORD *)v94 + 2) = *(_QWORD *)(*(_QWORD *)v94 + 24LL);
            v94[32] = v94[32] & 0xC0 | 5;
            v96 = *(_QWORD *)(v95 + 24);
            v94[33] &= ~1u;
            *((_QWORD *)v94 + 3) = v96;
          }
        }
        if ( (v90 & 2) != 0 )
          StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
    else
    {
      if ( StaticRescheduleContext->ProcessorCount )
      {
        while ( StaticRescheduleContext->ProcessorEntries[v89].Prcb != v112 )
        {
          if ( ++v89 >= v86 )
            goto LABEL_195;
        }
        v87 = (__int64)&StaticRescheduleContext->ProcessorEntries[v89];
      }
LABEL_195:
      v97 = *(_BYTE *)(v87 + 32);
      *(_BYTE *)(v87 + 34) |= 2u;
      *(_BYTE *)(v87 + 32) = v97 | 8;
      if ( (v97 & 2) != 0 )
      {
        for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
        {
          v99 = &StaticRescheduleContext->ProcessorEntries[j];
          if ( v99 != (_KI_RESCHEDULE_CONTEXT_ENTRY *)v87 )
          {
            v99->AllCompareThreadStateFlags |= 8u;
            v99->___u5[0] |= 2u;
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext);
    v100 = KiCommitRescheduleContext(StaticRescheduleContext, v112, 0LL, &v117);
    v101 = v117;
    v102 = v100;
    if ( v100 || v117 )
    {
      KiReleasePrcbLocksForIsolationUnit(&v113);
      if ( v102 )
      {
        for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * k + 8 * k),
            v112,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch(&v112->DeferredDispatchInterrupts);
      }
      if ( v101 )
        KiReadyDeferredReadyList(v112, &v117);
      KiAcquirePrcbLocksForIsolationUnit((__int64)v112, 0LL, (unsigned __int64 *)&v113);
    }
  }
  else
  {
    v88 = v112;
  }
  KiDowngradeIsolationUnitLockHandle(&v113, 0LL);
  NextThread = v88->NextThread;
  if ( NextThread )
  {
    if ( v129 )
      *(_BYTE *)(v84 + 565) = 0;
    if ( (_KTHREAD *)v84 != v88->IdleThread )
    {
      v88->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread(v88, v84);
      KiUpdatePriorityMatrixForRunningTransition(v88, NextThread);
      *(_BYTE *)(v84 + 643) = 30;
      KiQueueReadyThread(v88);
      KiAbProcessPreContextSwitch(v84, 1LL);
      IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
      if ( KeSmapEnabled )
        __asm { stac }
      LOBYTE(v106) = 1;
      KiSwapContext(v84, NextThread, v106);
      if ( !IsUserVaAccessAllowed && KeSmapEnabled )
        __asm { clac }
      return KiAbProcessPostContextSwitch(v84);
    }
  }
  v108 = 0;
  v109 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
  v127 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
  result = v113 & 1;
  if ( (v113 & 1) != 0 )
  {
    if ( (_DWORD)result == 1 )
    {
      v120 = (unsigned __int64 *)(*(_QWORD *)(v109 + 36440) + 8LL);
      result = *(_QWORD *)(v109 + 36440);
      v108 = *(unsigned __int8 *)result;
    }
    if ( !v108 )
      goto LABEL_229;
  }
  else
  {
    v108 = 1;
    v120 = &v127;
  }
  v110 = v120;
  do
  {
    result = --v108;
    _InterlockedAnd64((volatile signed __int64 *)(v110[v108] + 48), 0LL);
  }
  while ( v108 );
  v84 = v116;
LABEL_229:
  if ( (_KTHREAD *)v84 != v88->IdleThread )
    return KeCheckAndApplyBamQos(v88, v84);
  return result;
}
