/*
 * XREFs of PpmRegisterPerfStates @ 0x14074E1F4
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x14074DEE0 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407637F0 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140418A80 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmConvertTimeFrom @ 0x140437360 (PpmConvertTimeFrom.c)
 *     KeFirstGroupAffinityEx @ 0x14044FD10 (KeFirstGroupAffinityEx.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1404564F0 (KeQueryActiveProcessorAffinity2.c)
 *     PpmInstallFeedbackCounters @ 0x1404C362C (PpmInstallFeedbackCounters.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmCheckResetProcessors @ 0x1405D41E0 (PpmCheckResetProcessors.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmAllocatePerfCheck @ 0x140757260 (PpmAllocatePerfCheck.c)
 *     PpmUpdateProcessorPolicy @ 0x140A51F98 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x140A6B620 (PpmCheckReInit.c)
 *     PpmPerfResizeHistory @ 0x140A940A8 (PpmPerfResizeHistory.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC53D4 (PpmReinitializeHeteroEngine.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRegisterPerfStates(__int64 a1, char a2)
{
  int v4; // eax
  __int64 v5; // r13
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  char *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // r9d
  __int64 *v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // r8
  _DWORD *v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  unsigned int v24; // r14d
  unsigned int v25; // eax
  bool v26; // zf
  __int64 Pool2; // rax
  int v28; // r14d
  char *v29; // r15
  __int64 v30; // r8
  unsigned int v31; // ecx
  unsigned int v32; // r14d
  __int64 v33; // r15
  __int64 v34; // rbx
  __int64 v35; // r12
  unsigned int v36; // eax
  ULONG v37; // edx
  __int64 v38; // rcx
  unsigned int v39; // r14d
  unsigned int v40; // edx
  __int64 v41; // rax
  char v42; // al
  __int64 *v43; // r10
  __int64 v44; // r12
  int v45; // r11d
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // edx
  _DWORD *v50; // rax
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v54; // edx
  __int64 v55; // rcx
  _DWORD *v56; // rax
  char v57; // al
  unsigned int v58; // r15d
  int v59; // r12d
  char *v60; // rdx
  _DWORD *v61; // r14
  __int64 v62; // rbx
  __int64 v63; // r8
  __int64 *v64; // rdx
  __int64 *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rbx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  int v71; // eax
  _QWORD *v72; // rax
  char v73; // r8
  __int64 v74; // rdx
  char v75; // al
  __int64 v76; // rcx
  char v77; // dl
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  char v83; // bl
  __int64 v84; // rdx
  unsigned int v85; // r8d
  __int64 v86; // rcx
  __int64 v87; // rdx
  PVOID *v88; // rbx
  __int64 v89; // rsi
  void *v90; // rcx
  void *v91; // rcx
  void *v92; // rcx
  signed __int32 v94[8]; // [rsp+8h] [rbp-100h] BYREF
  int v95; // [rsp+28h] [rbp-E0h]
  unsigned int v96; // [rsp+2Ch] [rbp-DCh]
  ULONG v97; // [rsp+30h] [rbp-D8h]
  unsigned int v98; // [rsp+34h] [rbp-D4h]
  __int64 v99; // [rsp+38h] [rbp-D0h]
  __int64 v100; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v101; // [rsp+48h] [rbp-C0h]
  int v102; // [rsp+4Ch] [rbp-BCh]
  __int64 v103; // [rsp+50h] [rbp-B8h]
  char *v104; // [rsp+58h] [rbp-B0h]
  __int64 v105; // [rsp+60h] [rbp-A8h]
  _QWORD v106[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v107; // [rsp+80h] [rbp-88h]
  __int128 v108; // [rsp+88h] [rbp-80h] BYREF
  __int128 v109; // [rsp+98h] [rbp-70h] BYREF
  struct _KAFFINITY_EX v110; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v111; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v112[264]; // [rsp+1C0h] [rbp+B8h] BYREF

  memset_0(v112, 0, 0x100uLL);
  v108 = 0LL;
  memset_0(&v110.8, 0, sizeof(v110.8));
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 36);
  v104 = 0LL;
  LOBYTE(v95) = 0;
  v102 = v4;
  *(_OWORD *)&v106[1] = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v110.Count = 2097153LL;
  v109 = 0LL;
  memset_0(&v110.8, 0, sizeof(v110.8));
  v111 = 2097153LL;
  memset_0(v112, 0, 0x100uLL);
  KeQueryActiveProcessorAffinity2((__int64)&v111);
  v96 = 0;
  v11 = 0LL;
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v9, v10);
  v12 = -1;
  v100 = -1LL;
  v13 = 0;
  if ( v7 )
  {
    v14 = *(_QWORD *)(a1 + 560);
    do
    {
      v15 = *(unsigned int *)(v14 + 24LL * v13 + 12);
      if ( (unsigned int)v15 >= 2 )
        goto LABEL_28;
      if ( *((_DWORD *)&v100 + v15) == -1 )
        *((_DWORD *)&v100 + v15) = v13;
      ++v13;
    }
    while ( v13 < v7 );
    v12 = v100;
  }
  if ( v12 == -1 && HIDWORD(v100) == -1 )
  {
LABEL_28:
    v28 = -1073741811;
    goto LABEL_63;
  }
  v16 = 0;
  v17 = &v100;
  v18 = 2LL;
  do
  {
    v26 = *(_DWORD *)v17 == -1;
    v19 = v16 + 1;
    v17 = (__int64 *)((char *)v17 + 4);
    if ( v26 )
      v19 = v16;
    v16 = v19;
    --v18;
  }
  while ( v18 );
  LODWORD(v99) = v19;
  if ( (_DWORD)v5 )
  {
    v20 = v5;
    v21 = (_DWORD *)(*(_QWORD *)(a1 + 568) + 28LL);
    do
    {
      v22 = v6 + 1;
      if ( *v21 != 1 )
        v22 = v6;
      v21 += 8;
      v6 = v22;
      --v20;
    }
    while ( v20 );
    v16 = v99;
    v96 = v22;
  }
  v23 = (1192 * v5 + 1223) & 0xFFFFFFF8;
  v24 = v23 + 48 * v16 * v5;
  v25 = v24;
  v26 = v6 == 0;
  if ( v6 )
  {
    v25 = v24 + 784 * v6;
    v26 = v6 == 0;
  }
  if ( v26 )
    v24 = 0;
  Pool2 = ExAllocatePool2(0x40uLL, v25, 0x704D5050u);
  v104 = (char *)Pool2;
  v8 = (char *)Pool2;
  if ( !Pool2 )
  {
    v28 = -1073741670;
    goto LABEL_63;
  }
  v29 = (char *)(Pool2 + 1216);
  v30 = Pool2 + v24;
  v103 = v30;
  v31 = 0;
  v106[0] = Pool2 + v23;
  v101 = 0;
  if ( *(_BYTE *)(a1 + 11) )
    PpmPerfQosTransitionHysteresis = *(_DWORD *)(a1 + 48);
  v98 = 0;
  v32 = 0;
  if ( !(_DWORD)v5 )
  {
LABEL_55:
    if ( (unsigned int)KeIsEmptyAffinityEx(&v110.Count) )
    {
      v49 = 0;
      if ( (_DWORD)v5 )
      {
        v50 = v29 + 16;
        while ( *v50 != 1 )
        {
          ++v49;
          v50 += 298;
          if ( v49 >= (unsigned int)v5 )
            goto LABEL_65;
        }
        *((_QWORD *)v8 + 2) = *(_QWORD *)&v29[1192 * v49];
        *((_DWORD *)v8 + 76) = 1;
      }
LABEL_65:
      if ( v49 == (_DWORD)v5 )
        *((_DWORD *)v8 + 76) = 2;
    }
    else
    {
      KeFirstGroupAffinityEx((__int64)&v108, &v110.Count);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v108);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v8 + 2) = Prcb + 35248;
      v8[300] = *(_BYTE *)(Prcb + 35336);
    }
    *((_QWORD *)v8 + 3) = 2097153LL;
    memset_0(v8 + 32, 0, 0x100uLL);
    KiCopyAffinityEx((struct _KAFFINITY_EX *)(v8 + 24), *((_WORD *)v8 + 13), &v110);
    *((_QWORD *)v8 + 40) = *(_QWORD *)(a1 + 376);
    *((_QWORD *)v8 + 42) = *(_QWORD *)(a1 + 392);
    *((_QWORD *)v8 + 43) = *(_QWORD *)(a1 + 400);
    *((_QWORD *)v8 + 44) = *(_QWORD *)(a1 + 408);
    *((_QWORD *)v8 + 45) = *(_QWORD *)(a1 + 416);
    *((_QWORD *)v8 + 41) = *(_QWORD *)(a1 + 384);
    *((_QWORD *)v8 + 36) = *(_QWORD *)(a1 + 104);
    *((_QWORD *)v8 + 39) = v29;
    *((_DWORD *)v8 + 201) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v54 = v102;
    *((LARGE_INTEGER *)v8 + 150) = PerformanceCounter;
    *((_DWORD *)v8 + 112) = v54;
    *((_DWORD *)v8 + 74) = v5;
    v55 = 7LL;
    *((_DWORD *)v8 + 116) = *(_DWORD *)(a1 + 44);
    *((_DWORD *)v8 + 113) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v8 + 114) = *(_DWORD *)(a1 + 28);
    *((_DWORD *)v8 + 115) = *(_DWORD *)(a1 + 32);
    v8[496] = *(_BYTE *)(a1 + 15);
    v8[489] = *(_BYTE *)(a1 + 4);
    *((_QWORD *)v8 + 49) = *(_QWORD *)(a1 + 464);
    *((_QWORD *)v8 + 50) = *(_QWORD *)(a1 + 472);
    *((_QWORD *)v8 + 51) = *(_QWORD *)(a1 + 480);
    *((_QWORD *)v8 + 52) = *(_QWORD *)(a1 + 512);
    *((_QWORD *)v8 + 53) = *(_QWORD *)(a1 + 520);
    *((_QWORD *)v8 + 54) = *(_QWORD *)(a1 + 528);
    *((_QWORD *)v8 + 46) = *(_QWORD *)(a1 + 440);
    *((_QWORD *)v8 + 47) = *(_QWORD *)(a1 + 448);
    *((_QWORD *)v8 + 48) = *(_QWORD *)(a1 + 456);
    v8[521] = *(_BYTE *)(a1 + 52);
    v8[520] = *(_BYTE *)(a1 + 52) != 0;
    v8[523] = *(_BYTE *)(a1 + 9);
    v56 = v8 + 828;
    do
    {
      *(v56 - 1) = 100;
      *v56 = v54;
      v56 += 14;
      --v55;
    }
    while ( v55 );
    v8[490] = *(_BYTE *)(a1 + 6);
    v8[491] = *(_BYTE *)(a1 + 7);
    v8[492] = *(_BYTE *)(a1 + 8);
    if ( *(_WORD *)(a1 + 4) == 253 || (v57 = 1, *(_QWORD *)(a1 + 480)) )
      v57 = 0;
    v8[494] = v57;
    v8[493] = *(_BYTE *)(a1 + 11);
    if ( PpmPerfQosManageIdleProcessors == -1 )
      PpmPerfQosManageIdleProcessors = *(_BYTE *)(a1 + 12) != 0;
    *((_QWORD *)v8 + 59) = *(_QWORD *)(a1 + 56);
    *((_QWORD *)v8 + 60) = *(_QWORD *)(a1 + 64);
    v8[488] = 100;
    if ( PpmCheckMinimumPeriod <= (unsigned __int64)*(unsigned int *)(a1 + 40) )
      PpmCheckMinimumPeriod = *(unsigned int *)(a1 + 40);
    if ( *((_QWORD *)v8 + 43) )
      PpmAllowedActions |= 0x40u;
    if ( *((_QWORD *)v8 + 42) )
      PpmAllowedActions |= 0x20u;
    if ( *((_QWORD *)v8 + 41) )
      PpmAllowedActions |= 0x200u;
    if ( *((_QWORD *)v8 + 45) )
      PpmAllowedActions |= 0x80u;
    if ( *((_QWORD *)v8 + 44) )
      PpmAllowedActions |= 0x100u;
    if ( *(_BYTE *)(a1 + 9) )
      PpmPerfEppViaPerfControl = 1;
    if ( *(_BYTE *)(a1 + 10) )
      PpmPerfAutonomousActivityWindowViaPerfControl = 1;
    v8[495] = *(_BYTE *)(a1 + 13);
    *((_DWORD *)v8 + 125) = *(_DWORD *)(a1 + 72);
    *((_DWORD *)v8 + 126) = *(_DWORD *)(a1 + 76);
    *((_DWORD *)v8 + 127) = *(_DWORD *)(a1 + 80);
    *((_DWORD *)v8 + 128) = *(_DWORD *)(a1 + 84);
    *((_DWORD *)v8 + 129) = *(_DWORD *)(a1 + 88);
    _InterlockedOr(v94, 0);
    v58 = 0;
    if ( (_DWORD)v5 )
    {
      v59 = v99;
      v60 = v8 + 1216;
      v61 = v8 + 1232;
      do
      {
        if ( *v61 != 2 )
        {
          v62 = *((_QWORD *)v61 - 2);
          v63 = 2LL;
          *(_OWORD *)&v106[1] = 0LL;
          *(_DWORD *)(v62 + 64) = 0x10000;
          *(_QWORD *)(v62 + 8) = &v60[1192 * v58];
          v64 = &v100;
          *(_QWORD *)v62 = v8;
          v65 = &v106[1];
          v66 = v106[0] + 48LL * v59 * v58;
          do
          {
            if ( *(_DWORD *)v64 != -1 )
            {
              *v65 = v66;
              v66 += 48LL;
            }
            v64 = (__int64 *)((char *)v64 + 4);
            ++v65;
            --v63;
          }
          while ( v63 );
          if ( *v61 )
          {
            PpmPerfResizeHistory(v62);
            v67 = 2LL;
            v68 = v62 - (_QWORD)&v106[1];
            v69 = &v106[1];
            do
            {
              if ( *v69 )
                *(_QWORD *)((char *)v69 + v68 + 96) = *v69;
              ++v69;
              --v67;
            }
            while ( v67 );
          }
          else
          {
            PpmInstallFeedbackCounters(v62 - 35248, &v106[1], *(_BYTE *)(a1 + 14));
          }
          v60 = v8 + 1216;
        }
        ++v58;
        v61 += 298;
      }
      while ( v58 < (unsigned int)v5 );
      v6 = v96;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *(_QWORD *)(a1 + 96);
    v70 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v70 = *(_QWORD *)(a1 + 488);
      PpmPerfControlReadFeedback = v70;
    }
    if ( !PpmPerfControlAcquirePerformance )
      PpmPerfControlAcquirePerformance = *(_QWORD *)(a1 + 496);
    if ( !PpmPerfControlCommitPerformance )
      PpmPerfControlCommitPerformance = *(_QWORD *)(a1 + 504);
    if ( !PpmParkPreferenceHandler )
      PpmParkPreferenceHandler = *(_QWORD *)(a1 + 536);
    if ( !PpmParkMaskHandler )
      PpmParkMaskHandler = *(_QWORD *)(a1 + 544);
    if ( !PpmCheckCompleteHandler )
      PpmCheckCompleteHandler = *(_QWORD *)(a1 + 552);
    if ( !PpmPerfControlStartPolicyUpdate )
      PpmPerfControlStartPolicyUpdate = *(_QWORD *)(a1 + 424);
    if ( !PpmPerfControlCompletePolicyUpdate )
      PpmPerfControlCompletePolicyUpdate = *(_QWORD *)(a1 + 432);
    if ( v70 )
      PpmCheckPollForFeedback = 1;
    v71 = PpmPerfDomainCount + 1;
    *((_DWORD *)v8 + 110) = PpmPerfDomainCount + 1;
    PpmPerfDomainCount = v71;
    v72 = (_QWORD *)qword_140FC6BF0;
    if ( *(__int64 **)qword_140FC6BF0 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v8 = &PpmPerfDomainHead;
    v73 = 1;
    *((_QWORD *)v8 + 1) = v72;
    *v72 = v8;
    v74 = PpmPerfDomainHead;
    qword_140FC6BF0 = (__int64)v8;
    LOBYTE(v95) = 1;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      do
      {
        v75 = *(_BYTE *)(v74 + 493);
        v74 = *(_QWORD *)v74;
        v73 = v75 != 0 ? v73 : 0;
      }
      while ( (__int64 *)v74 != &PpmPerfDomainHead );
      LOBYTE(v95) = v73;
    }
    KiOrAffinityEx(&v110, &PpmPerfStatesRegistered, &PpmPerfStatesRegistered, PpmPerfStatesRegistered.Size);
    if ( (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered.Count, &PpmCheckRegistered.Count) )
    {
      v76 = PpmPerfDomainHead;
      v77 = 1;
      while ( (__int64 *)v76 != &PpmPerfDomainHead )
      {
        if ( !*(_BYTE *)(v76 + 495)
          || *(_QWORD *)(v76 + 480) != *((_QWORD *)v8 + 60)
          || *(_DWORD *)(v76 + 460) != *((_DWORD *)v8 + 115)
          || *(_DWORD *)(v76 + 452) != *((_DWORD *)v8 + 113)
          || *(_DWORD *)(v76 + 500) != *((_DWORD *)v8 + 125)
          || *(_DWORD *)(v76 + 504) != *((_DWORD *)v8 + 126)
          || *(_DWORD *)(v76 + 508) != *((_DWORD *)v8 + 127)
          || *(_DWORD *)(v76 + 512) != *((_DWORD *)v8 + 128)
          || *(_DWORD *)(v76 + 516) != *((_DWORD *)v8 + 129) )
        {
          v77 = 0;
          break;
        }
        v76 = *(_QWORD *)v76;
      }
      PpmPerfVmPerfSelectionSupported = v77;
    }
    *((_WORD *)v8 + 606) = 257;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, v8);
    PpmCheckResetProcessors((__int64)v8);
    if ( (unsigned int)KeCheckProcessorAffinityEx(&v110.Count, 0) )
      PpmParkApplyPolicy(v79, v78, v80, v81);
    PpmCheckReInit(v79, v78);
    v8 = 0LL;
    v104 = 0LL;
    v28 = 0;
    LOBYTE(v82) = 1;
    PpmPerfUpdateDomainPolicy(v82);
    v11 = v103;
    goto LABEL_152;
  }
  v33 = 0LL;
  v34 = Pool2 + 1236;
  while ( 1 )
  {
    v35 = *(_QWORD *)(a1 + 568);
    *(_DWORD *)(v34 - 4) = *(_DWORD *)(v33 + v35 + 28);
    v36 = *(_DWORD *)(v33 + v35);
    if ( !*(_DWORD *)(v33 + v35 + 28) )
      break;
    v37 = -1;
    *(_DWORD *)v34 = v36;
    v97 = -1;
    if ( *(_DWORD *)(v33 + v35 + 28) != 1 )
      goto LABEL_44;
    v101 = v31 + 1;
    v38 = v30 + 784LL * v31;
    v105 = v38;
    *(_WORD *)(v38 + 62) = 100;
    v28 = PpmAllocatePerfCheck(v38);
    if ( v28 < 0 )
      goto LABEL_62;
    *(_QWORD *)(v34 - 20) = v105;
LABEL_43:
    v32 = v98;
    v37 = v97;
LABEL_44:
    *(_QWORD *)(v34 + 1164) = 0LL;
    *(_DWORD *)(v34 + 28) = 100;
    *(_QWORD *)(v34 - 12) = *(_QWORD *)(v33 + v35 + 8);
    *(_DWORD *)(v34 + 4) = *(_DWORD *)(v33 + v35 + 16);
    *(_DWORD *)(v34 + 8) = *(_DWORD *)(v33 + v35 + 20);
    *(_DWORD *)(v34 + 12) = *(_DWORD *)(v33 + v35 + 24);
    *(_DWORD *)(v34 + 64) = v102;
    *(_DWORD *)(v34 + 36) = 100;
    *(_DWORD *)(v34 + 60) = 100;
    *(_DWORD *)(v34 + 68) = 1;
    *(_DWORD *)(v34 + 72) = 100;
    *(_DWORD *)(v34 + 76) = 100;
    *(_DWORD *)(v34 + 112) = 100;
    *(_DWORD *)(v34 + 116) = 100;
    *(_QWORD *)(v34 + 124) = 0LL;
    if ( *(_BYTE *)(a1 + 7) || (v42 = 1, !*(_BYTE *)(a1 + 11)) )
      v42 = 0;
    *(_BYTE *)(v34 + 121) = v42;
    if ( *(_DWORD *)(v33 + v35 + 16) < 0x64u )
    {
      *(_QWORD *)(v34 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v33 + v35 + 16), v37);
    }
    v43 = &v100;
    v44 = 2LL;
    v45 = v99 * v32;
    v46 = v106[0] + 48LL * (unsigned int)v99 * v32;
    do
    {
      v47 = *(unsigned int *)v43;
      if ( (_DWORD)v47 != -1 )
      {
        v48 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(v46 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 576) + 8LL * (unsigned int)(v45 + v47));
        *(_BYTE *)(v46 + 33) = *(_BYTE *)(v48 + 24 * v47 + 17);
        *(_BYTE *)(v46 + 32) = *(_BYTE *)(v48 + 24 * v47 + 16);
        *(_BYTE *)(v46 + 34) = *(_BYTE *)(v48 + 24 * v47 + 18);
        *(_DWORD *)(v46 + 36) = *(_DWORD *)(v48 + 24 * v47 + 8);
        *(_QWORD *)v46 = *(_QWORD *)(v48 + 24 * v47);
        v46 += 48LL;
      }
      v43 = (__int64 *)((char *)v43 + 4);
      --v44;
    }
    while ( v44 );
    v31 = v101;
    ++v32;
    v33 += 32LL;
    v30 = v103;
    v34 += 1192LL;
    v98 = v32;
    if ( v32 >= (unsigned int)v5 )
    {
      v6 = v96;
      v29 = v8 + 1216;
      goto LABEL_55;
    }
  }
  v97 = *(_DWORD *)(v33 + v35);
  v39 = v36;
  if ( v36 != -1 && !(unsigned int)KeCheckProcessorAffinityEx(&PpmPerfStatesRegistered.Count, v36) )
  {
    v107 = KeGetPrcb(v39);
    v105 = v107 + 35248;
    v28 = PpmAllocatePerfCheck(v107 + 35248);
    if ( v28 < 0 )
      goto LABEL_62;
    KeAddProcessorAffinityEx(&v110.Count, v97);
    *(_QWORD *)(v34 - 20) = v105;
    v40 = PpmPerfQosTransitionHysteresisOverride;
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v40 = PpmPerfQosTransitionHysteresis;
    v41 = PpmConvertTimeFrom(v40, 1000000LL);
    *(_QWORD *)(v107 + 35384) = v41;
    goto LABEL_43;
  }
  v28 = -1073741811;
LABEL_62:
  v6 = v96;
  v11 = v103;
LABEL_63:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_152:
  v83 = v95;
  if ( ((unsigned int)PpmPerfDomainCount > 1 || (_BYTE)v95)
    && (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered.Count, &PpmCheckRegistered.Count) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v84, v85);
    PpmPerfSchedulerDirectedPerfStatesSupported = v83;
    LOBYTE(v86) = 1;
    PpmReinitializeHeteroEngine(v86, v87, 0LL);
  }
  if ( v8 )
  {
    if ( v6 )
    {
      v88 = (PVOID *)(v11 + 16);
      v89 = v6;
      do
      {
        if ( *v88 )
        {
          v90 = (void *)*((_QWORD *)*v88 + 11);
          if ( v90 )
          {
            ExFreePoolWithTag(v90, 0x704D5050u);
            *((_QWORD *)*v88 + 11) = 0LL;
          }
          v91 = (void *)*((_QWORD *)*v88 + 19);
          if ( v91 )
          {
            ExFreePoolWithTag(v91, 0x704D5050u);
            *((_QWORD *)*v88 + 19) = 0LL;
          }
          v92 = (void *)*((_QWORD *)*v88 + 27);
          if ( v92 )
          {
            ExFreePoolWithTag(v92, 0x704D5050u);
            *((_QWORD *)*v88 + 27) = 0LL;
          }
          ExFreePoolWithTag(*v88, 0x704D5050u);
          *v88 = 0LL;
        }
        v88 += 98;
        --v89;
      }
      while ( v89 );
      v8 = v104;
    }
    ExFreePoolWithTag(v8, 0x704D5050u);
  }
  *((_QWORD *)&v109 + 1) = -1LL;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, (LARGE_INTEGER)-36000000000LL, 36000000000LL, (__int64)&v109);
  return (unsigned int)v28;
}
