/*
 * XREFs of MiLogHotPatchRundown @ 0x1407F4BB8
 * Callers:
 *     MiTracingEnabledCallback @ 0x140A9A270 (MiTracingEnabledCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     MiFillLogProcessInfo @ 0x14043EDB8 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     MmAcquireLoadLock @ 0x1404CBB50 (MmAcquireLoadLock.c)
 *     VslQueryActiveSecurePatches @ 0x14058ADE8 (VslQueryActiveSecurePatches.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiGetProcessHotPatchContext @ 0x1407F30A8 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1407F3D38 (MiIsActiveSystemHotPatch.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

struct _EX_RUNDOWN_REF *MiLogHotPatchRundown()
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _KTHREAD *CurrentThread; // r15
  char *v2; // rbx
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
  bool v21; // zf
  _QWORD *v22; // rax
  unsigned __int64 m; // rbx
  __int64 v24; // r8
  _QWORD **v25; // rax
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  PVOID *n; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  struct _EX_RUNDOWN_REF *v32; // r12
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
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
  char *v47; // rsi
  _QWORD *v48; // rsi
  __int64 v49; // r12
  int v50; // ecx
  __int64 v51; // r8
  __int64 v52; // rbx
  int v53; // [rsp+28h] [rbp-E0h]
  int v54; // [rsp+30h] [rbp-D8h]
  int v55; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v56; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v57; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-B0h]
  int v59; // [rsp+60h] [rbp-A8h] BYREF
  int v60; // [rsp+64h] [rbp-A4h] BYREF
  int v61; // [rsp+68h] [rbp-A0h] BYREF
  int v62; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v63; // [rsp+70h] [rbp-98h] BYREF
  int v64; // [rsp+74h] [rbp-94h] BYREF
  int v65; // [rsp+78h] [rbp-90h] BYREF
  int v66; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v67; // [rsp+80h] [rbp-88h] BYREF
  int v68; // [rsp+84h] [rbp-84h] BYREF
  int v69; // [rsp+88h] [rbp-80h] BYREF
  int v70; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v71; // [rsp+90h] [rbp-78h] BYREF
  unsigned int ProcessId; // [rsp+94h] [rbp-74h] BYREF
  int v73; // [rsp+98h] [rbp-70h] BYREF
  int v74; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v75; // [rsp+A0h] [rbp-68h] BYREF
  int v76; // [rsp+A4h] [rbp-64h] BYREF
  int v77; // [rsp+A8h] [rbp-60h] BYREF
  int v78; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v79; // [rsp+B0h] [rbp-58h] BYREF
  int v80; // [rsp+B4h] [rbp-54h] BYREF
  int v81; // [rsp+B8h] [rbp-50h] BYREF
  int v82; // [rsp+BCh] [rbp-4Ch] BYREF
  int v83; // [rsp+C0h] [rbp-48h] BYREF
  int v84; // [rsp+C4h] [rbp-44h] BYREF
  int v85; // [rsp+C8h] [rbp-40h] BYREF
  int v86; // [rsp+CCh] [rbp-3Ch] BYREF
  PVOID P; // [rsp+D0h] [rbp-38h] BYREF
  const CHAR *v88; // [rsp+D8h] [rbp-30h] BYREF
  int v89; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v90[3]; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+118h] [rbp+10h] BYREF
  int *v92; // [rsp+138h] [rbp+30h]
  __int64 v93; // [rsp+140h] [rbp+38h]
  int *v94; // [rsp+148h] [rbp+40h]
  __int64 v95; // [rsp+150h] [rbp+48h]
  int *v96; // [rsp+158h] [rbp+50h]
  __int64 v97; // [rsp+160h] [rbp+58h]
  int *v98; // [rsp+168h] [rbp+60h]
  __int64 v99; // [rsp+170h] [rbp+68h]
  int *v100; // [rsp+178h] [rbp+70h]
  __int64 v101; // [rsp+180h] [rbp+78h]
  _DWORD *v102; // [rsp+188h] [rbp+80h]
  __int64 v103; // [rsp+190h] [rbp+88h]
  __int64 v104; // [rsp+198h] [rbp+90h]
  _DWORD v105[2]; // [rsp+1A0h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v106; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v107; // [rsp+1C8h] [rbp+C0h]
  __int64 v108; // [rsp+1D0h] [rbp+C8h]
  int *v109; // [rsp+1D8h] [rbp+D0h]
  __int64 v110; // [rsp+1E0h] [rbp+D8h]
  int *v111; // [rsp+1E8h] [rbp+E0h]
  __int64 v112; // [rsp+1F0h] [rbp+E8h]
  int *v113; // [rsp+1F8h] [rbp+F0h]
  __int64 v114; // [rsp+200h] [rbp+F8h]
  int *v115; // [rsp+208h] [rbp+100h]
  __int64 v116; // [rsp+210h] [rbp+108h]
  _DWORD *v117; // [rsp+218h] [rbp+110h]
  __int64 v118; // [rsp+220h] [rbp+118h]
  PVOID v119; // [rsp+228h] [rbp+120h]
  _DWORD v120[2]; // [rsp+230h] [rbp+128h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+238h] [rbp+130h] BYREF
  unsigned int *v122; // [rsp+258h] [rbp+150h]
  __int64 v123; // [rsp+260h] [rbp+158h]
  char v124[16]; // [rsp+268h] [rbp+160h] BYREF
  int *v125; // [rsp+278h] [rbp+170h]
  __int64 v126; // [rsp+280h] [rbp+178h]
  int *v127; // [rsp+288h] [rbp+180h]
  __int64 v128; // [rsp+290h] [rbp+188h]
  int *v129; // [rsp+298h] [rbp+190h]
  __int64 v130; // [rsp+2A0h] [rbp+198h]
  int *v131; // [rsp+2A8h] [rbp+1A0h]
  __int64 v132; // [rsp+2B0h] [rbp+1A8h]
  int *v133; // [rsp+2B8h] [rbp+1B0h]
  __int64 v134; // [rsp+2C0h] [rbp+1B8h]
  _DWORD *v135; // [rsp+2C8h] [rbp+1C0h]
  __int64 v136; // [rsp+2D0h] [rbp+1C8h]
  __int64 v137; // [rsp+2D8h] [rbp+1D0h]
  _DWORD v138[2]; // [rsp+2E0h] [rbp+1D8h] BYREF
  int *v139; // [rsp+2E8h] [rbp+1E0h]
  __int64 v140; // [rsp+2F0h] [rbp+1E8h]
  __int16 *v141; // [rsp+2F8h] [rbp+1F0h]
  __int64 v142; // [rsp+300h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v143; // [rsp+308h] [rbp+200h] BYREF
  unsigned int *p_ProcessId; // [rsp+328h] [rbp+220h]
  __int64 v145; // [rsp+330h] [rbp+228h]
  char v146[16]; // [rsp+338h] [rbp+230h] BYREF
  int *v147; // [rsp+348h] [rbp+240h]
  __int64 v148; // [rsp+350h] [rbp+248h]
  int *v149; // [rsp+358h] [rbp+250h]
  __int64 v150; // [rsp+360h] [rbp+258h]
  int *v151; // [rsp+368h] [rbp+260h]
  __int64 v152; // [rsp+370h] [rbp+268h]
  int *v153; // [rsp+378h] [rbp+270h]
  __int64 v154; // [rsp+380h] [rbp+278h]
  int *v155; // [rsp+388h] [rbp+280h]
  __int64 v156; // [rsp+390h] [rbp+288h]
  _DWORD *v157; // [rsp+398h] [rbp+290h]
  __int64 v158; // [rsp+3A0h] [rbp+298h]
  __int64 v159; // [rsp+3A8h] [rbp+2A0h]
  _DWORD v160[2]; // [rsp+3B0h] [rbp+2A8h] BYREF
  int *v161; // [rsp+3B8h] [rbp+2B0h]
  __int64 v162; // [rsp+3C0h] [rbp+2B8h]
  int *v163; // [rsp+3C8h] [rbp+2C0h]
  __int64 v164; // [rsp+3D0h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v165; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v166; // [rsp+3F8h] [rbp+2F0h]
  __int64 v167; // [rsp+400h] [rbp+2F8h]
  int *v168; // [rsp+408h] [rbp+300h]
  __int64 v169; // [rsp+410h] [rbp+308h]
  _DWORD *v170; // [rsp+418h] [rbp+310h]
  __int64 v171; // [rsp+420h] [rbp+318h]
  __int64 v172; // [rsp+428h] [rbp+320h]
  _DWORD v173[2]; // [rsp+430h] [rbp+328h] BYREF
  unsigned __int64 v174; // [rsp+438h] [rbp+330h]
  int v175; // [rsp+440h] [rbp+338h]
  int v176; // [rsp+444h] [rbp+33Ch]
  struct _EVENT_DATA_DESCRIPTOR v177; // [rsp+448h] [rbp+340h] BYREF
  int *v178; // [rsp+468h] [rbp+360h]
  __int64 v179; // [rsp+470h] [rbp+368h]
  int *v180; // [rsp+478h] [rbp+370h]
  __int64 v181; // [rsp+480h] [rbp+378h]
  _DWORD *v182; // [rsp+488h] [rbp+380h]
  __int64 v183; // [rsp+490h] [rbp+388h]
  __int64 v184; // [rsp+498h] [rbp+390h]
  _DWORD v185[2]; // [rsp+4A0h] [rbp+398h] BYREF
  _UNKNOWN *retaddr; // [rsp+4E0h] [rbp+3D8h] BYREF

  result = (struct _EX_RUNDOWN_REF *)&retaddr;
  memset(v90, 0, sizeof(v90));
  LODWORD(v57) = 0;
  v88 = 0LL;
  if ( *(_QWORD *)&qword_140E37658 && dword_140E375EC )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = (char *)KeAbPreAcquire((__int64)&qword_140E375D0, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E375D0, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E375D0, 0, v2, (__int64)&qword_140E375D0);
    if ( v2 )
      v2[10] = 1;
    v3 = *(_QWORD **)&qword_140E375B8;
    i = 0LL;
    while ( v3 )
    {
      i = (unsigned __int64)v3;
      v3 = (_QWORD *)*v3;
    }
    while ( i )
    {
      if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 32LL) )
      {
        v86 = *(_DWORD *)(i + 24);
        v179 = 4LL;
        v178 = &v86;
        v59 = *(_DWORD *)(i + 28);
        v180 = &v59;
        v182 = v185;
        v184 = *(_QWORD *)(i + 48);
        v185[0] = *(unsigned __int16 *)(i + 40);
        v181 = 4LL;
        v183 = 2LL;
        v185[1] = 0;
        tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&dword_140057D5C, v5, 1u, v53, v54, 6u, &v177);
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
    v9 = (_QWORD *)qword_140E375B0;
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
        if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 32LL) )
        {
          v60 = *(_DWORD *)(j + 24);
          v167 = 4LL;
          v166 = &v60;
          v61 = *(_DWORD *)(j + 28);
          v168 = &v61;
          v170 = v173;
          v172 = *(_QWORD *)(j + 48);
          v173[0] = *(unsigned __int16 *)(j + 40);
          v174 = k + 40;
          v14 = *(unsigned __int8 *)(k + 41);
          v169 = 4LL;
          v171 = 2LL;
          v173[1] = 0;
          v176 = 0;
          v175 = 4 * v14 + 8;
          tlgWriteEx_EtwWriteEx(v13, (unsigned __int8 *)&byte_140057CF9, v13, 1u, v53, v54, 7u, &v165);
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E375D0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E375D0);
    KeAbPostRelease((ULONG_PTR)&qword_140E375D0);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    MmAcquireLoadLock();
    v22 = (_QWORD *)qword_140E375C8;
    m = 0LL;
    while ( v22 )
    {
      m = (unsigned __int64)v22;
      v22 = (_QWORD *)*v22;
    }
    while ( m )
    {
      if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 32LL) )
      {
        v62 = *(_DWORD *)(m + 24);
        v93 = 4LL;
        v92 = &v62;
        v63 = *(_DWORD *)(m + 28);
        v94 = &v63;
        v64 = *(_DWORD *)(m + 32);
        v96 = &v64;
        v65 = *(_DWORD *)(m + 36);
        v98 = &v65;
        v66 = *(_DWORD *)(m + 40);
        v100 = &v66;
        v102 = v105;
        v104 = *(_QWORD *)(m + 56);
        v105[0] = *(unsigned __int16 *)(m + 48);
        v95 = 4LL;
        v97 = 4LL;
        v99 = 4LL;
        v101 = 4LL;
        v103 = 2LL;
        v105[1] = 0;
        tlgWriteEx_EtwWriteEx(v24, (unsigned __int8 *)&byte_140057991, v24, 1u, v53, v54, 9u, &v91);
      }
      v25 = *(_QWORD ***)(m + 8);
      v26 = m;
      if ( v25 )
      {
        v27 = *v25;
        for ( m = *(_QWORD *)(m + 8); v27; v27 = (_QWORD *)*v27 )
          m = (unsigned __int64)v27;
      }
      else
      {
        while ( 1 )
        {
          m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !m || *(_QWORD *)m == v26 )
            break;
          v26 = m;
        }
      }
    }
    for ( n = (PVOID *)PsLoadedModuleList; n != &PsLoadedModuleList; n = (PVOID *)*n )
    {
      if ( (unsigned int)MiIsActiveSystemHotPatch((__int64)n) )
      {
        MiGetBaseLoaderPortion((__int64)n);
        if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 32LL) )
        {
          v67 = *(_DWORD *)(v31 + 120);
          v108 = 4LL;
          v107 = &v67;
          v68 = *(_DWORD *)(v31 + 156);
          v109 = &v68;
          v69 = *((_DWORD *)n + 30);
          v111 = &v69;
          v70 = *((_DWORD *)n + 39);
          v113 = &v70;
          v71 = *(_DWORD *)(v30 + 272);
          v115 = &v71;
          v117 = v120;
          v119 = n[10];
          v120[0] = *((unsigned __int16 *)n + 36);
          v110 = 4LL;
          v112 = 4LL;
          v114 = 4LL;
          v116 = 4LL;
          v118 = 2LL;
          v120[1] = 0;
          tlgWriteEx_EtwWriteEx(v29, (unsigned __int8 *)&dword_140057904, v29, 1u, v53, v54, 9u, &v106);
        }
      }
    }
    MmReleaseLoadLock(CurrentThread);
    for ( result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(0LL);
          ;
          result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess((PVOID)v52) )
    {
      v52 = (__int64)result;
      if ( !result )
        break;
      v32 = result + 61;
      if ( ExAcquireRundownProtection_0(result + 61) )
      {
        KiStackAttachProcess((_KPROCESS *)v52, 0, (__int64)v90);
        v33 = *(_QWORD *)(v52 + 368);
        if ( (v33 & 1) != 0 )
        {
          P = 0LL;
          if ( (int)VslQueryActiveSecurePatches(v33, (struct _MDL **)&P, (unsigned int *)&v57) >= 0 && (_DWORD)v57 )
          {
            v36 = P;
            v37 = 0LL;
            v38 = 0LL;
            v39 = (unsigned int)v57;
            do
            {
              v40 = *(_QWORD *)&qword_140E37658;
              v58 = v36[2];
              if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 32LL) )
              {
                ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v52);
                v145 = 4LL;
                p_ProcessId = &ProcessId;
                tlgCreate1Sz_char((__int64)v146, (const CHAR *)(v52 + 824));
                v147 = &v73;
                v148 = 4LL;
                v150 = 4LL;
                v41 = *(_DWORD *)(v38 + v58);
                v74 = *(_DWORD *)(v38 + v58 + 4);
                v149 = &v74;
                v75 = *(_DWORD *)(v38 + v58 + 12);
                v151 = &v75;
                v76 = *(_DWORD *)(v38 + v58 + 16);
                v153 = &v76;
                v77 = *(_DWORD *)(v38 + v58 + 24);
                v155 = &v77;
                v73 = v41;
                v152 = 4LL;
                v154 = 4LL;
                v156 = 4LL;
                v42 = v36[1];
                v43 = *(unsigned __int16 *)(v37 + v42);
                v44 = *(_QWORD *)(v37 + v42 + 8);
                v157 = v160;
                v78 = *(_DWORD *)(v38 + v58 + 8);
                v161 = &v78;
                LOWORD(v55) = *(_WORD *)(v52 + 1772);
                v163 = &v55;
                v159 = v44;
                v160[0] = v43;
                v160[1] = v45;
                v158 = 2LL;
                v162 = 4LL;
                v164 = 2LL;
                tlgWriteEx_EtwWriteEx(v40, (unsigned __int8 *)&unk_140057AF0, v58, 1u, v53, v54, 0xDu, &v143);
              }
              v38 += 28LL;
              v37 += 16LL;
              --v39;
            }
            while ( v39 );
            v32 = (struct _EX_RUNDOWN_REF *)(v52 + 488);
            ExFreePoolWithTag(v36, 0);
          }
        }
        else
        {
          ProcessHotPatchContext = MiGetProcessHotPatchContext(v52, 0);
          if ( ProcessHotPatchContext )
          {
            MiFillLogProcessInfo(v52 + 1024, &v89, &v88);
            --CurrentThread->SpecialApcDisable;
            v47 = (char *)KeAbPreAcquire((__int64)(ProcessHotPatchContext + 2), 0LL);
            if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(ProcessHotPatchContext + 2, 0, v47, (__int64)(ProcessHotPatchContext + 2));
            if ( v47 )
              v47[10] = 1;
            v48 = (_QWORD *)*ProcessHotPatchContext;
            if ( (_QWORD *)*ProcessHotPatchContext != ProcessHotPatchContext )
            {
              do
              {
                v49 = *(_QWORD *)&qword_140E37658;
                if ( **(_DWORD **)&qword_140E37658 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E37658, 32LL) )
                {
                  v79 = (unsigned int)PsGetProcessId((PEPROCESS)v52);
                  v122 = &v79;
                  v123 = 4LL;
                  tlgCreate1Sz_char((__int64)v124, v88);
                  v50 = *((_DWORD *)v48 + 8);
                  v125 = &v80;
                  v81 = *((_DWORD *)v48 + 9);
                  v127 = &v81;
                  v82 = *((_DWORD *)v48 + 14);
                  v129 = &v82;
                  v83 = *((_DWORD *)v48 + 15);
                  v131 = &v83;
                  v84 = *((_DWORD *)v48 + 16);
                  v133 = &v84;
                  v135 = v138;
                  v137 = v48[6];
                  v138[0] = *((unsigned __int16 *)v48 + 20);
                  v85 = *((_DWORD *)v48 + 4);
                  v139 = &v85;
                  v56 = *(_WORD *)(v52 + 1772);
                  v141 = &v56;
                  v80 = v50;
                  v126 = 4LL;
                  v128 = 4LL;
                  v130 = 4LL;
                  v132 = 4LL;
                  v134 = 4LL;
                  v136 = 2LL;
                  v138[1] = 0;
                  v140 = 4LL;
                  v142 = 2LL;
                  tlgWriteEx_EtwWriteEx(v49, (unsigned __int8 *)&byte_140057A27, v51, 1u, v53, v54, 0xDu, &v121);
                }
                v48 = (_QWORD *)*v48;
              }
              while ( v48 != ProcessHotPatchContext );
              v32 = (struct _EX_RUNDOWN_REF *)(v52 + 488);
            }
            if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(ProcessHotPatchContext + 2);
            KeAbPostRelease((ULONG_PTR)(ProcessHotPatchContext + 2));
            v21 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v21
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
          }
        }
        KiUnstackDetachProcess((__int64)v90, 0, v34, v35);
        ExReleaseRundownProtection_0(v32);
      }
    }
  }
  return result;
}
