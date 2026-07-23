/*
 * XREFs of NtCreateUserProcess @ 0x140AC9930
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x1404536A4 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E2D38 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x1406AADB0 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x140792ADC (SeDuplicateTokenWithPredictedClaims.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PspCreateUserProcessEcp @ 0x1408ABC48 (PspCreateUserProcessEcp.c)
 *     PspGetMemoryPartitionContext @ 0x1408D7C70 (PspGetMemoryPartitionContext.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x1408FAD80 (PspDeleteCreateProcessContext.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     IoCreateFileEx @ 0x140955520 (IoCreateFileEx.c)
 *     SeQueryServerSiloToken @ 0x1409A0F90 (SeQueryServerSiloToken.c)
 *     PsRestoreImpersonation @ 0x1409C74E0 (PsRestoreImpersonation.c)
 *     PsDisableImpersonation @ 0x1409D85C0 (PsDisableImpersonation.c)
 *     PspCaptureProcessParameters @ 0x1409D87D0 (PspCaptureProcessParameters.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E358C (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1409E35E8 (PspCheckForInvalidAccessByProtection.c)
 *     PspReferenceTokenForNewProcess @ 0x1409F9EC4 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x1409FA0B0 (SeQuerySigningPolicy.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PspCreateObjectHandle @ 0x140A0B3A0 (PspCreateObjectHandle.c)
 *     PspCreateUserContext @ 0x140A0E8C0 (PspCreateUserContext.c)
 *     PspMapThreadCreationFlags @ 0x140A15484 (PspMapThreadCreationFlags.c)
 *     PspUpdateCreateInfo @ 0x140A27330 (PspUpdateCreateInfo.c)
 *     PspCaptureCreateInfo @ 0x140A32E30 (PspCaptureCreateInfo.c)
 *     PspEstimateNewProcessServerSilo @ 0x140A41590 (PspEstimateNewProcessServerSilo.c)
 *     PspGetProcessParameterOverrides @ 0x140A46F20 (PspGetProcessParameterOverrides.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140A4E604 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspIsSiloInSilo @ 0x140A4F21C (PspIsSiloInSilo.c)
 *     PspDeleteMemoryPartitionContext @ 0x140A67FDC (PspDeleteMemoryPartitionContext.c)
 *     PspValidateCreateProcessProtection @ 0x140A87F24 (PspValidateCreateProcessProtection.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140AA9F14 (SeDuplicateTokenAndAddOriginClaim.c)
 *     MmCreateSpecialImageSection @ 0x140AE8400 (MmCreateSpecialImageSection.c)
 */

