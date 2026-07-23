/*
 * XREFs of KiDeferredReadySingleThread @ 0x1402C78D0
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiExecuteAllDpcs @ 0x1402858E0 (KiExecuteAllDpcs.c)
 *     KiAbProcessPreContextSwitch @ 0x1402A5600 (KiAbProcessPreContextSwitch.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     KiInswapAndReadyThread @ 0x1402DE624 (KiInswapAndReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402DF08C (KiReadyOutSwappedThreads.c)
 *     KiDeferredReadyThread @ 0x1402DFBE0 (KiDeferredReadyThread.c)
 *     KeSetPriorityBoost @ 0x1402DFC90 (KeSetPriorityBoost.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14031AB50 (HalpTimerStallExecutionProcessor.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiScheduleThreadToIdleIsolationUnit @ 0x140286DA0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiPopulateTrivialProcessorSelectionResult @ 0x1402A3180 (KiPopulateTrivialProcessorSelectionResult.c)
 *     KiHeteroSelectIdleProcessorFromNode @ 0x1402A34F0 (KiHeteroSelectIdleProcessorFromNode.c)
 *     KiHeteroSelectProcessorToPreempt @ 0x1402A45C0 (KiHeteroSelectProcessorToPreempt.c)
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KiIsThreadExemptFromForcePark @ 0x1402A968C (KiIsThreadExemptFromForcePark.c)
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
 *     KiUpdateThreadPriority @ 0x1402E0E50 (KiUpdateThreadPriority.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     EtwTraceThreadAffinity @ 0x1403A2658 (EtwTraceThreadAffinity.c)
 *     EtwTraceReadyQueueInsertion @ 0x1403C1604 (EtwTraceReadyQueueInsertion.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiAddThreadToReadyQueue @ 0x1403E7AA0 (KiAddThreadToReadyQueue.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x14041576C (KiHeteroAttemptPreemptionSwap.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x14042B1C0 (KiHeteroComputeThreadWorkloadProperties.c)
 *     KiSetLockOwnershipQuantum @ 0x140437A60 (KiSetLockOwnershipQuantum.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x1404431E0 (KeFindFirstSetLeftAffinityEx.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14046A2F8 (KiTryScheduleNextForegroundBoost.c)
 *     EtwTraceIdealProcessor @ 0x1404AC65C (EtwTraceIdealProcessor.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1404DD430 (KiUpdateVPBackingThreadPriority.c)
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 *     KiComputeNewPriority @ 0x1404E1290 (KiComputeNewPriority.c)
 *     KiIsThreadRankBiased @ 0x1404F4A2C (KiIsThreadRankBiased.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x1405C275C (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiScheduleNextForegroundBoost @ 0x1405C2800 (KiScheduleNextForegroundBoost.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  bool v48; // bl
  char v49; // di
  unsigned __int8 v50; // r14
  char v51; // si
  bool v52; // al
  _WORD *v53; // r8
  __int64 v54; // rdi
  struct _KPRCB *v55; // rbx
  __int64 Group; // rax
  __int64 v57; // rax
  struct _KSCB *v58; // r10
  __int64 v59; // r13
  char v60; // di
  __int64 result; // rax
  _WORD *v62; // r11
  __int64 v63; // r8
  int v64; // r13d
  __int64 v65; // r9
  unsigned __int64 v66; // rax
  struct _KPRCB *v67; // rsi
  unsigned __int64 v68; // r12
  _WORD *v69; // r11
  __int64 v70; // r15
  __int64 v71; // rax
  int v72; // ebx
  __int16 v73; // si
  unsigned int v74; // r14d
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdi
  int v78; // eax
  __int64 v79; // r15
  _BYTE *v80; // rax
  unsigned int v81; // ecx
  __int64 *v82; // rsi
  __int64 v83; // r14
  __int64 v84; // rdi
  unsigned int v85; // ebx
  unsigned __int64 v86; // r8
  __int64 v87; // r10
  __int64 *v88; // rdx
  unsigned __int64 *v89; // r9
  int v90; // edx
  unsigned __int8 *v91; // rax
  int v92; // r9d
  _QWORD *v93; // r9
  int v94; // edx
  __int64 v95; // rax
  int v96; // r9d
  unsigned __int64 v97; // rdx
  _BYTE *v98; // rax
  __int64 *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 ScbOffset; // r10
  struct _KSCB *v104; // rcx
  int v105; // r8d
  char v106; // [rsp+40h] [rbp-C0h]
  bool v107; // [rsp+40h] [rbp-C0h]
  bool v108; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v109; // [rsp+42h] [rbp-BEh]
  char v110; // [rsp+44h] [rbp-BCh]
  _WORD *v112; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v113; // [rsp+58h] [rbp-A8h]
  __int64 v114; // [rsp+58h] [rbp-A8h]
  int v116; // [rsp+6Ch] [rbp-94h]
  unsigned int v117; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v118; // [rsp+74h] [rbp-8Ch]
  struct _KPRCB *v119; // [rsp+78h] [rbp-88h]
  struct _KSCB *v120; // [rsp+80h] [rbp-80h] BYREF
  signed int v121; // [rsp+88h] [rbp-78h]
  signed int v122; // [rsp+8Ch] [rbp-74h]
  __int128 v123; // [rsp+90h] [rbp-70h] BYREF
  int v124; // [rsp+A0h] [rbp-60h]
  int v125; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v126; // [rsp+A8h] [rbp-58h] BYREF
  struct _SINGLE_LIST_ENTRY *v127; // [rsp+B0h] [rbp-50h]
  __int64 v128; // [rsp+B8h] [rbp-48h]
  _QWORD v129[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v130[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v131; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 72);
  v5 = 0;
  v119 = a1;
  v6 = 0;
  v7 = *(_BYTE *)(a2 + 566) == 1;
  v127 = a3;
  v8 = a2;
  v120 = 0LL;
  v131 = 0LL;
  v117 = 0;
  v110 = 0;
  v113 = v4;
  v116 = 0;
  if ( v7 )
    v106 = *(_BYTE *)(a2 + 567);
  else
    v106 = 0;
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
      v116 = *(unsigned __int8 *)(v8 + 565);
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
      v4 = v113;
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
    if ( v106 > *(char *)(v8 + 870) )
    {
      v7 = (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v19) == 0;
      v29 = *(char *)(v8 + 563);
      if ( v7 )
      {
        v30 = v29 + v106;
        if ( v30 >= 16 )
          LOBYTE(v30) = 15;
        v31 = v30 - v29;
      }
      else
      {
        v28 = v29 + (*(unsigned __int16 *)(v8 + 518) & 0xFu);
        if ( (int)v28 >= 16 )
          v28 = 15LL;
        v32 = v28 + v106;
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
          v122 = v40;
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
          v121 = v37;
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
    v46 = v4 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v8, v44, v45);
    if ( (*(_DWORD *)(v8 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v8 + 120), 5u);
    *(_QWORD *)(v8 + 32) = v46;
  }
  v7 = *(_DWORD *)(v8 + 484) == 0;
  v47 = *(unsigned int *)(v8 + 588);
  v118 = *(_DWORD *)(v8 + 588);
  *(_WORD *)(v8 + 565) = 0;
  v48 = !v7 || *(_BYTE *)(v8 + 390) == 1;
  v49 = 0;
  v108 = v48;
  v50 = _bittestandreset((signed __int32 *)(v8 + 116), 1u);
  v109 = v50;
  if ( *(_QWORD *)(v8 + 568) != KiCpuSetSequence && (*(_DWORD *)(v8 + 116) & 8) == 0 )
  {
    v51 = KiComputeThreadAffinity(v8);
    v47 = v118;
    v5 = ((WORD2(PerfGlobalGroupMask) & 0x1000) != 0) & v51;
    v110 = v5;
  }
  v52 = (xmmword_140FC6B50 & 0x8000000) != 0 && *(_DWORD *)(v8 + 588) != (_DWORD)v47;
  v107 = v52;
  if ( v5 || v52 )
    _InterlockedIncrement16((volatile signed __int16 *)(v8 + 868));
  v131 = 0uLL;
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    v54 = *(unsigned int *)(v8 + 536);
    v53 = *(_WORD **)(v8 + 576);
    LODWORD(v54) = v54 & 0x7FFFFFFF;
    v55 = (struct _KPRCB *)KiProcessorBlock[v54];
    Group = v55->Group;
    if ( (unsigned __int16)Group >= *v53 || (v47 = *(_QWORD *)&v53[4 * Group + 4] >> v55->GroupIndex, (v47 & 1) == 0) )
    {
      LODWORD(v54) = KeFindFirstSetLeftAffinityEx(*(_QWORD *)(v8 + 576), v47, v53);
      v55 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)v54];
    }
    KiPopulateTrivialProcessorSelectionResult((unsigned __int64 *)&v131, v8, (__int64)v55);
    *(_DWORD *)(v8 + 536) = v54;
    v57 = *(_QWORD *)(v8 + 104);
    if ( v57 )
      v58 = (struct _KSCB *)(v57 + v55->ScbOffset);
    else
      v58 = 0LL;
    v120 = v58;
    goto LABEL_161;
  }
  v62 = *(_WORD **)(v8 + 576);
  v63 = 0LL;
  v112 = v62;
  v64 = 1;
  if ( !*v62 )
    goto LABEL_230;
  v47 = (unsigned __int64)(v62 + 4);
  v65 = (unsigned __int16)*v62;
  do
  {
    v66 = *(_QWORD *)v47;
    v47 += 8LL;
    v63 = (unsigned int)__popcnt(v66) + (unsigned int)v63;
    --v65;
  }
  while ( v65 );
  if ( (unsigned int)v63 > 1 )
  {
    if ( KeHeteroSystem )
    {
      v124 = 0;
      LOBYTE(v125) = 0;
      v123 = 0LL;
      KiHeteroComputeThreadWorkloadProperties(v8, &v123);
      v70 = KiProcessorBlock[*(unsigned int *)(v8 + 588)];
      v114 = v70;
LABEL_180:
      while ( 2 )
      {
        v71 = *(_QWORD *)(v70 + 192);
        v72 = 0;
        v128 = 0LL;
        v73 = 0;
        v74 = *(unsigned __int16 *)(v71 + 138);
        while ( 1 )
        {
          v75 = v74;
          if ( v73 )
          {
            if ( ++v72 == (unsigned __int16)KeNumberNodes )
              break;
            v75 = *(unsigned int *)(qword_140E2DC10 + 4LL * (v72 + v74 * (unsigned __int16)KeNumberNodes));
          }
          else
          {
            v73 = 1;
          }
          if ( (_DWORD)v75 == -1 )
            break;
          v76 = KiHeteroSelectIdleProcessorFromNode(v8, KeNodeBlock[v75], v70, (int)v69, (__int64)&v123);
          v69 = v112;
          v77 = v76;
          if ( v76 )
          {
            v78 = KiHeteroAttemptPreemptionSwap(v70, v76, (_DWORD)v112, (unsigned int)&v123, (__int64)&v131);
            if ( v78 >= 0 )
              goto LABEL_229;
            v69 = v112;
            if ( v78 == -1073741267 )
              goto LABEL_180;
            v79 = v77;
            v129[0] = v77;
            v68 = v125 ^ (v77 ^ v125) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v125 )
            {
              if ( v125 == 1 )
              {
                v80 = *(_BYTE **)(v77 + 36440);
                v81 = (unsigned __int8)*v80;
                v82 = (__int64 *)(v80 + 8);
                if ( *v80 )
                  goto LABEL_194;
              }
            }
            else
            {
              v82 = v129;
              v81 = 1;
LABEL_194:
              v83 = v81;
              v79 = v77;
              do
              {
                v84 = *v82;
                v85 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v84 + 48), 0LL) )
                {
                  do
                  {
                    if ( (++v85 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && KiCheckVpBackingLongSpinWaitHypercall() )
                    {
                      HvlNotifyLongSpinWait(v85);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(_QWORD *)(v84 + 48) );
                }
                ++v82;
                --v83;
              }
              while ( v83 );
            }
            v86 = v68 & 0xFFFFFFFFFFFFFFFEuLL;
            v87 = 0LL;
            v129[1] = v68 & 0xFFFFFFFFFFFFFFFEuLL;
            v88 = 0LL;
            if ( (v68 & 1) != 0 )
            {
              if ( (v68 & 1) == 1 )
              {
                v91 = *(unsigned __int8 **)(v86 + 36440);
                v87 = *v91;
                v88 = (__int64 *)(v91 + 8);
              }
              LOBYTE(v92) = 1;
              if ( !(_DWORD)v87 )
                goto LABEL_214;
              do
              {
                v95 = *v88++;
                v92 = ((*(_BYTE *)(v95 + 35) & 1) == 0) & (unsigned __int8)v92;
                --v87;
              }
              while ( v87 );
              if ( v92 )
                goto LABEL_214;
              v126 = v68 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v68 & 1) == 0 )
              {
LABEL_208:
                v89 = &v126;
                v90 = 1;
                do
LABEL_209:
                  _InterlockedAnd64((volatile signed __int64 *)(v89[--v90] + 48), 0LL);
                while ( v90 );
LABEL_210:
                v8 = a2;
                v70 = v114;
                v69 = v112;
                goto LABEL_180;
              }
              v89 = (unsigned __int64 *)(*(_QWORD *)(v86 + 36440) + 8LL);
              v90 = **(unsigned __int8 **)(v86 + 36440);
              v8 = a2;
              v70 = v114;
              v69 = v112;
              if ( **(_BYTE **)(v86 + 36440) )
                goto LABEL_209;
            }
            else
            {
              if ( (*(_BYTE *)(v86 + 35) & 1) != 0 )
              {
                v126 = v68 & 0xFFFFFFFFFFFFFFFEuLL;
                goto LABEL_208;
              }
LABEL_214:
              if ( (*(_BYTE *)(v79 + 35) & 0x10) == 0 )
              {
                v50 = v109;
                v49 = 0;
                v67 = v119;
                v55 = (struct _KPRCB *)(v68 & 0xFFFFFFFFFFFFFFFEuLL);
                *(_QWORD *)&v131 = v68;
                *((_QWORD *)&v131 + 1) = 1LL;
                goto LABEL_231;
              }
              v130[0] = v68 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v68 & 1) == 0 )
              {
                v93 = v130;
                v94 = 1;
                do
LABEL_224:
                  _InterlockedAnd64((volatile signed __int64 *)(v93[--v94] + 48LL), 0LL);
                while ( v94 );
                goto LABEL_210;
              }
              v93 = (_QWORD *)(*(_QWORD *)(v86 + 36440) + 8LL);
              v94 = **(unsigned __int8 **)(v86 + 36440);
              v8 = a2;
              v70 = v114;
              v69 = v112;
              if ( **(_BYTE **)(v86 + 36440) )
                goto LABEL_224;
            }
            goto LABEL_180;
          }
        }
        if ( (int)KiHeteroSelectProcessorToPreempt(v8, v70, v69, (__int64)&v123, &v131) < 0 )
        {
          v69 = v112;
          continue;
        }
        break;
      }
LABEL_229:
      v50 = v109;
      v49 = 0;
      v67 = v119;
      v68 = v131;
      v55 = (struct _KPRCB *)(v131 & 0xFFFFFFFFFFFFFFFEuLL);
    }
    else
    {
      v67 = v119;
      if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v8, v119) && !v48 )
        v49 = 1;
      KiChooseTargetProcessor((_DWORD)v119, v8, *(_QWORD *)(v8 + 576), (unsigned int)&v131, v49);
      v68 = v131;
      v55 = (struct _KPRCB *)(v131 & 0xFFFFFFFFFFFFFFFEuLL);
    }
  }
  else
  {
LABEL_230:
    v55 = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KeFindFirstSetLeftAffinityEx(v62, v47, v63)];
    KiPopulateTrivialProcessorSelectionResult((unsigned __int64 *)&v131, v8, (__int64)v55);
    v68 = v131;
    v67 = v119;
  }
LABEL_231:
  v96 = 0;
  v97 = v68 & 0xFFFFFFFFFFFFFFFEuLL;
  v130[1] = v68 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v68 & 1) != 0 )
  {
    v98 = *(_BYTE **)(v97 + 36440);
    v99 = (__int64 *)(v98 + 8);
    if ( *v98 )
    {
      v100 = (unsigned __int8)*v98;
      do
      {
        v101 = *v99++;
        v64 = ((*(_BYTE *)(v101 + 35) & 1) == 0) & (unsigned __int8)v64;
        --v100;
      }
      while ( v100 );
    }
  }
  else
  {
    v64 = (*(_BYTE *)(v97 + 35) & 1) == 0;
  }
  if ( v64 != DWORD2(v131) )
    __fastfail(0x21u);
  v8 = a2;
  *(_DWORD *)(a2 + 536) = v55->Number;
  v102 = *(_QWORD *)(a2 + 104);
  if ( v102 )
  {
    ScbOffset = v55->ScbOffset;
    v7 = v102 + ScbOffset == 0;
    v58 = (struct _KSCB *)(v102 + ScbOffset);
    v120 = v58;
    if ( !v7 && *(char *)(a2 + 195) < 16 && (*(_DWORD *)(a2 + 120) & 0x200) == 0 )
    {
      v104 = v58;
      while ( (*(_BYTE *)&v104->0 & 2) == 0 )
      {
        v104 = v104->Parent;
        if ( !v104 )
          goto LABEL_249;
      }
      if ( !v108 )
        goto LABEL_161;
    }
  }
  else
  {
    v58 = 0LL;
    v120 = 0LL;
  }
LABEL_249:
  if ( KiForceParkingConfiguration && (v55->IdleState & 0x20) != 0 && !KiIsThreadExemptFromForcePark(a2) )
  {
LABEL_161:
    v59 = a4;
    goto LABEL_162;
  }
  v59 = a4;
  if ( DWORD2(v131) != v96 )
  {
    result = KiScheduleThreadToIdleIsolationUnit(v67, a2, v50, &v131, v127, a4);
    goto LABEL_166;
  }
  if ( !v49 )
  {
    result = KiAttemptToScheduleThreadToBusyIsolationUnit(
               (_DWORD)v67,
               a2,
               v50,
               (unsigned int)&v131,
               (__int64)v127,
               a4,
               (__int64)&v120);
    if ( (_BYTE)result )
      goto LABEL_166;
    v58 = v120;
  }
LABEL_162:
  KiAddThreadToReadyQueue(v55, v58, v116, (__int64)&v117);
  v60 = 0;
  if ( (WORD2(xmmword_140FC6B50) & 0x800) != 0 )
  {
    v60 = 1;
    _InterlockedIncrement16((volatile signed __int16 *)(v8 + 868));
  }
  KiReleasePrcbLocksForIsolationUnit(&v131);
  result = 0LL;
  *(_QWORD *)(v8 + 64) = 0LL;
  if ( v60 )
  {
    result = EtwTraceReadyQueueInsertion(v8, v55->Number, v117, v59);
    _InterlockedDecrement16((volatile signed __int16 *)(v8 + 868));
  }
LABEL_166:
  if ( !v110 )
  {
    if ( !v107 )
      return result;
    goto LABEL_258;
  }
  v105 = *(_DWORD *)(v8 + 116) >> 3;
  LOBYTE(v105) = (*(_DWORD *)(v8 + 116) & 8) != 0;
  result = EtwTraceThreadAffinity(v8, *(unsigned __int16 *)(v8 + 584), v105, 0, *(_QWORD *)(v8 + 576), 1334);
  if ( v107 )
  {
LABEL_258:
    if ( (xmmword_140FC6B50 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(v8, 1350LL);
  }
  _InterlockedDecrement16((volatile signed __int16 *)(v8 + 868));
  return result;
}
