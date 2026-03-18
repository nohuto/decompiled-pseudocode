/*
 * XREFs of MiLogHotPatchRundown @ 0x1407E463C
 * Callers:
 *     MiTracingEnabledCallback @ 0x140A99DB0 (MiTracingEnabledCallback.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MmAcquireLoadLock @ 0x14036CED0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     MiFillLogProcessInfo @ 0x140448538 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404A1010 (_tlgWriteEx_EtwWriteEx.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     VslQueryActiveSecurePatches @ 0x14058A370 (VslQueryActiveSecurePatches.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiGetProcessHotPatchContext @ 0x1407E2C38 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x1407E38BC (MiIsActiveSystemHotPatch.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

struct _EX_RUNDOWN_REF *MiLogHotPatchRundown()
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v2; // rbx
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
  _QWORD *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // r12
  int v39; // ecx
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rcx
  int v43; // r9d
  _QWORD *ProcessHotPatchContext; // r14
  __int64 *v45; // rsi
  _QWORD *v46; // rsi
  __int64 v47; // r12
  int v48; // ecx
  __int64 v49; // r8
  __int64 v50; // rbx
  int v51; // [rsp+28h] [rbp-E0h]
  int v52; // [rsp+30h] [rbp-D8h]
  int v53; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v54; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v55; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-B0h]
  int v57; // [rsp+60h] [rbp-A8h] BYREF
  int v58; // [rsp+64h] [rbp-A4h] BYREF
  int v59; // [rsp+68h] [rbp-A0h] BYREF
  int v60; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v61; // [rsp+70h] [rbp-98h] BYREF
  int v62; // [rsp+74h] [rbp-94h] BYREF
  int v63; // [rsp+78h] [rbp-90h] BYREF
  int v64; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v65; // [rsp+80h] [rbp-88h] BYREF
  int v66; // [rsp+84h] [rbp-84h] BYREF
  int v67; // [rsp+88h] [rbp-80h] BYREF
  int v68; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v69; // [rsp+90h] [rbp-78h] BYREF
  unsigned int ProcessId; // [rsp+94h] [rbp-74h] BYREF
  int v71; // [rsp+98h] [rbp-70h] BYREF
  int v72; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v73; // [rsp+A0h] [rbp-68h] BYREF
  int v74; // [rsp+A4h] [rbp-64h] BYREF
  int v75; // [rsp+A8h] [rbp-60h] BYREF
  int v76; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v77; // [rsp+B0h] [rbp-58h] BYREF
  int v78; // [rsp+B4h] [rbp-54h] BYREF
  int v79; // [rsp+B8h] [rbp-50h] BYREF
  int v80; // [rsp+BCh] [rbp-4Ch] BYREF
  int v81; // [rsp+C0h] [rbp-48h] BYREF
  int v82; // [rsp+C4h] [rbp-44h] BYREF
  int v83; // [rsp+C8h] [rbp-40h] BYREF
  int v84; // [rsp+CCh] [rbp-3Ch] BYREF
  PVOID P; // [rsp+D0h] [rbp-38h] BYREF
  const CHAR *v86; // [rsp+D8h] [rbp-30h] BYREF
  int v87; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v88[3]; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+118h] [rbp+10h] BYREF
  int *v90; // [rsp+138h] [rbp+30h]
  __int64 v91; // [rsp+140h] [rbp+38h]
  int *v92; // [rsp+148h] [rbp+40h]
  __int64 v93; // [rsp+150h] [rbp+48h]
  int *v94; // [rsp+158h] [rbp+50h]
  __int64 v95; // [rsp+160h] [rbp+58h]
  int *v96; // [rsp+168h] [rbp+60h]
  __int64 v97; // [rsp+170h] [rbp+68h]
  int *v98; // [rsp+178h] [rbp+70h]
  __int64 v99; // [rsp+180h] [rbp+78h]
  _DWORD *v100; // [rsp+188h] [rbp+80h]
  __int64 v101; // [rsp+190h] [rbp+88h]
  __int64 v102; // [rsp+198h] [rbp+90h]
  _DWORD v103[2]; // [rsp+1A0h] [rbp+98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v105; // [rsp+1C8h] [rbp+C0h]
  __int64 v106; // [rsp+1D0h] [rbp+C8h]
  int *v107; // [rsp+1D8h] [rbp+D0h]
  __int64 v108; // [rsp+1E0h] [rbp+D8h]
  int *v109; // [rsp+1E8h] [rbp+E0h]
  __int64 v110; // [rsp+1F0h] [rbp+E8h]
  int *v111; // [rsp+1F8h] [rbp+F0h]
  __int64 v112; // [rsp+200h] [rbp+F8h]
  int *v113; // [rsp+208h] [rbp+100h]
  __int64 v114; // [rsp+210h] [rbp+108h]
  _DWORD *v115; // [rsp+218h] [rbp+110h]
  __int64 v116; // [rsp+220h] [rbp+118h]
  PVOID v117; // [rsp+228h] [rbp+120h]
  _DWORD v118[2]; // [rsp+230h] [rbp+128h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v119; // [rsp+238h] [rbp+130h] BYREF
  unsigned int *v120; // [rsp+258h] [rbp+150h]
  __int64 v121; // [rsp+260h] [rbp+158h]
  char v122[16]; // [rsp+268h] [rbp+160h] BYREF
  int *v123; // [rsp+278h] [rbp+170h]
  __int64 v124; // [rsp+280h] [rbp+178h]
  int *v125; // [rsp+288h] [rbp+180h]
  __int64 v126; // [rsp+290h] [rbp+188h]
  int *v127; // [rsp+298h] [rbp+190h]
  __int64 v128; // [rsp+2A0h] [rbp+198h]
  int *v129; // [rsp+2A8h] [rbp+1A0h]
  __int64 v130; // [rsp+2B0h] [rbp+1A8h]
  int *v131; // [rsp+2B8h] [rbp+1B0h]
  __int64 v132; // [rsp+2C0h] [rbp+1B8h]
  _DWORD *v133; // [rsp+2C8h] [rbp+1C0h]
  __int64 v134; // [rsp+2D0h] [rbp+1C8h]
  __int64 v135; // [rsp+2D8h] [rbp+1D0h]
  _DWORD v136[2]; // [rsp+2E0h] [rbp+1D8h] BYREF
  int *v137; // [rsp+2E8h] [rbp+1E0h]
  __int64 v138; // [rsp+2F0h] [rbp+1E8h]
  __int16 *v139; // [rsp+2F8h] [rbp+1F0h]
  __int64 v140; // [rsp+300h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v141; // [rsp+308h] [rbp+200h] BYREF
  unsigned int *p_ProcessId; // [rsp+328h] [rbp+220h]
  __int64 v143; // [rsp+330h] [rbp+228h]
  char v144[16]; // [rsp+338h] [rbp+230h] BYREF
  int *v145; // [rsp+348h] [rbp+240h]
  __int64 v146; // [rsp+350h] [rbp+248h]
  int *v147; // [rsp+358h] [rbp+250h]
  __int64 v148; // [rsp+360h] [rbp+258h]
  int *v149; // [rsp+368h] [rbp+260h]
  __int64 v150; // [rsp+370h] [rbp+268h]
  int *v151; // [rsp+378h] [rbp+270h]
  __int64 v152; // [rsp+380h] [rbp+278h]
  int *v153; // [rsp+388h] [rbp+280h]
  __int64 v154; // [rsp+390h] [rbp+288h]
  _DWORD *v155; // [rsp+398h] [rbp+290h]
  __int64 v156; // [rsp+3A0h] [rbp+298h]
  __int64 v157; // [rsp+3A8h] [rbp+2A0h]
  _DWORD v158[2]; // [rsp+3B0h] [rbp+2A8h] BYREF
  int *v159; // [rsp+3B8h] [rbp+2B0h]
  __int64 v160; // [rsp+3C0h] [rbp+2B8h]
  int *v161; // [rsp+3C8h] [rbp+2C0h]
  __int64 v162; // [rsp+3D0h] [rbp+2C8h]
  struct _EVENT_DATA_DESCRIPTOR v163; // [rsp+3D8h] [rbp+2D0h] BYREF
  int *v164; // [rsp+3F8h] [rbp+2F0h]
  __int64 v165; // [rsp+400h] [rbp+2F8h]
  int *v166; // [rsp+408h] [rbp+300h]
  __int64 v167; // [rsp+410h] [rbp+308h]
  _DWORD *v168; // [rsp+418h] [rbp+310h]
  __int64 v169; // [rsp+420h] [rbp+318h]
  __int64 v170; // [rsp+428h] [rbp+320h]
  _DWORD v171[2]; // [rsp+430h] [rbp+328h] BYREF
  unsigned __int64 v172; // [rsp+438h] [rbp+330h]
  int v173; // [rsp+440h] [rbp+338h]
  int v174; // [rsp+444h] [rbp+33Ch]
  struct _EVENT_DATA_DESCRIPTOR v175; // [rsp+448h] [rbp+340h] BYREF
  int *v176; // [rsp+468h] [rbp+360h]
  __int64 v177; // [rsp+470h] [rbp+368h]
  int *v178; // [rsp+478h] [rbp+370h]
  __int64 v179; // [rsp+480h] [rbp+378h]
  _DWORD *v180; // [rsp+488h] [rbp+380h]
  __int64 v181; // [rsp+490h] [rbp+388h]
  __int64 v182; // [rsp+498h] [rbp+390h]
  _DWORD v183[2]; // [rsp+4A0h] [rbp+398h] BYREF
  _UNKNOWN *retaddr; // [rsp+4E0h] [rbp+3D8h] BYREF

  result = (struct _EX_RUNDOWN_REF *)&retaddr;
  memset(v88, 0, sizeof(v88));
  LODWORD(v55) = 0;
  v86 = 0LL;
  if ( *(_QWORD *)&qword_140E372D8 && dword_140E3726C )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = KeAbPreAcquire((__int64)&qword_140E37250, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37250, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E37250, 0, v2, (unsigned __int64)&qword_140E37250);
    if ( v2 )
      *((_BYTE *)v2 + 10) = 1;
    v3 = *(_QWORD **)&qword_140E37238;
    i = 0LL;
    while ( v3 )
    {
      i = (unsigned __int64)v3;
      v3 = (_QWORD *)*v3;
    }
    while ( i )
    {
      if ( **(_DWORD **)&qword_140E372D8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E372D8, 32LL) )
      {
        v84 = *(_DWORD *)(i + 24);
        v177 = 4LL;
        v176 = &v84;
        v57 = *(_DWORD *)(i + 28);
        v178 = &v57;
        v180 = v183;
        v182 = *(_QWORD *)(i + 48);
        v183[0] = *(unsigned __int16 *)(i + 40);
        v179 = 4LL;
        v181 = 2LL;
        v183[1] = 0;
        tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&word_140055D72, v5, 1u, v51, v52, 6u, &v175);
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
    v9 = (_QWORD *)qword_140E37230;
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
        if ( **(_DWORD **)&qword_140E372D8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E372D8, 32LL) )
        {
          v58 = *(_DWORD *)(j + 24);
          v165 = 4LL;
          v164 = &v58;
          v59 = *(_DWORD *)(j + 28);
          v166 = &v59;
          v168 = v171;
          v170 = *(_QWORD *)(j + 48);
          v171[0] = *(unsigned __int16 *)(j + 40);
          v172 = k + 40;
          v14 = *(unsigned __int8 *)(k + 41);
          v167 = 4LL;
          v169 = 2LL;
          v171[1] = 0;
          v174 = 0;
          v173 = 4 * v14 + 8;
          tlgWriteEx_EtwWriteEx(v13, (unsigned __int8 *)&byte_140055D0F, v13, 1u, v51, v52, 7u, &v163);
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37250, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E37250);
    KeAbPostRelease((ULONG_PTR)&qword_140E37250);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    MmAcquireLoadLock();
    v22 = (_QWORD *)qword_140E37248;
    m = 0LL;
    while ( v22 )
    {
      m = (unsigned __int64)v22;
      v22 = (_QWORD *)*v22;
    }
    while ( m )
    {
      if ( **(_DWORD **)&qword_140E372D8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E372D8, 32LL) )
      {
        v60 = *(_DWORD *)(m + 24);
        v91 = 4LL;
        v90 = &v60;
        v61 = *(_DWORD *)(m + 28);
        v92 = &v61;
        v62 = *(_DWORD *)(m + 32);
        v94 = &v62;
        v63 = *(_DWORD *)(m + 36);
        v96 = &v63;
        v64 = *(_DWORD *)(m + 40);
        v98 = &v64;
        v100 = v103;
        v102 = *(_QWORD *)(m + 56);
        v103[0] = *(unsigned __int16 *)(m + 48);
        v93 = 4LL;
        v95 = 4LL;
        v97 = 4LL;
        v99 = 4LL;
        v101 = 2LL;
        v103[1] = 0;
        tlgWriteEx_EtwWriteEx(v24, (unsigned __int8 *)&word_140055E52, v24, 1u, v51, v52, 9u, &v89);
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
        if ( **(_DWORD **)&qword_140E372D8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E372D8, 32LL) )
        {
          v65 = *(_DWORD *)(v31 + 120);
          v106 = 4LL;
          v105 = &v65;
          v66 = *(_DWORD *)(v31 + 156);
          v107 = &v66;
          v67 = *((_DWORD *)n + 30);
          v109 = &v67;
          v68 = *((_DWORD *)n + 39);
          v111 = &v68;
          v69 = *(_DWORD *)(v30 + 272);
          v113 = &v69;
          v115 = v118;
          v117 = n[10];
          v118[0] = *((unsigned __int16 *)n + 36);
          v108 = 4LL;
          v110 = 4LL;
          v112 = 4LL;
          v114 = 4LL;
          v116 = 2LL;
          v118[1] = 0;
          tlgWriteEx_EtwWriteEx(v29, (unsigned __int8 *)&byte_140055DC5, v29, 1u, v51, v52, 9u, &v104);
        }
      }
    }
    MmReleaseLoadLock(CurrentThread);
    for ( result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(0LL);
          ;
          result = (struct _EX_RUNDOWN_REF *)PsGetNextProcess((PVOID)v50) )
    {
      v50 = (__int64)result;
      if ( !result )
        break;
      v32 = result + 61;
      if ( ExAcquireRundownProtection_0(result + 61) )
      {
        KiStackAttachProcess((_KPROCESS *)v50, 0, (__int64)v88);
        v33 = *(_QWORD *)(v50 + 368);
        if ( (v33 & 1) != 0 )
        {
          P = 0LL;
          if ( (int)VslQueryActiveSecurePatches(v33, (struct _MDL **)&P, (unsigned int *)&v55) >= 0 && (_DWORD)v55 )
          {
            v34 = P;
            v35 = 0LL;
            v36 = 0LL;
            v37 = (unsigned int)v55;
            do
            {
              v38 = *(_QWORD *)&qword_140E372D8;
              v56 = v34[2];
              if ( **(_DWORD **)&qword_140E372D8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E372D8, 32LL) )
              {
                ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v50);
                v143 = 4LL;
                p_ProcessId = &ProcessId;
                tlgCreate1Sz_char((__int64)v144, (const CHAR *)(v50 + 824));
                v145 = &v71;
                v146 = 4LL;
                v148 = 4LL;
                v39 = *(_DWORD *)(v36 + v56);
                v72 = *(_DWORD *)(v36 + v56 + 4);
                v147 = &v72;
                v73 = *(_DWORD *)(v36 + v56 + 12);
                v149 = &v73;
                v74 = *(_DWORD *)(v36 + v56 + 16);
                v151 = &v74;
                v75 = *(_DWORD *)(v36 + v56 + 24);
                v153 = &v75;
                v71 = v39;
                v150 = 4LL;
                v152 = 4LL;
                v154 = 4LL;
                v40 = v34[1];
                v41 = *(unsigned __int16 *)(v35 + v40);
                v42 = *(_QWORD *)(v35 + v40 + 8);
                v155 = v158;
                v76 = *(_DWORD *)(v36 + v56 + 8);
                v159 = &v76;
                LOWORD(v53) = *(_WORD *)(v50 + 1772);
                v161 = &v53;
                v157 = v42;
                v158[0] = v41;
                v158[1] = v43;
                v156 = 2LL;
                v160 = 4LL;
                v162 = 2LL;
                tlgWriteEx_EtwWriteEx(v38, (unsigned __int8 *)&byte_140055B9D, v56, 1u, v51, v52, 0xDu, &v141);
              }
              v36 += 28LL;
              v35 += 16LL;
              --v37;
            }
            while ( v37 );
            v32 = (struct _EX_RUNDOWN_REF *)(v50 + 488);
            ExFreePoolWithTag(v34, 0);
          }
        }
        else
        {
          ProcessHotPatchContext = MiGetProcessHotPatchContext(v50, 0);
          if ( ProcessHotPatchContext )
          {
            MiFillLogProcessInfo(v50 + 1024, &v87, &v86);
            --CurrentThread->SpecialApcDisable;
            v45 = KeAbPreAcquire((__int64)(ProcessHotPatchContext + 2), 0LL);
            if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                ProcessHotPatchContext + 2,
                0,
                v45,
                (unsigned __int64)(ProcessHotPatchContext + 2));
            if ( v45 )
              *((_BYTE *)v45 + 10) = 1;
            v46 = (_QWORD *)*ProcessHotPatchContext;
            if ( (_QWORD *)*ProcessHotPatchContext != ProcessHotPatchContext )
            {
              do
              {
                v47 = *(_QWORD *)&qword_140E372D8;
                if ( **(_DWORD **)&qword_140E372D8 > 5u && tlgKeywordOn(*(__int64 *)&qword_140E372D8, 32LL) )
                {
                  v77 = (unsigned int)PsGetProcessId((PEPROCESS)v50);
                  v120 = &v77;
                  v121 = 4LL;
                  tlgCreate1Sz_char((__int64)v122, v86);
                  v48 = *((_DWORD *)v46 + 8);
                  v123 = &v78;
                  v79 = *((_DWORD *)v46 + 9);
                  v125 = &v79;
                  v80 = *((_DWORD *)v46 + 14);
                  v127 = &v80;
                  v81 = *((_DWORD *)v46 + 15);
                  v129 = &v81;
                  v82 = *((_DWORD *)v46 + 16);
                  v131 = &v82;
                  v133 = v136;
                  v135 = v46[6];
                  v136[0] = *((unsigned __int16 *)v46 + 20);
                  v83 = *((_DWORD *)v46 + 4);
                  v137 = &v83;
                  v54 = *(_WORD *)(v50 + 1772);
                  v139 = &v54;
                  v78 = v48;
                  v124 = 4LL;
                  v126 = 4LL;
                  v128 = 4LL;
                  v130 = 4LL;
                  v132 = 4LL;
                  v134 = 2LL;
                  v136[1] = 0;
                  v138 = 4LL;
                  v140 = 2LL;
                  tlgWriteEx_EtwWriteEx(v47, (unsigned __int8 *)&dword_140055AD4, v49, 1u, v51, v52, 0xDu, &v119);
                }
                v46 = (_QWORD *)*v46;
              }
              while ( v46 != ProcessHotPatchContext );
              v32 = (struct _EX_RUNDOWN_REF *)(v50 + 488);
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
        KiUnstackDetachProcess((__int64)v88, 0LL);
        ExReleaseRundownProtection_0(v32);
      }
    }
  }
  return result;
}
