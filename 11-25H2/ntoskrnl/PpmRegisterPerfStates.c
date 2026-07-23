/*
 * XREFs of PpmRegisterPerfStates @ 0x140743E04
 * Callers:
 *     PpmPerfRegisterNativePerfStates @ 0x140743AE0 (PpmPerfRegisterNativePerfStates.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x140754360 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x14026BAA0 (KeCheckProcessorAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14026BB80 (KeIsEqualAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140272B6C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140377510 (KeFindFirstSetRightGroupAffinity.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmConvertTimeFrom @ 0x1403E7C34 (PpmConvertTimeFrom.c)
 *     PpmInstallFeedbackCounters @ 0x1403E9C74 (PpmInstallFeedbackCounters.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14042CB60 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     KeFirstGroupAffinityEx @ 0x14045ADB0 (KeFirstGroupAffinityEx.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x140462440 (KeQueryActiveProcessorAffinity2.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PpmCheckResetProcessors @ 0x1405D2260 (PpmCheckResetProcessors.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PpmAllocatePerfCheck @ 0x14074CB80 (PpmAllocatePerfCheck.c)
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 *     PpmUpdateProcessorPolicy @ 0x140A56B1C (PpmUpdateProcessorPolicy.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A69270 (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfResizeHistory @ 0x140A93600 (PpmPerfResizeHistory.c)
 *     PpmReinitializeHeteroEngine @ 0x140AC1DDC (PpmReinitializeHeteroEngine.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  bool v25; // zf
  __int64 Pool2; // rax
  int v27; // r14d
  char *v28; // r15
  __int64 v29; // r8
  unsigned int v30; // ecx
  unsigned int v31; // r14d
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // r12
  unsigned int v35; // eax
  ULONG v36; // edx
  __int64 v37; // rcx
  unsigned int v38; // r14d
  unsigned int v39; // edx
  __int64 v40; // rax
  char v41; // al
  __int64 *v42; // r10
  __int64 v43; // r12
  int v44; // r11d
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned int v48; // edx
  _DWORD *v49; // rax
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 Prcb; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int v53; // edx
  __int64 v54; // rcx
  _DWORD *v55; // rax
  char v56; // al
  unsigned int v57; // r15d
  int v58; // r12d
  char *v59; // rdx
  _DWORD *v60; // r14
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 *v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rbx
  _QWORD *v68; // rax
  __int64 v69; // rcx
  int v70; // eax
  _QWORD *v71; // rax
  char v72; // r8
  __int64 v73; // rdx
  char v74; // al
  __int64 v75; // rcx
  char v76; // dl
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rcx
  char v80; // bl
  __int64 v81; // rdx
  unsigned int v82; // r8d
  __int64 v83; // rcx
  __int64 v84; // rdx
  PVOID *v85; // rbx
  __int64 v86; // rsi
  void *v87; // rcx
  void *v88; // rcx
  void *v89; // rcx
  signed __int32 v91[8]; // [rsp+8h] [rbp-100h] BYREF
  int v92; // [rsp+28h] [rbp-E0h]
  unsigned int v93; // [rsp+2Ch] [rbp-DCh]
  ULONG v94; // [rsp+30h] [rbp-D8h]
  unsigned int v95; // [rsp+34h] [rbp-D4h]
  __int64 v96; // [rsp+38h] [rbp-D0h]
  __int64 v97; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v98; // [rsp+48h] [rbp-C0h]
  int v99; // [rsp+4Ch] [rbp-BCh]
  __int64 v100; // [rsp+50h] [rbp-B8h]
  char *v101; // [rsp+58h] [rbp-B0h]
  __int64 v102; // [rsp+60h] [rbp-A8h]
  _QWORD v103[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v104; // [rsp+80h] [rbp-88h]
  __int128 v105; // [rsp+88h] [rbp-80h] BYREF
  __int128 v106; // [rsp+98h] [rbp-70h] BYREF
  struct _KAFFINITY_EX v107; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v108; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v109[264]; // [rsp+1C0h] [rbp+B8h] BYREF

  memset_0(v109, 0, 0x100uLL);
  v105 = 0LL;
  memset_0(&v107.8, 0, sizeof(v107.8));
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 36);
  v101 = 0LL;
  LOBYTE(v92) = 0;
  v99 = v4;
  *(_OWORD *)&v103[1] = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v107.Count = 2097153LL;
  v106 = 0LL;
  memset_0(&v107.8, 0, sizeof(v107.8));
  v108 = 2097153LL;
  memset_0(v109, 0, 0x100uLL);
  KeQueryActiveProcessorAffinity2((__int64)&v108);
  v93 = 0;
  v11 = 0LL;
  if ( !a2 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v9, v10);
  v12 = -1;
  v97 = -1LL;
  v13 = 0;
  if ( v7 )
  {
    v14 = *(_QWORD *)(a1 + 560);
    do
    {
      v15 = *(unsigned int *)(v14 + 24LL * v13 + 12);
      if ( (unsigned int)v15 >= 2 )
        goto LABEL_28;
      if ( *((_DWORD *)&v97 + v15) == -1 )
        *((_DWORD *)&v97 + v15) = v13;
      ++v13;
    }
    while ( v13 < v7 );
    v12 = v97;
  }
  if ( v12 == -1 && HIDWORD(v97) == -1 )
  {
LABEL_28:
    v27 = -1073741811;
    goto LABEL_63;
  }
  v16 = 0;
  v17 = &v97;
  v18 = 2LL;
  do
  {
    v25 = *(_DWORD *)v17 == -1;
    v19 = v16 + 1;
    v17 = (__int64 *)((char *)v17 + 4);
    if ( v25 )
      v19 = v16;
    v16 = v19;
    --v18;
  }
  while ( v18 );
  LODWORD(v96) = v19;
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
    v16 = v96;
    v93 = v22;
  }
  v23 = (1192 * v5 + 1223) & 0xFFFFFFF8;
  v24 = v23 + 48 * v16 * v5;
  v25 = v6 == 0;
  if ( v6 )
    v25 = 0;
  if ( v25 )
    v24 = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  v101 = (char *)Pool2;
  v8 = (char *)Pool2;
  if ( !Pool2 )
  {
    v27 = -1073741670;
    goto LABEL_63;
  }
  v28 = (char *)(Pool2 + 1216);
  v29 = Pool2 + v24;
  v100 = v29;
  v30 = 0;
  v103[0] = Pool2 + v23;
  v98 = 0;
  if ( *(_BYTE *)(a1 + 11) )
    PpmPerfQosTransitionHysteresis = *(_DWORD *)(a1 + 48);
  v95 = 0;
  v31 = 0;
  if ( !(_DWORD)v5 )
  {
LABEL_55:
    if ( (unsigned int)KeIsEmptyAffinityEx(&v107.Count) )
    {
      v48 = 0;
      if ( (_DWORD)v5 )
      {
        v49 = v28 + 16;
        while ( *v49 != 1 )
        {
          ++v48;
          v49 += 298;
          if ( v48 >= (unsigned int)v5 )
            goto LABEL_65;
        }
        *((_QWORD *)v8 + 2) = *(_QWORD *)&v28[1192 * v48];
        *((_DWORD *)v8 + 76) = 1;
      }
LABEL_65:
      if ( v48 == (_DWORD)v5 )
        *((_DWORD *)v8 + 76) = 2;
    }
    else
    {
      KeFirstGroupAffinityEx((__int64)&v105, &v107.Count);
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v105);
      Prcb = KeGetPrcb(FirstSetRightGroupAffinity);
      *((_QWORD *)v8 + 2) = Prcb + 35248;
      v8[300] = *(_BYTE *)(Prcb + 35336);
    }
    *((_QWORD *)v8 + 3) = 2097153LL;
    memset_0(v8 + 32, 0, 0x100uLL);
    KiCopyAffinityEx((struct _KAFFINITY_EX *)(v8 + 24), *((_WORD *)v8 + 13), &v107);
    *((_QWORD *)v8 + 40) = *(_QWORD *)(a1 + 376);
    *((_QWORD *)v8 + 42) = *(_QWORD *)(a1 + 392);
    *((_QWORD *)v8 + 43) = *(_QWORD *)(a1 + 400);
    *((_QWORD *)v8 + 44) = *(_QWORD *)(a1 + 408);
    *((_QWORD *)v8 + 45) = *(_QWORD *)(a1 + 416);
    *((_QWORD *)v8 + 41) = *(_QWORD *)(a1 + 384);
    *((_QWORD *)v8 + 36) = *(_QWORD *)(a1 + 104);
    *((_QWORD *)v8 + 39) = v28;
    *((_DWORD *)v8 + 201) = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v53 = v99;
    *((LARGE_INTEGER *)v8 + 150) = PerformanceCounter;
    *((_DWORD *)v8 + 112) = v53;
    *((_DWORD *)v8 + 74) = v5;
    v54 = 7LL;
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
    v55 = v8 + 828;
    do
    {
      *(v55 - 1) = 100;
      *v55 = v53;
      v55 += 14;
      --v54;
    }
    while ( v54 );
    v8[490] = *(_BYTE *)(a1 + 6);
    v8[491] = *(_BYTE *)(a1 + 7);
    v8[492] = *(_BYTE *)(a1 + 8);
    if ( *(_WORD *)(a1 + 4) == 253 || (v56 = 1, *(_QWORD *)(a1 + 480)) )
      v56 = 0;
    v8[494] = v56;
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
    _InterlockedOr(v91, 0);
    v57 = 0;
    if ( (_DWORD)v5 )
    {
      v58 = v96;
      v59 = v8 + 1216;
      v60 = v8 + 1232;
      do
      {
        if ( *v60 != 2 )
        {
          v61 = *((_QWORD *)v60 - 2);
          v62 = 2LL;
          *(_OWORD *)&v103[1] = 0LL;
          *(_DWORD *)(v61 + 64) = 0x10000;
          *(_QWORD *)(v61 + 8) = &v59[1192 * v57];
          v63 = &v97;
          *(_QWORD *)v61 = v8;
          v64 = &v103[1];
          v65 = v103[0] + 48LL * v58 * v57;
          do
          {
            if ( *(_DWORD *)v63 != -1 )
            {
              *v64 = v65;
              v65 += 48LL;
            }
            v63 = (__int64 *)((char *)v63 + 4);
            ++v64;
            --v62;
          }
          while ( v62 );
          if ( *v60 )
          {
            PpmPerfResizeHistory(v61);
            v66 = 2LL;
            v67 = v61 - (_QWORD)&v103[1];
            v68 = &v103[1];
            do
            {
              if ( *v68 )
                *(_QWORD *)((char *)v68 + v67 + 96) = *v68;
              ++v68;
              --v66;
            }
            while ( v66 );
          }
          else
          {
            PpmInstallFeedbackCounters(v61 - 35248, (__int64)&v103[1], *(_BYTE *)(a1 + 14));
          }
          v59 = v8 + 1216;
        }
        ++v57;
        v60 += 298;
      }
      while ( v57 < (unsigned int)v5 );
      v6 = v93;
    }
    if ( !PpmPerfGlobalContext )
      PpmPerfGlobalContext = *(_QWORD *)(a1 + 96);
    v69 = PpmPerfControlReadFeedback;
    if ( !PpmPerfControlReadFeedback )
    {
      v69 = *(_QWORD *)(a1 + 488);
      PpmPerfControlReadFeedback = v69;
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
    if ( v69 )
      PpmCheckPollForFeedback = 1;
    v70 = PpmPerfDomainCount + 1;
    *((_DWORD *)v8 + 110) = PpmPerfDomainCount + 1;
    PpmPerfDomainCount = v70;
    v71 = (_QWORD *)qword_140FC5BB0;
    if ( *(__int64 **)qword_140FC5BB0 != &PpmPerfDomainHead )
      __fastfail(3u);
    *(_QWORD *)v8 = &PpmPerfDomainHead;
    v72 = 1;
    *((_QWORD *)v8 + 1) = v71;
    *v71 = v8;
    v73 = PpmPerfDomainHead;
    qword_140FC5BB0 = (__int64)v8;
    LOBYTE(v92) = 1;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      do
      {
        v74 = *(_BYTE *)(v73 + 493);
        v73 = *(_QWORD *)v73;
        v72 = v74 != 0 ? v72 : 0;
      }
      while ( (__int64 *)v73 != &PpmPerfDomainHead );
      LOBYTE(v92) = v72;
    }
    KiOrAffinityEx(&v107, &PpmPerfStatesRegistered, &PpmPerfStatesRegistered, PpmPerfStatesRegistered.Size);
    if ( (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered.Count, &PpmCheckRegistered.Count) )
    {
      v75 = PpmPerfDomainHead;
      v76 = 1;
      while ( (__int64 *)v75 != &PpmPerfDomainHead )
      {
        if ( !*(_BYTE *)(v75 + 495)
          || *(_QWORD *)(v75 + 480) != *((_QWORD *)v8 + 60)
          || *(_DWORD *)(v75 + 460) != *((_DWORD *)v8 + 115)
          || *(_DWORD *)(v75 + 452) != *((_DWORD *)v8 + 113)
          || *(_DWORD *)(v75 + 500) != *((_DWORD *)v8 + 125)
          || *(_DWORD *)(v75 + 504) != *((_DWORD *)v8 + 126)
          || *(_DWORD *)(v75 + 508) != *((_DWORD *)v8 + 127)
          || *(_DWORD *)(v75 + 512) != *((_DWORD *)v8 + 128)
          || *(_DWORD *)(v75 + 516) != *((_DWORD *)v8 + 129) )
        {
          v76 = 0;
          break;
        }
        v75 = *(_QWORD *)v75;
      }
      PpmPerfVmPerfSelectionSupported = v76;
    }
    *((_WORD *)v8 + 606) = 257;
    PpmUpdateProcessorPolicy(&PpmAllowedActions, v8);
    PpmCheckResetProcessors((__int64)v8);
    if ( (unsigned int)KeCheckProcessorAffinityEx(&v107.Count, 0) )
      PpmParkApplyPolicy();
    PpmCheckReInit(v78, v77);
    v8 = 0LL;
    v101 = 0LL;
    v27 = 0;
    LOBYTE(v79) = 1;
    PpmPerfUpdateDomainPolicy(v79);
    v11 = v100;
    goto LABEL_152;
  }
  v32 = 0LL;
  v33 = Pool2 + 1236;
  while ( 1 )
  {
    v34 = *(_QWORD *)(a1 + 568);
    *(_DWORD *)(v33 - 4) = *(_DWORD *)(v32 + v34 + 28);
    v35 = *(_DWORD *)(v32 + v34);
    if ( !*(_DWORD *)(v32 + v34 + 28) )
      break;
    v36 = -1;
    *(_DWORD *)v33 = v35;
    v94 = -1;
    if ( *(_DWORD *)(v32 + v34 + 28) != 1 )
      goto LABEL_44;
    v98 = v30 + 1;
    v37 = v29 + 784LL * v30;
    v102 = v37;
    *(_WORD *)(v37 + 62) = 100;
    v27 = PpmAllocatePerfCheck(v37);
    if ( v27 < 0 )
      goto LABEL_62;
    *(_QWORD *)(v33 - 20) = v102;
LABEL_43:
    v31 = v95;
    v36 = v94;
LABEL_44:
    *(_QWORD *)(v33 + 1164) = 0LL;
    *(_DWORD *)(v33 + 28) = 100;
    *(_QWORD *)(v33 - 12) = *(_QWORD *)(v32 + v34 + 8);
    *(_DWORD *)(v33 + 4) = *(_DWORD *)(v32 + v34 + 16);
    *(_DWORD *)(v33 + 8) = *(_DWORD *)(v32 + v34 + 20);
    *(_DWORD *)(v33 + 12) = *(_DWORD *)(v32 + v34 + 24);
    *(_DWORD *)(v33 + 64) = v99;
    *(_DWORD *)(v33 + 36) = 100;
    *(_DWORD *)(v33 + 60) = 100;
    *(_DWORD *)(v33 + 68) = 1;
    *(_DWORD *)(v33 + 72) = 100;
    *(_DWORD *)(v33 + 76) = 100;
    *(_DWORD *)(v33 + 112) = 100;
    *(_DWORD *)(v33 + 116) = 100;
    *(_QWORD *)(v33 + 124) = 0LL;
    if ( *(_BYTE *)(a1 + 7) || (v41 = 1, !*(_BYTE *)(a1 + 11)) )
      v41 = 0;
    *(_BYTE *)(v33 + 121) = v41;
    if ( *(_DWORD *)(v32 + v34 + 16) < 0x64u )
    {
      *(_QWORD *)(v33 + 20) = MEMORY[0xFFFFF78000000008];
      PopDiagTraceProcessorThrottlePerfTrack(100 - *(_DWORD *)(v32 + v34 + 16), v36);
    }
    v42 = &v97;
    v43 = 2LL;
    v44 = v96 * v31;
    v45 = v103[0] + 48LL * (unsigned int)v96 * v31;
    do
    {
      v46 = *(unsigned int *)v42;
      if ( (_DWORD)v46 != -1 )
      {
        v47 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(v45 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 576) + 8LL * (unsigned int)(v44 + v46));
        *(_BYTE *)(v45 + 33) = *(_BYTE *)(v47 + 24 * v46 + 17);
        *(_BYTE *)(v45 + 32) = *(_BYTE *)(v47 + 24 * v46 + 16);
        *(_BYTE *)(v45 + 34) = *(_BYTE *)(v47 + 24 * v46 + 18);
        *(_DWORD *)(v45 + 36) = *(_DWORD *)(v47 + 24 * v46 + 8);
        *(_QWORD *)v45 = *(_QWORD *)(v47 + 24 * v46);
        v45 += 48LL;
      }
      v42 = (__int64 *)((char *)v42 + 4);
      --v43;
    }
    while ( v43 );
    v30 = v98;
    ++v31;
    v32 += 32LL;
    v29 = v100;
    v33 += 1192LL;
    v95 = v31;
    if ( v31 >= (unsigned int)v5 )
    {
      v6 = v93;
      v28 = v8 + 1216;
      goto LABEL_55;
    }
  }
  v94 = *(_DWORD *)(v32 + v34);
  v38 = v35;
  if ( v35 != -1 && !(unsigned int)KeCheckProcessorAffinityEx(&PpmPerfStatesRegistered.Count, v35) )
  {
    v104 = KeGetPrcb(v38);
    v102 = v104 + 35248;
    v27 = PpmAllocatePerfCheck(v104 + 35248);
    if ( v27 < 0 )
      goto LABEL_62;
    KeAddProcessorAffinityEx(&v107.Count, v94);
    *(_QWORD *)(v33 - 20) = v102;
    v39 = PpmPerfQosTransitionHysteresisOverride;
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v39 = PpmPerfQosTransitionHysteresis;
    v40 = PpmConvertTimeFrom(v39, 1000000LL);
    *(_QWORD *)(v104 + 35384) = v40;
    goto LABEL_43;
  }
  v27 = -1073741811;
LABEL_62:
  v6 = v93;
  v11 = v100;
LABEL_63:
  PpmReleaseLock(&PpmPerfPolicyLock);
LABEL_152:
  v80 = v92;
  if ( ((unsigned int)PpmPerfDomainCount > 1 || (_BYTE)v92)
    && (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered.Count, &PpmCheckRegistered.Count) )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v81, v82);
    PpmPerfSchedulerDirectedPerfStatesSupported = v80;
    LOBYTE(v83) = 1;
    PpmReinitializeHeteroEngine(v83, v84, 0LL);
  }
  if ( v8 )
  {
    if ( v6 )
    {
      v85 = (PVOID *)(v11 + 16);
      v86 = v6;
      do
      {
        if ( *v85 )
        {
          v87 = (void *)*((_QWORD *)*v85 + 11);
          if ( v87 )
          {
            ExFreePoolWithTag(v87, 0x704D5050u);
            *((_QWORD *)*v85 + 11) = 0LL;
          }
          v88 = (void *)*((_QWORD *)*v85 + 19);
          if ( v88 )
          {
            ExFreePoolWithTag(v88, 0x704D5050u);
            *((_QWORD *)*v85 + 19) = 0LL;
          }
          v89 = (void *)*((_QWORD *)*v85 + 27);
          if ( v89 )
          {
            ExFreePoolWithTag(v89, 0x704D5050u);
            *((_QWORD *)*v85 + 27) = 0LL;
          }
          ExFreePoolWithTag(*v85, 0x704D5050u);
          *v85 = 0LL;
        }
        v85 += 98;
        --v86;
      }
      while ( v86 );
      v8 = v101;
    }
    ExFreePoolWithTag(v8, 0x704D5050u);
  }
  *((_QWORD *)&v106 + 1) = -1LL;
  KeSetTimer2((__int64)&PpmPerfTelemetryTimer, (LARGE_INTEGER)-36000000000LL, 36000000000LL, (__int64)&v106);
  return (unsigned int)v27;
}
