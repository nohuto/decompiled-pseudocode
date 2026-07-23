/*
 * XREFs of PpmIdleSelectStates @ 0x1404E1498
 * Callers:
 *     PoIdle @ 0x140441770 (PoIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     PpmUnlockProcessors @ 0x140371990 (PpmUnlockProcessors.c)
 *     PpmComputeIdleDurationHint @ 0x1404BC138 (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x1404BC1F4 (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x1404BCF60 (PpmIdleEvaluateConstraints.c)
 *     PpmIdleSetSynchronizationState @ 0x1404C9170 (PpmIdleSetSynchronizationState.c)
 *     Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline @ 0x1405CB1C0 (Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1405CB5B8 (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405CBAFC (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x1405CBD84 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x1405CC234 (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1405CC2D4 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleUpdateIdleReevaluationDuration @ 0x1405CC4C4 (PpmIdleUpdateIdleReevaluationDuration.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x1405CC568 (PpmIdleUpdateSelectionStatistics.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 *__fastcall PpmIdleSelectStates(
        __int64 a1,
        char a2,
        LARGE_INTEGER *a3,
        LARGE_INTEGER *a4,
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
  LARGE_INTEGER v17; // rax
  unsigned __int16 *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r10
  __int64 v37; // rsi
  __int64 v38; // r15
  int v39; // eax
  char *v40; // rcx
  int v41; // eax
  _DWORD *v42; // rax
  int v43; // r15d
  _DWORD *v44; // rax
  _DWORD *v45; // rsi
  int v46; // r12d
  __int64 v47; // r14
  __int64 v48; // rbx
  int v49; // eax
  bool v50; // si
  __int64 v51; // rdx
  int v52; // r10d
  unsigned int v53; // ebx
  int v54; // ecx
  __int64 v55; // rbx
  __int64 v56; // r9
  int v57; // r10d
  char updated; // al
  _DWORD *v59; // rax
  char v60; // al
  char *v61; // rcx
  int v62; // edx
  __int16 v63; // ax
  __int64 *result; // rax
  char v65; // [rsp+50h] [rbp-B0h]
  unsigned int v66; // [rsp+54h] [rbp-ACh] BYREF
  char v67; // [rsp+59h] [rbp-A7h]
  char v68; // [rsp+5Ah] [rbp-A6h]
  int v69; // [rsp+5Ch] [rbp-A4h]
  int v70; // [rsp+60h] [rbp-A0h]
  unsigned int v71; // [rsp+64h] [rbp-9Ch]
  int v72; // [rsp+68h] [rbp-98h]
  __int64 v73; // [rsp+70h] [rbp-90h]
  int v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+7Ch] [rbp-84h]
  __int64 v76; // [rsp+80h] [rbp-80h]
  int v77; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v78; // [rsp+90h] [rbp-70h]
  char *v79; // [rsp+98h] [rbp-68h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-60h]
  int v81; // [rsp+A8h] [rbp-58h]
  int v82; // [rsp+ACh] [rbp-54h]
  unsigned __int64 *p_QuadPart; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v84; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v85; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v86; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v87; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v89; // [rsp+E0h] [rbp-20h]
  __int64 v90; // [rsp+E8h] [rbp-18h]
  char *v91; // [rsp+F0h] [rbp-10h]
  __int64 v92; // [rsp+F8h] [rbp-8h]
  unsigned int *v93; // [rsp+100h] [rbp+0h]
  int *v94; // [rsp+108h] [rbp+8h]
  int *v95; // [rsp+110h] [rbp+10h]
  __int64 *v96; // [rsp+118h] [rbp+18h]
  _DWORD *v97; // [rsp+120h] [rbp+20h] BYREF
  int v98; // [rsp+128h] [rbp+28h]
  int v99; // [rsp+12Ch] [rbp+2Ch]
  struct _KAFFINITY_EX v100; // [rsp+130h] [rbp+30h] BYREF

  v95 = a5;
  v93 = a6;
  v94 = a7;
  v96 = a8;
  v91 = a9;
  p_QuadPart = (unsigned __int64 *)&a4->QuadPart;
  memset_0(&v100, 0, sizeof(v100));
  v13 = *(char **)(a1 + 34880);
  v97 = *(_DWORD **)(a1 + 34888);
  v69 = 0;
  v14 = 1;
  v90 = *((_QWORD *)v13 + 83);
  v76 = PpmPlatformStates;
  v15 = *v13;
  v16 = *v13 == 0;
  v89 = 0LL;
  v66 = 0;
  v79 = 0LL;
  v67 = v16;
  v72 = 0;
  v78 = 0LL;
  v75 = 0;
  v70 = 0;
  v74 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v84 = 0LL;
  v87 = 0LL;
  v77 = 0;
  v65 = 0;
  v71 = 0;
  v68 = v15;
  v17 = PpmIdleEvaluateConstraints(a1, a4);
  v18 = (unsigned __int16 *)(v13 + 336);
  *a3 = v17;
  *((_DWORD *)v13 + 85) = 0;
  *((_DWORD *)v13 + 84) = 2097153;
  memset_0(v13 + 344, 0, 0x100uLL);
  if ( (unsigned int)Feature_PpmDynamicHintAdjust__private_IsEnabledNoReportingNoInline(v20, v19) )
  {
    v22 = *p_QuadPart / KeMaximumIncrement;
    v21 = *p_QuadPart % KeMaximumIncrement;
    if ( (_DWORD)v22 == *(_DWORD *)(a1 + 14528) )
      v23 = KeMaximumIncrement * (v22 + 1) - *p_QuadPart;
    else
      v23 = 0;
    v71 = v23;
  }
  else
  {
    v23 = 0;
  }
  PpmComputeIdleDurationHint(a1, v21, *p_QuadPart, a2, v23);
  if ( !a2 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(a1 + 33) )
  {
    v80 = -1LL;
    v88 = -1LL;
  }
  else
  {
    v80 = PpmPerfQosIdleExpirationTimeout;
    v88 = PpmPerfQosIdleExpirationTimeout;
  }
  v24 = -1;
  if ( *((_QWORD *)v13 + 77) )
    v24 = guard_dispatch_icall_no_overrides(v90, v13 + 672);
  v25 = 0;
  if ( !*(_BYTE *)(a1 + 34953) )
    v25 = v24;
  v82 = v25;
  if ( v76 )
  {
    *((_DWORD *)v13 + 181) = 0;
    *((_DWORD *)v13 + 180) = 2097153;
    memset_0(v13 + 728, 0, 0x100uLL);
    PoCopyDeepIdleMask((unsigned __int16 *)v13 + 360);
    KeAddProcessorAffinityEx((unsigned __int16 *)v13 + 360, *(_DWORD *)(a1 + 36));
    v26 = (__int64)(v13 + 1032);
    v27 = *(_DWORD *)v76;
    v92 = *(_QWORD *)(v76 + 48);
    v79 = (char *)*((_QWORD *)v13 + 124);
    memset_0(v79, 0, 4 * v27 + 8);
    v28 = 0LL;
    v81 = 0;
    if ( *((_DWORD *)v13 + 254) )
    {
      v29 = 0LL;
      while ( 1 )
      {
        if ( PpmIdleVetoBias || (v30 = 3 * v28, v31 = *((_QWORD *)v13 + 128), !*(_BYTE *)(v31 + 8 * v30 + 1)) )
        {
          LODWORD(v35) = -2;
          v40 = &v79[4 * (unsigned int)v29];
        }
        else
        {
          v32 = *(unsigned int *)(v31 + 8 * v30 + 4);
          if ( PpmDripsStateIndex == -1
            || (unsigned int)v32 < PpmDripsStateIndex
            || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(a1, v29) )
          {
            if ( v69 )
              v14 = 1;
            v33 = 0;
          }
          else
          {
            if ( !v69 )
              v14 = 1;
            v33 = (dword_140E27E5C != 0) + 1;
          }
          v69 = v33;
          if ( v14 )
          {
            v14 = 0;
            PpmEstimateIdleDuration(a1, v33, v33 != 0, *p_QuadPart, v80, &v86, &v87, (__int64)&v77, &v74, v71);
            v85 = v86;
            v70 = v74;
            v84 = v87;
          }
          *(_DWORD *)(v26 + 4) = 0;
          v66 = -1;
          v34 = PpmIdleCheckCoordinatedStateEligibility(a1, v82, 0, v85, *p_QuadPart, v32, v32, (__int64)&v66, v26, 0LL);
          v35 = v34;
          if ( !*(_BYTE *)(v76 + 8) && !v34 && *(_QWORD *)(v76 + 16) )
            v35 = (unsigned int)guard_dispatch_icall_no_overrides(v90, v66);
          PpmIdleUpdateSelectionStatistics(v35, (v32 << 10) + v92 + 88);
          v37 = 448 * v32;
          if ( v35 == 0xFFFFFFFFLL || (v38 = *(_QWORD *)(v37 + v36 + 64), v35) )
          {
            v73 = v35;
            if ( v35 == 2147483651LL || (v73 = v35, v35 == 2147483656LL) )
            {
              if ( (unsigned __int8)PpmIdleUpdateIdleReevaluationDuration(a1, v35, v70, v84, (__int64)&v88) )
                v14 = 1;
              v80 = v88;
            }
          }
          else
          {
            v39 = (unsigned __int8)v13[65];
            v73 = *(_QWORD *)(v37 + v36 + 64);
            if ( !(_BYTE)v39 )
              goto LABEL_53;
            v73 = v38;
            if ( v65 )
              goto LABEL_53;
            KeStallExecutionProcessor(10 * v39);
            v65 = 1;
            v73 = v38;
            if ( (unsigned __int8)PpmIdleRecheckSecondaryProcessors(v37 + v76 + 128) )
            {
              v36 = v76;
LABEL_53:
              v44 = v79;
              v43 = -1;
              *v91 = 1;
              *v44 = v32;
              v16 = *(_BYTE *)(v37 + v36 + 121) == 0;
              *(_DWORD *)&v100.Count = 2097153;
              if ( !v16 )
                v43 = v32;
              v100.Reserved = 0;
              memset_0(&v100.8, 0, sizeof(v100.8));
              if ( (unsigned int)KiSubtractAffinityEx(
                                   (struct _KAFFINITY_EX *)(v13 + 336),
                                   (struct _KAFFINITY_EX *)(v37 + v76 + 128),
                                   &v100,
                                   v100.Size) )
                PpmUnlockProcessors((__int64)(v13 + 336), &v100.Count);
              v45 = v78;
              v46 = v69;
              LODWORD(v47) = (_DWORD)v78;
              v48 = v73;
LABEL_94:
              v52 = 1;
              goto LABEL_95;
            }
            LODWORD(v35) = -1;
          }
          v26 = (__int64)(v13 + 1032);
          PpmIdleRollbackCoordinatedSelection(v13 + 1032, 0LL);
          LODWORD(v29) = v72;
          v40 = &v79[4 * v72];
        }
        v41 = v81;
        v29 = (unsigned int)(v29 + 1);
        *((_DWORD *)v40 + 2) = v35;
        v28 = (unsigned int)(v41 + 1);
        v72 = v29;
        v81 = v28;
        if ( (unsigned int)v28 >= *((_DWORD *)v13 + 254) )
        {
          v72 = v29;
          v18 = (unsigned __int16 *)(v13 + 336);
          break;
        }
      }
    }
    v42 = v79;
    v43 = -1;
    *(_DWORD *)(v26 + 4) = 0;
    *v42 = -1;
    PpmUnlockProcessors((__int64)v18, v18);
  }
  else
  {
    v43 = -1;
  }
  v49 = *((_DWORD *)v13 + 10);
  v46 = 0;
  v78 = (_DWORD *)*((_QWORD *)v13 + 123);
  v50 = 1;
  memset_0(v78, 0, 4 * v49 + 8);
  v48 = *((_QWORD *)v13 + 6);
  v47 = 0LL;
  v73 = v48;
  if ( !*((_DWORD *)v13 + 250) )
  {
    v45 = v78;
    LODWORD(v47) = 0;
    goto LABEL_94;
  }
  LOBYTE(v52) = 1;
  while ( 1 )
  {
    v53 = *(_DWORD *)(*((_QWORD *)v13 + 126) + 24 * v47 + 4);
    v66 = v53;
    if ( !v76
      && v53 == *((_DWORD *)v13 + 10) - 1
      && v13[716]
      && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(a1, v51) )
    {
      v16 = v46 == 0;
      v46 = v52;
      if ( v16 )
        v50 = v52;
    }
    else
    {
      if ( v46 )
        v50 = v52;
      v46 = 0;
    }
    if ( v50 )
    {
      v50 = 0;
      PpmEstimateIdleDuration(a1, v46, 0, *p_QuadPart, v80, &v86, &v87, (__int64)&v77, &v74, v71);
      v54 = v86;
      v70 = v74;
      v84 = v87;
      v85 = v86;
    }
    else
    {
      v54 = v85;
    }
    if ( v53 )
    {
      v55 = PpmIdleCheckProcessorStateEligibility(a1, v82, 0, v54, v53, v67);
      if ( !v55 && *((_QWORD *)v13 + 78) )
        v55 = (unsigned int)guard_dispatch_icall_no_overrides(v90, v66);
    }
    else
    {
      v55 = 0LL;
    }
    PpmIdleUpdateSelectionStatistics(v55, &v97[254 * v66 + 20]);
    if ( !v55 )
      break;
    if ( v68 && (v55 == 2147483651LL || v55 == 2147483656LL) )
    {
      updated = PpmIdleUpdateIdleReevaluationDuration(a1, v55, v70, v84, (__int64)&v88);
      v52 = 1;
      v50 = updated != 0;
      v80 = v88;
    }
    else
    {
      v52 = 1;
    }
    v59 = v78;
    v78[v47 + 2] = v55;
    v47 = (unsigned int)(v47 + 1);
    if ( (unsigned int)v47 >= *((_DWORD *)v13 + 250) )
    {
      v48 = v73;
      v43 = -1;
      LODWORD(v47) = v75;
      v45 = v59;
      goto LABEL_95;
    }
  }
  v45 = v78;
  *v78 = v57;
  if ( v13[344 * v56 + 1394] && (!v76 || v13[344 * v56 + 1393]) )
  {
    v60 = 0;
    v52 = 1;
  }
  else
  {
    v52 = 1;
    v60 = 1;
  }
  v43 = -1;
  v48 = v73;
  *v91 = v60;
LABEL_95:
  if ( *v91 )
    PpmIdleSetSynchronizationState((unsigned __int32 *)(a1 + 34956), 1u);
  v61 = v79;
  if ( v79 )
  {
    v62 = v72;
    *((_DWORD *)v79 + 1) = v72;
    if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x15u) )
    {
      v99 = 0;
      v97 = v61;
      v98 = 4 * v62 + 8;
      EtwTraceKernelEvent((int)&v97, v52, 0x40200000u, 4670, 1538);
    }
  }
  if ( v45 )
  {
    v45[1] = v47;
    if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x15u) )
    {
      v99 = 0;
      v98 = 4 * v47 + 8;
      v97 = v45;
      EtwTraceKernelEvent((int)&v97, 1, 0x40200000u, 4669, 1538);
    }
  }
  v63 = v70;
  if ( v65 )
    v63 = v70 | 2;
  *((_WORD *)v13 + 28) |= v63;
  v13[7] = v89;
  v13[6] = BYTE1(v89);
  *((_QWORD *)v13 + 1) = v80;
  *((_QWORD *)v13 + 87) = v84;
  *((_QWORD *)v13 + 86) = v85;
  v13[717] = v77;
  *v93 = v66;
  *v94 = v43;
  *v95 = v46;
  result = v96;
  *v96 = v48;
  return result;
}
