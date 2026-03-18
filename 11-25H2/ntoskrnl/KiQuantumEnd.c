/*
 * XREFs of KiQuantumEnd @ 0x14032ED10
 * Callers:
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 * Callees:
 *     KzRefreshWorkloadProperties @ 0x140201D1C (KzRefreshWorkloadProperties.c)
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiStartRescheduleContext @ 0x140253DF0 (KiStartRescheduleContext.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140274F90 (KiCheckPreferredHeteroProcessor.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x14028BCF0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     KiDeferredReadyThread @ 0x1402F13A0 (KiDeferredReadyThread.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x1402F3B90 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x140317320 (KiCommitRescheduleContext.c)
 *     KiAbProcessPostContextSwitch @ 0x14031ECF0 (KiAbProcessPostContextSwitch.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1403509D0 (KiGroupSchedulingQuantumEnd.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140352650 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     KeCheckAndApplyBamQos @ 0x1403E8B80 (KeCheckAndApplyBamQos.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1404303E4 (KiReadGuestSchedulerAssistPriority.c)
 *     KeIsUserVaAccessAllowed @ 0x140434110 (KeIsUserVaAccessAllowed.c)
 *     KiShouldScanSharedReadyQueue @ 0x140461A78 (KiShouldScanSharedReadyQueue.c)
 *     KiScanSharedReadyThreads @ 0x140466DC8 (KiScanSharedReadyThreads.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140472C3C (KiTryScheduleNextForegroundBoost.c)
 *     KiComputeNewPriority @ 0x1404E8FCC (KiComputeNewPriority.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceAntiStarvationBoost @ 0x140641464 (EtwTraceAntiStarvationBoost.c)
 *     KiSwapContext @ 0x1406A7790 (KiSwapContext.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiQuantumEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentPrcb; // r13
  ULONG_PTR v4; // r15
  unsigned __int64 v5; // r12
  int v6; // ebx
  int QuantumReset; // ebx
  __int64 v8; // r8
  char v9; // r15
  _KCORE_CONTROL_BLOCK *v10; // rcx
  __int64 v11; // rbx
  _KPRCB **Prcbs; // rsi
  __int64 ProcessorCount; // r14
  _KPRCB *v14; // rdi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 *v20; // r8
  int v21; // edx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  _WORD *v26; // rcx
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  __int64 v29; // r9
  unsigned __int64 v30; // rcx
  char v31; // bl
  int v32; // edi
  __int64 v33; // rcx
  _KSHARED_READY_QUEUE *v34; // rdx
  unsigned int v35; // r12d
  __int64 v36; // rdi
  int v37; // r12d
  _LIST_ENTRY *v38; // rdx
  unsigned int v39; // r13d
  int v40; // r8d
  _QWORD *v41; // r10
  int v42; // esi
  unsigned int v43; // r12d
  unsigned int v44; // eax
  unsigned __int8 v45; // r9
  _LIST_ENTRY *v46; // r15
  _LIST_ENTRY *Flink; // r14
  __int64 p_Blink; // rbx
  bool v49; // cl
  bool v50; // zf
  _LIST_ENTRY *v51; // rdi
  int GuestSchedulerAssistPriority; // eax
  int v53; // esi
  struct _LIST_ENTRY *v54; // rcx
  struct _LIST_ENTRY *Blink; // rax
  _KSHARED_READY_QUEUE *v56; // rcx
  int v57; // ebx
  unsigned __int64 *v58; // r8
  unsigned __int64 v59; // r9
  int v60; // edx
  unsigned __int64 v61; // r12
  __int64 v62; // rdi
  char v63; // r14
  int v64; // ebx
  unsigned __int64 v65; // rsi
  int v66; // ebx
  __int16 v67; // cx
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  ULONG_PTR v70; // rdx
  _KCORE_CONTROL_BLOCK *v71; // rax
  __int64 v72; // rbx
  _KPRCB **v73; // rsi
  __int64 v74; // r14
  _KPRCB *v75; // rdi
  int v76; // ebx
  int v77; // eax
  struct _KI_RESCHEDULE_CONTEXT *v78; // rsi
  __int64 v79; // r9
  unsigned int v80; // r8d
  int v81; // edx
  char v82; // r10
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned int i; // r8d
  _BYTE *v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  char v89; // cl
  unsigned int j; // edx
  _KI_RESCHEDULE_CONTEXT_ENTRY *v91; // rax
  char v92; // al
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  char v94; // r14
  struct _KPRCB *v95; // r13
  __int64 k; // rbx
  unsigned __int64 v97; // rcx
  __int64 v98; // r9
  __int64 v99; // r8
  __int64 v100; // rdx
  _KTHREAD *v101; // rdi
  struct _KPRCB *v102; // r13
  char IsUserVaAccessAllowed; // bl
  __int64 v104; // r8
  __int64 result; // rax
  unsigned __int64 *v106; // r10
  unsigned int v107; // edx
  __int64 v108; // [rsp+20h] [rbp-99h]
  __int64 v109; // [rsp+30h] [rbp-89h] BYREF
  struct _KPRCB *v110; // [rsp+38h] [rbp-81h]
  int v111; // [rsp+40h] [rbp-79h]
  _QWORD *v112; // [rsp+48h] [rbp-71h]
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-69h]
  struct _SINGLE_LIST_ENTRY v114; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v115; // [rsp+60h] [rbp-59h]
  unsigned int v116; // [rsp+64h] [rbp-55h]
  __int64 v117; // [rsp+68h] [rbp-51h] BYREF
  volatile __int64 *v118; // [rsp+70h] [rbp-49h] BYREF
  __int64 v119; // [rsp+78h] [rbp-41h] BYREF
  unsigned __int64 v120; // [rsp+80h] [rbp-39h]
  unsigned __int64 v121; // [rsp+88h] [rbp-31h] BYREF
  _LIST_ENTRY *v122; // [rsp+90h] [rbp-29h]
  unsigned __int64 v123; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v124; // [rsp+A0h] [rbp-19h] BYREF
  _OWORD v125[6]; // [rsp+A8h] [rbp-11h] BYREF
  char v126; // [rsp+120h] [rbp+67h]
  int v127; // [rsp+128h] [rbp+6Fh]
  int v128; // [rsp+130h] [rbp+77h]
  int v129; // [rsp+138h] [rbp+7Fh]

  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v114.Next = 0LL;
  v126 = 0;
  v110 = (struct _KPRCB *)CurrentPrcb;
  v4 = *(_QWORD *)(CurrentPrcb + 8);
  v109 = 0LL;
  BugCheckParameter1 = v4;
  if ( v4 == *(_QWORD *)(CurrentPrcb + 24) )
    goto LABEL_53;
  v5 = *(_QWORD *)(v4 + 72);
  if ( v5 < *(_QWORD *)(v4 + 32) )
    goto LABEL_53;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( v5 >= *(_QWORD *)(v4 + 32) )
  {
    if ( (*(_DWORD *)(v4 + 120) & 0x100) != 0 && *(char *)(v4 + 195) >= 16 )
    {
      QuantumReset = 127;
LABEL_40:
      v22 = KiCyclesPerClockQuantum * QuantumReset;
      if ( (*(_DWORD *)(v4 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 120), 5u);
      *(_QWORD *)(v4 + 32) = v5 + v22;
      if ( *(_QWORD *)(CurrentPrcb + 200) != *(_QWORD *)(CurrentPrcb + 36448)
        && !_bittestandreset((signed __int32 *)(v4 + 116), 7u)
        && (*(_QWORD *)(CurrentPrcb + 36448) & (*(_QWORD *)(CurrentPrcb + 200) | *(_QWORD *)(*(_QWORD *)(CurrentPrcb + 192)
                                                                                           + 16LL))) != *(_QWORD *)(CurrentPrcb + 36448) )
      {
        v23 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v4 + 588)] + 192);
        v24 = *(_QWORD *)(v23 + 24) & *(_QWORD *)(v23 + 80);
        v25 = *(unsigned __int16 *)(v23 + 136);
        v26 = *(_WORD **)(v4 + 576);
        v27 = (unsigned __int16)v25 >= *v26 ? 0LL : *(_QWORD *)&v26[4 * v25 + 4];
        if ( (v27 & v24) != 0 )
        {
          *(_DWORD *)(v4 + 116) |= 0x80u;
          _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xCu);
        }
      }
      goto LABEL_50;
    }
    LOBYTE(a3) = 1;
    v9 = KiComputeNewPriority(v4, a2, a3);
    v10 = *(_KCORE_CONTROL_BLOCK **)(CurrentPrcb + 36440);
    v11 = CurrentPrcb | 1;
    v109 = CurrentPrcb | 1;
    Prcbs = v10->Prcbs;
    if ( v10->ProcessorCount )
    {
      ProcessorCount = v10->ProcessorCount;
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
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait();
            }
            else
            {
              _mm_pause();
            }
          }
          while ( v14->PrcbLock );
        }
        ++Prcbs;
        --ProcessorCount;
      }
      while ( ProcessorCount );
      v11 = v109;
    }
    v16 = 0LL;
    if ( !*(_QWORD *)(CurrentPrcb + 16) )
      v16 = CurrentPrcb;
    if ( KiUpdateVPBackingThreadPriority(BugCheckParameter1, v16, v8, 0) )
    {
      v4 = BugCheckParameter1;
    }
    else
    {
      v18 = v9;
      v4 = BugCheckParameter1;
      KiUpdateThreadPriority(CurrentPrcb, v17, BugCheckParameter1, v18, *(_QWORD *)(CurrentPrcb + 16) == 0LL);
    }
    v19 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
    v121 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v11 & 1) != 0 )
    {
      v20 = (unsigned __int64 *)(*(_QWORD *)(v19 + 36440) + 8LL);
      v21 = **(unsigned __int8 **)(v19 + 36440);
      if ( !**(_BYTE **)(v19 + 36440) )
      {
LABEL_39:
        v109 = 0LL;
        v126 = 1;
        QuantumReset = KiQueryQuantumReset(v4);
        KiTryScheduleNextForegroundBoost(v4);
        goto LABEL_40;
      }
    }
    else
    {
      v20 = &v121;
      v21 = 1;
    }
    do
      _InterlockedAnd64((volatile signed __int64 *)(v20[--v21] + 48), 0LL);
    while ( v21 );
    goto LABEL_39;
  }
LABEL_50:
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v125[0] = 0LL;
  v28 = KiAcquireThreadStateLockForWrite(v4, &v117, &v119, &v118, (volatile signed __int64 **)v125);
  KzRefreshWorkloadProperties(v4, v28, v117, v29, v108);
  KiReleaseThreadStateLock(v30, v117, &v119, v118, (volatile signed __int64 **)v125);
  if ( KiCheckPreferredHeteroProcessor(v4, CurrentPrcb, 1) )
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xCu);
  *(_QWORD *)(v4 + 64) = 0LL;
LABEL_53:
  v31 = 0;
  v32 = MEMORY[0xFFFFF78000000320];
  if ( *(_DWORD *)(CurrentPrcb + 14536) - MEMORY[0xFFFFF78000000320] < 0 )
  {
    v31 = 1;
    if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    {
      v34 = *(_KSHARED_READY_QUEUE **)(CurrentPrcb + 36424);
      if ( (v34->ReadySummary & 0x7FFE) != 0 )
        KiScanSharedReadyThreads(v33, v34, 0LL);
    }
  }
  if ( KiGroupSchedulingEnabled )
    KiGroupSchedulingQuantumEnd((struct _KPRCB *)CurrentPrcb);
  else
    KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 1, (unsigned __int64 *)&v109);
  if ( !v31 )
  {
    v36 = CurrentPrcb;
    goto LABEL_138;
  }
  v35 = *(_DWORD *)(CurrentPrcb + 33752);
  *(_DWORD *)(CurrentPrcb + 14536) = v32 + 75;
  v36 = CurrentPrcb;
  v37 = v35 & 0x7FFE;
  if ( !v37 )
  {
LABEL_138:
    v72 = v109;
    goto LABEL_139;
  }
  v38 = (_LIST_ENTRY *)(CurrentPrcb + 33856);
  v39 = *(_DWORD *)(CurrentPrcb + 33760);
  v116 = KiLockQuantumTarget;
  v40 = 10;
  v122 = (_LIST_ENTRY *)(v36 + 33856);
  v125[1] = 0LL;
  v112 = 0LL;
  v41 = 0LL;
  v127 = 10;
  v42 = MEMORY[0xFFFFF78000000320] - 300;
  v129 = 16;
  v128 = MEMORY[0xFFFFF78000000320] - 300;
  v43 = __ROR4__(v37, v39);
  do
  {
    _BitScanForward(&v44, v43);
    v43 ^= 1 << v44;
    v115 = v44;
    v45 = (v44 + v39) & 0x1F;
    v46 = &v38[v45];
    v111 = v45;
    Flink = v46->Flink;
    do
    {
      p_Blink = (__int64)&Flink[-14].Blink;
      v49 = 0;
      v50 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
      v51 = Flink;
      Flink = Flink->Flink;
      if ( !v50 )
      {
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink, 0LL);
        v41 = v112;
        v40 = v127;
        v49 = GuestSchedulerAssistPriority != *(_DWORD *)(p_Blink + 1024);
        v45 = v111;
      }
      v53 = v42 - *(_DWORD *)(p_Blink + 436);
      if ( v53 > 0 || v49 )
      {
        if ( (*(_DWORD *)(p_Blink + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(p_Blink + 968), 0xFFFBFFFF);
        v54 = v51->Flink;
        Blink = v51->Blink;
        if ( v51->Flink->Blink != v51 || Blink->Flink != v51 )
          __fastfail(3u);
        v36 = (__int64)v110;
        Blink->Flink = v54;
        v54->Blink = Blink;
        if ( Blink == v54 )
          *(_DWORD *)(v36 + 33752) ^= 1 << v45;
        --*(_DWORD *)(v36 + 34420);
        if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v54)
          && !*(_DWORD *)(v36 + 34420)
          && !*(_QWORD *)(v36 + 33840) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v36 + 192) + 384LL), ~*(_QWORD *)(v36 + 200));
        }
        v56 = *(_KSHARED_READY_QUEUE **)(v36 + 36424);
        *(_QWORD *)(v36 + 34424) -= *(unsigned int *)(p_Blink + 1784);
        KiUpdateSoftParkElectionStatisticsOnRemoval(v56, p_Blink, 0LL);
        KiEnterDeferredReadyState(p_Blink);
        v40 = v127;
        v41 = (_QWORD *)(p_Blink + 216);
        *(_QWORD *)(p_Blink + 216) = v112;
        v112 = (_QWORD *)(p_Blink + 216);
        if ( v53 > 0 )
          v40 = --v127;
      }
      else
      {
        v36 = (__int64)v110;
      }
      v57 = --v129;
      if ( Flink == v46 )
        break;
      if ( !v40 )
        break;
      v42 = v128;
      v45 = v111;
    }
    while ( v57 );
    if ( !v43 )
      break;
    if ( !v40 )
      break;
    v38 = v122;
    v42 = v128;
  }
  while ( v57 );
  if ( !v41 )
    goto LABEL_129;
  v58 = 0LL;
  v59 = v109 & 0xFFFFFFFFFFFFFFFEuLL;
  v60 = 0;
  v123 = v109 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v109 & 1) != 0 )
  {
    if ( (v109 & 1) == 1 )
    {
      v58 = (unsigned __int64 *)(*(_QWORD *)(v59 + 36440) + 8LL);
      v60 = **(unsigned __int8 **)(v59 + 36440);
    }
    if ( !v60 )
      goto LABEL_95;
  }
  else
  {
    v58 = &v123;
    v60 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v58[--v60] + 48), 0LL);
  while ( v60 );
LABEL_95:
  v61 = v116;
  v109 = 0LL;
  do
  {
    v62 = (__int64)(v41 - 27);
    v63 = 0;
    v64 = 0;
    v65 = *(v41 - 18);
    v112 = (_QWORD *)*v41;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 64), 0LL) )
    {
      do
      {
        if ( (++v64 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v62 + 64) );
    }
    v66 = *(char *)(v62 + 195);
    if ( v128 - *(_DWORD *)(v62 + 436) > 0 && v66 < 15 )
    {
      v67 = *(_WORD *)(v62 + 518);
      v68 = 4080LL;
      v63 = 1;
      if ( (v67 & 0xFF0u) < 0xF0 )
      {
        v68 = 61695LL;
        *(_WORD *)(v62 + 518) = v67 & 0xF00F | 0xF0;
      }
      KiUpdateThreadPriority(0LL, v68, v62, 15, 0);
      v69 = *(_QWORD *)(v62 + 32);
      if ( v65 > v69 || v69 - v65 < v61 )
        *(_QWORD *)(v62 + 32) = v65 + v61;
    }
    *(_QWORD *)(v62 + 64) = 0LL;
    if ( v63 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
      EtwTraceAntiStarvationBoost(v62, (unsigned int)v66);
    v70 = v62;
    v36 = (__int64)v110;
    KiDeferredReadyThread(v110, v70, 0LL);
    v41 = v112;
  }
  while ( v112 );
  v71 = *(_KCORE_CONTROL_BLOCK **)(v36 + 36440);
  v72 = v36 | 1;
  v109 = v36 | 1;
  v73 = v71->Prcbs;
  if ( !v71->ProcessorCount )
    goto LABEL_130;
  v74 = v71->ProcessorCount;
  do
  {
    v75 = *v73;
    v76 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v75->PrcbLock, 0LL) )
    {
      do
      {
        if ( (++v76 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( v75->PrcbLock );
    }
    ++v73;
    --v74;
  }
  while ( v74 );
  v36 = (__int64)v110;
LABEL_129:
  v72 = v109;
LABEL_130:
  if ( v129 && v127 )
  {
    v77 = 1;
  }
  else
  {
    v77 = 1;
    if ( (unsigned int)(v111 + 1) <= 0xE )
      v77 = v111 + 1;
  }
  v4 = BugCheckParameter1;
  *(_DWORD *)(v36 + 33760) = v77;
LABEL_139:
  if ( !*(_QWORD *)(v36 + 16) && (v126 || (*(_DWORD *)(v4 + 120) & 0x1000) != 0) )
  {
    v78 = *(struct _KI_RESCHEDULE_CONTEXT **)(v36 + 14312);
    memset_0(v78, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext((__int64)v78, &v109);
    v79 = 0LL;
    v80 = v78->ProcessorCount;
    v81 = 0;
    if ( (*(_DWORD *)(v4 + 120) & 0x1000) != 0 )
    {
      if ( v78->ProcessorCount )
      {
        while ( v78->ProcessorEntries[v81].Prcb != (_KPRCB *)v36 )
        {
          if ( ++v81 >= v80 )
            goto LABEL_148;
        }
        v79 = (__int64)&v78->ProcessorEntries[v81];
      }
LABEL_148:
      *(_BYTE *)(v79 + 34) |= 2u;
      v82 = *(_BYTE *)(v79 + 32);
      v83 = *(_QWORD *)v79;
      *(_QWORD *)(v79 + 16) = *(_QWORD *)(*(_QWORD *)v79 + 24LL);
      *(_BYTE *)(v79 + 32) = v82 & 0xC0 | 5;
      v84 = *(_QWORD *)(v83 + 24);
      *(_BYTE *)(v79 + 33) &= ~1u;
      *(_QWORD *)(v79 + 24) = v84;
      if ( (v82 & 2) != 0 )
      {
        for ( i = 0; i < v78->ProcessorCount; ++i )
        {
          v86 = (char *)v78->ProcessorEntries + 32 * i + 8 * i;
          if ( v86 != (_BYTE *)v79 )
          {
            v86[34] |= 2u;
            v87 = *(_QWORD *)v86;
            *((_QWORD *)v86 + 2) = *(_QWORD *)(*(_QWORD *)v86 + 24LL);
            v86[32] = v86[32] & 0xC0 | 5;
            v88 = *(_QWORD *)(v87 + 24);
            v86[33] &= ~1u;
            *((_QWORD *)v86 + 3) = v88;
          }
        }
        if ( (v82 & 2) != 0 )
          v78->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
      }
    }
    else
    {
      if ( v78->ProcessorCount )
      {
        while ( v78->ProcessorEntries[v81].Prcb != (_KPRCB *)v36 )
        {
          if ( ++v81 >= v80 )
            goto LABEL_160;
        }
        v79 = (__int64)&v78->ProcessorEntries[v81];
      }
LABEL_160:
      v89 = *(_BYTE *)(v79 + 32);
      *(_BYTE *)(v79 + 34) |= 2u;
      *(_BYTE *)(v79 + 32) = v89 | 8;
      if ( (v89 & 2) != 0 )
      {
        for ( j = 0; j < v78->ProcessorCount; ++j )
        {
          v91 = &v78->ProcessorEntries[j];
          if ( v91 != (_KI_RESCHEDULE_CONTEXT_ENTRY *)v79 )
          {
            v91->AllCompareThreadStateFlags |= 8u;
            v91->___u5[0] |= 2u;
          }
        }
      }
    }
    KiSearchForNewThreadsForRescheduleContext(v78, &v114);
    v92 = KiCommitRescheduleContext(&v78->ProcessorCount, (struct _KPRCB *)v36, 0, &v114);
    Next = v114.Next;
    v94 = v92;
    if ( v92 || v114.Next )
    {
      KiReleasePrcbLocksForIsolationUnit(&v109);
      if ( v94 )
      {
        v95 = v110;
        for ( k = 0LL; (unsigned int)k < v78->ProcessorCount; k = (unsigned int)(k + 1) )
          KiCompleteRescheduleContextEntry(
            (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)v78->ProcessorEntries + 32 * k + 8 * (unsigned int)k),
            v95,
            0LL,
            0LL);
        KiFlushSoftwareInterruptBatch((char *)&v95->DeferredDispatchInterrupts);
      }
      v50 = Next == 0LL;
      v36 = (__int64)v110;
      if ( !v50 )
        KiReadyDeferredReadyList(v110, &v114);
      KiAcquirePrcbLocksForIsolationUnit(v36, 0, (unsigned __int64 *)&v109);
      v72 = v109;
    }
    else
    {
      v36 = (__int64)v110;
    }
  }
  v97 = v72 & 0xFFFFFFFFFFFFFFFEuLL;
  v98 = 0LL;
  v120 = v72 & 0xFFFFFFFFFFFFFFFEuLL;
  v99 = 0LL;
  if ( (v72 & 1) != 0 )
  {
    if ( (v72 & 1) == 1 )
    {
      v99 = *(_QWORD *)(v97 + 36440) + 8LL;
      v98 = **(unsigned __int8 **)(v97 + 36440);
    }
    LODWORD(v100) = 0;
    if ( (_DWORD)v98 )
    {
      do
      {
        if ( v97 == *(_QWORD *)v99 )
        {
          v100 = (unsigned int)(v100 + 1);
          if ( (_DWORD)v100 == 1 )
            v97 = -1LL;
          else
            v97 = *(&v120 + v100);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v99 + 48LL), 0LL);
        }
        v99 += 8LL;
        --v98;
      }
      while ( v98 );
      v72 = v109;
    }
    v72 &= ~1uLL;
    v109 = v72;
  }
  v101 = *(_KTHREAD **)(v36 + 16);
  if ( v101 )
  {
    if ( v126 )
      *(_BYTE *)(v4 + 565) = 0;
    v102 = v110;
    if ( (_KTHREAD *)v4 != v110->IdleThread )
    {
      v110->NextThread = 0LL;
      KiCaptureTotalCyclesCurrentThread((__int64)v102, v4, v99, v98);
      KiUpdatePriorityMatrixForRunningTransition(v102, v101);
      *(_BYTE *)(v4 + 643) = 30;
      KiQueueReadyThread(v102);
      KiAbProcessPreContextSwitch((_QWORD *)v4, 1);
      IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
      if ( KeSmapEnabled )
        __asm { stac }
      LOBYTE(v104) = 1;
      KiSwapContext(v4, v101, v104);
      if ( !IsUserVaAccessAllowed && KeSmapEnabled )
        __asm { clac }
      return KiAbProcessPostContextSwitch(v4);
    }
  }
  else
  {
    v102 = v110;
  }
  v124 = v72 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v72 & 1) != 0 )
  {
    result = *(_QWORD *)((v72 & 0xFFFFFFFFFFFFFFFEuLL) + 36440);
    v106 = (unsigned __int64 *)(result + 8);
    v107 = *(unsigned __int8 *)result;
    if ( !*(_BYTE *)result )
      goto LABEL_203;
  }
  else
  {
    v106 = &v124;
    v107 = 1;
  }
  do
  {
    result = --v107;
    _InterlockedAnd64((volatile signed __int64 *)(v106[v107] + 48), 0LL);
  }
  while ( v107 );
LABEL_203:
  if ( (_KTHREAD *)v4 != v102->IdleThread )
    return KeCheckAndApplyBamQos(v102, v4);
  return result;
}
