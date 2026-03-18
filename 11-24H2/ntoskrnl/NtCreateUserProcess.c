/*
 * XREFs of NtCreateUserProcess @ 0x140ACBA80
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x14045E7E4 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E56E0 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x1406A9E10 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x140792B0C (SeDuplicateTokenWithPredictedClaims.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408A26C0 (FsRtlFreeExtraCreateParameterList.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PspBuildCreateProcessContext @ 0x1408A2E70 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x1408A4758 (PspDeleteCreateProcessContext.c)
 *     PspAllocateThread @ 0x1408A49BC (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspGetMemoryPartitionContext @ 0x1408E7414 (PspGetMemoryPartitionContext.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
 *     IoCreateFileEx @ 0x14096CAC0 (IoCreateFileEx.c)
 *     PspCreateUserProcessEcp @ 0x14099DC68 (PspCreateUserProcessEcp.c)
 *     SeQueryServerSiloToken @ 0x1409BA940 (SeQueryServerSiloToken.c)
 *     PsRestoreImpersonation @ 0x1409D6E80 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x1409DE810 (PsDisableImpersonation.c)
 *     PspCaptureProcessParameters @ 0x1409DEA20 (PspCaptureProcessParameters.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E85CC (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1409E8628 (PspCheckForInvalidAccessByProtection.c)
 *     PspCreateObjectHandle @ 0x140A0C160 (PspCreateObjectHandle.c)
 *     PspCreateUserContext @ 0x140A156EC (PspCreateUserContext.c)
 *     PspReferenceTokenForNewProcess @ 0x140A1B954 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x140A1BB40 (SeQuerySigningPolicy.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PspMapThreadCreationFlags @ 0x140A20384 (PspMapThreadCreationFlags.c)
 *     PspUpdateCreateInfo @ 0x140A33320 (PspUpdateCreateInfo.c)
 *     PspCaptureCreateInfo @ 0x140A3D520 (PspCaptureCreateInfo.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A4A930 (PspEstimateNewProcessServerSilo.c)
 *     PspGetProcessParameterOverrides @ 0x140A50170 (PspGetProcessParameterOverrides.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140A56770 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspIsSiloInSilo @ 0x140A57A74 (PspIsSiloInSilo.c)
 *     PspDeleteMemoryPartitionContext @ 0x140A6EB58 (PspDeleteMemoryPartitionContext.c)
 *     PspValidateCreateProcessProtection @ 0x140A8BA34 (PspValidateCreateProcessProtection.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140AAF038 (SeDuplicateTokenAndAddOriginClaim.c)
 *     MmCreateSpecialImageSection @ 0x140AE6B20 (MmCreateSpecialImageSection.c)
 */

