/*
 * XREFs of KiDeferredReadySingleThread @ 0x14031ED40
 * Callers:
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     KiExecuteAllDpcs @ 0x1402552D0 (KiExecuteAllDpcs.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     KiAbProcessPreContextSwitch @ 0x140295A00 (KiAbProcessPreContextSwitch.c)
 *     KiReadyDeferredReadyList @ 0x140299320 (KiReadyDeferredReadyList.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x140336F68 (KiReadyOutSwappedThreads.c)
 *     KiInswapAndReadyThread @ 0x140338374 (KiInswapAndReadyThread.c)
 *     KiDeferredReadyThread @ 0x1403386A0 (KiDeferredReadyThread.c)
 *     KeSetPriorityBoost @ 0x140338750 (KeSetPriorityBoost.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14033B670 (HalpTimerStallExecutionProcessor.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14024FA80 (KiComputeThreadPriority.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140256790 (KiScheduleThreadToIdleIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiPopulateTrivialProcessorSelectionResult @ 0x140293580 (KiPopulateTrivialProcessorSelectionResult.c)
 *     KiHeteroSelectIdleProcessorFromNode @ 0x1402938F0 (KiHeteroSelectIdleProcessorFromNode.c)
 *     KiHeteroSelectProcessorToPreempt @ 0x1402949C0 (KiHeteroSelectProcessorToPreempt.c)
 *     KiComputeThreadQos @ 0x14029A450 (KiComputeThreadQos.c)
 *     KiIsThreadExemptFromForcePark @ 0x14029AB9C (KiIsThreadExemptFromForcePark.c)
 *     KiComputeThreadAffinity @ 0x14029AC34 (KiComputeThreadAffinity.c)
 *     KiQueryQuantumReset @ 0x1403241CC (KiQueryQuantumReset.c)
 *     KiSetPriorityBoost @ 0x140338930 (KiSetPriorityBoost.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140339330 (KiReleasePrcbLocksForIsolationUnit.c)
 *     EtwTraceReadyQueueInsertion @ 0x14034A55C (EtwTraceReadyQueueInsertion.c)
 *     EtwTraceThreadAffinity @ 0x1403B3E48 (EtwTraceThreadAffinity.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiAddThreadToReadyQueue @ 0x1403F4AB0 (KiAddThreadToReadyQueue.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x14041FD78 (KiHeteroAttemptPreemptionSwap.c)
 *     KiUpdateThreadPriority @ 0x140429720 (KiUpdateThreadPriority.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x140438600 (KiHeteroComputeThreadWorkloadProperties.c)
 *     KiSetLockOwnershipQuantum @ 0x140441370 (KiSetLockOwnershipQuantum.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14044C2E0 (KeFindFirstSetLeftAffinityEx.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14046FED0 (KiTryScheduleNextForegroundBoost.c)
 *     EtwTraceIdealProcessor @ 0x1404B1DCC (EtwTraceIdealProcessor.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404E6D30 (KiUpdateVPBackingThreadPriority.c)
 *     KiChooseTargetProcessor @ 0x1404E7710 (KiChooseTargetProcessor.c)
 *     KiComputeNewPriority @ 0x1404EA2E0 (KiComputeNewPriority.c)
 *     KiIsThreadRankBiased @ 0x1404F714C (KiIsThreadRankBiased.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C5094 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiScheduleNextForegroundBoost @ 0x1405C50CC (KiScheduleNextForegroundBoost.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall KiDeferredReadySingleThread(
        struct _KPRCB *a1,
        unsigned __int64 a2,
        struct _SINGLE_LIST_ENTRY *a3,
        __int64 a4)
{
  unsigned __int64 v4; // r14
  char v5; // si
  char v6; // r13
  bool v7; // zf
  ULONG_PTR v8; // r12
  unsigned int v9; // ebx
  int v10; // edx
  char updated; // r15
  int v12; // eax
  int v13; // edx
  char v14; // si
  char v15; // dl
  char v16; // r8
  char v17; // al
  char v18; // bl
  __int64 v19; // rcx
  int v20; // eax
  char v21; // r8
  char v22; // dl
  int v23; // r14d
  int v24; // eax
  bool v25; // cc
  char v26; // dl
  char v27; // al
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ebx
  char v31; // bl
  int v32; // ebx
  __int64 v33; // rcx
  int IsEnabledNoReportingNoInline; // eax
  int v35; // r8d
  int v36; // ecx
  signed int v37; // eax
  int v38; // r8d
  char v39; // al
  signed int v40; // eax
  char v41; // al
  int v42; // r8d
  int v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  bool v46; // bl
  char v47; // di
  unsigned __int8 v48; // r14
  char v49; // si
  bool v50; // al
  _WORD *v51; // r8
  __int64 v52; // rdi
  struct _KPRCB *v53; // rbx
  __int64 Group; // rax
  __int64 v55; // rax
  struct _KSCB *v56; // r10
  __int64 v57; // r13
  char v58; // di
  __int64 result; // rax
  _WORD *v60; // r11
  __int64 v61; // r8
  int v62; // r13d
  __int64 v63; // r9
  unsigned __int64 v64; // rax
  struct _KPRCB *v65; // rsi
  unsigned __int64 v66; // r12
  _WORD *v67; // r11
  __int64 v68; // r15
  __int64 v69; // rax
  int v70; // ebx
  __int16 v71; // si
  unsigned int v72; // r14d
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdi
  int v76; // eax
  __int64 v77; // r15
  _BYTE *v78; // rax
  unsigned int v79; // ecx
  __int64 *v80; // rsi
  __int64 v81; // r14
  __int64 v82; // rdi
  unsigned int v83; // ebx
  unsigned __int64 v84; // r8
  __int64 v85; // r10
  __int64 *v86; // rdx
  unsigned __int64 *v87; // r9
  int v88; // edx
  unsigned __int8 *v89; // rax
  int v90; // r9d
  _QWORD *v91; // r9
  int v92; // edx
  __int64 v93; // rax
  int v94; // r9d
  unsigned __int64 v95; // rdx
  _BYTE *v96; // rax
  __int64 *v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 ScbOffset; // r10
  struct _KSCB *v102; // rcx
  int v103; // r8d
  char v104; // [rsp+40h] [rbp-C0h]
  bool v105; // [rsp+40h] [rbp-C0h]
  bool v106; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v107; // [rsp+42h] [rbp-BEh]
  char v108; // [rsp+44h] [rbp-BCh]
  _WORD *v110; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v111; // [rsp+58h] [rbp-A8h]
  __int64 v112; // [rsp+58h] [rbp-A8h]
  int v114; // [rsp+6Ch] [rbp-94h]
  unsigned int v115; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v116; // [rsp+74h] [rbp-8Ch]
  struct _KPRCB *v117; // [rsp+78h] [rbp-88h]
  struct _KSCB *v118; // [rsp+80h] [rbp-80h] BYREF
  signed int v119; // [rsp+88h] [rbp-78h]
  signed int v120; // [rsp+8Ch] [rbp-74h]
  __int128 v121; // [rsp+90h] [rbp-70h] BYREF
  int v122; // [rsp+A0h] [rbp-60h]
  int v123; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v124; // [rsp+A8h] [rbp-58h] BYREF
  struct _SINGLE_LIST_ENTRY *v125; // [rsp+B0h] [rbp-50h]
  __int64 v126; // [rsp+B8h] [rbp-48h]
  _QWORD v127[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v128[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v129; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 72);
  v5 = 0;
  v117 = a1;
  v6 = 0;
  v7 = *(_BYTE *)(a2 + 566) == 1;
  v125 = a3;
  v8 = a2;
  v118 = 0LL;
  v129 = 0LL;
  v115 = 0;
  v108 = 0;
  v111 = v4;
  v114 = 0;
  if ( v7 )
    v104 = *(_BYTE *)(a2 + 567);
  else
    v104 = 0;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v8 + 64) );
  }
  updated = KiUpdateVPBackingThreadPriority(v8);
  if ( !*(_BYTE *)(v8 + 566) )
  {
    if ( v4 < *(_QWORD *)(v8 + 32) )
    {
      v114 = *(unsigned __int8 *)(v8 + 565);
    }
    else
    {
      v12 = KiComputeNewPriority((struct _KTHREAD *)v8);
      if ( !updated )
        KiUpdateThreadPriority(0, v13, v8, v12, 0);
      v6 = 1;
      KiTryScheduleNextForegroundBoost(v8);
    }
    goto LABEL_132;
  }
  v14 = 63;
  if ( *(char *)(v8 + 195) < 16 )
  {
    v18 = 0;
    v19 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v8 + 436));
    if ( v4 < *(_QWORD *)(v8 + 32) )
    {
      if ( *(char *)(v8 + 563) < 14 )
      {
        v10 = 4080;
        if ( (*(_WORD *)(v8 + 518) & 0xFF0) != 0 || (unsigned int)v19 < 2 )
          goto LABEL_69;
      }
    }
    else
    {
      v18 = 4;
      if ( (unsigned int)v19 < 2 )
        v18 = 5;
    }
    v6 = 1;
    v20 = ((__int64 (*)(void))Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline)();
    v19 = (unsigned int)*(char *)(v8 + 195);
    if ( v20 )
    {
      if ( *(char *)(v8 + 195) >= 16 && (*(_DWORD *)(v8 + 120) & 0x400000) == 0 )
      {
        v21 = *(_BYTE *)(v8 + 195);
        goto LABEL_67;
      }
      v26 = 2;
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v26 = 3;
        if ( (*(_BYTE *)(v8 + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(v8 + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(v8 + 518) &= 0xFFF0u;
        }
      }
      v21 = KiComputeThreadPriority(v8, v26, 1);
    }
    else
    {
      if ( *(char *)(v8 + 195) >= 16 && (*(_DWORD *)(v8 + 120) & 0x400000) == 0 )
      {
        v21 = *(_BYTE *)(v8 + 195);
        goto LABEL_67;
      }
      v22 = 6;
      v23 = *(char *)(v8 + 870);
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v22 = 7;
        if ( (*(_BYTE *)(v8 + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(v8 + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(v8 + 518) &= 0xFFF0u;
        }
      }
      v24 = KiComputeThreadPriority(v8, v22, 0);
      v10 = *(char *)(v8 + 563);
      v19 = (unsigned int)(v10 + v23 - 1);
      v21 = v24;
      v25 = (char)v23 < 1;
      v4 = v111;
      if ( !v25 )
        v10 = v19;
      if ( v24 < v10 )
        v21 = v10;
    }
    *(_WORD *)(v8 + 518) &= 0xF00Fu;
    v27 = *(_BYTE *)(v8 + 870);
    if ( v27 >= 1 )
      *(_BYTE *)(v8 + 870) = v27 - 1;
    else
      *(_BYTE *)(v8 + 870) = 0;
LABEL_67:
    v14 = 63;
    if ( !updated )
      v14 = v21;
LABEL_69:
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 544) + 136LL) & 0x2000) != 0 )
      v18 |= 2u;
    if ( (v18 & 1) != 0 || (*(_DWORD *)(v8 + 120) & 8) != 0 || *(char *)(v8 + 195) <= 0 )
    {
      if ( KiSchedulerForegroundBoostDecayPolicy
        && (v18 & 6) == 6
        && (*(_DWORD *)(v8 + 120) & 8) == 0
        && *(char *)(v8 + 195) > 0 )
      {
        v6 |= 2u;
      }
      goto LABEL_117;
    }
    if ( v104 > *(char *)(v8 + 870) )
    {
      v7 = (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v19) == 0;
      v29 = *(char *)(v8 + 563);
      if ( v7 )
      {
        v30 = v29 + v104;
        if ( v30 >= 16 )
          LOBYTE(v30) = 15;
        v31 = v30 - v29;
      }
      else
      {
        v28 = v29 + (*(unsigned __int16 *)(v8 + 518) & 0xFu);
        if ( (int)v28 >= 16 )
          v28 = 15LL;
        v32 = v28 + v104;
        if ( v32 >= 16 )
          LOBYTE(v32) = 15;
        v31 = v32 - v28;
      }
      Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v28);
      *(_BYTE *)(v8 + 870) = v31;
      IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v33);
      v35 = *(char *)(v8 + 563);
      if ( IsEnabledNoReportingNoInline )
      {
        if ( v35 < 16 )
        {
          v38 = v35 + (*(_WORD *)(v8 + 518) & 0xF);
          if ( v38 <= *(char *)(v8 + 563) )
            v38 = *(char *)(v8 + 563);
          v39 = 0;
          if ( *(char *)(v8 + 870) > 0 )
            v39 = *(_BYTE *)(v8 + 870);
          v35 = v39 + v38;
          if ( v35 >= 16 )
            v35 = 15;
          v10 = *(unsigned __int16 *)(v8 + 518) >> 4;
          if ( (unsigned __int8)v10 > v35 )
            v35 = (unsigned __int8)v10;
        }
        v40 = *(_DWORD *)(v8 + 856);
        if ( v40 )
        {
          _BitScanReverse((unsigned int *)&v40, v40);
          v120 = v40;
          if ( v35 < v40 )
            LOBYTE(v35) = v40;
        }
      }
      else
      {
        if ( v35 < 16 )
        {
          v36 = v35 + (*(_WORD *)(v8 + 518) & 0xF);
          if ( __OFSUB__(v36, v35) || v36 == v35 )
            v36 = *(char *)(v8 + 563);
          v35 += *(char *)(v8 + 870);
          if ( v35 <= v36 )
            v35 = v36;
          v10 = *(unsigned __int16 *)(v8 + 518) >> 4;
          if ( (unsigned __int8)v10 > v35 )
            v35 = (unsigned __int8)v10;
          if ( v35 >= 16 && (*(_DWORD *)(v8 + 120) & 0x400000) == 0 )
            v35 = 15;
        }
        v37 = *(_DWORD *)(v8 + 856);
        if ( v37 )
        {
          _BitScanReverse((unsigned int *)&v37, v37);
          v119 = v37;
          if ( v35 < v37 )
            LOBYTE(v35) = v37;
          v14 = v35;
          goto LABEL_117;
        }
      }
      v14 = v35;
    }
    goto LABEL_117;
  }
  if ( updated )
  {
    v10 = 4080;
    v6 = (*(_WORD *)(v8 + 518) & 0xFF0u) < 0x100;
    if ( v4 >= *(_QWORD *)(v8 + 32) )
    {
      v6 = 1;
      if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(256LL) )
      {
        if ( *(char *)(v8 + 195) >= 16 && (*(_DWORD *)(v8 + 120) & 0x400000) == 0 )
          goto LABEL_117;
        v15 = 2;
        if ( KiSchedulerForegroundBoostDecayPolicy )
        {
          v15 = 3;
          if ( (*(_BYTE *)(v8 + 518) & 0xF) != 0 )
          {
            *(_DWORD *)(v8 + 872) = MEMORY[0xFFFFF78000000320];
            *(_WORD *)(v8 + 518) &= 0xFFF0u;
          }
        }
        v16 = 1;
      }
      else
      {
        if ( *(char *)(v8 + 195) >= 16 && (*(_DWORD *)(v8 + 120) & 0x400000) == 0 )
          goto LABEL_117;
        v15 = 6;
        if ( KiSchedulerForegroundBoostDecayPolicy )
        {
          v15 = 7;
          if ( (*(_BYTE *)(v8 + 518) & 0xF) != 0 )
          {
            *(_DWORD *)(v8 + 872) = MEMORY[0xFFFFF78000000320];
            *(_WORD *)(v8 + 518) &= 0xFFF0u;
          }
        }
        v16 = 0;
      }
      KiComputeThreadPriority(v8, v15, v16);
      *(_WORD *)(v8 + 518) &= 0xF00Fu;
      v17 = *(_BYTE *)(v8 + 870);
      if ( v17 >= 1 )
        *(_BYTE *)(v8 + 870) = v17 - 1;
      else
        *(_BYTE *)(v8 + 870) = 0;
    }
  }
  else
  {
    v6 = 1;
  }
LABEL_117:
  if ( v14 != 63 )
    KiUpdateThreadPriority(0, v10, v8, v14, 0);
  if ( (v6 & 2) != 0 )
    KiScheduleNextForegroundBoost(v8);
  v6 &= 1u;
  if ( *(_BYTE *)(v8 + 566) == 2 )
  {
    v41 = *(_BYTE *)(v8 + 195);
    if ( v41 <= 0 || v41 >= *(char *)(v8 + 567) || v41 >= 13 || (*(_DWORD *)(v8 + 120) & 8) != 0 )
    {
      if ( !v6 )
        KiSetLockOwnershipQuantum(v8, v4, (unsigned int)KiLockQuantumTarget);
    }
    else
    {
      v42 = *(char *)(v8 + 567);
      if ( *(char *)(v8 + 567) >= 13 )
        v42 = 13;
      KiSetPriorityBoost(0, v8, v42, v4, KiLockQuantumTarget);
    }
  }
  v5 = 0;
LABEL_132:
  v43 = KiComputeThreadQos(v8);
  if ( v43 != *(unsigned __int8 *)(v8 + 516) )
    *(_BYTE *)(v8 + 516) = v43;
  if ( v6 )
  {
    v44 = v4 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v8);
    if ( (*(_DWORD *)(v8 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v8 + 120), 5u);
    *(_QWORD *)(v8 + 32) = v44;
  }
  v7 = *(_DWORD *)(v8 + 484) == 0;
  v45 = *(unsigned int *)(v8 + 588);
  v116 = *(_DWORD *)(v8 + 588);
  *(_WORD *)(v8 + 565) = 0;
  v46 = !v7 || *(_BYTE *)(v8 + 390) == 1;
  v47 = 0;
  v106 = v46;
  v48 = _bittestandreset((signed __int32 *)(v8 + 116), 1u);
  v107 = v48;
  if ( *(_QWORD *)(v8 + 568) != KiCpuSetSequence && (*(_DWORD *)(v8 + 116) & 8) == 0 )
  {
    v49 = KiComputeThreadAffinity(v8);
    v45 = v116;
    v5 = ((WORD2(PerfGlobalGroupMask) & 0x1000) != 0) & v49;
    v108 = v5;
  }
  v50 = (xmmword_140FC5B10 & 0x8000000) != 0 && *(_DWORD *)(v8 + 588) != (_DWORD)v45;
  v105 = v50;
  if ( v5 || v50 )
    _InterlockedIncrement16((volatile signed __int16 *)(v8 + 868));
  v129 = 0uLL;
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    v52 = *(unsigned int *)(v8 + 536);
    v51 = *(_WORD **)(v8 + 576);
    LODWORD(v52) = v52 & 0x7FFFFFFF;
    v53 = (struct _KPRCB *)KiProcessorBlock[v52];
    Group = v53->Group;
    if ( (unsigned __int16)Group >= *v51 || (v45 = *(_QWORD *)&v51[4 * Group + 4] >> v53->GroupIndex, (v45 & 1) == 0) )
    {
      LODWORD(v52) = KeFindFirstSetLeftAffinityEx(*(_QWORD *)(v8 + 576), v45, v51);
      v53 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)v52];
    }
    KiPopulateTrivialProcessorSelectionResult((unsigned __int64 *)&v129, v8, (__int64)v53);
    *(_DWORD *)(v8 + 536) = v52;
    v55 = *(_QWORD *)(v8 + 104);
    if ( v55 )
      v56 = (struct _KSCB *)(v55 + v53->ScbOffset);
    else
      v56 = 0LL;
    v118 = v56;
    goto LABEL_161;
  }
  v60 = *(_WORD **)(v8 + 576);
  v61 = 0LL;
  v110 = v60;
  v62 = 1;
  if ( !*v60 )
    goto LABEL_230;
  v45 = (unsigned __int64)(v60 + 4);
  v63 = (unsigned __int16)*v60;
  do
  {
    v64 = *(_QWORD *)v45;
    v45 += 8LL;
    v61 = (unsigned int)__popcnt(v64) + (unsigned int)v61;
    --v63;
  }
  while ( v63 );
  if ( (unsigned int)v61 > 1 )
  {
    if ( KeHeteroSystem )
    {
      v122 = 0;
      LOBYTE(v123) = 0;
      v121 = 0LL;
      KiHeteroComputeThreadWorkloadProperties(v8, &v121);
      v68 = KiProcessorBlock[*(unsigned int *)(v8 + 588)];
      v112 = v68;
LABEL_180:
      while ( 2 )
      {
        v69 = *(_QWORD *)(v68 + 192);
        v70 = 0;
        v126 = 0LL;
        v71 = 0;
        v72 = *(unsigned __int16 *)(v69 + 138);
        while ( 1 )
        {
          v73 = v72;
          if ( v71 )
          {
            if ( ++v70 == (unsigned __int16)KeNumberNodes )
              break;
            v73 = *(unsigned int *)(qword_140E2DAD0 + 4LL * (v70 + v72 * (unsigned __int16)KeNumberNodes));
          }
          else
          {
            v71 = 1;
          }
          if ( (_DWORD)v73 == -1 )
            break;
          v74 = KiHeteroSelectIdleProcessorFromNode(v8, KeNodeBlock[v73], v68, (int)v67, (__int64)&v121);
          v67 = v110;
          v75 = v74;
          if ( v74 )
          {
            v76 = KiHeteroAttemptPreemptionSwap(v68, v74, (_DWORD)v110, (unsigned int)&v121, (__int64)&v129);
            if ( v76 >= 0 )
              goto LABEL_229;
            v67 = v110;
            if ( v76 == -1073741267 )
              goto LABEL_180;
            v77 = v75;
            v127[0] = v75;
            v66 = v123 ^ (v75 ^ v123) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v123 )
            {
              if ( v123 == 1 )
              {
                v78 = *(_BYTE **)(v75 + 36440);
                v79 = (unsigned __int8)*v78;
                v80 = (__int64 *)(v78 + 8);
                if ( *v78 )
                  goto LABEL_194;
              }
            }
            else
            {
              v80 = v127;
              v79 = 1;
LABEL_194:
              v81 = v79;
              v77 = v75;
              do
              {
                v82 = *v80;
                v83 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v82 + 48), 0LL) )
                {
                  do
                  {
                    if ( (++v83 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v83);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(_QWORD *)(v82 + 48) );
                }
                ++v80;
                --v81;
              }
              while ( v81 );
            }
            v84 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
            v85 = 0LL;
            v127[1] = v66 & 0xFFFFFFFFFFFFFFFEuLL;
            v86 = 0LL;
            if ( (v66 & 1) != 0 )
            {
              if ( (v66 & 1) == 1 )
              {
                v89 = *(unsigned __int8 **)(v84 + 36440);
                v85 = *v89;
                v86 = (__int64 *)(v89 + 8);
              }
              LOBYTE(v90) = 1;
              if ( !(_DWORD)v85 )
                goto LABEL_214;
              do
              {
                v93 = *v86++;
                v90 = ((*(_BYTE *)(v93 + 35) & 1) == 0) & (unsigned __int8)v90;
                --v85;
              }
              while ( v85 );
              if ( v90 )
                goto LABEL_214;
              v124 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v66 & 1) == 0 )
              {
LABEL_208:
                v87 = &v124;
                v88 = 1;
                do
LABEL_209:
                  _InterlockedAnd64((volatile signed __int64 *)(v87[--v88] + 48), 0LL);
                while ( v88 );
LABEL_210:
                v8 = a2;
                v68 = v112;
                v67 = v110;
                goto LABEL_180;
              }
              v87 = (unsigned __int64 *)(*(_QWORD *)(v84 + 36440) + 8LL);
              v88 = **(unsigned __int8 **)(v84 + 36440);
              v8 = a2;
              v68 = v112;
              v67 = v110;
              if ( **(_BYTE **)(v84 + 36440) )
                goto LABEL_209;
            }
            else
            {
              if ( (*(_BYTE *)(v84 + 35) & 1) != 0 )
              {
                v124 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
                goto LABEL_208;
              }
LABEL_214:
              if ( (*(_BYTE *)(v77 + 35) & 0x10) == 0 )
              {
                v48 = v107;
                v47 = 0;
                v65 = v117;
                v53 = (struct _KPRCB *)(v66 & 0xFFFFFFFFFFFFFFFEuLL);
                *(_QWORD *)&v129 = v66;
                *((_QWORD *)&v129 + 1) = 1LL;
                goto LABEL_231;
              }
              v128[0] = v66 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v66 & 1) == 0 )
              {
                v91 = v128;
                v92 = 1;
                do
LABEL_224:
                  _InterlockedAnd64((volatile signed __int64 *)(v91[--v92] + 48LL), 0LL);
                while ( v92 );
                goto LABEL_210;
              }
              v91 = (_QWORD *)(*(_QWORD *)(v84 + 36440) + 8LL);
              v92 = **(unsigned __int8 **)(v84 + 36440);
              v8 = a2;
              v68 = v112;
              v67 = v110;
              if ( **(_BYTE **)(v84 + 36440) )
                goto LABEL_224;
            }
            goto LABEL_180;
          }
        }
        if ( (int)KiHeteroSelectProcessorToPreempt(v8, v68, v67, (__int64)&v121, &v129) < 0 )
        {
          v67 = v110;
          continue;
        }
        break;
      }
LABEL_229:
      v48 = v107;
      v47 = 0;
      v65 = v117;
      v66 = v129;
      v53 = (struct _KPRCB *)(v129 & 0xFFFFFFFFFFFFFFFEuLL);
    }
    else
    {
      v65 = v117;
      if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v8, v117) && !v46 )
        v47 = 1;
      KiChooseTargetProcessor((_DWORD)v117, v8, *(_QWORD *)(v8 + 576), (unsigned int)&v129, v47);
      v66 = v129;
      v53 = (struct _KPRCB *)(v129 & 0xFFFFFFFFFFFFFFFEuLL);
    }
  }
  else
  {
LABEL_230:
    v53 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KeFindFirstSetLeftAffinityEx(v60, v45, v61)];
    KiPopulateTrivialProcessorSelectionResult((unsigned __int64 *)&v129, v8, (__int64)v53);
    v66 = v129;
    v65 = v117;
  }
LABEL_231:
  v94 = 0;
  v95 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
  v128[1] = v66 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v66 & 1) != 0 )
  {
    v96 = *(_BYTE **)(v95 + 36440);
    v97 = (__int64 *)(v96 + 8);
    if ( *v96 )
    {
      v98 = (unsigned __int8)*v96;
      do
      {
        v99 = *v97++;
        v62 = ((*(_BYTE *)(v99 + 35) & 1) == 0) & (unsigned __int8)v62;
        --v98;
      }
      while ( v98 );
    }
  }
  else
  {
    v62 = (*(_BYTE *)(v95 + 35) & 1) == 0;
  }
  if ( v62 != DWORD2(v129) )
    __fastfail(0x21u);
  v8 = a2;
  *(_DWORD *)(a2 + 536) = v53->Number;
  v100 = *(_QWORD *)(a2 + 104);
  if ( v100 )
  {
    ScbOffset = v53->ScbOffset;
    v7 = v100 + ScbOffset == 0;
    v56 = (struct _KSCB *)(v100 + ScbOffset);
    v118 = v56;
    if ( !v7 && *(char *)(a2 + 195) < 16 && (*(_DWORD *)(a2 + 120) & 0x200) == 0 )
    {
      v102 = v56;
      while ( (*(_BYTE *)&v102->0 & 2) == 0 )
      {
        v102 = v102->Parent;
        if ( !v102 )
          goto LABEL_249;
      }
      if ( !v106 )
        goto LABEL_161;
    }
  }
  else
  {
    v56 = 0LL;
    v118 = 0LL;
  }
LABEL_249:
  if ( KiForceParkingConfiguration && (v53->IdleState & 0x20) != 0 && !KiIsThreadExemptFromForcePark(a2) )
  {
LABEL_161:
    v57 = a4;
    goto LABEL_162;
  }
  v57 = a4;
  if ( DWORD2(v129) != v94 )
  {
    result = KiScheduleThreadToIdleIsolationUnit(v65, a2, v48, &v129, v125, a4);
    goto LABEL_166;
  }
  if ( !v47 )
  {
    result = KiAttemptToScheduleThreadToBusyIsolationUnit(
               (_DWORD)v65,
               a2,
               v48,
               (unsigned int)&v129,
               (__int64)v125,
               a4,
               (__int64)&v118);
    if ( (_BYTE)result )
      goto LABEL_166;
    v56 = v118;
  }
LABEL_162:
  KiAddThreadToReadyQueue(v53, v56, v114, (__int64)&v115);
  v58 = 0;
  if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
  {
    v58 = 1;
    _InterlockedIncrement16((volatile signed __int16 *)(v8 + 868));
  }
  KiReleasePrcbLocksForIsolationUnit(&v129);
  result = 0LL;
  *(_QWORD *)(v8 + 64) = 0LL;
  if ( v58 )
  {
    result = EtwTraceReadyQueueInsertion(v8, v53->Number, v115, v57);
    _InterlockedDecrement16((volatile signed __int16 *)(v8 + 868));
  }
LABEL_166:
  if ( !v108 )
  {
    if ( !v105 )
      return result;
    goto LABEL_258;
  }
  v103 = *(_DWORD *)(v8 + 116) >> 3;
  LOBYTE(v103) = (*(_DWORD *)(v8 + 116) & 8) != 0;
  result = EtwTraceThreadAffinity(v8, *(unsigned __int16 *)(v8 + 584), v103, 0, *(_QWORD *)(v8 + 576), 1334);
  if ( v105 )
  {
LABEL_258:
    if ( (xmmword_140FC5B10 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(v8, 1350LL);
  }
  _InterlockedDecrement16((volatile signed __int16 *)(v8 + 868));
  return result;
}
