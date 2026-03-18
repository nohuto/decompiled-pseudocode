/*
 * XREFs of KiDeferredReadySingleThread @ 0x1402877C0
 * Callers:
 *     KiExecuteAllDpcs @ 0x140254370 (KiExecuteAllDpcs.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14029BB60 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiReadyOutSwappedThreads @ 0x1402F06E0 (KiReadyOutSwappedThreads.c)
 *     KiInswapAndReadyThread @ 0x1402F1104 (KiInswapAndReadyThread.c)
 *     KiDeferredReadyThread @ 0x1402F13A0 (KiDeferredReadyThread.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     KiAbProcessPreContextSwitch @ 0x140316AB0 (KiAbProcessPreContextSwitch.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     KeSetPriorityBoost @ 0x140326970 (KeSetPriorityBoost.c)
 * Callees:
 *     KiScheduleThreadToIdleIsolationUnit @ 0x1402557A0 (KiScheduleThreadToIdleIsolationUnit.c)
 *     EtwTraceThreadAffinity @ 0x14026B7D8 (EtwTraceThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x1402720F8 (KiComputeThreadAffinity.c)
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402F4770 (KiCheckForMaxOverQuotaScb.c)
 *     EtwTraceReadyQueueInsertion @ 0x140311C24 (EtwTraceReadyQueueInsertion.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x140311FF4 (KiHeteroAttemptPreemptionSwap.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140316DD0 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateThreadPriority @ 0x1403170A0 (KiUpdateThreadPriority.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     KiIsThreadExemptFromForcePark @ 0x14031888C (KiIsThreadExemptFromForcePark.c)
 *     KiSetPriorityBoost @ 0x140326B50 (KiSetPriorityBoost.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiPopulateTrivialProcessorSelectionResult @ 0x14032E204 (KiPopulateTrivialProcessorSelectionResult.c)
 *     KiHeteroSelectIdleProcessorFromNode @ 0x14032E630 (KiHeteroSelectIdleProcessorFromNode.c)
 *     KiHeteroSelectProcessorToPreempt @ 0x140330300 (KiHeteroSelectProcessorToPreempt.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiAddThreadToReadyQueue @ 0x1403EFA70 (KiAddThreadToReadyQueue.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x140440BE0 (KiHeteroComputeThreadWorkloadProperties.c)
 *     KiSetLockOwnershipQuantum @ 0x1404413B0 (KiSetLockOwnershipQuantum.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14044CAD0 (KeFindFirstSetLeftAffinityEx.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140472C3C (KiTryScheduleNextForegroundBoost.c)
 *     EtwTraceIdealProcessor @ 0x1404B0E7C (EtwTraceIdealProcessor.c)
 *     KiChooseTargetProcessor @ 0x1404E7040 (KiChooseTargetProcessor.c)
 *     KiComputeNewPriority @ 0x1404E8FCC (KiComputeNewPriority.c)
 *     KiIsThreadRankBiased @ 0x1404F45DC (KiIsThreadRankBiased.c)
 *     KiScheduleNextForegroundBoost @ 0x1405C0D28 (KiScheduleNextForegroundBoost.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KiDeferredReadySingleThread(
        struct _KPRCB *a1,
        ULONG_PTR a2,
        struct _SINGLE_LIST_ENTRY *a3,
        __int64 a4)
{
  unsigned __int64 v4; // r12
  char v5; // di
  bool v6; // zf
  ULONG_PTR v7; // r15
  char v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rdx
  char updated; // si
  __int64 v12; // r8
  int v13; // eax
  int v14; // edx
  char v15; // bl
  char v16; // r11
  unsigned int v17; // ecx
  char v18; // r8
  __int64 v19; // rdx
  int v20; // r14d
  int v21; // eax
  char v22; // al
  int v23; // esi
  int v24; // r9d
  int v25; // r10d
  char v26; // r10
  unsigned int v27; // r8d
  int v28; // ecx
  signed int v29; // eax
  char v30; // al
  int v31; // r8d
  int v32; // eax
  unsigned __int64 v33; // rcx
  unsigned int v34; // edx
  bool v35; // bl
  char v36; // di
  unsigned __int8 v37; // r14
  char v38; // r8
  char v39; // r8
  unsigned int v40; // r13d
  bool v41; // al
  _WORD *v42; // r8
  __int64 FirstSetLeftAffinity; // rdi
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r10
  __int64 v48; // rdi
  char v49; // r10
  unsigned __int64 *v50; // r8
  unsigned __int64 v51; // r9
  int v52; // edx
  _WORD *v53; // r12
  unsigned int v54; // r8d
  unsigned __int64 *v55; // rdx
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  struct _KPRCB *v58; // rsi
  unsigned __int64 v59; // r12
  __int64 v60; // r13
  __int64 v61; // rax
  int v62; // ebx
  __int16 v63; // si
  unsigned int v64; // r14d
  __int64 v65; // rax
  __int64 v66; // rdi
  int v67; // eax
  __int64 v68; // r15
  _BYTE *v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rsi
  __int64 v72; // r14
  __int64 v73; // rdi
  unsigned int v74; // ebx
  unsigned __int64 v75; // r9
  __int64 v76; // r10
  __int64 *v77; // rdx
  int v78; // ecx
  unsigned __int64 *v79; // r8
  int v80; // edx
  unsigned __int8 *v81; // rax
  int v82; // r8d
  _QWORD *v83; // r8
  int v84; // edx
  __int64 v85; // rax
  int v86; // r9d
  unsigned __int64 v87; // rcx
  __int64 *v88; // rdx
  __int64 v89; // r8
  int v90; // ecx
  unsigned __int8 *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // r10
  __int64 result; // rax
  char v96; // [rsp+40h] [rbp-C0h]
  bool v97; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v98; // [rsp+42h] [rbp-BEh]
  char v99; // [rsp+44h] [rbp-BCh]
  unsigned int v102; // [rsp+58h] [rbp-A8h]
  int v103; // [rsp+5Ch] [rbp-A4h]
  unsigned int v104; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v105; // [rsp+64h] [rbp-9Ch]
  struct _KPRCB *v106; // [rsp+68h] [rbp-98h]
  __int64 v107; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v108; // [rsp+78h] [rbp-88h]
  signed int v109; // [rsp+80h] [rbp-80h]
  __int128 v110; // [rsp+88h] [rbp-78h] BYREF
  int v111; // [rsp+98h] [rbp-68h]
  int v112; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v113; // [rsp+A0h] [rbp-60h] BYREF
  struct _SINGLE_LIST_ENTRY *v114; // [rsp+A8h] [rbp-58h]
  __int64 v115; // [rsp+B0h] [rbp-50h]
  _QWORD v116[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v117[2]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v118; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v119; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(a2 + 72);
  v5 = 0;
  v114 = a3;
  v6 = *(_BYTE *)(a2 + 566) == 1;
  v7 = a2;
  v106 = a1;
  v107 = 0LL;
  v119 = 0LL;
  v104 = 0;
  v99 = 0;
  v103 = 0;
  if ( v6 )
    v8 = *(_BYTE *)(a2 + 567);
  else
    v8 = 0;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v7 + 64) );
  }
  updated = KiUpdateVPBackingThreadPriority(v7);
  if ( !*(_BYTE *)(v7 + 566) )
  {
    if ( v4 < *(_QWORD *)(v7 + 32) )
    {
      v103 = *(unsigned __int8 *)(v7 + 565);
    }
    else
    {
      LOBYTE(v12) = 1;
      v13 = KiComputeNewPriority(v7, v10, v12);
      if ( !updated )
        KiUpdateThreadPriority(0, v14, v7, v13, 0);
      v5 = 1;
      KiTryScheduleNextForegroundBoost(v7);
    }
    goto LABEL_86;
  }
  v15 = 63;
  if ( *(char *)(v7 + 195) < 16 )
  {
    v16 = 0;
    v17 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v7 + 436);
    if ( v4 < *(_QWORD *)(v7 + 32) )
    {
      if ( *(char *)(v7 + 563) < 14 )
      {
        LODWORD(v10) = 4080;
        if ( (*(_WORD *)(v7 + 518) & 0xFF0) != 0 || v17 < 2 )
        {
LABEL_45:
          if ( (*(_DWORD *)(*(_QWORD *)(v7 + 544) + 136LL) & 0x2000) != 0 )
            v16 |= 2u;
          if ( (v16 & 1) != 0 || (v23 = *(_DWORD *)(v7 + 120), (v23 & 8) != 0) || *(char *)(v7 + 195) <= 0 )
          {
            if ( KiSchedulerForegroundBoostDecayPolicy
              && (v16 & 6) == 6
              && (*(_DWORD *)(v7 + 120) & 8) == 0
              && *(char *)(v7 + 195) > 0 )
            {
              v5 |= 2u;
            }
          }
          else if ( v8 > *(char *)(v7 + 870) )
          {
            v24 = *(char *)(v7 + 563);
            v25 = v24 + v8;
            if ( v25 >= 16 )
              LOBYTE(v25) = 15;
            v26 = v25 - v24;
            *(_BYTE *)(v7 + 870) = v26;
            if ( v24 < 16 )
            {
              LODWORD(v10) = v24;
              v28 = v24 + (*(_WORD *)(v7 + 518) & 0xF);
              if ( !__OFSUB__(v28, v24) && v28 != v24 )
                LODWORD(v10) = v24 + (*(_WORD *)(v7 + 518) & 0xF);
              v24 += v26;
              if ( v24 <= (int)v10 )
                v24 = v10;
              v27 = *(unsigned __int16 *)(v7 + 518);
              if ( (unsigned __int8)(v27 >> 4) > v24 )
                v24 = (unsigned __int8)(v27 >> 4);
              if ( v24 >= 16 && (v23 & 0x400000) == 0 )
                v24 = 15;
            }
            v29 = *(_DWORD *)(v7 + 856);
            if ( v29 )
            {
              _BitScanReverse((unsigned int *)&v29, v29);
              v109 = v29;
              if ( v24 < v29 )
                LOBYTE(v24) = v29;
            }
            v15 = v24;
          }
          goto LABEL_72;
        }
      }
    }
    else
    {
      v16 = 4;
      if ( v17 < 2 )
        v16 = 5;
    }
    v5 = 1;
    if ( *(char *)(v7 + 195) < 16 || (*(_DWORD *)(v7 + 120) & 0x400000) != 0 )
    {
      v19 = 6LL;
      v20 = *(char *)(v7 + 870);
      if ( KiSchedulerForegroundBoostDecayPolicy )
      {
        v19 = 7LL;
        if ( (*(_BYTE *)(v7 + 518) & 0xF) != 0 )
        {
          *(_DWORD *)(v7 + 872) = MEMORY[0xFFFFF78000000320];
          *(_WORD *)(v7 + 518) &= 0xFFF0u;
        }
      }
      v21 = KiComputeThreadPriority(v7, v19);
      LODWORD(v10) = *(char *)(v7 + 563);
      v18 = v21;
      if ( (char)v20 >= 1 )
        LODWORD(v10) = v10 + v20 - 1;
      if ( v21 < (int)v10 )
        v18 = v10;
      *(_WORD *)(v7 + 518) &= 0xF00Fu;
      v22 = *(_BYTE *)(v7 + 870);
      if ( v22 >= 1 )
        *(_BYTE *)(v7 + 870) = v22 - 1;
      else
        *(_BYTE *)(v7 + 870) = 0;
    }
    else
    {
      v18 = *(_BYTE *)(v7 + 195);
    }
    v15 = 63;
    if ( !updated )
      v15 = v18;
    goto LABEL_45;
  }
  if ( updated )
  {
    LODWORD(v10) = 4080;
    v5 = (*(_WORD *)(v7 + 518) & 0xFF0u) < 0x100;
    if ( v4 >= *(_QWORD *)(v7 + 32) )
    {
      v5 = 1;
      KiComputeNewPriority(v7, 4080LL, 1LL);
    }
  }
  else
  {
    v5 = 1;
  }
LABEL_72:
  if ( v15 != 63 )
    KiUpdateThreadPriority(0, v10, v7, v15, 0);
  if ( (v5 & 2) != 0 )
    KiScheduleNextForegroundBoost(v7);
  v5 &= 1u;
  if ( *(_BYTE *)(v7 + 566) == 2 )
  {
    v30 = *(_BYTE *)(v7 + 195);
    if ( v30 <= 0 || v30 >= *(char *)(v7 + 567) || v30 >= 13 || (*(_DWORD *)(v7 + 120) & 8) != 0 )
    {
      if ( !v5 )
        KiSetLockOwnershipQuantum(v7, v4, (unsigned int)KiLockQuantumTarget);
    }
    else
    {
      v31 = *(char *)(v7 + 567);
      if ( *(char *)(v7 + 567) >= 13 )
        v31 = 13;
      KiSetPriorityBoost(0, v7, v31, v4, KiLockQuantumTarget);
    }
  }
LABEL_86:
  v32 = KiComputeThreadQos(v7);
  if ( v32 != *(unsigned __int8 *)(v7 + 516) )
    *(_BYTE *)(v7 + 516) = v32;
  if ( v5 )
  {
    v33 = v4 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v7);
    if ( (*(_DWORD *)(v7 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v7 + 120), 5u);
    *(_QWORD *)(v7 + 32) = v33;
  }
  v6 = *(_DWORD *)(v7 + 484) == 0;
  v34 = *(_DWORD *)(v7 + 588);
  v105 = v34;
  *(_WORD *)(v7 + 565) = 0;
  v35 = !v6 || *(_BYTE *)(v7 + 390) == 1;
  v36 = 0;
  v96 = v35;
  v37 = _bittestandreset((signed __int32 *)(v7 + 116), 1u);
  v98 = v37;
  if ( *(_QWORD *)(v7 + 568) == KiCpuSetSequence || (*(_DWORD *)(v7 + 116) & 8) != 0 )
  {
    v39 = 0;
  }
  else
  {
    v38 = KiComputeThreadAffinity(v7);
    v34 = v105;
    v39 = ((WORD2(PerfGlobalGroupMask) & 0x1000) != 0) & v38;
    v99 = v39;
  }
  v40 = *(_DWORD *)(v7 + 588);
  v102 = v40;
  v41 = (xmmword_140FC5B10 & 0x8000000) != 0 && v40 != v34;
  v97 = v41;
  if ( v39 || v41 )
    _InterlockedIncrement16((volatile signed __int16 *)(v7 + 868));
  v119 = 0uLL;
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    FirstSetLeftAffinity = *(unsigned int *)(v7 + 536);
    v42 = *(_WORD **)(v7 + 576);
    LODWORD(FirstSetLeftAffinity) = FirstSetLeftAffinity & 0x7FFFFFFF;
    v44 = KiProcessorBlock[FirstSetLeftAffinity];
    v45 = *(unsigned __int8 *)(v44 + 208);
    if ( (unsigned __int16)v45 >= *v42 || ((*(_QWORD *)&v42[4 * v45 + 4] >> *(_BYTE *)(v44 + 209)) & 1) == 0 )
    {
      FirstSetLeftAffinity = (unsigned int)KeFindFirstSetLeftAffinityEx(*(_QWORD *)(v7 + 576));
      v44 = KiProcessorBlock[FirstSetLeftAffinity];
    }
    KiPopulateTrivialProcessorSelectionResult(&v119, v7, v44);
    *(_DWORD *)(v7 + 536) = FirstSetLeftAffinity;
    v46 = *(_QWORD *)(v7 + 104);
    if ( v46 )
      v47 = v46 + *(unsigned int *)(v44 + 216);
    else
      v47 = 0LL;
    v107 = v47;
    goto LABEL_116;
  }
  v53 = *(_WORD **)(v7 + 576);
  v54 = 0;
  v108 = v53;
  if ( !*v53 )
    goto LABEL_189;
  v55 = (unsigned __int64 *)(v53 + 4);
  v56 = (unsigned __int16)*v53;
  do
  {
    v57 = *v55++;
    v54 += __popcnt(v57);
    --v56;
  }
  while ( v56 );
  if ( v54 > 1 )
  {
    if ( KeHeteroSystem )
    {
      v111 = 0;
      LOBYTE(v112) = 0;
      v110 = 0LL;
      KiHeteroComputeThreadWorkloadProperties(v7, &v110);
      v60 = KiProcessorBlock[*(unsigned int *)(v7 + 588)];
LABEL_135:
      while ( 2 )
      {
        v61 = *(_QWORD *)(v60 + 192);
        v62 = 0;
        v115 = 0LL;
        v63 = 0;
        v64 = *(unsigned __int16 *)(v61 + 138);
        while ( 1 )
        {
          if ( v63 )
          {
            if ( ++v62 == (unsigned __int16)KeNumberNodes )
              break;
            v65 = *(unsigned int *)(qword_140E2D890 + 4LL * (v62 + (unsigned __int16)KeNumberNodes * v64));
          }
          else
          {
            v65 = v64;
            v63 = 1;
          }
          if ( (_DWORD)v65 == -1 )
            break;
          v66 = KiHeteroSelectIdleProcessorFromNode(v7, KeNodeBlock[v65], v60, (_DWORD)v53, (__int64)&v110);
          if ( v66 )
          {
            v67 = KiHeteroAttemptPreemptionSwap(v60, v66, (_DWORD)v53, (unsigned int)&v110, (__int64)&v119);
            if ( v67 >= 0 )
              goto LABEL_188;
            if ( v67 == -1073741267 )
              goto LABEL_135;
            v68 = v66;
            v116[0] = v66;
            v59 = v112 ^ (v66 ^ v112) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v112 )
            {
              if ( v112 == 1 )
              {
                v69 = *(_BYTE **)(v66 + 36440);
                v70 = (unsigned __int8)*v69;
                v71 = (__int64 *)(v69 + 8);
                if ( *v69 )
                  goto LABEL_149;
              }
            }
            else
            {
              v71 = v116;
              v70 = 1LL;
LABEL_149:
              v72 = (unsigned int)v70;
              v68 = v66;
              do
              {
                v73 = *v71;
                v74 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 48), 0LL) )
                {
                  do
                  {
                    if ( (++v74 & HvlLongSpinCountMask) == 0
                      && (HvlEnlightenments & 0x40) != 0
                      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v70) )
                    {
                      HvlNotifyLongSpinWait(v74);
                    }
                    else
                    {
                      _mm_pause();
                    }
                  }
                  while ( *(_QWORD *)(v73 + 48) );
                }
                ++v71;
                --v72;
              }
              while ( v72 );
            }
            v75 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
            v76 = 0LL;
            v116[1] = v59 & 0xFFFFFFFFFFFFFFFEuLL;
            v77 = 0LL;
            v78 = v59 & 1;
            if ( (v59 & 1) != 0 )
            {
              if ( v78 == 1 )
              {
                v81 = *(unsigned __int8 **)(v75 + 36440);
                v76 = *v81;
                v77 = (__int64 *)(v81 + 8);
              }
              LOBYTE(v82) = 1;
              if ( !(_DWORD)v76 )
                goto LABEL_169;
              do
              {
                v85 = *v77++;
                v82 = ((*(_BYTE *)(v85 + 35) & 1) == 0) & (unsigned __int8)v82;
                --v76;
              }
              while ( v76 );
              if ( v82 )
                goto LABEL_169;
              v113 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
              v79 = 0LL;
              v80 = 0;
              if ( (v59 & 1) == 0 )
              {
LABEL_163:
                v79 = &v113;
                v80 = 1;
                do
LABEL_164:
                  _InterlockedAnd64((volatile signed __int64 *)(v79[--v80] + 48), 0LL);
                while ( v80 );
                v7 = a2;
                LODWORD(v53) = (_DWORD)v108;
                goto LABEL_135;
              }
              if ( v78 == 1 )
              {
                v79 = (unsigned __int64 *)(*(_QWORD *)(v75 + 36440) + 8LL);
                v80 = **(unsigned __int8 **)(v75 + 36440);
              }
              v7 = a2;
              LODWORD(v53) = (_DWORD)v108;
              if ( v80 )
                goto LABEL_164;
            }
            else
            {
              if ( (*(_BYTE *)(v75 + 35) & 1) != 0 )
              {
                v113 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
                goto LABEL_163;
              }
LABEL_169:
              if ( (*(_BYTE *)(v68 + 35) & 0x10) == 0 )
              {
                v7 = a2;
                v36 = 0;
                v37 = v98;
                v40 = v102;
                v44 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
                v58 = v106;
                *(_QWORD *)&v119 = v59;
                *((_QWORD *)&v119 + 1) = 1LL;
                goto LABEL_190;
              }
              v117[0] = v59 & 0xFFFFFFFFFFFFFFFEuLL;
              v83 = 0LL;
              v84 = 0;
              if ( (v59 & 1) == 0 )
              {
                v83 = v117;
                v84 = 1;
                goto LABEL_183;
              }
              if ( v78 == 1 )
              {
                v83 = (_QWORD *)(*(_QWORD *)(v75 + 36440) + 8LL);
                v84 = **(unsigned __int8 **)(v75 + 36440);
              }
              v7 = a2;
              LODWORD(v53) = (_DWORD)v108;
              if ( v84 )
              {
                do
LABEL_183:
                  _InterlockedAnd64((volatile signed __int64 *)(v83[--v84] + 48LL), 0LL);
                while ( v84 );
                v7 = a2;
                LODWORD(v53) = (_DWORD)v108;
              }
            }
            goto LABEL_135;
          }
        }
        if ( (int)KiHeteroSelectProcessorToPreempt(v7, v60, (_DWORD)v53, (unsigned int)&v110, (__int64)&v119) < 0 )
          continue;
        break;
      }
LABEL_188:
      v37 = v98;
      v36 = 0;
      v40 = v102;
      v58 = v106;
      v59 = v119;
      v44 = v119 & 0xFFFFFFFFFFFFFFFEuLL;
    }
    else
    {
      v58 = v106;
      if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v7, v106) && !v35 )
        v36 = 1;
      KiChooseTargetProcessor((_DWORD)v106, v7, *(_QWORD *)(v7 + 576), (unsigned int)&v119, v36);
      v59 = v119;
      v44 = v119 & 0xFFFFFFFFFFFFFFFEuLL;
    }
  }
  else
  {
LABEL_189:
    v44 = KiProcessorBlock[(unsigned int)KeFindFirstSetLeftAffinityEx(v53)];
    KiPopulateTrivialProcessorSelectionResult(&v119, v7, v44);
    v59 = v119;
    v58 = v106;
  }
LABEL_190:
  v86 = 0;
  v87 = v59 & 0xFFFFFFFFFFFFFFFEuLL;
  v88 = 0LL;
  v117[1] = v59 & 0xFFFFFFFFFFFFFFFEuLL;
  v89 = 0LL;
  if ( (v59 & 1) != 0 )
  {
    v91 = *(unsigned __int8 **)(v87 + 36440);
    v89 = *v91;
    v88 = (__int64 *)(v91 + 8);
    v90 = 1;
    if ( *v91 )
    {
      do
      {
        v92 = *v88++;
        v90 = ((*(_BYTE *)(v92 + 35) & 1) == 0) & (unsigned __int8)v90;
        --v89;
      }
      while ( v89 );
    }
  }
  else
  {
    v90 = (*(_BYTE *)(v87 + 35) & 1) == 0;
  }
  if ( v90 != DWORD2(v119) )
    __fastfail(0x21u);
  *(_DWORD *)(v7 + 536) = *(_DWORD *)(v44 + 36);
  v93 = *(_QWORD *)(v7 + 104);
  if ( v93 )
  {
    v94 = *(unsigned int *)(v44 + 216);
    v6 = v93 + v94 == 0;
    v47 = v93 + v94;
    v107 = v47;
    if ( !v6
      && *(char *)(v7 + 195) < 16
      && (*(_DWORD *)(v7 + 120) & 0x200) == 0
      && (unsigned __int8)KiCheckForMaxOverQuotaScb(v47)
      && v96 == (_BYTE)v86 )
    {
      goto LABEL_116;
    }
  }
  else
  {
    LODWORD(v47) = 0;
    v107 = 0LL;
  }
  if ( KiForceParkingConfiguration != v86
    && (*(_BYTE *)(v44 + 35) & 0x20) != 0
    && !(unsigned __int8)KiIsThreadExemptFromForcePark(v7, v88, v89) )
  {
LABEL_116:
    v48 = a4;
    goto LABEL_117;
  }
  if ( DWORD2(v119) != v86 )
  {
    result = KiScheduleThreadToIdleIsolationUnit(v58, v7, v37, &v119, v114, a4);
    goto LABEL_216;
  }
  v6 = v36 == 0;
  v48 = a4;
  if ( v6 )
  {
    result = KiAttemptToScheduleThreadToBusyIsolationUnit(
               (_DWORD)v58,
               v7,
               v37,
               (unsigned int)&v119,
               (__int64)v114,
               a4,
               (__int64)&v107);
    if ( (_BYTE)result )
      goto LABEL_216;
    LODWORD(v47) = v107;
  }
LABEL_117:
  KiAddThreadToReadyQueue(v44, v47, v7, v37, v103, (__int64)&v104);
  v49 = 0;
  if ( (WORD2(xmmword_140FC5B10) & 0x800) != 0 )
  {
    v49 = 1;
    _InterlockedIncrement16((volatile signed __int16 *)(v7 + 868));
  }
  v50 = 0LL;
  v51 = v119 & 0xFFFFFFFFFFFFFFFEuLL;
  v52 = 0;
  v118 = v119 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v119 & 1) != 0 )
  {
    if ( (v119 & 1) == 1 )
    {
      v50 = (unsigned __int64 *)(*(_QWORD *)(v51 + 36440) + 8LL);
      v52 = **(unsigned __int8 **)(v51 + 36440);
    }
    if ( !v52 )
      goto LABEL_214;
  }
  else
  {
    v50 = &v118;
    v52 = 1;
  }
  do
    _InterlockedAnd64((volatile signed __int64 *)(v50[--v52] + 48), 0LL);
  while ( v52 );
LABEL_214:
  result = 0LL;
  *(_QWORD *)&v119 = 0LL;
  *(_QWORD *)(v7 + 64) = 0LL;
  if ( v49 )
  {
    result = EtwTraceReadyQueueInsertion(v7, *(unsigned int *)(v44 + 36), v104, v48);
    _InterlockedDecrement16((volatile signed __int16 *)(v7 + 868));
  }
LABEL_216:
  if ( !v99 )
  {
    if ( !v97 )
      return result;
    goto LABEL_220;
  }
  result = EtwTraceThreadAffinity(
             v7,
             *(_WORD *)(v7 + 584),
             (*(_DWORD *)(v7 + 116) & 8) != 0,
             0,
             *(unsigned __int16 **)(v7 + 576),
             1334);
  if ( v97 )
  {
LABEL_220:
    if ( (xmmword_140FC5B10 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(v7, 1350LL, v105, v40);
  }
  _InterlockedDecrement16((volatile signed __int16 *)(v7 + 868));
  return result;
}
