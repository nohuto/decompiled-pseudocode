/*
 * XREFs of ObDuplicateObject @ 0x14083C270
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x1407DEA60 (CmpCreateEmptyHiveClone.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FEB44 (MiInitializePartitionSpecialPurposeMemory.c)
 *     NtDuplicateObject @ 0x14083C090 (NtDuplicateObject.c)
 *     PspCopyAndFixupParameters @ 0x1408DF930 (PspCopyAndFixupParameters.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     PspPropagateHandle @ 0x140A275D4 (PspPropagateHandle.c)
 *     DbgkpOpenHandles @ 0x140A2E57C (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A676F0 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x14040ED00 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ObpIncrPointerCount @ 0x14041C5D0 (ObpIncrPointerCount.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeCreateAccessState @ 0x14083B750 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     ExpFreeTablePagedPool @ 0x1408497A4 (ExpFreeTablePagedPool.c)
 *     ExpGetHandleExtraInfo @ 0x1408497E8 (ExpGetHandleExtraInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     ObpIncrementHandleCountEx @ 0x14084BE20 (ObpIncrementHandleCountEx.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     SeAuditHandleCreation @ 0x140862770 (SeAuditHandleCreation.c)
 *     SeAuditHandleDuplication @ 0x140863C90 (SeAuditHandleDuplication.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1408F2E10 (SeAuditingWithTokenForSubcategory.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14094D498 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateTablePagedPool @ 0x14094D7D0 (ExpAllocateTablePagedPool.c)
 *     ObpCallPreOperationCallbacks @ 0x140977CD0 (ObpCallPreOperationCallbacks.c)
 *     EtwTraceDuplicateHandle @ 0x140A3C190 (EtwTraceDuplicateHandle.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObDuplicateObject(
        __int64 a1,
        void *a2,
        struct _KPROCESS *a3,
        __int64 *a4,
        int a5,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  PEPROCESS v8; // rbx
  unsigned int v11; // esi
  int v12; // r13d
  int v13; // eax
  struct _EX_RUNDOWN_REF *v14; // rbx
  unsigned __int64 v15; // rtt
  __int64 v16; // r14
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v18; // r12
  signed __int64 *v19; // rdi
  signed __int64 v20; // r8
  volatile signed __int64 *HandlePointer; // rsi
  int v22; // ebx
  __int64 *HandleExtraInfo; // rax
  int v24; // r12d
  signed __int64 v25; // rax
  char *v26; // r14
  unsigned int v27; // edi
  struct _EX_RUNDOWN_REF *v28; // r15
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  unsigned __int64 v30; // rtt
  unsigned __int64 Count; // r15
  int v32; // esi
  int v33; // esi
  __int64 v34; // rax
  char v35; // r14
  int v36; // edi
  _QWORD *v37; // r13
  char *v38; // rbx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // r12d
  PRKPROCESS v42; // r14
  __int64 v43; // r8
  __int64 v44; // r9
  char v45; // r14
  __int64 v46; // r12
  unsigned int v47; // edi
  __int64 v48; // rsi
  char v49; // al
  unsigned int Number; // ecx
  unsigned int v51; // eax
  unsigned int v52; // r12d
  unsigned int v53; // r13d
  unsigned __int64 v54; // rdi
  char *v55; // rax
  char *v56; // r14
  unsigned __int64 *v57; // r14
  unsigned __int64 v58; // rax
  int v59; // eax
  unsigned int v60; // eax
  PRKPROCESS v61; // r12
  int v62; // r14d
  char *v63; // r15
  BOOL v64; // ebx
  PRKPROCESS v65; // r13
  struct _EX_RUNDOWN_REF *v66; // rcx
  unsigned __int64 v67; // rtt
  unsigned __int64 v68; // rtt
  PVOID *v69; // r8
  unsigned __int64 v70; // rcx
  _QWORD *v72; // rdi
  PVOID *v73; // rax
  struct _EX_RUNDOWN_REF *v74; // rbx
  unsigned __int64 v75; // rtt
  PRKPROCESS v76; // r12
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r12
  volatile signed __int64 *v80; // rax
  volatile signed __int64 *v81; // rdi
  volatile signed __int64 v82; // rcx
  unsigned int v83; // r12d
  unsigned int v84; // eax
  bool v85; // si
  __int64 v86; // rcx
  int v87; // ebx
  int v88; // ebx
  unsigned int v89; // r12d
  volatile signed __int64 *p_SchedulerAssistLastYieldBoostTime; // rdi
  _QWORD *TablePagedPool; // rax
  bool v92; // zf
  _QWORD *v93; // rax
  unsigned int v94; // eax
  char v95; // r12
  ULONG_PTR v96; // rdi
  char *v97; // rax
  char *v98; // rsi
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  PRKPROCESS v102; // rbx
  char HandleTableEntrySlow; // r13
  unsigned __int64 v104; // r12
  char *v105; // rax
  char *v106; // r14
  PRKPROCESS v107; // r12
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  char v111; // al
  signed __int32 v112[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  bool v114; // [rsp+40h] [rbp-C0h]
  int v115; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v116; // [rsp+48h] [rbp-B8h]
  int v117; // [rsp+4Ch] [rbp-B4h]
  PRKPROCESS PROCESS; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v119; // [rsp+58h] [rbp-A8h]
  PRKPROCESS v120; // [rsp+60h] [rbp-A0h]
  __int64 v121; // [rsp+68h] [rbp-98h]
  __int64 v122; // [rsp+70h] [rbp-90h]
  int v123; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h]
  PVOID P[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v126; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v127; // [rsp+A0h] [rbp-60h]
  __int64 v128; // [rsp+A8h] [rbp-58h]
  __int64 v129; // [rsp+B0h] [rbp-50h]
  _QWORD *v130; // [rsp+B8h] [rbp-48h]
  __int64 *v131; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v132; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v133; // [rsp+D0h] [rbp-30h]
  int v134; // [rsp+D8h] [rbp-28h]
  _DWORD v135[2]; // [rsp+E0h] [rbp-20h] BYREF
  PRKPROCESS v136; // [rsp+E8h] [rbp-18h]
  PRKPROCESS v137; // [rsp+F0h] [rbp-10h]
  _DWORD v138[2]; // [rsp+F8h] [rbp-8h] BYREF
  PVOID Object; // [rsp+100h] [rbp+0h]
  __int64 v140; // [rsp+108h] [rbp+8h]
  __int64 v141; // [rsp+110h] [rbp+10h]
  int v142; // [rsp+118h] [rbp+18h]
  int v143; // [rsp+11Ch] [rbp+1Ch]
  PRKPROCESS *p_PROCESS; // [rsp+120h] [rbp+20h]
  _DWORD v145[2]; // [rsp+128h] [rbp+28h] BYREF
  PVOID v146; // [rsp+130h] [rbp+30h]
  __int64 v147; // [rsp+138h] [rbp+38h]
  __int64 v148; // [rsp+140h] [rbp+40h]
  _DWORD *v149; // [rsp+148h] [rbp+48h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v151[20]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v152[28]; // [rsp+220h] [rbp+120h] BYREF

  v8 = a3;
  Handle = a2;
  PROCESS = (PRKPROCESS)a1;
  v120 = a3;
  v131 = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v152, 0, sizeof(v152));
  memset_0(v151, 0, sizeof(v151));
  v115 = 0;
  *(_OWORD *)P = 0LL;
  if ( (a6 & 0x200) != 0 && !a8 )
  {
    v8 = PsInitialSystemProcess;
    v120 = PsInitialSystemProcess;
  }
  v11 = a6 & 0xFFFFFDFF;
  v116 = a6 & 0xFFFFFDFF;
  if ( a4 )
    *a4 = 0LL;
  v12 = a5;
  if ( (a7 & 2) == 0 && (a5 & 0xCE00000) != 0 )
    return 3221225506LL;
  v13 = *(_DWORD *)(a1 + 368) & 1;
  if ( !v8 )
  {
    if ( !(_BYTE)v13 )
      goto LABEL_8;
    return 3221225506LL;
  }
  if ( !(_BYTE)v13 && (v8->SecureState.SecureHandle & 1) == 0 )
    goto LABEL_8;
  if ( (_KPROCESS *)a1 != KeGetCurrentThread()->ApcState.Process )
    return 3221225506LL;
  if ( v8 != KeGetCurrentThread()->ApcState.Process )
    return 3221225506LL;
LABEL_8:
  v14 = (struct _EX_RUNDOWN_REF *)(a1 + 488);
  _m_prefetchw((const void *)(a1 + 488));
  v15 = *(_QWORD *)(a1 + 488) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 488), v15 + 2, v15)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 488)) )
  {
    return 3221225738LL;
  }
  v16 = *(_QWORD *)(a1 + 768);
  if ( !v16 )
  {
    ExReleaseRundownProtection_0(v14);
    return 3221225738LL;
  }
  CurrentThread = KeGetCurrentThread();
  v18 = (unsigned __int64)Handle;
  v119 = CurrentThread;
  if ( (int)Handle >= 0 )
    goto LABEL_11;
  if ( Handle == (HANDLE)-1LL )
  {
    v26 = (char *)PROCESS;
    v122 = 0LL;
    v22 = 0x1FFFFF;
    v24 = 0;
    ObpTraceObjectReferenceIfActive((_DWORD)PROCESS - 48);
    ObpIncrPointerCount((volatile signed __int64 *)&PROCESS[-1].ExtendedFeatureDisableMask);
LABEL_25:
    v119 = v26;
    goto LABEL_26;
  }
  if ( Handle != (HANDLE)-2LL )
  {
    if ( a8 )
      goto LABEL_136;
    v16 = ObpKernelHandleTable;
    v18 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
LABEL_11:
    --CurrentThread->KernelApcDisable;
    if ( (v18 & 0x3FC) != 0 )
    {
      v19 = (signed __int64 *)ExpLookupHandleTableEntry(v16, v18);
      if ( v19 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v19);
            v20 = *v19;
            if ( (*v19 & 1) != 0 )
              break;
            if ( !v20 )
              goto LABEL_135;
            ExpBlockOnLockedHandleEntry(v16, v19);
          }
        }
        while ( v20 != _InterlockedCompareExchange64(v19, v20 - 1, v20) );
        HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v19);
        v22 = v19[1] & 0x1FFFFFF;
        if ( *(_DWORD *)(v16 + 4) && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(v16, v18)) != 0LL )
          v122 = *HandleExtraInfo;
        else
          v122 = 0LL;
        v24 = ((__int64)*(unsigned int *)v19 >> 17) & 7 | 8;
        if ( (v19[1] & 0x2000000) == 0 )
          v24 = ((__int64)*(unsigned int *)v19 >> 17) & 7;
        v25 = _InterlockedIncrement64(HandlePointer);
        if ( v25 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, v25);
        _InterlockedIncrement64(v19);
        _InterlockedOr(v112, 0);
        if ( *(_QWORD *)(v16 + 48) )
          ExfUnblockPushLock(v16 + 48, 0LL);
        KeLeaveCriticalRegionThread();
        ObpTraceObjectReferenceIfActive((int)HandlePointer);
        v26 = (char *)(HandlePointer + 6);
        v11 = v116;
        goto LABEL_25;
      }
    }
LABEL_135:
    KeLeaveCriticalRegionThread();
LABEL_136:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
    return 3221225480LL;
  }
  p_SchedulerAssistLastYieldBoostTime = &CurrentThread[-1].SchedulerAssistLastYieldBoostTime;
  v122 = 0LL;
  v22 = 0x1FFFFF;
  v24 = 0;
  ObpTraceObjectReferenceIfActive((_DWORD)CurrentThread - 48);
  ObpIncrPointerCount(p_SchedulerAssistLastYieldBoostTime);
  v26 = (char *)v119;
LABEL_26:
  v27 = 0;
  if ( (v24 & 4) == 0 )
    LODWORD(v122) = 0;
  v28 = (struct _EX_RUNDOWN_REF *)v120;
  if ( !v120 )
  {
    v107 = PROCESS;
    if ( (a7 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      NtClose(Handle);
      KiUnstackDetachProcess((__int64)&ApcState, 0, v108, v109);
    }
    else
    {
      v27 = -1073741811;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v107[1].ProfileListHead.Blink);
    ObfDereferenceObjectWithTag(v26, 0x6E48624Fu);
    return v27;
  }
  p_Blink = (struct _EX_RUNDOWN_REF *)&v120[1].ProfileListHead.Blink;
  _m_prefetchw(&v120[1].ProfileListHead.Blink);
  v30 = (unsigned __int64)v120[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)&v120[1].ProfileListHead.Blink, v30 + 2, v30)
    && !ExfAcquireRundownProtection(v28 + 61) )
  {
    goto LABEL_116;
  }
  Count = v28[96].Count;
  if ( !Count )
  {
    ExReleaseRundownProtection_0(p_Blink);
LABEL_116:
    v76 = PROCESS;
    if ( (a7 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      NtClose(Handle);
      KiUnstackDetachProcess((__int64)&ApcState, 0, v77, v78);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v76[1].ProfileListHead.Blink);
    ObfDereferenceObjectWithTag(v26, 0x6E48624Fu);
    return 3221225738LL;
  }
  v114 = Count == ObpKernelHandleTable;
  if ( (a7 & 2) != 0 )
    v12 = v22;
  if ( (a7 & 4) != 0 )
    v32 = v24;
  else
    v32 = v24 & 0xC | v11;
  v116 = v32;
  v33 = v32 | 8;
  v128 = (__int64)(v26 - 48);
  if ( (a7 & 8) == 0 )
    v33 = v116;
  v34 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v26 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v26 - 48) >> 8)];
  v129 = v34;
  if ( (v12 & 0xF0000000) != 0 )
  {
    if ( v12 < 0 )
      v12 |= *(_DWORD *)(v34 + 76);
    if ( (v12 & 0x40000000) != 0 )
      v12 |= *(_DWORD *)(v34 + 80);
    if ( (v12 & 0x20000000) != 0 )
      v12 |= *(_DWORD *)(v34 + 84);
    if ( (v12 & 0x10000000) != 0 )
      v12 |= *(_DWORD *)(v34 + 88);
    v12 &= 0xFFFFFFFu;
  }
  v35 = 0;
  v36 = v12 & (*(_DWORD *)(v34 + 92) | 0x1000000);
  v37 = 0LL;
  v115 = v36;
  v130 = 0LL;
  if ( (~v22 & v36) == 0 )
  {
    v38 = (char *)v119;
LABEL_49:
    LOBYTE(BugCheckParameter4) = a8;
    v41 = ObpIncrementHandleCountEx(2LL, &v115, v120, v38, BugCheckParameter4, v33, 0LL);
    v117 = v41;
    goto LABEL_50;
  }
  if ( (v24 & 8) != 0 || *(_UNKNOWN **)(v34 + 152) != &SeDefaultObjectMethod )
  {
    v38 = (char *)v119;
    v41 = -1073741790;
    v117 = -1073741790;
    goto LABEL_53;
  }
  if ( KeGetCurrentThread()->ApcState.Process != v120 )
  {
    KeStackAttachProcess(v120, &ApcState);
    v35 = 1;
  }
  SeCreateAccessState(v151, v152, v115, (_DWORD *)(v129 + 76));
  v38 = (char *)v119;
  v37 = v151;
  v130 = v151;
  v117 = ObpGrantAccess(2LL, v119, v151, a8, v33, &v115);
  v41 = v117;
  if ( v117 >= 0 )
    goto LABEL_49;
LABEL_50:
  if ( v35 )
    KiUnstackDetachProcess((__int64)&ApcState, 0, v39, v40);
  v36 = v115;
LABEL_53:
  v42 = PROCESS;
  if ( (a7 & 1) != 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    NtClose(Handle);
    KiUnstackDetachProcess((__int64)&ApcState, 0, v43, v44);
    v36 = v115;
  }
  if ( v41 < 0 )
  {
    if ( v37 )
      SeDeleteAccessState(v37);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v42[1].ProfileListHead.Blink);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v120[1].ProfileListHead.Blink);
    ObfDereferenceObjectWithTag(v38, 0x6E48624Fu);
    return (unsigned int)v41;
  }
  v116 = v33;
  v45 = v33;
  if ( v37 )
  {
    v92 = *((_BYTE *)v37 + 10) == 0;
    v116 = v33;
    if ( !v92 )
    {
      v101 = v37[9];
      v45 = v33 | 4;
      v116 = v33 | 4;
      LODWORD(v122) = *(_DWORD *)(v101 + 28);
    }
  }
  P[1] = P;
  P[0] = P;
  if ( (*(_BYTE *)(v129 + 66) & 0x40) != 0 && *(_QWORD *)(v129 + 200) != v129 + 200 )
  {
    v85 = v114;
    v86 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v38 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v38 - 48) >> 8)];
    v87 = *(_DWORD *)(v86 + 96);
    v149 = v135;
    v88 = v36 & v87;
    v146 = v119;
    v145[1] = v114;
    v148 = 0LL;
    v137 = v120;
    v145[0] = 2;
    v147 = v86;
    v135[1] = v36;
    v135[0] = v36;
    v136 = PROCESS;
    v117 = ObpCallPreOperationCallbacks(v86, v145, P);
    v89 = v117;
    if ( v117 < 0 || v85 )
    {
      if ( v117 < 0 )
      {
        v102 = v120;
        ObpDecrementHandleCount(v120);
        if ( v37 )
          SeDeleteAccessState(v37);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v102[1].ProfileListHead.Blink);
        ObfDereferenceObjectWithTag(v119, 0x6E48624Fu);
        return v89;
      }
      if ( v85 )
      {
        v36 = v115;
        goto LABEL_58;
      }
    }
    else
    {
      v36 &= v88 | v135[0];
    }
    v115 = v36;
  }
LABEL_58:
  v46 = v128;
  v47 = v36 & 0x1FFFFFF;
  v133 = v47;
  v132 = (v128 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v45 & 7) << 17);
  if ( (v45 & 8) != 0 )
    v47 |= 0x2000000u;
  LODWORD(v133) = v47;
  v127 = KeGetCurrentThread();
  v48 = 0LL;
  v132 = (v128 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v45 & 7) << 17) | 1;
  --v127->KernelApcDisable;
  v49 = *(_BYTE *)(Count + 44);
  if ( (v49 & 4) == 0 )
  {
    if ( (v49 & 1) != 0 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v51 = ExpFreeListCount;
    v52 = Number;
    v123 = ExpFreeListCount;
    v126 = Number;
LABEL_64:
    v53 = 0;
    v134 = *(_DWORD *)Count;
    while ( 1 )
    {
      if ( v53 >= v51 )
      {
        LODWORD(v121) = v126;
        HandleTableEntrySlow = 1;
        v104 = Count + ((v126 + 1LL) << 6);
        v105 = (char *)KeAbPreAcquire(Count + 56, 0LL);
        v106 = v105;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 56), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 56), v105, Count + 56);
        if ( v106 )
          v106[10] = 1;
        if ( v134 == *(_DWORD *)Count )
          HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(Count, v104);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(Count + 56));
        KeAbPostRelease(Count + 56);
        if ( HandleTableEntrySlow )
        {
          v52 = v121;
          v51 = v123;
          goto LABEL_64;
        }
        goto LABEL_83;
      }
      v54 = Count + ((v52 + 1LL) << 6);
      if ( *(_QWORD *)(v54 + 8) )
      {
        v55 = (char *)KeAbPreAcquire(Count + ((v52 + 1LL) << 6), 0LL);
        v56 = v55;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v54, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)(Count + ((v52 + 1LL) << 6)),
            v55,
            Count + ((v52 + 1LL) << 6));
        if ( v56 )
          v56[10] = 1;
        v57 = *(unsigned __int64 **)(v54 + 8);
        if ( v57 )
        {
          v58 = v57[1];
          *(_QWORD *)(v54 + 8) = v58;
          if ( !v58 )
            *(_QWORD *)(v54 + 16) = 0LL;
          v59 = ++*(_DWORD *)(v54 + 24);
          if ( v59 > *(_DWORD *)(v54 + 28) )
            *(_DWORD *)(v54 + 28) = v59;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v54, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(Count + ((v52 + 1LL) << 6)));
        KeAbPostRelease(Count + ((v52 + 1LL) << 6));
        if ( v57 )
          break;
      }
      v83 = v52 + 1;
      v84 = 0;
      ++v53;
      if ( v83 != v123 )
        v84 = v83;
      v52 = v84;
      v51 = v123;
    }
    v48 = *(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFF000uLL) + 8)
        + 4 * ((__int64)((__int64)v57 - ((unsigned __int64)v57 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
    v60 = *(_DWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFF000uLL) + 8)
        + 4 * ((__int64)((__int64)v57 - ((unsigned __int64)v57 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
    if ( !v122 )
    {
LABEL_80:
      if ( *(_QWORD *)(Count + 96) )
        ExpUpdateDebugInfo(Count, v127, v48, 1LL);
      v57[1] = v133;
      *v57 = v132;
      goto LABEL_83;
    }
    HIDWORD(v121) = (unsigned __int64)(*(_QWORD *)(((unsigned __int64)v57 & 0xFFFFFFFFFFFFF000uLL) + 8)
                                     + 4
                                     * ((__int64)((__int64)v57 - ((unsigned __int64)v57 & 0xFFFFFFFFFFFFF000uLL)) >> 4)) >> 32;
    LODWORD(v121) = v60 & 0xFFFFFC03;
    v79 = (unsigned __int8)(v60 >> 2);
    v80 = (volatile signed __int64 *)ExpLookupHandleTableEntry(Count, v121);
    v81 = v80;
    if ( v80 )
    {
      v82 = *v80;
      if ( *v80 )
        goto LABEL_121;
      TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*(_QWORD *)(Count + 16), 2048LL);
      if ( TablePagedPool )
      {
        if ( !_InterlockedCompareExchange64(v81, (signed __int64)TablePagedPool, 0LL) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(Count + 4));
          TablePagedPool[v79] = v122;
          goto LABEL_80;
        }
        ExpFreeTablePagedPool(*(_QWORD *)(Count + 16), TablePagedPool, 0x800uLL);
        v82 = *v81;
        if ( *v81 )
        {
LABEL_121:
          *(_QWORD *)(v82 + 8 * v79) = v122;
          goto LABEL_80;
        }
      }
    }
    v121 = v48;
    v92 = *(_DWORD *)(Count + 4) == 0;
    LODWORD(v121) = v48 & 0xFFFFFFFC;
    if ( !v92 )
    {
      v93 = (_QWORD *)ExpGetHandleExtraInfo(Count, v121);
      if ( v93 )
        *v93 = 0LL;
    }
    v94 = 0;
    v57[1] = 0LL;
    v95 = *(_BYTE *)(Count + 44) & 1;
    if ( !v95 )
      v94 = KeGetPcr()->Prcb.Number;
    v96 = Count + ((v94 + 1LL) << 6);
    v97 = (char *)KeAbPreAcquire(v96, 0LL);
    v98 = v97;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v96, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v96, v97, v96);
    if ( v98 )
      v98[10] = 1;
    if ( v95 )
    {
      v100 = *(_QWORD *)(v96 + 16);
      if ( v100 )
        *(_QWORD *)(v100 + 8) = v57;
      else
        *(_QWORD *)(v96 + 8) = v57;
      *(_QWORD *)(v96 + 16) = v57;
    }
    else
    {
      v99 = *(_QWORD *)(v96 + 8);
      v57[1] = v99;
      if ( !v99 )
        *(_QWORD *)(v96 + 16) = v57;
      *(_QWORD *)(v96 + 8) = v57;
    }
    --*(_DWORD *)(v96 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v96, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v96);
    KeAbPostRelease(v96);
    v48 = 0LL;
LABEL_83:
    v37 = v130;
    v45 = v116;
    v46 = v128;
  }
  KeLeaveCriticalRegionThread();
  if ( v48 )
  {
    if ( v37 )
    {
      OBJECT_HEADER_TO_AUDIT_INFO(v46);
      SeAuditHandleCreation((__int64)v37);
    }
    if ( (v45 & 4) != 0 )
    {
      if ( v37 )
      {
        v110 = v37[4];
        if ( !v110 )
          v110 = v37[6];
      }
      else
      {
        v110 = 0LL;
      }
      v111 = SeAuditingWithTokenForSubcategory(124LL, v110);
      v61 = v120;
      if ( v111 )
        SeAuditHandleDuplication(Handle, v48, PROCESS, v120);
    }
    else
    {
      v61 = v120;
    }
    v62 = v117;
    v63 = (char *)v119;
  }
  else
  {
    v61 = v120;
    ObpDecrementHandleCount(v120);
    v63 = (char *)v119;
    ObfDereferenceObjectWithTag(v119, 0x6E48624Fu);
    v62 = -1073741670;
  }
  v64 = v114;
  if ( v114 )
    v48 |= 0xFFFFFFFF80000000uLL;
  if ( v131 )
    *v131 = v48;
  if ( v37 )
    SeDeleteAccessState(v37);
  v65 = PROCESS;
  v66 = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
  _m_prefetchw(&PROCESS[1].ProfileListHead.Blink);
  v67 = v66->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v67 != _InterlockedCompareExchange64((volatile signed __int64 *)v66, v67 - 2, v67) )
    ExfReleaseRundownProtection(v66);
  _m_prefetchw(&v61[1].ProfileListHead.Blink);
  v68 = (unsigned __int64)v61[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v68 != _InterlockedCompareExchange64((volatile signed __int64 *)&v61[1].ProfileListHead.Blink, v68 - 2, v68) )
    ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&v61[1].ProfileListHead.Blink);
  v69 = (PVOID *)P[0];
  if ( P[0] != P )
  {
    v141 = 0LL;
    p_PROCESS = &PROCESS;
    v70 = (unsigned __int8)*(v63 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v63 - 48) >> 8);
    v143 = 0;
    v138[0] = 2;
    v138[1] = v64;
    Object = v63;
    v142 = v62;
    v140 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v70];
    LODWORD(PROCESS) = v115;
    while ( v69 != P )
    {
      v72 = P[1];
      v73 = (PVOID *)*((_QWORD *)P[1] + 1);
      if ( *(PVOID **)P[1] != P || *v73 != P[1] )
        __fastfail(3u);
      P[1] = *((PVOID *)P[1] + 1);
      *v73 = P;
      v74 = (struct _EX_RUNDOWN_REF *)v72[2];
      v141 = v72[3];
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v74[3].Count + 8), v138);
      _m_prefetchw(&v74[7]);
      v75 = v74[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v75 != _InterlockedCompareExchange64((volatile signed __int64 *)&v74[7], v75 - 2, v75) )
        ExfReleaseRundownProtection(v74 + 7);
      ExFreePoolWithTag(v72, 0);
      v69 = (PVOID *)P[0];
    }
    ObfDereferenceObjectWithTag(Object, 0x6243624Fu);
    KeLeaveCriticalRegionThread();
  }
  if ( (xmmword_140FC6B50 & 0x40) != 0 && v62 >= 0 )
    EtwTraceDuplicateHandle(
      (_DWORD)Handle,
      v48,
      (_DWORD)v63,
      v65[1].Header.WaitListHead.Flink,
      v61[1].Header.WaitListHead.Flink,
      v129);
  return (unsigned int)v62;
}
