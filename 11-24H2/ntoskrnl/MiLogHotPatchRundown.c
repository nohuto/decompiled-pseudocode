/*
 * XREFs of MiLogHotPatchRundown @ 0x1407F44C4
 * Callers:
 *     MiTracingEnabledCallback @ 0x140A9EEA0 (MiTracingEnabledCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     _tlgCreate1Sz_char @ 0x1404397B4 (_tlgCreate1Sz_char.c)
 *     MiFillLogProcessInfo @ 0x140446A08 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A083C (_tlgWriteEx_EtwWriteEx.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0508 (MiGetBaseLoaderPortion.c)
 *     MmAcquireLoadLock @ 0x1404D2990 (MmAcquireLoadLock.c)
 *     VslQueryActiveSecurePatches @ 0x14058DA90 (VslQueryActiveSecurePatches.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiGetProcessHotPatchContext @ 0x1407F2AD8 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1407F3744 (MiIsActiveSystemHotPatch.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

struct _EX_RUNDOWN_REF *MiLogHotPatchRundown()
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  unsigned __int64 i; // rbx
  __int64 v5; // r8
  _QWORD **v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  unsigned __int64 k; // rdi
  _QWORD *v11; // rax
  unsigned __int64 j; // rbx
  __int64 v13; // r8
  int v14; // eax
  _QWORD **v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  _QWORD *v24; // rax
  unsigned __int64 m; // rbx
  __int64 v26; // r8
  _QWORD **v27; // rax
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rcx
  PVOID *n; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r10
  struct _EX_RUNDOWN_REF *v34; // r12
  __int64 v35; // rcx
  _QWORD *v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // r13
  __int64 v40; // r12
  int v41; // ecx
  __int64 v42; // rax
  int v43; // edx
  __int64 v44; // rcx
  int v45; // r9d
  _QWORD *ProcessHotPatchContext; // r14
  _QWORD *v47; // rsi
  _QWORD *v48; // rsi
  __int64 v49; // r12
  int v50; // ecx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbx
  int v55; // [rsp+28h] [rbp-E0h]
  int v56; // [rsp+30h] [rbp-D8h]
  int v57; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v58; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v59; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+58h] [rbp-B0h]
  int v61; // [rsp+60h] [rbp-A8h] BYREF
  int v62; // [rsp+64h] [rbp-A4h] BYREF
  int v63; // [rsp+68h] [rbp-A0h] BYREF
  int v64; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v65; // [rsp+70h] [rbp-98h] BYREF
  int v66; // [rsp+74h] [rbp-94h] BYREF
  int v67; // [rsp+78h] [rbp-90h] BYREF
  int v68; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v69; // [rsp+80h] [rbp-88h] BYREF
  int v70; // [rsp+84h] [rbp-84h] BYREF
  int v71; // [rsp+88h] [rbp-80h] BYREF
  int v72; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v73; // [rsp+90h] [rbp-78h] BYREF
  unsigned int ProcessId; // [rsp+94h] [rbp-74h] BYREF
  int v75; // [rsp+98h] [rbp-70h] BYREF
  int v76; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v77; // [rsp+A0h] [rbp-68h] BYREF
  int v78; // [rsp+A4h] [rbp-64h] BYREF
  int v79; // [rsp+A8h] [rbp-60h] BYREF
  int v80; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v81; // [rsp+B0h] [rbp-58h] BYREF
  int v82; // [rsp+B4h] [rbp-54h] BYREF
  int v83; // [rsp+B8h] [rbp-50h] BYREF
  int v84; // [rsp+BCh] [rbp-4Ch] BYREF
  int v85; // [rsp+C0h] [rbp-48h] BYREF
  int v86; // [rsp+C4h] [rbp-44h] BYREF
  int v87; // [rsp+C8h] [rbp-40h] BYREF
  int v88; // [rsp+CCh] [rbp-3Ch] BYREF
  PVOID P; // [rsp+D0h] [rbp-38h] BYREF
  const CHAR *v90; // [rsp+D8h] [rbp-30h] BYREF
  int v91; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v92[3]; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+118h] [rbp+10h] BYREF
  int *v94; // [rsp+138h] [rbp+30h]
  __int64 v95; // [rsp+140h] [rbp+38h]
  int *v96; // [rsp+148h] [rbp+40h]
  __int64 v97; // [rsp+150h] [rbp+48h]
  int *v98; // [rsp+158h] [rbp+50h]
  __int64 v99; // [rsp+160h] [rbp+58h]
  int *v100; // [rsp+168h] [rbp+60h]
  __int64 v101; // [rsp+170h] [rbp+68h]
  int *v102; // [rsp+178h] [rbp+70h]
  __int64 v103; // [rsp+180h] [rbp+78h]
  _DWORD *v104; // [rsp+188h] [rbp+80h]
  __int64 v105; // [rsp+190h] [rbp+88h]
  __int64 v106; // [rsp+198h] [rbp+90h]
  _DWORD v107[2]; // [rsp+1A0h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v109; // [rsp+1C8h] [rbp+C0h]
  __int64 v110; // [rsp+1D0h] [rbp+C8h]
  int *v111; // [rsp+1D8h] [rbp+D0h]
  __int64 v112; // [rsp+1E0h] [rbp+D8h]
  int *v113; // [rsp+1E8h] [rbp+E0h]
  __int64 v114; // [rsp+1F0h] [rbp+E8h]
  int *v115; // [rsp+1F8h] [rbp+F0h]
  __int64 v116; // [rsp+200h] [rbp+F8h]
  int *v117; // [rsp+208h] [rbp+100h]
  __int64 v118; // [rsp+210h] [rbp+108h]
  _DWORD *v119; // [rsp+218h] [rbp+110h]
  __int64 v120; // [rsp+220h] [rbp+118h]
  PVOID v121; // [rsp+228h] [rbp+120h]
  _DWORD v122[2]; // [rsp+230h] [rbp+128h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+238h] [rbp+130h] BYREF
  unsigned int *v124; // [rsp+258h] [rbp+150h]
  __int64 v125; // [rsp+260h] [rbp+158h]
  char v126[16]; // [rsp+268h] [rbp+160h] BYREF
  int *v127; // [rsp+278h] [rbp+170h]
  __int64 v128; // [rsp+280h] [rbp+178h]
  int *v129; // [rsp+288h] [rbp+180h]
  __int64 v130; // [rsp+290h] [rbp+188h]
  int *v131; // [rsp+298h] [rbp+190h]
  __int64 v132; // [rsp+2A0h] [rbp+198h]
  int *v133; // [rsp+2A8h] [rbp+1A0h]
  __int64 v134; // [rsp+2B0h] [rbp+1A8h]
  int *v135; // [rsp+2B8h] [rbp+1B0h]
  __int64 v136; // [rsp+2C0h] [rbp+1B8h]
  _DWORD *v137; // [rsp+2C8h] [rbp+1C0h]
  __int64 v138; // [rsp+2D0h] [rbp+1C8h]
  __int64 v139; // [rsp+2D8h] [rbp+1D0h]
  _DWORD v140[2]; // [rsp+2E0h] [rbp+1D8h] BYREF
  int *v141; // [rsp+2E8h] [rbp+1E0h]
  __int64 v142; // [rsp+2F0h] [rbp+1E8h]
  __int16 *v143; // [rsp+2F8h] [rbp+1F0h]
  __int64 v144; // [rsp+300h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v145; // [rsp+308h] [rbp+200h] BYREF
  unsigned int *p_ProcessId; // [rsp+328h] [rbp+220h]
  __int64 v147; // [rsp+330h] [rbp+228h]
  char v148[16]; // [rsp+338h] [rbp+230h] BYREF
  int *v149; // [rsp+348h] [rbp+240h]
  __int64 v150; // [rsp+350h] [rbp+248h]
  int *v151; // [rsp+358h] [rbp+250h]
  __int64 v152; // [rsp+360h] [rbp+258h]
  int *v153; // [rsp+368h] [rbp+260h]
  __int64 v154; // [rsp+370h] [rbp+268h]
  int *v155; // [rsp+378h] [rbp+270h]
  __int64 v156; // [rsp+380h] [rbp+278h]
  int *v157; // [rsp+388h] [rbp+280h]
  __int64 v158; // [rsp+390h] [rbp+288h]
  _DWORD *v159; // [rsp+398h] [rbp+290h]
  __int64 v160; // [rsp+3A0h] [rbp+298h]
  __int64 v161; // [rsp+3A8h] [rbp+2A0h]
  _DWORD v162[2]; // [rsp+3B0h] [rbp+2A8h] BYREF
  int *v163; // [rsp+3B8h] [rbp+2B0h]
  __int64 v164; // [rsp+3C0h] [rbp+2B8h]
  int *v165; // [rsp+3C8h] [rbp+2C0h]
  __int64 v166; // [rsp+3D0h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v167; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v168; // [rsp+3F8h] [rbp+2F0h]
  __int64 v169; // [rsp+400h] [rbp+2F8h]
  int *v170; // [rsp+408h] [rbp+300h]
  __int64 v171; // [rsp+410h] [rbp+308h]
  _DWORD *v172; // [rsp+418h] [rbp+310h]
  __int64 v173; // [rsp+420h] [rbp+318h]
  __int64 v174; // [rsp+428h] [rbp+320h]
  _DWORD v175[2]; // [rsp+430h] [rbp+328h] BYREF
  unsigned __int64 v176; // [rsp+438h] [rbp+330h]
  int v177; // [rsp+440h] [rbp+338h]
  int v178; // [rsp+444h] [rbp+33Ch]
  struct _EVENT_DATA_DESCRIPTOR v179; // [rsp+448h] [rbp+340h] BYREF
  int *v180; // [rsp+468h] [rbp+360h]
  __int64 v181; // [rsp+470h] [rbp+368h]
  int *v182; // [rsp+478h] [rbp+370h]
  __int64 v183; // [rsp+480h] [rbp+378h]
  _DWORD *v184; // [rsp+488h] [rbp+380h]
  __int64 v185; // [rsp+490h] [rbp+388h]
  __int64 v186; // [rsp+498h] [rbp+390h]
  _DWORD v187[2]; // [rsp+4A0h] [rbp+398h] BYREF
  _UNKNOWN *retaddr; // [rsp+4E0h] [rbp+3D8h] BYREF

  result = (struct _EX_RUNDOWN_REF *)&retaddr;
  memset(v92, 0, sizeof(v92));
  LODWORD(v59) = 0;
  v90 = 0LL;
  if ( *(_QWORD *)&qword_140E37518 && dword_140E374AC )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = KeAbPreAcquire((__int64)&qword_140E37490, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37490, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E37490, 0, v2, (__int64)&qword_140E37490);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    v3 = *(_QWORD **)&qword_140E37478;
    i = 0LL;
    while ( v3 )
    {
      i = (unsigned __int64)v3;
      v3 = (_QWORD *)*v3;
    }
    while ( i )
    {
      if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 32LL) )
      {
        v88 = *(_DWORD *)(i + 24);
        v181 = 4LL;
        v180 = &v88;
        v61 = *(_DWORD *)(i + 28);
        v182 = &v61;
        v184 = v187;
        v186 = *(_QWORD *)(i + 48);
        v187[0] = *(unsigned __int16 *)(i + 40);
        v183 = 4LL;
        v185 = 2LL;
        v187[1] = 0;
        tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&byte_140057577, v5, 1u, v55, v56, 6u, &v179);
      }
      v6 = *(_QWORD ***)(i + 8);
      v7 = i;
      if ( v6 )
      {
        v8 = *v6;
        for ( i = *(_QWORD *)(i + 8); v8; v8 = (_QWORD *)*v8 )
          i = (unsigned __int64)v8;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v7 )
            break;
          v7 = i;
        }
      }
    }
    v9 = (_QWORD *)qword_140E37470;
    k = 0LL;
    while ( v9 )
    {
      k = (unsigned __int64)v9;
      v9 = (_QWORD *)*v9;
    }
    while ( k )
    {
      v11 = *(_QWORD **)(k + 24);
      j = 0LL;
      while ( v11 )
      {
        j = (unsigned __int64)v11;
        v11 = (_QWORD *)*v11;
      }
      while ( j )
      {
        if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 32LL) )
        {
          v62 = *(_DWORD *)(j + 24);
          v169 = 4LL;
          v168 = &v62;
          v63 = *(_DWORD *)(j + 28);
          v170 = &v63;
          v172 = v175;
          v174 = *(_QWORD *)(j + 48);
          v175[0] = *(unsigned __int16 *)(j + 40);
          v176 = k + 40;
          v14 = *(unsigned __int8 *)(k + 41);
          v171 = 4LL;
          v173 = 2LL;
          v175[1] = 0;
          v178 = 0;
          v177 = 4 * v14 + 8;
          tlgWriteEx_EtwWriteEx(v13, (unsigned __int8 *)&word_1400575CA, v13, 1u, v55, v56, 7u, &v167);
        }
        v15 = *(_QWORD ***)(j + 8);
        v16 = j;
        if ( v15 )
        {
          v17 = *v15;
          for ( j = *(_QWORD *)(j + 8); v17; v17 = (_QWORD *)*v17 )
            j = (unsigned __int64)v17;
        }
        else
        {
          while ( 1 )
          {
            j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !j || *(_QWORD *)j == v16 )
              break;
            v16 = j;
          }
        }
      }
      v18 = *(_QWORD ***)(k + 8);
      v19 = k;
      if ( v18 )
      {
        v20 = *v18;
        for ( k = *(_QWORD *)(k + 8); v20; v20 = (_QWORD *)*v20 )
          k = (unsigned __int64)v20;
      }
      else
      {
        while ( 1 )
        {
          k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !k || *(_QWORD *)k == v19 )
            break;
          v19 = k;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37490, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E37490);
    KeAbPostRelease((ULONG_PTR)&qword_140E37490);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v22, v21);
    MmAcquireLoadLock();
    v24 = (_QWORD *)qword_140E37488;
    m = 0LL;
    while ( v24 )
    {
      m = (unsigned __int64)v24;
      v24 = (_QWORD *)*v24;
    }
    while ( m )
    {
      if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 32LL) )
      {
        v64 = *(_DWORD *)(m + 24);
        v95 = 4LL;
        v94 = &v64;
        v65 = *(_DWORD *)(m + 28);
        v96 = &v65;
        v66 = *(_DWORD *)(m + 32);
        v98 = &v66;
        v67 = *(_DWORD *)(m + 36);
        v100 = &v67;
        v68 = *(_DWORD *)(m + 40);
        v102 = &v68;
        v104 = v107;
        v106 = *(_QWORD *)(m + 56);
        v107[0] = *(unsigned __int16 *)(m + 48);
        v97 = 4LL;
        v99 = 4LL;
        v101 = 4LL;
        v103 = 4LL;
        v105 = 2LL;
        v107[1] = 0;
        tlgWriteEx_EtwWriteEx(v26, (unsigned __int8 *)&dword_140057454, v26, 1u, v55, v56, 9u, &v93);
      }
      v27 = *(_QWORD ***)(m + 8);
      v28 = m;
      if ( v27 )
      {
        v29 = *v27;
        for ( m = *(_QWORD *)(m + 8); v29; v29 = (_QWORD *)*v29 )
          m = (unsigned __int64)v29;
      }
      else
      {
        while ( 1 )
        {
          m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !m || *(_QWORD *)m == v28 )
            break;
          v28 = m;
        }
      }
    }
    for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
    {
      if ( (unsigned int)MiIsActiveSystemHotPatch((__int64)n) )
      {
        MiGetBaseLoaderPortion((__int64)n);
        if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 32LL) )
        {
          v69 = *(_DWORD *)(v33 + 120);
          v110 = 4LL;
          v109 = &v69;
          v70 = *(_DWORD *)(v33 + 156);
          v111 = &v70;
          v71 = *((_DWORD *)n + 30);
          v113 = &v71;
          v72 = *((_DWORD *)n + 39);
          v115 = &v72;
          v73 = *(_DWORD *)(v32 + 272);
          v117 = &v73;
          v119 = v122;
          v121 = n[10];
          v122[0] = *((unsigned __int16 *)n + 36);
          v112 = 4LL;
          v114 = 4LL;
          v116 = 4LL;
          v118 = 4LL;
          v120 = 2LL;
          v122[1] = 0;
          tlgWriteEx_EtwWriteEx(v31, (unsigned __int8 *)&word_1400574EA, v31, 1u, v55, v56, 9u, &v108);
        }
      }
    }
    MmReleaseLoadLock(CurrentThread);
    for ( result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(0LL);
          ;
          result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess((PVOID)v54) )
    {
      v54 = (__int64)result;
      if ( !result )
        break;
      v34 = result + 61;
      if ( ExAcquireRundownProtection(result + 61) )
      {
        KiStackAttachProcess((_KPROCESS *)v54, 0, (__int64)v92);
        v35 = *(_QWORD *)(v54 + 368);
        if ( (v35 & 1) != 0 )
        {
          P = 0LL;
          if ( (int)VslQueryActiveSecurePatches(v35, (struct _MDL **)&P, (unsigned int *)&v59) >= 0 && (_DWORD)v59 )
          {
            v36 = P;
            v37 = 0LL;
            v38 = 0LL;
            v39 = (unsigned int)v59;
            do
            {
              v40 = *(_QWORD *)&qword_140E37518;
              v60 = v36[2];
              if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 32LL) )
              {
                ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v54);
                v147 = 4LL;
                p_ProcessId = &ProcessId;
                tlgCreate1Sz_char((__int64)v148, (const CHAR *)(v54 + 824));
                v149 = &v75;
                v150 = 4LL;
                v152 = 4LL;
                v41 = *(_DWORD *)(v38 + v60);
                v76 = *(_DWORD *)(v38 + v60 + 4);
                v151 = &v76;
                v77 = *(_DWORD *)(v38 + v60 + 12);
                v153 = &v77;
                v78 = *(_DWORD *)(v38 + v60 + 16);
                v155 = &v78;
                v79 = *(_DWORD *)(v38 + v60 + 24);
                v157 = &v79;
                v75 = v41;
                v154 = 4LL;
                v156 = 4LL;
                v158 = 4LL;
                v42 = v36[1];
                v43 = *(unsigned __int16 *)(v37 + v42);
                v44 = *(_QWORD *)(v37 + v42 + 8);
                v159 = v162;
                v80 = *(_DWORD *)(v38 + v60 + 8);
                v163 = &v80;
                LOWORD(v57) = *(_WORD *)(v54 + 1772);
                v165 = &v57;
                v161 = v44;
                v162[0] = v43;
                v162[1] = v45;
                v160 = 2LL;
                v164 = 4LL;
                v166 = 2LL;
                tlgWriteEx_EtwWriteEx(v40, (unsigned __int8 *)&unk_1400572B8, v60, 1u, v55, v56, 0xDu, &v145);
              }
              v38 += 28LL;
              v37 += 16LL;
              --v39;
            }
            while ( v39 );
            v34 = (struct _EX_RUNDOWN_REF *)(v54 + 488);
            ExFreePoolWithTag(v36, 0);
          }
        }
        else
        {
          ProcessHotPatchContext = MiGetProcessHotPatchContext(v54, 0);
          if ( ProcessHotPatchContext )
          {
            MiFillLogProcessInfo(v54 + 1024, &v91, &v90);
            --CurrentThread->SpecialApcDisable;
            v47 = KeAbPreAcquire((__int64)(ProcessHotPatchContext + 2), 0LL);
            if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(ProcessHotPatchContext + 2, 0, v47, (__int64)(ProcessHotPatchContext + 2));
            if ( v47 )
              *((_BYTE *)v47 + 10) = 1;
            v48 = (_QWORD *)*ProcessHotPatchContext;
            if ( (_QWORD *)*ProcessHotPatchContext != ProcessHotPatchContext )
            {
              do
              {
                v49 = *(_QWORD *)&qword_140E37518;
                if ( **(_DWORD **)&qword_140E37518 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37518, 32LL) )
                {
                  v81 = (unsigned int)PsGetProcessId((PEPROCESS)v54);
                  v124 = &v81;
                  v125 = 4LL;
                  tlgCreate1Sz_char((__int64)v126, v90);
                  v50 = *((_DWORD *)v48 + 8);
                  v127 = &v82;
                  v83 = *((_DWORD *)v48 + 9);
                  v129 = &v83;
                  v84 = *((_DWORD *)v48 + 14);
                  v131 = &v84;
                  v85 = *((_DWORD *)v48 + 15);
                  v133 = &v85;
                  v86 = *((_DWORD *)v48 + 16);
                  v135 = &v86;
                  v137 = v140;
                  v139 = v48[6];
                  v140[0] = *((unsigned __int16 *)v48 + 20);
                  v87 = *((_DWORD *)v48 + 4);
                  v141 = &v87;
                  v58 = *(_WORD *)(v54 + 1772);
                  v143 = &v58;
                  v82 = v50;
                  v128 = 4LL;
                  v130 = 4LL;
                  v132 = 4LL;
                  v134 = 4LL;
                  v136 = 4LL;
                  v138 = 2LL;
                  v140[1] = 0;
                  v142 = 4LL;
                  v144 = 2LL;
                  tlgWriteEx_EtwWriteEx(v49, (unsigned __int8 *)&byte_14005738B, v51, 1u, v55, v56, 0xDu, &v123);
                }
                v48 = (_QWORD *)*v48;
              }
              while ( v48 != ProcessHotPatchContext );
              v34 = (struct _EX_RUNDOWN_REF *)(v54 + 488);
            }
            if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(ProcessHotPatchContext + 2);
            KeAbPostRelease((ULONG_PTR)(ProcessHotPatchContext + 2));
            v23 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v23
              && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v53, v52);
            }
          }
        }
        KiUnstackDetachProcess((__int64)v92, 0);
        ExReleaseRundownProtection_0(v34);
      }
    }
  }
  return result;
}