NTSTATUS __cdecl NtCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Process; // rbx
  char PreviousMode; // r15
  ULONG v14; // r13d
  NTSTATUS result; // eax
  unsigned __int64 Rdx; // rcx
  unsigned __int64 Rcx; // rcx
  ULONG v18; // eax
  __int64 v19; // rdx
  NTSTATUS Info; // esi
  KPROCESSOR_MODE v21; // r14
  __int64 v22; // r9
  char v23; // bl
  __int64 v24; // rcx
  int v25; // eax
  char v26; // r12
  int v27; // eax
  int v28; // ecx
  char P1Home; // bl
  int v30; // esi
  int v31; // r9d
  int v32; // eax
  int v33; // ecx
  int Dr3; // r13d
  BOOLEAN v35; // r12
  int v36; // eax
  int P1Home_low; // ecx
  unsigned __int8 v38; // bl
  __int64 v39; // r9
  __int64 v40; // rcx
  char v41; // bl
  int v42; // r9d
  __int64 *v43; // r13
  ULONG v44; // esi
  int v45; // ecx
  _CONTEXT *p_Context; // r12
  unsigned __int64 v47; // rax
  void *v48; // rsp
  __int64 High_high; // rax
  __int64 High; // rax
  __int64 v51; // r12
  unsigned int v52; // r8d
  unsigned int v53; // esi
  __int64 v54; // rax
  int inserted; // ebx
  __int64 ProcessServerSilo; // rax
  _OWORD *v57; // rax
  KPROCESSOR_MODE v58; // dl
  _CONTEXT Context; // [rsp+80h] [rbp+0h] BYREF
  ULONG v60; // [rsp+5B0h] [rbp+530h]
  char v61; // [rsp+5B4h] [rbp+534h]
  HANDLE Handle; // [rsp+5B8h] [rbp+538h]
  __int64 v63[48]; // [rsp+5C0h] [rbp+540h] BYREF
  int v64; // [rsp+740h] [rbp+6C0h]
  HANDLE v65; // [rsp+748h] [rbp+6C8h]
  __int64 v66[2]; // [rsp+750h] [rbp+6D0h] BYREF
  __int64 v67; // [rsp+760h] [rbp+6E0h]
  char v68; // [rsp+768h] [rbp+6E8h]

  *(_DWORD *)&Context.SegCs = ThreadDesiredAccess;
  *(_DWORD *)&Context.SegEs = ProcessDesiredAccess;
  Context.Rcx = (unsigned __int64)ThreadHandle;
  Context.Rdx = (unsigned __int64)ProcessHandle;
  Context.Dr7 = (unsigned __int64)ProcessObjectAttributes;
  Context.R10 = (unsigned __int64)ThreadObjectAttributes;
  Context.Rax = (unsigned __int64)ProcessParameters;
  WORD2(Context.P4Home) = 0;
  HIDWORD(Context.P2Home) = 0;
  Context.P3Home = 0LL;
  memset(&Context.Rbx, 0, 44);
  *(_QWORD *)&Context.ContextFlags = 0LL;
  memset_0(&Context.VectorRegister[11], 0, 0x190uLL);
  WORD2(Context.P1Home) = 0;
  *(_WORD *)((char *)&Context.P2Home + 1) = 0;
  *(_OWORD *)v66 = 0LL;
  v67 = 0LL;
  v68 = 0;
  memset_0(v63, 0, 0x190uLL);
  Context.R9 = 0LL;
  LODWORD(Context.P5Home) = 0;
  memset(&Context.R12, 0, 112);
  CurrentThread = KeGetCurrentThread();
  Context.Dr1 = (unsigned __int64)CurrentThread;
  Process = (unsigned __int64)CurrentThread->ApcState.Process;
  *(_QWORD *)&Context.SegGs = Process;
  Context.R11 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Context.P4Home) = PreviousMode;
  memset(&Context.Dr2, 0, 24);
  Context.P6Home = 0LL;
  LOBYTE(CurrentThread) = 0;
  LODWORD(Context.P1Home) = (_DWORD)CurrentThread;
  LOBYTE(Context.P2Home) = 0;
  HIBYTE(Context.P1Home) = 0;
  memset_0(&Context.Legacy[3], 0, 0x48uLL);
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFF317838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v61 = PreviousMode;
  if ( PreviousMode )
  {
    Rdx = 0x7FFFFFFF0000LL;
    if ( Context.Rdx < 0x7FFFFFFF0000LL )
      Rdx = Context.Rdx;
    *(_QWORD *)Rdx = *(_QWORD *)Rdx;
    Rcx = 0x7FFFFFFF0000LL;
    if ( Context.Rcx < 0x7FFFFFFF0000LL )
      Rcx = Context.Rcx;
    *(_QWORD *)Rcx = *(_QWORD *)Rcx;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v18 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v18 = ProcessObjectAttributes->Attributes & 0x11FF2;
    v60 = v18;
  }
  memset_0(&Context.Xmm0, 0, 0x210uLL);
  if ( AttributeList )
  {
    result = PspBuildCreateProcessContext(
               (__int64 *)AttributeList,
               PreviousMode,
               0,
               (__int64)Context.FltSave.XmmRegisters);
    if ( result < 0 )
      return result;
    HIBYTE(Context.P1Home) = Context.VectorRegister[0].High != 0;
  }
  if ( (ProcessFlags & 0x40) != 0 && (Context.FltSave.XmmRegisters[0].High & 0x20000) != 0 && !BYTE1(Context.Xmm0.Low) )
  {
    v14 = ProcessFlags & 0xFFFFFFBF;
    ProcessFlags &= ~0x40u;
    Context.FltSave.XmmRegisters[0].High &= ~0x20000uLL;
  }
  if ( (v14 & 4) == 0 && (Context.Xmm0.High & 0x800) != 0
    || (Context.FltSave.XmmRegisters[0].High & 0x20000) != 0 && (v14 & 0x40) == 0 )
  {
    goto LABEL_185;
  }
  Info = PspCaptureCreateInfo(PreviousMode, (unsigned __int64)CreateInfo, (__int64)Context.FltSave.XmmRegisters);
  if ( Info < 0 )
    goto LABEL_186;
  v21 = 1;
  if ( (Context.Xmm0.High & 1) != 0 )
  {
    Info = ObpReferenceObjectByHandleWithTag(
             Context.FltSave.XmmRegisters[8].Low,
             128,
             (__int64)PsProcessType,
             PreviousMode,
             0x72437350u,
             &Context.ContextFlags,
             0LL,
             0LL);
    if ( Info >= 0 )
    {
      Process = *(_QWORD *)&Context.ContextFlags;
      Context.FltSave.XmmRegisters[8].High = *(_QWORD *)&Context.ContextFlags;
      goto LABEL_34;
    }
LABEL_186:
    P1Home = Context.P1Home;
    goto LABEL_187;
  }
  *(_QWORD *)&Context.ContextFlags = Process;