__int64 __fastcall NtCreateUserProcess(
        HANDLE *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        unsigned __int64 a10,
        _QWORD *a11)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbx
  char PreviousMode; // r15
  unsigned int v14; // r13d
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int Info; // esi
  KPROCESSOR_MODE v23; // r14
  char v24; // bl
  __int64 v25; // rcx
  int v26; // eax
  char v27; // r12
  ULONG v28; // eax
  int v29; // ecx
  char v30; // bl
  int v31; // esi
  int v32; // eax
  int v33; // ecx
  int v34; // r13d
  BOOLEAN v35; // r12
  int v36; // eax
  int v37; // ecx
  unsigned __int8 v38; // bl
  __int64 v39; // rcx
  char v40; // bl
  int v41; // r9d
  __int64 v42; // rcx
  __int64 *v43; // r13
  unsigned int v44; // esi
  int v45; // ecx
  int *v46; // r12
  unsigned __int64 v47; // rax
  void *v48; // rsp
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r12
  unsigned int v53; // r8d
  int v54; // esi
  __int64 v55; // rax
  int inserted; // ebx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 ProcessServerSilo; // rax
  _OWORD *v64; // rax
  KPROCESSOR_MODE v65; // dl
  int v66; // [rsp+80h] [rbp+0h] BYREF
  __int16 v67; // [rsp+84h] [rbp+4h] BYREF
  char v68; // [rsp+86h] [rbp+6h] BYREF
  bool v69; // [rsp+87h] [rbp+7h]
  char v70; // [rsp+88h] [rbp+8h]
  char v71; // [rsp+89h] [rbp+9h] BYREF
  char v72; // [rsp+8Ah] [rbp+Ah]
  int SystemArgument1[3]; // [rsp+8Ch] [rbp+Ch] BYREF
  char v74; // [rsp+98h] [rbp+18h]
  __int16 v75; // [rsp+9Ch] [rbp+1Ch] BYREF
  char v76[4]; // [rsp+A0h] [rbp+20h] BYREF
  PVOID v77; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v78; // [rsp+B0h] [rbp+30h] BYREF
  int v79; // [rsp+B8h] [rbp+38h]
  unsigned int v80; // [rsp+BCh] [rbp+3Ch]
  __int64 v81; // [rsp+C0h] [rbp+40h]
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  struct _KTHREAD *v83; // [rsp+D0h] [rbp+50h]
  void *v84; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v85; // [rsp+E0h] [rbp+60h] BYREF
  PVOID v86; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v87; // [rsp+F0h] [rbp+70h]
  __int64 v88; // [rsp+F8h] [rbp+78h]
  __int64 v89; // [rsp+100h] [rbp+80h]
  HANDLE *v90; // [rsp+108h] [rbp+88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+90h] BYREF
  __int64 v92; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v93; // [rsp+148h] [rbp+C8h]
  __int64 v94; // [rsp+150h] [rbp+D0h]
  struct _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+158h] [rbp+D8h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+168h] [rbp+E8h] BYREF
  __int64 v97; // [rsp+188h] [rbp+108h]
  UNICODE_STRING v98; // [rsp+190h] [rbp+110h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1A0h] [rbp+120h] BYREF
  __int64 v100[2]; // [rsp+1B0h] [rbp+130h] BYREF
  __int64 v101; // [rsp+1C0h] [rbp+140h]
  _BYTE v102[80]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v103; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v104; // [rsp+228h] [rbp+1A8h]
  char v105; // [rsp+230h] [rbp+1B0h]
  char v106; // [rsp+231h] [rbp+1B1h]
  __int64 v107; // [rsp+238h] [rbp+1B8h]
  _OWORD *v108; // [rsp+248h] [rbp+1C8h]
  __int128 v109; // [rsp+258h] [rbp+1D8h]
  __int128 v110; // [rsp+268h] [rbp+1E8h]
  __int128 v111; // [rsp+278h] [rbp+1F8h]
  __int128 v112; // [rsp+288h] [rbp+208h]
  ULONG_PTR BugCheckParameter1; // [rsp+2A0h] [rbp+220h]
  __int64 v114; // [rsp+2A8h] [rbp+228h]
  HANDLE v115; // [rsp+2B0h] [rbp+230h]
  void *v116; // [rsp+2B8h] [rbp+238h]
  void *v117; // [rsp+2C0h] [rbp+240h] BYREF
  int v118; // [rsp+2CCh] [rbp+24Ch]
  HANDLE FileHandle; // [rsp+2D0h] [rbp+250h] BYREF
  PVOID v120; // [rsp+2D8h] [rbp+258h]
  HANDLE Handle[2]; // [rsp+2E0h] [rbp+260h] BYREF
  PVOID v122; // [rsp+2F0h] [rbp+270h]
  __int64 v123; // [rsp+2F8h] [rbp+278h]
  unsigned int v124; // [rsp+30Ch] [rbp+28Ch]
  UNICODE_STRING v125[7]; // [rsp+310h] [rbp+290h] BYREF
  __int64 v126; // [rsp+388h] [rbp+308h]
  __int64 v127; // [rsp+390h] [rbp+310h]
  unsigned int v128; // [rsp+39Ch] [rbp+31Ch]
  int v129; // [rsp+3A8h] [rbp+328h]
  unsigned int v130; // [rsp+3ACh] [rbp+32Ch]
  _DWORD *v131; // [rsp+3B0h] [rbp+330h]
  __int64 v132; // [rsp+3C8h] [rbp+348h]
  struct _ACCESS_STATE v133[2]; // [rsp+410h] [rbp+390h] BYREF
  int v134; // [rsp+590h] [rbp+510h]
  char v135; // [rsp+594h] [rbp+514h]
  HANDLE v136; // [rsp+598h] [rbp+518h]
  __int64 v137[48]; // [rsp+5A0h] [rbp+520h] BYREF
  int v138; // [rsp+720h] [rbp+6A0h]
  HANDLE v139; // [rsp+728h] [rbp+6A8h]
  __int64 v140[2]; // [rsp+730h] [rbp+6B0h] BYREF
  __int64 v141; // [rsp+740h] [rbp+6C0h]
  char v142; // [rsp+748h] [rbp+6C8h]

  v79 = a4;
  v80 = a3;
  v89 = a2;
  v90 = a1;
  v87 = a5;
  v93 = a6;
  v88 = a9;
  v75 = 0;
  memset(SystemArgument1, 0, sizeof(SystemArgument1));
  *(_DWORD *)(&DriverContext.Size + 1) = 0;
  *(&DriverContext.Size + 3) = 0;
  IoStatusBlock = 0LL;
  v86 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v78 = 0LL;
  memset_0(v133, 0, 0x190uLL);
  v98 = 0LL;
  v72 = 0;
  v67 = 0;
  v71 = 0;
  *(_OWORD *)v140 = 0LL;
  v141 = 0LL;
  v142 = 0;
  memset_0(v137, 0, 0x190uLL);
  v92 = 0LL;
  *(_DWORD *)v76 = 0;
  v85 = 0LL;
  *(_OWORD *)v100 = 0LL;
  v101 = 0LL;
  ImpersonationState = 0LL;
  CurrentThread = KeGetCurrentThread();
  v83 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v81 = Process;
  v94 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v74 = PreviousMode;
  v84 = 0LL;
  v77 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v66 = (int)CurrentThread;
  v70 = 0;
  v69 = 0;
  memset(&DriverContext, 0, sizeof(DriverContext));
  v97 = 0LL;
  memset_0(v102, 0, 0x48uLL);
  v14 = a7;
  if ( (a7 & 0xFFB17838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v135 = PreviousMode;
  if ( PreviousMode )
  {
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v90 < 0x7FFFFFFF0000LL )
      v16 = (__int64)v90;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v89 < 0x7FFFFFFF0000LL )
      v17 = v89;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  if ( a5 )
  {
    if ( PreviousMode && (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v18 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v18 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    v134 = v18;
  }
  memset_0(&v103, 0, 0x1F0uLL);
  if ( a11 )
  {
    result = PspBuildCreateProcessContext(a11, PreviousMode, 0, (char *)&v103);
    if ( (int)result < 0 )
      return result;
    v69 = v126 != 0;
  }
  if ( (a7 & 0x40) != 0 && (v104 & 0x20000) != 0 && !BYTE1(v103) )
  {
    v14 = a7 & 0xFFFFFFBF;
    a7 &= ~0x40u;
    v104 &= ~0x20000uLL;
  }
  if ( (v14 & 4) == 0 && (v104 & 0x800) != 0 || (v104 & 0x20000) != 0 && (v14 & 0x40) == 0 )
    goto LABEL_185;
  Info = PspCaptureCreateInfo(PreviousMode, a10, (__int64)&v103);
  if ( Info < 0 )
    goto LABEL_186;
  v23 = 1;
  if ( (v104 & 1) != 0 )
  {
    Info = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             128,
             (__int64)PsProcessType,
             PreviousMode,
             0x72437350u,
             &v78,
             0LL,
             0LL);
    if ( Info >= 0 )
    {
      Process = v78;
      v114 = v78;
      goto LABEL_34;
    }
LABEL_186:
    v30 = v66;
    goto LABEL_187;
  }
  v78 = Process;
LABEL_34:
  v132 = PspEstimateNewProcessServerSilo(Process, v127, v128);
  if ( (v106 & 0xC) == 4 && (Process != v81 || (*(_DWORD *)(v81 + 1532) & 0x1000) != 0) )
    goto LABEL_185;
  Info = PspReferenceTokenForNewProcess(Process, v116, PreviousMode, (ULONG_PTR *)&v117);
  if ( Info < 0 )
  {
    v117 = 0LL;
    goto LABEL_186;
  }
  if ( v116 && (int)SeQueryServerSiloToken((__int64)v117, (__int64)&v85) >= 0 && !PspIsSiloInSilo(v85, v132) )
    goto LABEL_185;
  if ( (v104 & 0x20) == 0 )
  {
    if ( Process == v81
      && PreviousMode
      && !v88
      && (v106 & 0xC) == 0
      && (v104 & 0x80u) == 0LL
      && (v104 & 0x20000) == 0
      && (v105 & 0x10) == 0 )
    {
      v105 &= ~4u;
      v38 = *(_BYTE *)(Process + 1530);
      HIBYTE(v67) = *(_BYTE *)(v78 + 1529);
      v27 = *(_BYTE *)(v78 + 1528);
      if ( (v14 & 0x40) != 0 && (v38 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_186;
      }
      Info = PspValidateCreateProcessProtection(v81, (__int64)&v103, PreviousMode, v14, v38);
      if ( Info < 0 )
        goto LABEL_186;
      v43 = 0LL;
      goto LABEL_122;
    }
LABEL_185:
    Info = -1073741811;
    goto LABEL_186;
  }
  v24 = (v104 & 0x20000) != 0 ? BYTE1(v103) : 0;
  v68 = v24;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    v98 = v125[0];
    ZwSystemDebugControl(38LL, (__int64)&v98);
  }
  if ( (v14 & 0x400000) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    goto LABEL_47;
  Info = SeQuerySigningPolicy((int)v117, v125, (v14 >> 6) & 1, v24, &v67, &v71, &v68);
  if ( Info < 0 )
    goto LABEL_186;
  if ( (v14 & 0x20000) != 0 )
  {
    LOBYTE(v19) = 8;
    LOBYTE(v25) = v67;
    v26 = SeCompareSigningLevels(v25, v19, v20, v21);
    v27 = v67;
    if ( !v26 )
      v27 = 8;
    LOBYTE(v67) = v27;
  }
  else
  {
    v27 = v67;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v28 = 1600;
  if ( PreviousMode != 1 )
    v28 = 576;
  ObjectAttributes.Attributes = v28;
  ObjectAttributes.ObjectName = v125;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Info = 0;
  if ( qword_140FD73C0 )
    Info = guard_dispatch_icall_no_overrides(v117, v19, v20, v21);
  if ( Info < 0 )
    goto LABEL_186;
  Info = PspGetMemoryPartitionContext(v78, v14, v127, v128, &v84);
  if ( Info < 0 )
    goto LABEL_186;
  Info = PspCreateUserProcessEcp((__int64)&DriverContext, (__int64)v117);
  if ( Info < 0 )
    goto LABEL_186;
  Info = IoCreateFileEx(
           &FileHandle,
           v118 | 0x100020,
           &ObjectAttributes,
           &IoStatusBlock,
           0LL,
           0x80u,
           5u,
           1u,
           0x60u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0,
           &DriverContext);
  if ( Info < 0 && v118 )
    Info = IoCreateFileEx(
             &FileHandle,
             0x100020u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             5u,
             1u,
             0x60u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0,
             &DriverContext);
  if ( Info < 0 )
  {
    FileHandle = 0LL;
    v29 = 1;
LABEL_66:
    PspUpdateCreateInfo(v29, (__int64)&v103, 0LL);
    goto LABEL_186;
  }
  Object = 0LL;
  Info = ObReferenceObjectByHandle(FileHandle, 0x100020u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v120 = Object;
  if ( Info >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    v31 = 4 * v69 + 1;
    LODWORD(v85) = v31;
    if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() )
    {
      v32 = SeDuplicateTokenWithPredictedClaims((__int64)v117, (__int64)v120, v129, (__int64)v131, v130, &v77);
      Info = v32;
      if ( v32 < 0 )
        goto LABEL_186;
      if ( v77 )
      {
        LOBYTE(v33) = 1;
        v66 = v33;
        v70 = 1;
      }
      else
      {
        LOBYTE(v32) = 0;
        v66 = v32;
        v70 = 0;
        v77 = v117;
      }
      v34 = v85;
      if ( (v129 & 8) != 0 )
      {
        v35 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( v35 )
            PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
LABEL_47:
          Info = -1073741727;
          goto LABEL_186;
        }
        if ( v35 )
          PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
        v34 |= 8u;
        v27 = v67;
      }
    }
    else
    {
      if ( v131 )
      {
        v36 = SeDuplicateTokenAndAddOriginClaim((__int64)v117, v131, v130, &v77);
        v37 = (unsigned __int8)v66;
        if ( v36 >= 0 )
          v37 = 1;
        v66 = v37;
        v70 = v37;
      }
      else
      {
        LOBYTE(v37) = v66;
      }
      v34 = v31;
      if ( !(_BYTE)v37 )
        v77 = v117;
    }
    LOBYTE(v21) = v27;
    Info = MmCreateSpecialImageSection(
             (unsigned int)Handle,
             (unsigned int)&ObjectAttributes,
             (_DWORD)v77,
             v21,
             (__int64)FileHandle,
             v34);
    if ( Info < 0 )
    {
LABEL_109:
      Handle[0] = 0LL;
      v29 = 2;
      goto LABEL_66;
    }
    while ( 1 )
    {
      Object = 0LL;
      Info = ObReferenceObjectByHandle(Handle[0], 8u, MmSectionObjectType, 0, &Object, 0LL);
      v122 = Object;
      if ( Info < 0 )
      {
        v122 = 0LL;
        goto LABEL_186;
      }
      v38 = v68;
      Info = PspGetProcessProtectionRequirementsFromImage((__int64)Object);
      if ( Info < 0 )
        goto LABEL_186;
      if ( v72 == v38 )
        break;
      Info = SeQuerySigningPolicy((int)v117, v125, 1, v72, (_BYTE *)&v67 + 1, &v71, &v68);
      if ( Info < 0 )
        goto LABEL_186;
      v40 = HIBYTE(v67);
      if ( HIBYTE(v67) == v27 )
      {
        v38 = v68;
        break;
      }
      if ( (v27 & 0x30) != 0 && (HIBYTE(v67) & 0x30) != (v27 & 0x30) )
        goto LABEL_185;
      LOBYTE(v19) = v27;
      LOBYTE(v39) = HIBYTE(v67);
      if ( !(unsigned int)SeCompareSigningLevels(v39, v19, v20, v21) )
        goto LABEL_185;
      ObCloseHandle(Handle[0], 0);
      ObfDereferenceObject(v122);
      Handle[0] = 0LL;
      v122 = 0LL;
      v27 = v40;
      LOBYTE(v41) = v40;
      Info = MmCreateSpecialImageSection(
               (unsigned int)Handle,
               (unsigned int)&ObjectAttributes,
               (_DWORD)v77,
               v41,
               (__int64)FileHandle,
               v34);
      if ( Info < 0 )
        goto LABEL_109;
    }
    Info = PspValidateCreateProcessProtection(v81, (__int64)&v103, PreviousMode, a7, v38);
    if ( Info < 0 )
      goto LABEL_186;
    if ( (a7 & 0x40000) != 0
      || (v38 & 7) != 1
      && (LOBYTE(v42) = PreviousMode,
          LOBYTE(v19) = *(_BYTE *)(v81 + 1530),
          PspCheckForInvalidAccessByProtection(v42, v19, v38)) )
    {
      v105 |= 8u;
    }
    PspGetProcessParameterOverrides((__int64)&v103, (__int64)v84);
    Info = PspCaptureProcessParameters(PreviousMode, v88, (__int64)&v103);
    if ( Info < 0 )
    {
      v105 &= ~4u;
      goto LABEL_186;
    }
    v43 = v140;
    HIBYTE(v67) = v71;
LABEL_122:
    Info = PspAllocateProcess(
             v78,
             PreviousMode,
             v87,
             v38,
             v27,
             SHIBYTE(v67),
             v122,
             v117,
             a7,
             0,
             (__int64)&v103,
             v116 != 0LL,
             v84,
             (__int64)&v75,
             &SystemArgument1[1]);
    if ( Info < 0 )
      goto LABEL_186;
    v44 = v122 != 0LL ? 1048587 : 1048603;
    v45 = *(_DWORD *)(*(_QWORD *)&SystemArgument1[1] + 1876LL) & 0x4000;
    v87 = v45 != 0 ? 0x800 : 0;
    if ( v45 )
      v44 |= 0x100040u;
    RtlGetExtendedContextLength2(v44, v76, v45 != 0 ? 0x800 : 0);
    v46 = 0LL;
    if ( v69 )
    {
      v43 = 0LL;
    }
    else
    {
      v47 = *(unsigned int *)v76 + 15LL;
      if ( v47 <= *(unsigned int *)v76 )
        v47 = 0xFFFFFFFFFFFFFF0LL;
      v48 = alloca(v47 & 0xFFFFFFFFFFFFFFF0uLL);
      v46 = &v66;
      memset_0(&v66, 0, *(unsigned int *)v76);
      RtlInitializeExtendedContext2((__int64)&v66, v44, &v92, v87);
      if ( v122 )
      {
        v49 = v124;
        if ( !*(_QWORD *)(*(_QWORD *)&SystemArgument1[1] + 784LL) )
          v49 = *(_QWORD *)(*(_QWORD *)&SystemArgument1[1] + 736LL);
        PspCreateUserContext((__int64)&v66, 1, qword_140FC6440, v109, v49);
      }
      else
      {
        Info = PspGetContextThreadInternal((__int64)v83, (__int64)&v66, 0, 1, 1);
        if ( Info < 0 )
        {
          PspUnlockProcessExclusive(*(__int64 *)&SystemArgument1[1]);
          PspRundownSingleProcess(*(char **)&SystemArgument1[1], 0);
          goto LABEL_186;
        }
        v88 = 297LL;
      }
      v100[0] = (__int64)v102;
    }
    ObfReferenceObjectWithTag(*(PVOID *)&SystemArgument1[1], 0x72437350u);
    if ( v43 )
    {
      *(_BYTE *)v43 = 0;
      v50 = v110;
      if ( (unsigned __int64)v110 < 0x40000 )
        v50 = 0x40000LL;
      v43[3] = v50;
      v43[2] = *((_QWORD *)&v110 + 1);
      v43[1] = DWORD2(v109);
    }
    *(_DWORD *)v76 = 0;
    PspMapThreadCreationFlags(a8, SystemArgument1);
    if ( (_BYTE)v75 )
    {
      *(_DWORD *)v76 = 2;
      SystemArgument1[0] |= 0x10u;
    }
    if ( HIBYTE(v75) )
      a7 |= 0x400u;
    if ( v69 )
      SystemArgument1[0] |= 0x400u;
    SystemArgument1[0] |= 0x60u;
    Info = PspAllocateThread(
             *(ULONG_PTR *)&SystemArgument1[1],
             v93,
             PreviousMode,
             (__int64)&v103,
             (size_t)v46,
             v100,
             0LL,
             0LL,
             SystemArgument1,
             &v86,
             v43,
             (__int64)v137);
    if ( Info < 0 )
    {
      PspUnlockProcessExclusive(*(__int64 *)&SystemArgument1[1]);
      PspRundownSingleProcess(*(char **)&SystemArgument1[1], 0);
      v30 = v66;
LABEL_171:
      ObfDereferenceObjectWithTag(*(PVOID *)&SystemArgument1[1], 0x72437350u);
LABEL_187:
      if ( v120 && qword_140F04950 )
        guard_dispatch_icall_no_overrides(v120, v19, v20, v21);
      goto LABEL_190;
    }
    v52 = v81;
    LOBYTE(v51) = PreviousMode;
    if ( PsTestProtectedProcessIncompatibility(v51, v81, *(__int64 *)&SystemArgument1[1]) )
    {
      Feature_ID51912085__private_IsEnabledPreCheck();
      v53 = v80;
      if ( (v80 & 0x2000000) != 0 )
      {
        v53 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v38 >> 4) + 4] & 0x1FFFFF | v80 & 0xFDFFFFFF;
        if ( !v114 || v52 == v114 )
          v53 |= 1u;
      }
      v54 = v79;
      if ( (v79 & 0x2000000) != 0 )
      {
        v54 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v38 >> 4) + 8] & 0x1FFFFF | v79 & 0xFDFFFFFF;
        if ( !v114 || v52 == v114 )
          v54 |= 1u;
      }
    }
    else
    {
      v54 = v79;
      v53 = v80;
    }
    if ( v123 )
      v55 = v123 + 112;
    else
      v55 = 0LL;
    inserted = PspInsertProcess(*(char **)&SystemArgument1[1], v78, v53, a7, v115, v76[0], v55, v133);
    Info = PspInsertThread(
             (char *)v86,
             *(ULONG_PTR *)&SystemArgument1[1],
             (__int64)v102,
             SystemArgument1,
             v54,
             v43,
             (__int64)&v103,
             0LL,
             (__int64)v137,
             (_QWORD *)v89,
             (_OWORD *)v107);
    KiLeaveCriticalRegionUnsafe((__int64)v83, v57, v58, v59);
    if ( inserted < 0 )
    {
      PspRundownSingleProcess(*(char **)&SystemArgument1[1], 0);
      Info = inserted;
      v30 = v66;
LABEL_170:
      ObfDereferenceObject(v86);
      goto LABEL_171;
    }
    if ( Info >= 0 )
    {
      ProcessServerSilo = PsGetProcessServerSilo(*(__int64 *)&SystemArgument1[1]);
      if ( ProcessServerSilo == v132 )
      {
        Info = PspCreateObjectHandle(*(void **)&SystemArgument1[1], (__int64)v133, (struct _OBJECT_TYPE *)PsProcessType);
        if ( Info < 0 )
        {
          v30 = v66;
        }
        else
        {
          v64 = v108;
          if ( v108 )
          {
            *v108 = v109;
            v64[1] = v110;
            v64[2] = v111;
            v64[3] = v112;
          }
          *v90 = v136;
          v30 = v66;
          Info = PspUpdateCreateInfo(6, (__int64)&v103, *(__int64 *)&SystemArgument1[1]);
          if ( Info >= 0 )
            goto LABEL_168;
          if ( (v134 & 0x200) != 0 || (v65 = 1, (*(_DWORD *)(v52 + 1532) & 0x1000) != 0) )
            v65 = 0;
          ObCloseHandle(v136, v65);
        }
        if ( (v138 & 0x200) != 0 || (*(_DWORD *)(v52 + 1532) & 0x1000) != 0 )
          v23 = 0;
        ObCloseHandle(v139, v23);
LABEL_168:
        SeDeleteAccessState((__int64)v133, v60, v61, v62);
        if ( Info < 0 )
          PsTerminateProcess(*(void **)&SystemArgument1[1]);
        goto LABEL_170;
      }
      Info = -1073741267;
    }
    v30 = v66;
    goto LABEL_168;
  }
  v120 = 0LL;
  v30 = v66;
LABEL_190:
  PspDeleteMemoryPartitionContext(v84);
  PspDeleteCreateProcessContext((__int64)&v103);
  if ( DriverContext.ExtraCreateParameter )
    FsRtlFreeExtraCreateParameterList(DriverContext.ExtraCreateParameter);
  if ( v30 )
    ObfDereferenceObject(v77);
  return (unsigned int)Info;
}
