/*
 * XREFs of PpmIdleSelectStates @ 0x1404EA518
 * Callers:
 *     PoIdle @ 0x140449020 (PoIdle.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x140205068 (PoCopyDeepIdleMask.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354CF8 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmUnlockProcessors @ 0x1403B66C4 (PpmUnlockProcessors.c)
 *     PpmComputeIdleDurationHint @ 0x1404C0B50 (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x1404C0C0C (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x1404C1970 (PpmIdleEvaluateConstraints.c)
 *     PpmIdleSetSynchronizationState @ 0x1404D0080 (PpmIdleSetSynchronizationState.c)
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x1405CDA50 (Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1405CDE98 (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405CE3DC (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x1405CE664 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x1405CEB14 (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1405CEBB4 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleUpdateIdleReevaluationDuration @ 0x1405CEDA4 (PpmIdleUpdateIdleReevaluationDuration.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x1405CEE48 (PpmIdleUpdateSelectionStatistics.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 *__fastcall PpmIdleSelectStates(
        __int64 a1,
        char a2,
        unsigned __int64 *a3,
        __int64 *a4,
        int *a5,
        unsigned int *a6,
        int *a7,
        __int64 *a8,
        char *a9)
{
  char *v13; // rdi
  char v14; // r12
  char v15; // al
  bool v16; // zf
  unsigned __int64 v17; // rax
  unsigned __int16 *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rbx
  __int64 v39; // r10
  __int64 v40; // rsi
  __int64 v41; // r15
  int v42; // eax
  char *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rax
  int v46; // r15d
  _DWORD *v47; // rax
  _DWORD *v48; // rsi
  int v49; // r12d
  __int64 v50; // r14
  __int64 v51; // rbx
  int v52; // eax
  bool v53; // si
  __int64 v54; // rdx
  int v55; // r10d
  unsigned int v56; // ebx
  int v57; // ecx
  __int64 v58; // rbx
  __int64 v59; // r9
  __int64 v60; // r9
  int v61; // r10d
  char updated; // al
  _DWORD *v63; // rax
  char v64; // al
  char *v65; // rcx
  int v66; // edx
  __int16 v67; // ax
  __int64 *result; // rax
  char v69; // [rsp+50h] [rbp-B0h]
  unsigned int v70; // [rsp+54h] [rbp-ACh] BYREF
  char v71; // [rsp+59h] [rbp-A7h]
  char v72; // [rsp+5Ah] [rbp-A6h]
  int v73; // [rsp+5Ch] [rbp-A4h]
  int v74; // [rsp+60h] [rbp-A0h]
  unsigned int v75; // [rsp+64h] [rbp-9Ch]
  int v76; // [rsp+68h] [rbp-98h]
  __int64 v77; // [rsp+70h] [rbp-90h]
  int v78; // [rsp+78h] [rbp-88h] BYREF
  int v79; // [rsp+7Ch] [rbp-84h]
  __int64 v80; // [rsp+80h] [rbp-80h]
  int v81; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v82; // [rsp+90h] [rbp-70h]
  char *v83; // [rsp+98h] [rbp-68h]
  unsigned __int64 v84; // [rsp+A0h] [rbp-60h]
  int v85; // [rsp+A8h] [rbp-58h]
  int v86; // [rsp+ACh] [rbp-54h]
  unsigned __int64 *v87; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v89; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v91; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v93; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E8h] [rbp-18h]
  char *v95; // [rsp+F0h] [rbp-10h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  unsigned int *v97; // [rsp+100h] [rbp+0h]
  int *v98; // [rsp+108h] [rbp+8h]
  int *v99; // [rsp+110h] [rbp+10h]
  __int64 *v100; // [rsp+118h] [rbp+18h]
  _DWORD *v101; // [rsp+120h] [rbp+20h] BYREF
  int v102; // [rsp+128h] [rbp+28h]
  int v103; // [rsp+12Ch] [rbp+2Ch]
  struct _KAFFINITY_EX v104; // [rsp+130h] [rbp+30h] BYREF

  v99 = a5;
  v97 = a6;
  v98 = a7;
  v100 = a8;
  v95 = a9;
  v87 = (unsigned __int64 *)a4;
  memset_0(&v104, 0, sizeof(v104));
  v13 = *(char **)(a1 + 34880);
  v101 = *(_DWORD **)(a1 + 34888);
  v73 = 0;
  v14 = 1;
  v94 = *((_QWORD *)v13 + 83);
  v80 = PpmPlatformStates;
  v15 = *v13;
  v16 = *v13 == 0;
  v93 = 0LL;
  v70 = 0;
  v83 = 0LL;
  v71 = v16;
  v76 = 0;
  v82 = 0LL;
  v79 = 0;
  v74 = 0;
  v78 = 0;
  v89 = 0LL;
  v90 = 0LL;
  v88 = 0LL;
  v91 = 0LL;
  v81 = 0;
  v69 = 0;
  v75 = 0;
  v72 = v15;
  v17 = PpmIdleEvaluateConstraints(a1, a4);
  v18 = (unsigned __int16 *)(v13 + 336);
  *a3 = v17;
  *((_DWORD *)v13 + 85) = 0;
  *((_DWORD *)v13 + 84) = 2097153;
  memset_0(v13 + 344, 0, 0x100uLL);
  if ( (unsigned int)Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline(v20, v19) )
  {
    v22 = *v87 / (unsigned int)KeMaximumIncrement;
    v21 = *v87 % (unsigned int)KeMaximumIncrement;
    if ( (_DWORD)v22 == *(_DWORD *)(a1 + 14528) )
      v23 = KeMaximumIncrement * (v22 + 1) - *v87;
    else
      v23 = 0;
    v75 = v23;
  }
  else
  {
    v23 = 0;
  }
  PpmComputeIdleDurationHint(a1, v21, *v87, a2, v23);
  if ( !a2 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(a1 + 33) )
  {
    v84 = -1LL;
    v92 = -1LL;
  }
  else
  {
    v84 = PpmPerfQosIdleExpirationTimeout;
    v92 = PpmPerfQosIdleExpirationTimeout;
  }
  v26 = -1;
  if ( *((_QWORD *)v13 + 77) )
    v26 = guard_dispatch_icall_no_overrides(v94, v13 + 672, v24, v25);
  v27 = 0;
  if ( !*(_BYTE *)(a1 + 34953) )
    v27 = v26;
  v86 = v27;
  if ( v80 )
  {
    *((_DWORD *)v13 + 181) = 0;
    *((_DWORD *)v13 + 180) = 2097153;
    memset_0(v13 + 728, 0, 0x100uLL);
    PoCopyDeepIdleMask((unsigned __int16 *)v13 + 360);
    KeAddProcessorAffinityEx((unsigned __int16 *)v13 + 360, *(_DWORD *)(a1 + 36));
    v28 = (__int64)(v13 + 1032);
    v29 = *(_DWORD *)v80;
    v96 = *(_QWORD *)(v80 + 48);
    v83 = (char *)*((_QWORD *)v13 + 124);
    memset_0(v83, 0, 4 * v29 + 8);
    v30 = 0LL;
    v85 = 0;
    if ( *((_DWORD *)v13 + 254) )
    {
      v31 = 0LL;
      while ( 1 )
      {
        if ( PpmIdleVetoBias || (v32 = 3 * v30, v33 = *((_QWORD *)v13 + 128), !*(_BYTE *)(v33 + 8 * v32 + 1)) )
        {
          LODWORD(v38) = -2;
          v43 = &v83[4 * (unsigned int)v31];
        }
        else
        {
          v34 = *(unsigned int *)(v33 + 8 * v32 + 4);
          if ( PpmDripsStateIndex == -1
            || (unsigned int)v34 < PpmDripsStateIndex
            || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(a1, v31) )
          {
            if ( v73 )
              v14 = 1;
            v35 = 0;
          }
          else
          {
            if ( !v73 )
              v14 = 1;
            v35 = (dword_140E27D1C != 0) + 1;
          }
          v73 = v35;
          if ( v14 )
          {
            v14 = 0;
            PpmEstimateIdleDuration(a1, v35, v35 != 0, *v87, v84, &v90, &v91, (__int64)&v81, &v78, v75);
            v89 = v90;
            v74 = v78;
            v88 = v91;
          }
          *(_DWORD *)(v28 + 4) = 0;
          v70 = -1;
          v36 = PpmIdleCheckCoordinatedStateEligibility(a1, v86, 0, v89, *v87, v34, v34, (__int64)&v70, v28, 0LL);
          v38 = v36;
          if ( !*(_BYTE *)(v80 + 8) && !v36 && *(_QWORD *)(v80 + 16) )
            v38 = (unsigned int)guard_dispatch_icall_no_overrides(v94, v70, (unsigned int)v34, v37);
          PpmIdleUpdateSelectionStatistics(v38, (v34 << 10) + v96 + 88);
          v40 = 448 * v34;
          if ( v38 == 0xFFFFFFFFLL || (v41 = *(_QWORD *)(v40 + v39 + 64), v38) )
          {
            v77 = v38;
            if ( v38 == 2147483651LL || (v77 = v38, v38 == 2147483656LL) )
            {
              if ( (unsigned __int8)PpmIdleUpdateIdleReevaluationDuration(a1, v38, v74, v88, (__int64)&v92) )
                v14 = 1;
              v84 = v92;
            }
          }
          else
          {
            v42 = (unsigned __int8)v13[65];
            v77 = *(_QWORD *)(v40 + v39 + 64);
            if ( !(_BYTE)v42 )
              goto LABEL_53;
            v77 = v41;
            if ( v69 )
              goto LABEL_53;
            KeStallExecutionProcessor(10 * v42);
            v69 = 1;
            v77 = v41;
            if ( (unsigned __int8)PpmIdleRecheckSecondaryProcessors(v40 + v80 + 128) )
            {
              v39 = v80;
LABEL_53:
              v47 = v83;
              v46 = -1;
              *v95 = 1;
              *v47 = v34;
              v16 = *(_BYTE *)(v40 + v39 + 121) == 0;
              *(_DWORD *)&v104.Count = 2097153;
              if ( !v16 )
                v46 = v34;
              v104.Reserved = 0;
              memset_0(&v104.8, 0, sizeof(v104.8));
              if ( (unsigned int)KiSubtractAffinityEx(
                                   (struct _KAFFINITY_EX *)(v13 + 336),
                                   (struct _KAFFINITY_EX *)(v40 + v80 + 128),
                                   &v104,
                                   v104.Size) )
                PpmUnlockProcessors((__int64)(v13 + 336), &v104.Count);
              v48 = v82;
              v49 = v73;
              LODWORD(v50) = (_DWORD)v82;
              v51 = v77;
LABEL_94:
              v55 = 1;
              goto LABEL_95;
            }
            LODWORD(v38) = -1;
          }
          v28 = (__int64)(v13 + 1032);
          PpmIdleRollbackCoordinatedSelection(v13 + 1032, 0LL);
          LODWORD(v31) = v76;
          v43 = &v83[4 * v76];
        }
        v44 = v85;
        v31 = (unsigned int)(v31 + 1);
        *((_DWORD *)v43 + 2) = v38;
        v30 = (unsigned int)(v44 + 1);
        v76 = v31;
        v85 = v30;
        if ( (unsigned int)v30 >= *((_DWORD *)v13 + 254) )
        {
          v76 = v31;
          v18 = (unsigned __int16 *)(v13 + 336);
          break;
        }
      }
    }
    v45 = v83;
    v46 = -1;
    *(_DWORD *)(v28 + 4) = 0;
    *v45 = -1;
    PpmUnlockProcessors((__int64)v18, v18);
  }
  else
  {
    v46 = -1;
  }
  v52 = *((_DWORD *)v13 + 10);
  v49 = 0;
  v82 = (_DWORD *)*((_QWORD *)v13 + 123);
  v53 = 1;
  memset_0(v82, 0, 4 * v52 + 8);
  v51 = *((_QWORD *)v13 + 6);
  v50 = 0LL;
  v77 = v51;
  if ( !*((_DWORD *)v13 + 250) )
  {
    v48 = v82;
    LODWORD(v50) = 0;
    goto LABEL_94;
  }
  LOBYTE(v55) = 1;
  while ( 1 )
  {
    v56 = *(_DWORD *)(*((_QWORD *)v13 + 126) + 24 * v50 + 4);
    v70 = v56;
    if ( !v80
      && v56 == *((_DWORD *)v13 + 10) - 1
      && v13[716]
      && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(a1, v54) )
    {
      v16 = v49 == 0;
      v49 = v55;
      if ( v16 )
        v53 = v55;
    }
    else
    {
      if ( v49 )
        v53 = v55;
      v49 = 0;
    }
    if ( v53 )
    {
      v53 = 0;
      PpmEstimateIdleDuration(a1, v49, 0, *v87, v84, &v90, &v91, (__int64)&v81, &v78, v75);
      v57 = v90;
      v74 = v78;
      v88 = v91;
      v89 = v90;
    }
    else
    {
      v57 = v89;
    }
    if ( v56 )
    {
      v58 = PpmIdleCheckProcessorStateEligibility(a1, v86, 0, v57, v56, v71);
      if ( !v58 && *((_QWORD *)v13 + 78) )
        v58 = (unsigned int)guard_dispatch_icall_no_overrides(v94, v70, 0xFFFFFFFFLL, v59);
    }
    else
    {
      v58 = 0LL;
    }
    PpmIdleUpdateSelectionStatistics(v58, &v101[254 * v70 + 20]);
    if ( !v58 )
      break;
    if ( v72 && (v58 == 2147483651LL || v58 == 2147483656LL) )
    {
      updated = PpmIdleUpdateIdleReevaluationDuration(a1, v58, v74, v88, (__int64)&v92);
      v55 = 1;
      v53 = updated != 0;
      v84 = v92;
    }
    else
    {
      v55 = 1;
    }
    v63 = v82;
    v82[v50 + 2] = v58;
    v50 = (unsigned int)(v50 + 1);
    if ( (unsigned int)v50 >= *((_DWORD *)v13 + 250) )
    {
      v51 = v77;
      v46 = -1;
      LODWORD(v50) = v79;
      v48 = v63;
      goto LABEL_95;
    }
  }
  v48 = v82;
  *v82 = v61;
  if ( v13[344 * v60 + 1394] && (!v80 || v13[344 * v60 + 1393]) )
  {
    v64 = 0;
    v55 = 1;
  }
  else
  {
    v55 = 1;
    v64 = 1;
  }
  v46 = -1;
  v51 = v77;
  *v95 = v64;
LABEL_95:
  if ( *v95 )
    PpmIdleSetSynchronizationState((unsigned __int32 *)(a1 + 34956), 1u);
  v65 = v83;
  if ( v83 )
  {
    v66 = v76;
    *((_DWORD *)v83 + 1) = v76;
    if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x15u) )
    {
      v103 = 0;
      v101 = v65;
      v102 = 4 * v66 + 8;
      EtwTraceKernelEvent((int)&v101, v55, 0x40200000u, 4670, 1538);
    }
  }
  if ( v48 )
  {
    v48[1] = v50;
    if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x15u) )
    {
      v103 = 0;
      v102 = 4 * v50 + 8;
      v101 = v48;
      EtwTraceKernelEvent((int)&v101, 1, 0x40200000u, 4669, 1538);
    }
  }
  v67 = v74;
  if ( v69 )
    v67 = v74 | 2;
  *((_WORD *)v13 + 28) |= v67;
  v13[7] = v93;
  v13[6] = BYTE1(v93);
  *((_QWORD *)v13 + 1) = v84;
  *((_QWORD *)v13 + 87) = v88;
  *((_QWORD *)v13 + 86) = v89;
  v13[717] = v81;
  *v97 = v70;
  *v98 = v46;
  *v99 = v49;
  result = v100;
  *v100 = v51;
  return result;
}