LABEL_34:
  Context.VectorRegister[4].High = PspEstimateNewProcessServerSilo(
                                     Process,
                                     Context.VectorRegister[1].Low,
                                     HIDWORD(Context.VectorRegister[1].High));
  if ( (BYTE1(Context.Xmm1.Low) & 0xC) == 4
    && (Process != *(_QWORD *)&Context.SegGs || (*(_DWORD *)(*(_QWORD *)&Context.SegGs + 1532LL) & 0x1000) != 0) )
  {
    goto LABEL_185;
  }
  Info = PspReferenceTokenForNewProcess(
           Process,
           (void *)Context.FltSave.XmmRegisters[9].High,
           PreviousMode,
           &Context.FltSave.XmmRegisters[10].Low);
  if ( Info < 0 )
  {
    Context.FltSave.XmmRegisters[10].Low = 0LL;
    goto LABEL_186;
  }
  if ( Context.FltSave.XmmRegisters[9].High
    && (int)SeQueryServerSiloToken(Context.FltSave.XmmRegisters[10].Low, (__int64)&Context.Dr3) >= 0
    && !PspIsSiloInSilo(Context.Dr3, Context.VectorRegister[4].High) )
  {
    goto LABEL_185;
  }
  if ( (Context.Xmm0.High & 0x20) == 0 )
  {
    if ( Process == *(_QWORD *)&Context.SegGs
      && PreviousMode
      && !Context.Rax
      && (Context.Xmm1.Low & 0xC00) == 0
      && SLOBYTE(Context.Xmm0.High) >= 0
      && (Context.FltSave.XmmRegisters[0].High & 0x20000) == 0
      && (Context.Xmm1.Low & 0x10) == 0 )
    {
      LOBYTE(Context.Xmm1.Low) &= ~4u;
      v38 = *(_BYTE *)(Process + 1530);
      BYTE5(Context.P1Home) = *(_BYTE *)(*(_QWORD *)&Context.ContextFlags + 1529LL);
      v26 = *(_BYTE *)(*(_QWORD *)&Context.ContextFlags + 1528LL);
      if ( (v14 & 0x40) != 0 && (v38 & 7) == 0 )
      {
        Info = -1073741790;
        goto LABEL_186;
      }
      Info = PspValidateCreateProcessProtection(
               *(__int64 *)&Context.SegGs,
               (__int64)Context.FltSave.XmmRegisters,
               PreviousMode,
               v14,
               (PS_PROTECTION)v38);
      if ( Info < 0 )
        goto LABEL_186;
      v43 = 0LL;
      goto LABEL_122;
    }
LABEL_185:
    Info = -1073741811;
    goto LABEL_186;
  }
  v23 = (Context.FltSave.XmmRegisters[0].High & 0x20000) != 0 ? BYTE1(Context.Xmm0.Low) : 0;
  BYTE6(Context.P1Home) = v23;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    Context.Header[1] = Context.Xmm15;
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &Context.Header[1], 0x10u, 0LL, 0, 0LL);
  }
  if ( (v14 & 0x400000) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    goto LABEL_47;
  LOBYTE(v22) = v23;
  Info = SeQuerySigningPolicy(
           (void *)Context.FltSave.XmmRegisters[10].Low,
           (const UNICODE_STRING *)&Context.Xmm15,
           (v14 >> 6) & 1,
           v22,
           (_BYTE *)&Context.P1Home + 4,
           (_BYTE *)&Context.P2Home + 1,
           (_BYTE *)&Context.P1Home + 6);
  if ( Info < 0 )
    goto LABEL_186;
  if ( (v14 & 0x20000) != 0 )
  {
    LOBYTE(v19) = 8;
    LOBYTE(v24) = BYTE4(Context.P1Home);
    v25 = SeCompareSigningLevels(v24, v19);
    v26 = BYTE4(Context.P1Home);
    if ( !v25 )
      v26 = 8;
    BYTE4(Context.P1Home) = v26;
  }
  else
  {
    v26 = BYTE4(Context.P1Home);
  }
  LODWORD(Context.Rbx) = 48;
  Context.Rsp = 0LL;
  v27 = 1600;
  if ( PreviousMode != 1 )
    v27 = 576;
  LODWORD(Context.Rsi) = v27;
  Context.Rbp = (unsigned __int64)&Context.FltSave.XmmRegisters[15];
  *(_OWORD *)&Context.Rdi = 0LL;
  Info = 0;
  if ( qword_140FD83D0 )
    Info = guard_dispatch_icall_no_overrides(Context.FltSave.XmmRegisters[10].Low, v19);
  if ( Info < 0 )
    goto LABEL_186;
  Info = PspGetMemoryPartitionContext(
           *(__int64 *)&Context.ContextFlags,
           v14,
           Context.VectorRegister[1].Low,
           HIDWORD(Context.VectorRegister[1].High),
           &Context.Dr2);
  if ( Info < 0 )
    goto LABEL_186;
  Info = PspCreateUserProcessEcp((__int64)&Context.R14, Context.FltSave.XmmRegisters[10].Low);
  if ( Info < 0 )
    goto LABEL_186;
  Info = IoCreateFileEx(
           (PHANDLE)&Context.FltSave.XmmRegisters[11],
           HIDWORD(Context.Xmm10.High) | 0x100020,
           (POBJECT_ATTRIBUTES)&Context.Rbx,
           (PIO_STATUS_BLOCK)Context.Legacy,
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
           (PIO_DRIVER_CREATE_CONTEXT)&Context.R14);
  if ( Info < 0 && HIDWORD(Context.Xmm10.High) )
    Info = IoCreateFileEx(
             (PHANDLE)&Context.FltSave.XmmRegisters[11],
             0x100020u,
             (POBJECT_ATTRIBUTES)&Context.Rbx,
             (PIO_STATUS_BLOCK)Context.Legacy,
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
             (PIO_DRIVER_CREATE_CONTEXT)&Context.R14);
  if ( Info < 0 )
  {
    Context.FltSave.XmmRegisters[11].Low = 0LL;
    v28 = 1;
LABEL_66:
    PspUpdateCreateInfo(v28, (__int64)Context.FltSave.XmmRegisters, 0LL);
    goto LABEL_186;
  }
  Context.Dr0 = 0LL;
  Info = ObReferenceObjectByHandle(
           (HANDLE)Context.FltSave.XmmRegisters[11].Low,
           0x100020u,
           (POBJECT_TYPE)IoFileObjectType,
           0,
           (PVOID *)&Context.Dr0,
           0LL);
  Context.FltSave.XmmRegisters[11].High = Context.Dr0;
  if ( Info >= 0 )
  {
    Context.Rbp = 0LL;
    v30 = 4 * HIBYTE(Context.P1Home) + 1;
    LODWORD(Context.Dr3) = v30;
    if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() )
    {
      v32 = SeDuplicateTokenWithPredictedClaims(
              (void *)Context.FltSave.XmmRegisters[10].Low,
              Context.FltSave.XmmRegisters[11].High,
              Context.VectorRegister[2].High,
              Context.VectorRegister[3].Low,
              HIDWORD(Context.VectorRegister[2].High),
              &Context.P6Home);
      Info = v32;
      if ( v32 < 0 )
        goto LABEL_186;
      if ( Context.P6Home )
      {
        LOBYTE(v33) = 1;
        LODWORD(Context.P1Home) = v33;
        LOBYTE(Context.P2Home) = 1;
      }
      else
      {
        LOBYTE(v32) = 0;
        LODWORD(Context.P1Home) = v32;
        LOBYTE(Context.P2Home) = 0;
        Context.P6Home = Context.FltSave.XmmRegisters[10].Low;
      }
      Dr3 = Context.Dr3;
      if ( (Context.VectorRegister[2].High & 8) != 0 )
      {
        v35 = PsDisableImpersonation(KeGetCurrentThread(), (PSE_IMPERSONATION_STATE)&Context.R12);
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        {
          if ( v35 )
            PsRestoreImpersonation(KeGetCurrentThread(), (PSE_IMPERSONATION_STATE)&Context.R12);
LABEL_47:
          Info = -1073741727;
          goto LABEL_186;
        }
        if ( v35 )
          PsRestoreImpersonation(KeGetCurrentThread(), (PSE_IMPERSONATION_STATE)&Context.R12);
        Dr3 |= 8u;
        v26 = BYTE4(Context.P1Home);
      }
    }
    else
    {
      if ( Context.VectorRegister[3].Low )
      {
        v36 = SeDuplicateTokenAndAddOriginClaim(
                Context.FltSave.XmmRegisters[10].Low,
                (_DWORD *)Context.VectorRegister[3].Low,
                SHIDWORD(Context.VectorRegister[2].High),
                (PVOID *)&Context.P6Home);
        P1Home_low = LOBYTE(Context.P1Home);
        if ( v36 >= 0 )
          P1Home_low = 1;
        LODWORD(Context.P1Home) = P1Home_low;
        LOBYTE(Context.P2Home) = P1Home_low;
      }
      else
      {
        LOBYTE(P1Home_low) = Context.P1Home;
      }
      Dr3 = v30;
      if ( !(_BYTE)P1Home_low )
        Context.P6Home = Context.FltSave.XmmRegisters[10].Low;
    }
    LOBYTE(v31) = v26;
    Info = MmCreateSpecialImageSection(
             (unsigned int)&Context.Xmm12,
             (unsigned int)&Context.Rbx,
             Context.P6Home,
             v31,
             Context.FltSave.XmmRegisters[11].Low,
             Dr3);
    if ( Info < 0 )
    {
LABEL_109:
      Context.FltSave.XmmRegisters[12].Low = 0LL;
      v28 = 2;
      goto LABEL_66;
    }
    while ( 1 )
    {
      Context.Dr0 = 0LL;
      Info = ObReferenceObjectByHandle(
               (HANDLE)Context.FltSave.XmmRegisters[12].Low,
               8u,
               MmSectionObjectType,
               0,
               (PVOID *)&Context.Dr0,
               0LL);
      Context.FltSave.XmmRegisters[13].Low = Context.Dr0;
      if ( Info < 0 )
      {
        Context.FltSave.XmmRegisters[13].Low = 0LL;
        goto LABEL_186;
      }
      v38 = BYTE6(Context.P1Home);
      Info = PspGetProcessProtectionRequirementsFromImage(Context.Dr0);
      if ( Info < 0 )
        goto LABEL_186;
      LOBYTE(v39) = BYTE2(Context.P2Home);
      if ( BYTE2(Context.P2Home) == v38 )
        break;
      Info = SeQuerySigningPolicy(
               (void *)Context.FltSave.XmmRegisters[10].Low,
               (const UNICODE_STRING *)&Context.Xmm15,
               1LL,
               v39,
               (_BYTE *)&Context.P1Home + 5,
               (_BYTE *)&Context.P2Home + 1,
               (_BYTE *)&Context.P1Home + 6);
      if ( Info < 0 )
        goto LABEL_186;
      v41 = BYTE5(Context.P1Home);
      if ( BYTE5(Context.P1Home) == v26 )
      {
        v38 = BYTE6(Context.P1Home);
        break;
      }
      if ( (v26 & 0x30) != 0 && (BYTE5(Context.P1Home) & 0x30) != (v26 & 0x30) )
        goto LABEL_185;
      LOBYTE(v19) = v26;
      LOBYTE(v40) = BYTE5(Context.P1Home);
      if ( !(unsigned int)SeCompareSigningLevels(v40, v19) )
        goto LABEL_185;
      ObCloseHandle((HANDLE)Context.FltSave.XmmRegisters[12].Low, 0);
      ObfDereferenceObject((PVOID)Context.FltSave.XmmRegisters[13].Low);
      Context.FltSave.XmmRegisters[12].Low = 0LL;
      Context.FltSave.XmmRegisters[13].Low = 0LL;
      v26 = v41;
      LOBYTE(v42) = v41;
      Info = MmCreateSpecialImageSection(
               (unsigned int)&Context.Xmm12,
               (unsigned int)&Context.Rbx,
               Context.P6Home,
               v42,
               Context.FltSave.XmmRegisters[11].Low,
               Dr3);
      if ( Info < 0 )
        goto LABEL_109;
    }
    Info = PspValidateCreateProcessProtection(
             *(__int64 *)&Context.SegGs,
             (__int64)Context.FltSave.XmmRegisters,
             PreviousMode,
             ProcessFlags,
             (PS_PROTECTION)v38);
    if ( Info < 0 )
      goto LABEL_186;
    if ( (ProcessFlags & 0x40000) != 0
      || (v38 & 7) != 1
      && PspCheckForInvalidAccessByProtection(
           PreviousMode,
           *(PS_PROTECTION *)(*(_QWORD *)&Context.SegGs + 1530LL),
           (PS_PROTECTION)v38) )
    {
      LOBYTE(Context.Xmm1.Low) |= 8u;
    }
    PspGetProcessParameterOverrides((__int64)Context.FltSave.XmmRegisters, Context.Dr2);
    Info = PspCaptureProcessParameters(PreviousMode, Context.Rax, (__int64)Context.FltSave.XmmRegisters);
    if ( Info < 0 )
    {
      LOBYTE(Context.Xmm1.Low) &= ~4u;
      goto LABEL_186;
    }
    v43 = v66;
    BYTE5(Context.P1Home) = BYTE1(Context.P2Home);
LABEL_122:
    Info = PspAllocateProcess(
             *(__int64 *)&Context.ContextFlags,
             PreviousMode,
             Context.Dr7,
             v38,
             v26,
             SBYTE5(Context.P1Home),
             (void *)Context.FltSave.XmmRegisters[13].Low,
             (void *)Context.FltSave.XmmRegisters[10].Low,
             ProcessFlags,
             0,
             (__int64)Context.FltSave.XmmRegisters,
             Context.FltSave.XmmRegisters[9].High != 0,
             (PVOID)Context.Dr2,
             (__int64)&Context.P4Home + 4,
             &Context.P3Home);
    if ( Info < 0 )
      goto LABEL_186;
    v44 = Context.FltSave.XmmRegisters[13].Low != 0 ? 1048587 : 1048603;
    v45 = *(_DWORD *)(Context.P3Home + 1876) & 0x4000;
    Context.Dr7 = v45 != 0 ? 0x800 : 0;
    if ( v45 )
      v44 |= 0x100040u;
    RtlGetExtendedContextLength2(v44, (PULONG)&Context.P5Home, v45 != 0 ? 0x800 : 0);
    p_Context = 0LL;
    if ( HIBYTE(Context.P1Home) )
    {
      v43 = 0LL;
    }
    else
    {
      v47 = LODWORD(Context.P5Home) + 15LL;
      if ( v47 <= LODWORD(Context.P5Home) )
        v47 = 0xFFFFFFFFFFFFFF0LL;
      v48 = alloca(v47 & 0xFFFFFFFFFFFFFFF0uLL);
      p_Context = &Context;
      memset_0(&Context, 0, LODWORD(Context.P5Home));
      RtlInitializeExtendedContext2(&Context, v44, (PCONTEXT_EX *)&Context.R9, Context.Dr7);
      if ( Context.FltSave.XmmRegisters[13].Low )
      {
        High_high = HIDWORD(Context.Xmm14.High);
        if ( !*(_QWORD *)(Context.P3Home + 784) )
          High_high = *(_QWORD *)(Context.P3Home + 736);
        PspCreateUserContext((__int64)&Context, 1, qword_140FC74C0, Context.FltSave.XmmRegisters[3].High, High_high);
      }
      else
      {
        Info = PspGetContextThreadInternal(Context.Dr1, (__int64)&Context, 0, 1, 1);
        if ( Info < 0 )
        {
          PspUnlockProcessExclusive(Context.P3Home);
          PspRundownSingleProcess((char *)Context.P3Home, 0);
          goto LABEL_186;
        }
        Context.Rax = 297LL;
      }
      Context.FltSave.FloatRegisters[1].Low = (unsigned __int64)&Context.FltSave.FloatRegisters[3];
    }
    ObfReferenceObjectWithTag((PVOID)Context.P3Home, 0x72437350u);
    if ( v43 )
    {
      *(_BYTE *)v43 = 0;
      High = Context.FltSave.XmmRegisters[4].High;
      if ( Context.FltSave.XmmRegisters[4].High < 0x40000uLL )
        High = 0x40000LL;
      v43[3] = High;
      v43[2] = Context.FltSave.XmmRegisters[5].Low;
      v43[1] = LODWORD(Context.Xmm4.Low);
    }
    LODWORD(Context.P5Home) = 0;
    PspMapThreadCreationFlags(ThreadFlags, (int *)&Context.P2Home + 1);
    if ( BYTE4(Context.P4Home) )
    {
      LODWORD(Context.P5Home) = 2;
      HIDWORD(Context.P2Home) |= 0x10u;
    }
    if ( BYTE5(Context.P4Home) )
      ProcessFlags |= 0x400u;
    if ( HIBYTE(Context.P1Home) )
      HIDWORD(Context.P2Home) |= 0x400u;
    HIDWORD(Context.P2Home) |= 0x60u;
    Info = PspAllocateThread(
             Context.P3Home,
             Context.R10,
             PreviousMode,
             (__int64)Context.FltSave.XmmRegisters,
             (size_t)p_Context,
             &Context.FltSave.FloatRegisters[1].Low,
             0LL,
             0LL,
             (int *)&Context.P2Home + 1,
             &Context.Dr6,
             v43,
             (__int64)v63);
    if ( Info < 0 )
    {
      PspUnlockProcessExclusive(Context.P3Home);
      PspRundownSingleProcess((char *)Context.P3Home, 0);
      P1Home = Context.P1Home;
LABEL_171:
      ObfDereferenceObjectWithTag((PVOID)Context.P3Home, 0x72437350u);
LABEL_187:
      if ( Context.FltSave.XmmRegisters[11].High && qword_140F04BF0 )
        guard_dispatch_icall_no_overrides(Context.FltSave.XmmRegisters[11].High, v19);
      goto LABEL_190;
    }
    v51 = *(_QWORD *)&Context.SegGs;
    if ( PsTestProtectedProcessIncompatibility(
           PreviousMode,
           *(PS_PROTECTION **)&Context.SegGs,
           (PS_PROTECTION *)Context.P3Home) )
    {
      Feature_ID51912085__private_IsEnabledPreCheck();
      v52 = *(_DWORD *)&Context.SegEs;
      if ( (*(_DWORD *)&Context.SegEs & 0x2000000) != 0 )
      {
        v52 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v38 >> 4) + 4] & 0x1FFFFF | *(_DWORD *)&Context.SegEs & 0xFDFFFFFF;
        if ( !Context.FltSave.XmmRegisters[8].High || v51 == Context.FltSave.XmmRegisters[8].High )
          v52 |= 1u;
      }
      v53 = *(_DWORD *)&Context.SegCs;
      if ( (*(_DWORD *)&Context.SegCs & 0x2000000) != 0 )
      {
        v53 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v38 >> 4) + 8] & 0x1FFFFF | *(_DWORD *)&Context.SegCs & 0xFDFFFFFF;
        if ( !Context.FltSave.XmmRegisters[8].High || v51 == Context.FltSave.XmmRegisters[8].High )
          v53 |= 1u;
      }
    }
    else
    {
      v53 = *(_DWORD *)&Context.SegCs;
      v52 = *(_DWORD *)&Context.SegEs;
    }
    if ( Context.FltSave.XmmRegisters[13].High )
      v54 = Context.FltSave.XmmRegisters[13].High + 112;
    else
      v54 = 0LL;
    inserted = PspInsertProcess(
                 (char *)Context.P3Home,
                 *(struct _KPROCESS **)&Context.ContextFlags,
                 v52,
                 ProcessFlags,
                 (HANDLE)Context.FltSave.XmmRegisters[9].Low,
                 Context.P5Home,
                 v54,
                 (struct _ACCESS_STATE *)&Context.VectorRegister[11]);
    Info = PspInsertThread(
             (char *)Context.Dr6,
             Context.P3Home,
             (__int64)&Context.FltSave.FloatRegisters[3],
             (_DWORD *)&Context.P2Home + 1,
             v53,
             v43,
             (__int64)Context.FltSave.XmmRegisters,
             0LL,
             (__int64)v63,
             (_QWORD *)Context.Rcx,
             (_OWORD *)Context.FltSave.XmmRegisters[1].High);
    KiLeaveCriticalRegionUnsafe(Context.Dr1);
    if ( inserted < 0 )
    {
      PspRundownSingleProcess((char *)Context.P3Home, 0);
      Info = inserted;
      P1Home = Context.P1Home;
LABEL_170:
      ObfDereferenceObject((PVOID)Context.Dr6);
      goto LABEL_171;
    }
    if ( Info >= 0 )
    {
      ProcessServerSilo = PsGetProcessServerSilo(Context.P3Home);
      if ( ProcessServerSilo == Context.VectorRegister[4].High )
      {
        Info = PspCreateObjectHandle(
                 (void *)Context.P3Home,
                 (__int64)&Context.VectorRegister[11],
                 (struct _OBJECT_TYPE *)PsProcessType);
        if ( Info < 0 )
        {
          P1Home = Context.P1Home;
        }
        else
        {
          v57 = (_OWORD *)Context.FltSave.XmmRegisters[2].High;
          if ( Context.FltSave.XmmRegisters[2].High )
          {
            *(_OWORD *)Context.FltSave.XmmRegisters[2].High = *(_OWORD *)&Context.Xmm3.High;
            v57[1] = *(_OWORD *)&Context.Xmm4.High;
            v57[2] = *(_OWORD *)&Context.Xmm5.High;
            v57[3] = *(_OWORD *)&Context.Xmm6.High;
          }
          *(_QWORD *)Context.Rdx = Handle;
          P1Home = Context.P1Home;
          Info = PspUpdateCreateInfo(6, (__int64)Context.FltSave.XmmRegisters, Context.P3Home);
          if ( Info >= 0 )
            goto LABEL_168;
          if ( (v60 & 0x200) != 0 || (v58 = 1, (*(_DWORD *)(v51 + 1532) & 0x1000) != 0) )
            v58 = 0;
          ObCloseHandle(Handle, v58);
        }
        if ( (v64 & 0x200) != 0 || (*(_DWORD *)(v51 + 1532) & 0x1000) != 0 )
          v21 = 0;
        ObCloseHandle(v65, v21);
LABEL_168:
        SeDeleteAccessState((__int64)&Context.VectorRegister[11]);
        if ( Info < 0 )
          PsTerminateProcess((void *)Context.P3Home);
        goto LABEL_170;
      }
      Info = -1073741267;
    }
    P1Home = Context.P1Home;
    goto LABEL_168;
  }
  Context.FltSave.XmmRegisters[11].High = 0LL;
  P1Home = Context.P1Home;
LABEL_190:
  PspDeleteMemoryPartitionContext((void *)Context.Dr2);
  PspDeleteCreateProcessContext((__int64)Context.FltSave.XmmRegisters);
  if ( Context.R15 )
    FsRtlFreeExtraCreateParameterList((PECP_LIST)Context.R15);
  if ( P1Home )
    ObfDereferenceObject((PVOID)Context.P6Home);
  return Info;
}
