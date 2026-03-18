/*
 * XREFs of ObDuplicateObject @ 0x140843A40
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x1407CEC28 (CmpCreateEmptyHiveClone.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407EE544 (MiInitializePartitionSpecialPurposeMemory.c)
 *     PspCopyAndFixupParameters @ 0x14083C570 (PspCopyAndFixupParameters.c)
 *     NtDuplicateObject @ 0x140843860 (NtDuplicateObject.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     PspPropagateHandle @ 0x1409BB500 (PspPropagateHandle.c)
 *     DbgkpOpenHandles @ 0x140A3427C (DbgkpOpenHandles.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A6C040 (IoConvertFileHandleToKernelHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x14041DC70 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ObpIncrPointerCount @ 0x140431ED0 (ObpIncrPointerCount.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     ExpFreeTablePagedPool @ 0x1408517C0 (ExpFreeTablePagedPool.c)
 *     ExpGetHandleExtraInfo @ 0x140851804 (ExpGetHandleExtraInfo.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1408539A0 (ObpIncrementHandleCountEx.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409723BC (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateTablePagedPool @ 0x1409726F4 (ExpAllocateTablePagedPool.c)
 *     SeAuditHandleCreation @ 0x140984F00 (SeAuditHandleCreation.c)
 *     SeAuditHandleDuplication @ 0x140985E58 (SeAuditHandleDuplication.c)
 *     ObpCallPreOperationCallbacks @ 0x14099B9C0 (ObpCallPreOperationCallbacks.c)
 *     EtwTraceDuplicateHandle @ 0x140A422FC (EtwTraceDuplicateHandle.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  _BYTE *v37; // r13
  char *v38; // rbx
  int v39; // r12d
  PRKPROCESS v40; // r14
  char v41; // r14
  __int64 v42; // r12
  unsigned int v43; // edi
  __int64 v44; // rsi
  char v45; // al
  unsigned int Number; // ecx
  unsigned int v47; // eax
  unsigned int v48; // r12d
  unsigned int v49; // r13d
  unsigned __int64 v50; // rdi
  __int64 *v51; // rax
  __int64 *v52; // r14
  unsigned __int64 *v53; // r14
  unsigned __int64 v54; // rax
  int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // rbx
  PRKPROCESS v58; // r12
  int v59; // r14d
  char *v60; // r15
  BOOL v61; // ebx
  PRKPROCESS v62; // r13
  struct _EX_RUNDOWN_REF *v63; // rcx
  unsigned __int64 v64; // rtt
  unsigned __int64 v65; // rtt
  PVOID *v66; // r8
  unsigned __int64 v67; // rcx
  _QWORD *v69; // rdi
  PVOID *v70; // rax
  struct _EX_RUNDOWN_REF *v71; // rbx
  unsigned __int64 v72; // rtt
  PRKPROCESS v73; // r12
  __int64 v74; // r12
  volatile signed __int64 *v75; // rax
  volatile signed __int64 *v76; // rdi
  volatile signed __int64 v77; // rcx
  unsigned int v78; // r12d
  unsigned int v79; // eax
  bool v80; // si
  __int64 v81; // rcx
  int v82; // ebx
  int v83; // ebx
  unsigned int v84; // r12d
  volatile signed __int64 *p_SchedulerAssistLastYieldBoostTime; // rdi
  _QWORD *TablePagedPool; // rax
  bool v87; // zf
  _QWORD *v88; // rax
  unsigned int v89; // eax
  char v90; // si
  ULONG_PTR v91; // rdi
  __int64 *v92; // rax
  __int64 *v93; // r15
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  PRKPROCESS v97; // rbx
  char HandleTableEntrySlow; // r13
  unsigned __int64 v99; // r12
  __int64 *v100; // rax
  __int64 *v101; // r14
  PRKPROCESS v102; // r12
  __int64 v103; // rdx
  char v104; // al
  signed __int32 v105[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  bool v107; // [rsp+40h] [rbp-C0h]
  unsigned int v108; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v109; // [rsp+48h] [rbp-B8h]
  int v110; // [rsp+4Ch] [rbp-B4h]
  PRKPROCESS PROCESS; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v112; // [rsp+58h] [rbp-A8h]
  PRKPROCESS v113; // [rsp+60h] [rbp-A0h]
  __int64 v114; // [rsp+68h] [rbp-98h]
  __int64 v115; // [rsp+70h] [rbp-90h]
  int v116; // [rsp+78h] [rbp-88h]
  HANDLE Handle; // [rsp+80h] [rbp-80h]
  PVOID P[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v119; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v120; // [rsp+A0h] [rbp-60h]
  __int64 v121; // [rsp+A8h] [rbp-58h]
  __int64 v122; // [rsp+B0h] [rbp-50h]
  _BYTE *v123; // [rsp+B8h] [rbp-48h]
  __int64 *v124; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v125; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v126; // [rsp+D0h] [rbp-30h]
  int v127; // [rsp+D8h] [rbp-28h]
  _DWORD v128[2]; // [rsp+E0h] [rbp-20h] BYREF
  PRKPROCESS v129; // [rsp+E8h] [rbp-18h]
  PRKPROCESS v130; // [rsp+F0h] [rbp-10h]
  int v131; // [rsp+F8h] [rbp-8h]
  BOOL v132; // [rsp+FCh] [rbp-4h]
  PVOID Object; // [rsp+100h] [rbp+0h]
  __int64 v134; // [rsp+108h] [rbp+8h]
  __int64 v135; // [rsp+110h] [rbp+10h]
  int v136; // [rsp+118h] [rbp+18h]
  int v137; // [rsp+11Ch] [rbp+1Ch]
  PRKPROCESS *p_PROCESS; // [rsp+120h] [rbp+20h]
  _DWORD v139[2]; // [rsp+128h] [rbp+28h] BYREF
  PVOID v140; // [rsp+130h] [rbp+30h]
  __int64 v141; // [rsp+138h] [rbp+38h]
  __int64 v142; // [rsp+140h] [rbp+40h]
  _DWORD *v143; // [rsp+148h] [rbp+48h]
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v145[160]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v146[224]; // [rsp+220h] [rbp+120h] BYREF

  v8 = a3;
  Handle = a2;
  PROCESS = (PRKPROCESS)a1;
  v113 = a3;
  v124 = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v146, 0, sizeof(v146));
  memset_0(v145, 0, sizeof(v145));
  v108 = 0;
  *(_OWORD *)P = 0LL;
  if ( (a6 & 0x200) != 0 && !a8 )
  {
    v8 = PsInitialSystemProcess;
    v113 = PsInitialSystemProcess;
  }
  v11 = a6 & 0xFFFFFDFF;
  v109 = a6 & 0xFFFFFDFF;
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
  v112 = CurrentThread;
  if ( (int)Handle >= 0 )
    goto LABEL_11;
  if ( Handle == (HANDLE)-1LL )
  {
    v26 = (char *)PROCESS;
    v115 = 0LL;
    v22 = 0x1FFFFF;
    v24 = 0;
    ObpTraceObjectReferenceIfActive((_DWORD)PROCESS - 48);
    ObpIncrPointerCount((volatile signed __int64 *)&PROCESS[-1].ExtendedFeatureDisableMask);
LABEL_25:
    v112 = v26;
    goto LABEL_26;
  }
  if ( Handle != (HANDLE)-2LL )
  {
    if ( a8 )
      goto LABEL_137;
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
            {
              CurrentThread = (struct _KTHREAD *)v112;
              goto LABEL_136;
            }
            ExpBlockOnLockedHandleEntry(v16, v19);
          }
        }
        while ( v20 != _InterlockedCompareExchange64(v19, v20 - 1, v20) );
        HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v19);
        v22 = v19[1] & 0x1FFFFFF;
        if ( *(_DWORD *)(v16 + 4) && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(v16, v18)) != 0LL )
          v115 = *HandleExtraInfo;
        else
          v115 = 0LL;
        v24 = ((__int64)*(unsigned int *)v19 >> 17) & 7 | 8;
        if ( (v19[1] & 0x2000000) == 0 )
          v24 = ((__int64)*(unsigned int *)v19 >> 17) & 7;
        v25 = _InterlockedIncrement64(HandlePointer);
        if ( v25 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, v25);
        _InterlockedIncrement64(v19);
        _InterlockedOr(v105, 0);
        if ( *(_QWORD *)(v16 + 48) )
          ExfUnblockPushLock(v16 + 48, 0LL);
        KeLeaveCriticalRegionThread((__int64)v112);
        ObpTraceObjectReferenceIfActive((int)HandlePointer);
        v26 = (char *)(HandlePointer + 6);
        v11 = v109;
        goto LABEL_25;
      }
    }
LABEL_136:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
LABEL_137:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
    return 3221225480LL;
  }
  p_SchedulerAssistLastYieldBoostTime = &CurrentThread[-1].SchedulerAssistLastYieldBoostTime;
  v115 = 0LL;
  v22 = 0x1FFFFF;
  v24 = 0;
  ObpTraceObjectReferenceIfActive((_DWORD)CurrentThread - 48);
  ObpIncrPointerCount(p_SchedulerAssistLastYieldBoostTime);
  v26 = (char *)v112;
LABEL_26:
  v27 = 0;
  if ( (v24 & 4) == 0 )
    LODWORD(v115) = 0;
  v28 = (struct _EX_RUNDOWN_REF *)v113;
  if ( !v113 )
  {
    v102 = PROCESS;
    if ( (a7 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      NtClose(Handle);
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    }
    else
    {
      v27 = -1073741811;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v102[1].ProfileListHead.Blink);
    ObfDereferenceObjectWithTag(v26, 0x6E48624Fu);
    return v27;
  }
  p_Blink = (struct _EX_RUNDOWN_REF *)&v113[1].ProfileListHead.Blink;
  _m_prefetchw(&v113[1].ProfileListHead.Blink);
  v30 = (unsigned __int64)v113[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)&v113[1].ProfileListHead.Blink, v30 + 2, v30)
    && !ExfAcquireRundownProtection(v28 + 61) )
  {
    goto LABEL_116;
  }
  Count = v28[96].Count;
  if ( !Count )
  {
    ExReleaseRundownProtection_0(p_Blink);
LABEL_116:
    v73 = PROCESS;
    if ( (a7 & 1) != 0 )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      NtClose(Handle);
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v73[1].ProfileListHead.Blink);
    ObfDereferenceObjectWithTag(v26, 0x6E48624Fu);
    return 3221225738LL;
  }
  v107 = Count == ObpKernelHandleTable;
  if ( (a7 & 2) != 0 )
    v12 = v22;
  if ( (a7 & 4) != 0 )
    v32 = v24;
  else
    v32 = v24 & 0xC | v11;
  v109 = v32;
  v33 = v32 | 8;
  v121 = (__int64)(v26 - 48);
  if ( (a7 & 8) == 0 )
    v33 = v109;
  v34 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v26 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v26 - 48) >> 8)];
  v122 = v34;
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
  v108 = v36;
  v123 = 0LL;
  if ( (~v22 & v36) == 0 )
  {
    v38 = (char *)v112;
LABEL_49:
    LOBYTE(BugCheckParameter4) = a8;
    v39 = ObpIncrementHandleCountEx(2LL, &v108, v113, v38, BugCheckParameter4, v33, 0LL);
    v110 = v39;
    goto LABEL_50;
  }
  if ( (v24 & 8) != 0 || *(_UNKNOWN **)(v34 + 152) != &SeDefaultObjectMethod )
  {
    v38 = (char *)v112;
    v39 = -1073741790;
    v110 = -1073741790;
    goto LABEL_53;
  }
  if ( KeGetCurrentThread()->ApcState.Process != v113 )
  {
    KeStackAttachProcess(v113, &ApcState);
    v35 = 1;
  }
  SeCreateAccessState(v145, v146, v108, v122 + 76);
  v38 = (char *)v112;
  v37 = v145;
  v123 = v145;
  v110 = ObpGrantAccess(2LL, v112, v145, a8, v33, &v108);
  v39 = v110;
  if ( v110 >= 0 )
    goto LABEL_49;
LABEL_50:
  if ( v35 )
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  v36 = v108;
LABEL_53:
  v40 = PROCESS;
  if ( (a7 & 1) != 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    NtClose(Handle);
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
    v36 = v108;
  }
  if ( v39 < 0 )
  {
    if ( v37 )
      SeDeleteAccessState(v37);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v40[1].ProfileListHead.Blink);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v113[1].ProfileListHead.Blink);
    ObfDereferenceObjectWithTag(v38, 0x6E48624Fu);
    return (unsigned int)v39;
  }
  v109 = v33;
  v41 = v33;
  if ( v37 )
  {
    v87 = v37[10] == 0;
    v109 = v33;
    if ( !v87 )
    {
      v96 = *((_QWORD *)v37 + 9);
      v41 = v33 | 4;
      v109 = v33 | 4;
      LODWORD(v115) = *(_DWORD *)(v96 + 28);
    }
  }
  P[1] = P;
  P[0] = P;
  if ( (*(_BYTE *)(v122 + 66) & 0x40) != 0 && *(_QWORD *)(v122 + 200) != v122 + 200 )
  {
    v80 = v107;
    v81 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v38 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v38 - 48) >> 8)];
    v82 = *(_DWORD *)(v81 + 96);
    v143 = v128;
    v83 = v36 & v82;
    v140 = v112;
    v139[1] = v107;
    v142 = 0LL;
    v130 = v113;
    v139[0] = 2;
    v141 = v81;
    v128[1] = v36;
    v128[0] = v36;
    v129 = PROCESS;
    v110 = ObpCallPreOperationCallbacks(v81, v139, P);
    v84 = v110;
    if ( v110 >= 0 && !v80 )
    {
      v36 &= v83 | v128[0];
LABEL_142:
      v108 = v36;
      goto LABEL_58;
    }
    if ( v110 < 0 )
    {
      v97 = v113;
      ObpDecrementHandleCount(v113);
      if ( v37 )
        SeDeleteAccessState(v37);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v97[1].ProfileListHead.Blink);
      ObfDereferenceObjectWithTag(v112, 0x6E48624Fu);
      return v84;
    }
    if ( !v80 )
      goto LABEL_142;
    v36 = v108;
  }
LABEL_58:
  v42 = v121;
  v43 = v36 & 0x1FFFFFF;
  v126 = v43;
  v125 = (v121 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v41 & 7) << 17);
  if ( (v41 & 8) != 0 )
    v43 |= 0x2000000u;
  LODWORD(v126) = v43;
  v120 = KeGetCurrentThread();
  v44 = 0LL;
  v125 = (v121 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v41 & 7) << 17) | 1;
  --v120->KernelApcDisable;
  v45 = *(_BYTE *)(Count + 44);
  if ( (v45 & 4) != 0 )
  {
    v57 = (__int64)v120;
    goto LABEL_84;
  }
  if ( (v45 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v47 = ExpFreeListCount;
  v48 = Number;
  v116 = ExpFreeListCount;
  v119 = Number;
LABEL_64:
  v49 = 0;
  v127 = *(_DWORD *)Count;
  while ( 1 )
  {
    if ( v49 >= v47 )
    {
      LODWORD(v114) = v119;
      HandleTableEntrySlow = 1;
      v99 = Count + ((v119 + 1LL) << 6);
      v100 = KeAbPreAcquire(Count + 56, 0LL);
      v101 = v100;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 56), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 56), v100, Count + 56);
      if ( v101 )
        *((_BYTE *)v101 + 10) = 1;
      if ( v127 == *(_DWORD *)Count )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(Count, v99);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Count + 56));
      KeAbPostRelease(Count + 56);
      if ( !HandleTableEntrySlow )
        goto LABEL_176;
      v48 = v114;
      v47 = v116;
      goto LABEL_64;
    }
    v50 = Count + ((v48 + 1LL) << 6);
    if ( *(_QWORD *)(v50 + 8) )
    {
      v51 = KeAbPreAcquire(Count + ((v48 + 1LL) << 6), 0LL);
      v52 = v51;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v50, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + ((v48 + 1LL) << 6)), v51, Count + ((v48 + 1LL) << 6));
      if ( v52 )
        *((_BYTE *)v52 + 10) = 1;
      v53 = *(unsigned __int64 **)(v50 + 8);
      if ( v53 )
      {
        v54 = v53[1];
        *(_QWORD *)(v50 + 8) = v54;
        if ( !v54 )
          *(_QWORD *)(v50 + 16) = 0LL;
        v55 = ++*(_DWORD *)(v50 + 24);
        if ( v55 > *(_DWORD *)(v50 + 28) )
          *(_DWORD *)(v50 + 28) = v55;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Count + ((v48 + 1LL) << 6)));
      KeAbPostRelease(Count + ((v48 + 1LL) << 6));
      if ( v53 )
        break;
    }
    v78 = v48 + 1;
    v79 = 0;
    ++v49;
    if ( v78 != v116 )
      v79 = v78;
    v48 = v79;
    v47 = v116;
  }
  v44 = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v53 - ((unsigned __int64)v53 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  v56 = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFF000uLL) + 8)
      + 4 * ((__int64)((__int64)v53 - ((unsigned __int64)v53 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( v115 )
  {
    HIDWORD(v114) = (unsigned __int64)(*(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFF000uLL) + 8)
                                     + 4
                                     * ((__int64)((__int64)v53 - ((unsigned __int64)v53 & 0xFFFFFFFFFFFFF000uLL)) >> 4)) >> 32;
    LODWORD(v114) = v56 & 0xFFFFFC03;
    v74 = (unsigned __int8)(v56 >> 2);
    v75 = (volatile signed __int64 *)ExpLookupHandleTableEntry(Count, v114);
    v76 = v75;
    if ( v75 )
    {
      v77 = *v75;
      if ( *v75 )
        goto LABEL_121;
      TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*(_QWORD *)(Count + 16), 2048LL);
      if ( TablePagedPool )
      {
        if ( !_InterlockedCompareExchange64(v76, (signed __int64)TablePagedPool, 0LL) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(Count + 4));
          TablePagedPool[v74] = v115;
          goto LABEL_80;
        }
        ExpFreeTablePagedPool(*(_QWORD *)(Count + 16), TablePagedPool, 0x800uLL);
        v77 = *v76;
        if ( *v76 )
        {
LABEL_121:
          *(_QWORD *)(v77 + 8 * v74) = v115;
          goto LABEL_80;
        }
      }
    }
    v114 = v44;
    v87 = *(_DWORD *)(Count + 4) == 0;
    LODWORD(v114) = v44 & 0xFFFFFFFC;
    if ( !v87 )
    {
      v88 = (_QWORD *)ExpGetHandleExtraInfo(Count, v114);
      if ( v88 )
        *v88 = 0LL;
    }
    v89 = 0;
    v53[1] = 0LL;
    v90 = *(_BYTE *)(Count + 44) & 1;
    if ( !v90 )
      v89 = KeGetPcr()->Prcb.Number;
    v91 = Count + ((v89 + 1LL) << 6);
    v92 = KeAbPreAcquire(v91, 0LL);
    v93 = v92;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v91, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v91, v92, v91);
    if ( v93 )
      *((_BYTE *)v93 + 10) = 1;
    if ( v90 )
    {
      v95 = *(_QWORD *)(v91 + 16);
      if ( v95 )
        *(_QWORD *)(v95 + 8) = v53;
      else
        *(_QWORD *)(v91 + 8) = v53;
      *(_QWORD *)(v91 + 16) = v53;
    }
    else
    {
      v94 = *(_QWORD *)(v91 + 8);
      v53[1] = v94;
      if ( !v94 )
        *(_QWORD *)(v91 + 16) = v53;
      *(_QWORD *)(v91 + 8) = v53;
    }
    --*(_DWORD *)(v91 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v91);
    KeAbPostRelease(v91);
    v44 = 0LL;
LABEL_176:
    v57 = (__int64)v120;
    goto LABEL_83;
  }
LABEL_80:
  v57 = (__int64)v120;
  if ( *(_QWORD *)(Count + 96) )
    ExpUpdateDebugInfo(Count, v120, v44, 1LL);
  v53[1] = v126;
  *v53 = v125;
LABEL_83:
  v37 = v123;
  v41 = v109;
  v42 = v121;
LABEL_84:
  KeLeaveCriticalRegionThread(v57);
  if ( v44 )
  {
    if ( v37 )
    {
      OBJECT_HEADER_TO_AUDIT_INFO(v42);
      SeAuditHandleCreation((__int64)v37);
    }
    if ( (v41 & 4) != 0 )
    {
      if ( v37 )
      {
        v103 = *((_QWORD *)v37 + 4);
        if ( !v103 )
          v103 = *((_QWORD *)v37 + 6);
      }
      else
      {
        v103 = 0LL;
      }
      v104 = SeAuditingWithTokenForSubcategory(124LL, v103);
      v58 = v113;
      if ( v104 )
        SeAuditHandleDuplication(Handle, v44, PROCESS, v113);
    }
    else
    {
      v58 = v113;
    }
    v59 = v110;
    v60 = (char *)v112;
  }
  else
  {
    v58 = v113;
    ObpDecrementHandleCount(v113);
    v60 = (char *)v112;
    ObfDereferenceObjectWithTag(v112, 0x6E48624Fu);
    v59 = -1073741670;
  }
  v61 = v107;
  if ( v107 )
    v44 |= 0xFFFFFFFF80000000uLL;
  if ( v124 )
    *v124 = v44;
  if ( v37 )
    SeDeleteAccessState(v37);
  v62 = PROCESS;
  v63 = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
  _m_prefetchw(&PROCESS[1].ProfileListHead.Blink);
  v64 = v63->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v64 != _InterlockedCompareExchange64((volatile signed __int64 *)v63, v64 - 2, v64) )
    ExfReleaseRundownProtection(v63);
  _m_prefetchw(&v58[1].ProfileListHead.Blink);
  v65 = (unsigned __int64)v58[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v65 != _InterlockedCompareExchange64((volatile signed __int64 *)&v58[1].ProfileListHead.Blink, v65 - 2, v65) )
    ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&v58[1].ProfileListHead.Blink);
  v66 = (PVOID *)P[0];
  if ( P[0] != P )
  {
    v135 = 0LL;
    p_PROCESS = &PROCESS;
    v67 = (unsigned __int8)*(v60 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v60 - 48) >> 8);
    v137 = 0;
    v131 = 2;
    v132 = v61;
    Object = v60;
    v136 = v59;
    v134 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v67];
    LODWORD(PROCESS) = v108;
    while ( v66 != P )
    {
      v69 = P[1];
      v70 = (PVOID *)*((_QWORD *)P[1] + 1);
      if ( *(PVOID **)P[1] != P || *v70 != P[1] )
        __fastfail(3u);
      P[1] = *((PVOID *)P[1] + 1);
      *v70 = P;
      v71 = (struct _EX_RUNDOWN_REF *)v69[2];
      v135 = v69[3];
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v71[3].Count + 8));
      _m_prefetchw(&v71[7]);
      v72 = v71[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v72 != _InterlockedCompareExchange64((volatile signed __int64 *)&v71[7], v72 - 2, v72) )
        ExfReleaseRundownProtection(v71 + 7);
      ExFreePoolWithTag(v69, 0);
      v66 = (PVOID *)P[0];
    }
    ObfDereferenceObjectWithTag(Object, 0x6243624Fu);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( (xmmword_140FC5B10 & 0x40) != 0 && v59 >= 0 )
    EtwTraceDuplicateHandle(
      (_DWORD)Handle,
      v44,
      (_DWORD)v60,
      v62[1].Header.WaitListHead.Flink,
      v58[1].Header.WaitListHead.Flink,
      v122);
  return (unsigned int)v59;
}
