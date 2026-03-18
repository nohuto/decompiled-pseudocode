/*
 * XREFs of PpmIdleSelectStates @ 0x1404B1F28
 * Callers:
 *     PoIdle @ 0x14044B7A0 (PoIdle.c)
 * Callees:
 *     PpmUnlockProcessors @ 0x140205028 (PpmUnlockProcessors.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x14026728C (PoCopyDeepIdleMask.c)
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1403ADE18 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmComputeIdleDurationHint @ 0x1404B2830 (PpmComputeIdleDurationHint.c)
 *     PpmEstimateIdleDuration @ 0x1404B28E4 (PpmEstimateIdleDuration.c)
 *     PpmIdleEvaluateConstraints @ 0x1404B2B2C (PpmIdleEvaluateConstraints.c)
 *     PpmIdleSetSynchronizationState @ 0x1404CFF74 (PpmIdleSetSynchronizationState.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1405C97E8 (PpmCheckPreConditionsForDeepSleep.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405C9D2C (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleCheckProcessorStateEligibility @ 0x1405C9FB4 (PpmIdleCheckProcessorStateEligibility.c)
 *     PpmIdleRecheckSecondaryProcessors @ 0x1405CA464 (PpmIdleRecheckSecondaryProcessors.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1405CA504 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleUpdateIdleReevaluationDuration @ 0x1405CA6F4 (PpmIdleUpdateIdleReevaluationDuration.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x1405CA798 (PpmIdleUpdateSelectionStatistics.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 *__fastcall PpmIdleSelectStates(
        __int64 a1,
        char a2,
        _QWORD *a3,
        __int64 *a4,
        int *a5,
        unsigned int *a6,
        int *a7,
        __int64 *a8,
        bool *a9)
{
  char *v12; // rsi
  int v13; // r12d
  char v14; // r13
  char v15; // al
  bool v16; // zf
  __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // r14
  int v22; // eax
  __int64 v23; // rax
  char *v24; // r8
  int i; // edx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r14
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v34; // r10
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rbx
  _DWORD *v38; // rcx
  int v39; // eax
  _DWORD *v40; // r13
  int v41; // r15d
  __int64 v42; // rdx
  _DWORD *v43; // rdi
  __int64 v44; // r14
  int v45; // r10d
  int v46; // ecx
  __int16 v47; // ax
  __int64 *result; // rax
  int v49; // eax
  bool v50; // di
  __int64 v51; // r8
  unsigned int v52; // ebx
  int v53; // r13d
  int v54; // ecx
  __int64 v55; // rbx
  __int64 v56; // r9
  int v57; // r10d
  bool v58; // al
  char v59; // [rsp+50h] [rbp-B0h]
  unsigned int v60; // [rsp+54h] [rbp-ACh] BYREF
  char v61; // [rsp+59h] [rbp-A7h]
  char v62; // [rsp+5Ah] [rbp-A6h]
  int v63; // [rsp+5Ch] [rbp-A4h]
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch]
  __int64 v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h]
  _DWORD *v72; // [rsp+90h] [rbp-70h]
  _DWORD *v73; // [rsp+98h] [rbp-68h]
  int v74; // [rsp+A0h] [rbp-60h]
  __int64 *v75; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  int v78; // [rsp+C0h] [rbp-40h]
  __int64 v79; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v80; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v81; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+E8h] [rbp-18h]
  bool *v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  unsigned int *v86; // [rsp+100h] [rbp+0h]
  int *v87; // [rsp+108h] [rbp+8h]
  int *v88; // [rsp+110h] [rbp+10h]
  __int64 *v89; // [rsp+118h] [rbp+18h]
  _DWORD *v90; // [rsp+120h] [rbp+20h] BYREF
  int v91; // [rsp+128h] [rbp+28h]
  int v92; // [rsp+12Ch] [rbp+2Ch]
  struct _KAFFINITY_EX v93; // [rsp+130h] [rbp+30h] BYREF

  v88 = a5;
  v86 = a6;
  v87 = a7;
  v89 = a8;
  v66 = a1;
  v84 = a9;
  v75 = a4;
  memset_0(&v93, 0, sizeof(v93));
  v12 = *(char **)(a1 + 34880);
  v13 = 0;
  v90 = *(_DWORD **)(a1 + 34888);
  v14 = 1;
  v83 = *((_QWORD *)v12 + 83);
  v67 = PpmPlatformStates;
  v15 = *v12;
  v16 = *v12 == 0;
  v82 = 0LL;
  v60 = 0;
  v72 = 0LL;
  v61 = v16;
  v65 = 0;
  v73 = 0LL;
  v69 = 0;
  v63 = 0;
  v64 = 0;
  v77 = 0LL;
  v79 = 0LL;
  v76 = 0LL;
  v80 = 0LL;
  v70 = 0;
  v59 = 0;
  v62 = v15;
  *a3 = PpmIdleEvaluateConstraints(a1, v75);
  *((_DWORD *)v12 + 85) = 0;
  *((_DWORD *)v12 + 84) = 2097153;
  memset_0(v12 + 344, 0, 0x100uLL);
  LOBYTE(v17) = a2;
  PpmComputeIdleDurationHint(a1, v18, *v75, v17);
  if ( !a2 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(a1 + 33) )
  {
    v71 = -1LL;
    v81 = -1LL;
  }
  else
  {
    v71 = PpmPerfQosIdleExpirationTimeout;
    v81 = PpmPerfQosIdleExpirationTimeout;
  }
  v19 = -1;
  if ( *((_QWORD *)v12 + 77) )
    v19 = guard_dispatch_icall_no_overrides(v83, v12 + 672);
  v20 = 0;
  if ( !*(_BYTE *)(a1 + 34953) )
    v20 = v19;
  v78 = v20;
  if ( !v67 )
    goto LABEL_62;
  *((_DWORD *)v12 + 181) = 0;
  *((_DWORD *)v12 + 180) = 2097153;
  memset_0(v12 + 728, 0, 0x100uLL);
  PoCopyDeepIdleMask((unsigned __int16 *)v12 + 360);
  KeAddProcessorAffinityEx((unsigned __int16 *)v12 + 360, *(_DWORD *)(a1 + 36));
  v21 = (_DWORD *)*((_QWORD *)v12 + 124);
  v72 = v21;
  v22 = *(_DWORD *)v67;
  v85 = *(_QWORD *)(v67 + 48);
  memset_0(v21, 0, 4 * v22 + 8);
  v23 = 0LL;
  v24 = v12 + 1032;
  for ( i = 0; ; v65 = i )
  {
    v74 = v23;
    if ( (unsigned int)v23 >= *((_DWORD *)v12 + 254) )
    {
      *((_DWORD *)v24 + 1) = 0;
      *v21 = -1;
      PpmUnlockProcessors((__int64)(v12 + 336), (unsigned __int16 *)v12 + 168);
LABEL_62:
      v49 = *((_DWORD *)v12 + 10);
      v13 = 0;
      v73 = (_DWORD *)*((_QWORD *)v12 + 123);
      v50 = 1;
      memset_0(v73, 0, 4 * v49 + 8);
      v44 = 0LL;
      v68 = *((_QWORD *)v12 + 6);
      while ( 1 )
      {
        if ( (unsigned int)v44 >= *((_DWORD *)v12 + 250) )
        {
          v37 = v68;
          v41 = -1;
          v40 = v72;
          v43 = v73;
          LODWORD(v44) = v69;
          goto LABEL_50;
        }
        v52 = *(_DWORD *)(*((_QWORD *)v12 + 126) + 24 * v44 + 4);
        v60 = v52;
        if ( v67 )
        {
          v53 = v66;
        }
        else
        {
          v53 = v66;
          if ( v52 == *((_DWORD *)v12 + 10) - 1 && v12[716] && (unsigned __int8)PpmCheckPreConditionsForDeepSleep(v66) )
          {
            if ( !v13 )
              v50 = 1;
            v13 = 1;
            goto LABEL_75;
          }
        }
        if ( v13 )
          v50 = 1;
        v13 = 0;
LABEL_75:
        if ( v50 )
        {
          v50 = 0;
          PpmEstimateIdleDuration(v53, v13, 0, *v75, v71, (__int64)&v79, (__int64)&v80, (__int64)&v70, (__int64)&v64);
          v54 = v79;
          v63 = v64;
          v76 = v80;
          v77 = v79;
        }
        else
        {
          v54 = v77;
        }
        if ( v52 )
        {
          v55 = PpmIdleCheckProcessorStateEligibility(v53, v78, 0, v54, v52, v61);
          if ( !v55 && *((_QWORD *)v12 + 78) )
            v55 = (unsigned int)guard_dispatch_icall_no_overrides(v83, v60);
        }
        else
        {
          v55 = 0LL;
        }
        PpmIdleUpdateSelectionStatistics(v55, &v90[254 * v60 + 20], v51, v60);
        if ( !v55 )
        {
          v43 = v73;
          *v73 = v57;
          v58 = !v12[344 * v56 + 1394] || v67 && !v12[344 * v56 + 1393];
          v41 = -1;
          v37 = v68;
          v40 = v72;
          *v84 = v58;
          goto LABEL_50;
        }
        if ( v62 && (v55 == 2147483651LL || v55 == 2147483656LL) )
        {
          v50 = (unsigned __int8)PpmIdleUpdateIdleReevaluationDuration(v53, v55, v63, v76, (__int64)&v81) != 0;
          v71 = v81;
        }
        v73[v44 + 2] = v55;
        v44 = (unsigned int)(v44 + 1);
      }
    }
    if ( !PpmIdleVetoBias )
      break;
LABEL_42:
    LODWORD(v33) = -2;
    v38 = &v21[i];
LABEL_43:
    v39 = v74;
    v38[2] = v33;
    v23 = (unsigned int)(v39 + 1);
    ++i;
  }
  v26 = 3 * v23;
  v27 = *((_QWORD *)v12 + 128);
  if ( !*(_BYTE *)(v27 + 8 * v26 + 1) )
  {
    v21 = v72;
    goto LABEL_42;
  }
  v28 = *(unsigned int *)(v27 + 8 * v26 + 4);
  v29 = v66;
  if ( PpmDripsStateIndex == -1
    || (unsigned int)v28 < PpmDripsStateIndex
    || !(unsigned __int8)PpmCheckPreConditionsForDeepSleep(v66) )
  {
    if ( v13 )
      v14 = 1;
    v13 = 0;
  }
  else
  {
    if ( !v13 )
      v14 = 1;
    v13 = (dword_140E27ADC != 0) + 1;
  }
  if ( v14 )
  {
    v14 = 0;
    LOBYTE(v24) = v13 != 0;
    PpmEstimateIdleDuration(
      v29,
      v13,
      (_DWORD)v24,
      *v75,
      v71,
      (__int64)&v79,
      (__int64)&v80,
      (__int64)&v70,
      (__int64)&v64);
    v77 = v79;
    v63 = v64;
    v76 = v80;
  }
  *((_DWORD *)v12 + 259) = 0;
  v60 = -1;
  v30 = PpmIdleCheckCoordinatedStateEligibility(
          v29,
          v78,
          0,
          v77,
          *v75,
          v28,
          v28,
          (__int64)&v60,
          (__int64)(v12 + 1032),
          0LL);
  v33 = v30;
  if ( !*(_BYTE *)(v67 + 8) && !v30 && *(_QWORD *)(v67 + 16) )
    v33 = (unsigned int)guard_dispatch_icall_no_overrides(v83, v60);
  PpmIdleUpdateSelectionStatistics(v33, (v28 << 10) + v85 + 88, v31, v32);
  v35 = 448 * v28;
  if ( v33 )
  {
    v68 = v33;
    if ( v33 == 2147483651LL || (v68 = v33, v33 == 2147483656LL) )
    {
      if ( (unsigned __int8)PpmIdleUpdateIdleReevaluationDuration(v66, v33, v63, v76, (__int64)&v81) )
        v14 = 1;
      v71 = v81;
    }
    goto LABEL_40;
  }
  v36 = (unsigned __int8)v12[65];
  v37 = *(_QWORD *)(v35 + v34 + 64);
  if ( !(_BYTE)v36 || v59 )
    goto LABEL_45;
  KeStallExecutionProcessor(10 * v36);
  v59 = 1;
  if ( !(unsigned __int8)PpmIdleRecheckSecondaryProcessors(v35 + v67 + 128) )
  {
    LODWORD(v33) = -1;
LABEL_40:
    PpmIdleRollbackCoordinatedSelection(v12 + 1032, 0LL);
    i = v65;
    v21 = v72;
    v38 = &v72[v65];
    goto LABEL_43;
  }
  v34 = v67;
LABEL_45:
  v40 = v72;
  v41 = -1;
  *v84 = 1;
  *v40 = v28;
  v16 = *(_BYTE *)(v35 + v34 + 121) == 0;
  *(_DWORD *)&v93.Count = 2097153;
  if ( !v16 )
    v41 = v28;
  v93.Reserved = 0;
  memset_0(&v93.8, 0, sizeof(v93.8));
  if ( (unsigned int)KiSubtractAffinityEx(
                       (struct _KAFFINITY_EX *)(v12 + 336),
                       (struct _KAFFINITY_EX *)(v35 + v67 + 128),
                       &v93,
                       v93.Size) )
    PpmUnlockProcessors((__int64)(v12 + 336), &v93.Count);
  v43 = v73;
  LODWORD(v44) = (_DWORD)v73;
LABEL_50:
  v45 = 1;
  if ( *v84 )
  {
    LOBYTE(v42) = 1;
    PpmIdleSetSynchronizationState(v66 + 34956, v42);
  }
  if ( v40 )
  {
    v46 = v65;
    v40[1] = v65;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
    {
      v92 = 0;
      v91 = 4 * v46 + 8;
      v90 = v40;
      EtwTraceKernelEvent((int)&v90, v45, 0x40200000u, 4670, 1538);
    }
  }
  if ( v43 )
  {
    v43[1] = v44;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
    {
      v92 = 0;
      v91 = 4 * v44 + 8;
      v90 = v43;
      EtwTraceKernelEvent((int)&v90, 1, 0x40200000u, 4669, 1538);
    }
  }
  v47 = v63;
  if ( v59 )
    v47 = v63 | 2;
  *((_WORD *)v12 + 28) |= v47;
  v12[7] = v82;
  v12[6] = BYTE1(v82);
  *((_QWORD *)v12 + 1) = v71;
  *((_QWORD *)v12 + 87) = v76;
  *((_QWORD *)v12 + 86) = v77;
  v12[717] = v70;
  *v86 = v60;
  *v87 = v41;
  *v88 = v13;
  result = v89;
  *v89 = v37;
  return result;
}
