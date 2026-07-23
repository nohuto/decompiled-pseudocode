/*
 * XREFs of NtCreateUserProcess @ 0x1409BC1D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x1404F1B70 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwSystemDebugControl @ 0x14069EB40 (ZwSystemDebugControl.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PspGetMemoryPartitionContext @ 0x1408D8120 (PspGetMemoryPartitionContext.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     PspCreateUserProcessEcp @ 0x1408ECC28 (PspCreateUserProcessEcp.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1408ED4B0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IoCreateFileEx @ 0x1408EE290 (IoCreateFileEx.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408EFA70 (FsRtlFreeExtraCreateParameterList.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PspBuildCreateProcessContext @ 0x1408F0220 (PspBuildCreateProcessContext.c)
 *     PspDeleteCreateProcessContext @ 0x1408F1B10 (PspDeleteCreateProcessContext.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     PsTerminateProcess @ 0x14091F3D4 (PsTerminateProcess.c)
 *     MmCreateSpecialImageSection @ 0x14093AC3C (MmCreateSpecialImageSection.c)
 *     SeQueryServerSiloToken @ 0x1409BB180 (SeQueryServerSiloToken.c)
 *     PspIsSiloInSilo @ 0x1409BB234 (PspIsSiloInSilo.c)
 *     PspUpdateCreateInfo @ 0x1409BB25C (PspUpdateCreateInfo.c)
 *     PspCreateUserContext @ 0x1409BBCC8 (PspCreateUserContext.c)
 *     PspCreateObjectHandle @ 0x1409BBD2C (PspCreateObjectHandle.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409BC040 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1409BC09C (PspCheckForInvalidAccessByProtection.c)
 *     PspMapThreadCreationFlags @ 0x1409BC114 (PspMapThreadCreationFlags.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1409BC16C (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspDeleteMemoryPartitionContext @ 0x1409BD0FC (PspDeleteMemoryPartitionContext.c)
 *     SeQuerySigningPolicy @ 0x1409BD120 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x1409BD294 (PspReferenceTokenForNewProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1409BD31C (PspEstimateNewProcessServerSilo.c)
 *     PspCaptureCreateInfo @ 0x1409BD3A4 (PspCaptureCreateInfo.c)
 *     PspCaptureProcessParameters @ 0x1409BD4C0 (PspCaptureProcessParameters.c)
 *     PspGetProcessParameterOverrides @ 0x1409BDF68 (PspGetProcessParameterOverrides.c)
 *     PspValidateCreateProcessProtection @ 0x1409BDFD8 (PspValidateCreateProcessProtection.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x140AA9BC4 (SeDuplicateTokenAndAddOriginClaim.c)
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
  __int64 Process; // rbx
  char PreviousMode; // r15
  ULONG v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG v17; // eax
  __int64 v18; // rcx
  int v19; // r12d
  int ProcessProtection; // esi
  KPROCESSOR_MODE v21; // r14
  __int64 v22; // r8
  int v23; // r8d
  __int64 v24; // r9
  unsigned __int8 v25; // bl
  __int64 v26; // rcx
  ULONG v27; // eax
  int v28; // eax
  __int64 v29; // rbx
  char v30; // cl
  PVOID v31; // rax
  unsigned __int8 Level; // bl
  int v33; // r8d
  __int64 v34; // r9
  PS_PROTECTION *v35; // r12
  __int64 v36; // rcx
  int v37; // edx
  int v38; // r9d
  __int64 *v39; // r12
  ULONG v40; // esi
  int v41; // ecx
  size_t v42; // r8
  unsigned __int64 v43; // rax
  void *v44; // rsp
  ULONG v45; // edx
  PCONTEXT v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rsi
  int v49; // r15d
  unsigned int v50; // r8d
  __int64 v51; // rax
  int inserted; // ebx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 ProcessServerSilo; // rax
  _OWORD *v57; // rax
  NTSTATUS result; // eax
  PS_PROTECTION *v59; // rbx
  __int64 v60; // rax
  int v61; // eax
  int v62; // ecx
  int v63; // eax
  int v64; // ecx
  KPROCESSOR_MODE v65; // dl
  __int64 v66; // rcx
  char v67; // bl
  int v68; // eax
  char v69; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v70; // [rsp+81h] [rbp+1h] BYREF
  PS_PROTECTION Source; // [rsp+82h] [rbp+2h] BYREF
  bool v72; // [rsp+83h] [rbp+3h]
  char v73; // [rsp+84h] [rbp+4h] BYREF
  char v74; // [rsp+85h] [rbp+5h]
  char v75; // [rsp+86h] [rbp+6h]
  __int64 v76; // [rsp+88h] [rbp+8h] BYREF
  PVOID SystemArgument1; // [rsp+90h] [rbp+10h] BYREF
  char v78; // [rsp+98h] [rbp+18h]
  __int16 v79; // [rsp+9Ch] [rbp+1Ch] BYREF
  int v80; // [rsp+A0h] [rbp+20h]
  ULONG ContextLength[2]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v82; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v83; // [rsp+B8h] [rbp+38h] BYREF
  int v84[2]; // [rsp+C0h] [rbp+40h]
  PCONTEXT_EX ContextEx; // [rsp+C8h] [rbp+48h] BYREF
  int v86; // [rsp+D0h] [rbp+50h]
  ACCESS_MASK v87; // [rsp+D4h] [rbp+54h]
  PVOID v88; // [rsp+D8h] [rbp+58h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v90; // [rsp+E8h] [rbp+68h] BYREF
  struct _KTHREAD *v91; // [rsp+F0h] [rbp+70h]
  PVOID v92; // [rsp+F8h] [rbp+78h] BYREF
  ULONG64 EnabledExtendedFeatures; // [rsp+100h] [rbp+80h]
  PVOID v94; // [rsp+108h] [rbp+88h]
  __int64 v95; // [rsp+110h] [rbp+90h]
  PHANDLE v96; // [rsp+118h] [rbp+98h]
  struct _IO_DRIVER_CREATE_CONTEXT EcpList; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v98; // [rsp+140h] [rbp+C0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+148h] [rbp+C8h] BYREF
  POBJECT_ATTRIBUTES v100; // [rsp+178h] [rbp+F8h]
  __int64 v101; // [rsp+180h] [rbp+100h]
  __int128 InputBuffer; // [rsp+188h] [rbp+108h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+198h] [rbp+118h] BYREF
  __int64 v104[2]; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v105; // [rsp+1B8h] [rbp+138h]
  _BYTE v106[80]; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v107; // [rsp+210h] [rbp+190h] BYREF
  __int64 v108; // [rsp+218h] [rbp+198h]
  char v109; // [rsp+220h] [rbp+1A0h]
  char v110; // [rsp+221h] [rbp+1A1h]
  __int64 v111; // [rsp+228h] [rbp+1A8h]
  _OWORD *v112; // [rsp+238h] [rbp+1B8h]
  __int128 v113; // [rsp+248h] [rbp+1C8h]
  __int128 v114; // [rsp+258h] [rbp+1D8h]
  __int128 v115; // [rsp+268h] [rbp+1E8h]
  __int128 v116; // [rsp+278h] [rbp+1F8h]
  ULONG_PTR BugCheckParameter1; // [rsp+290h] [rbp+210h]
  __int64 v118; // [rsp+298h] [rbp+218h]
  HANDLE v119; // [rsp+2A0h] [rbp+220h]
  __int64 v120; // [rsp+2A8h] [rbp+228h]
  void *v121; // [rsp+2B0h] [rbp+230h] BYREF
  int v122; // [rsp+2BCh] [rbp+23Ch]
  HANDLE Handle; // [rsp+2C0h] [rbp+240h] BYREF
  PVOID v124; // [rsp+2C8h] [rbp+248h]
  HANDLE v125[2]; // [rsp+2D0h] [rbp+250h] BYREF
  PVOID v126; // [rsp+2E0h] [rbp+260h]
  __int64 v127; // [rsp+2E8h] [rbp+268h]
  unsigned int v128; // [rsp+2FCh] [rbp+27Ch]
  _OWORD v129[7]; // [rsp+300h] [rbp+280h] BYREF
  __int64 v130; // [rsp+378h] [rbp+2F8h]
  __int64 v131; // [rsp+380h] [rbp+300h]
  unsigned int v132; // [rsp+38Ch] [rbp+30Ch]
  unsigned int v133; // [rsp+39Ch] [rbp+31Ch]
  __int64 v134; // [rsp+3A0h] [rbp+320h]
  __int64 v135; // [rsp+3B8h] [rbp+338h]
  struct _ACCESS_STATE v136; // [rsp+400h] [rbp+380h] BYREF
  ULONG v137; // [rsp+580h] [rbp+500h]
  char v138; // [rsp+584h] [rbp+504h]
  HANDLE v139; // [rsp+588h] [rbp+508h]
  struct _ACCESS_STATE AccessState; // [rsp+590h] [rbp+510h] BYREF
  int v141; // [rsp+710h] [rbp+690h]
  HANDLE v142; // [rsp+718h] [rbp+698h]
  __int64 v143[2]; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v144; // [rsp+730h] [rbp+6B0h]
  char v145; // [rsp+738h] [rbp+6B8h]

  v86 = ThreadDesiredAccess;
  v87 = ProcessDesiredAccess;
  v95 = (__int64)ThreadHandle;
  v96 = ProcessHandle;
  EnabledExtendedFeatures = (ULONG64)ProcessObjectAttributes;
  v100 = ThreadObjectAttributes;
  v94 = ProcessParameters;
  v79 = 0;
  LODWORD(v76) = 0;
  *(_DWORD *)(&EcpList.Size + 1) = 0;
  *(&EcpList.Size + 3) = 0;
  IoStatusBlock = 0LL;
  SystemArgument1 = 0LL;
  v92 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v82 = 0LL;
  memset_0(&v136, 0, 0x190uLL);
  InputBuffer = 0LL;
  v74 = 0;
  v70 = 0;
  v73 = 0;
  v69 = 0;
  *(_OWORD *)v143 = 0LL;
  v144 = 0LL;
  v145 = 0;
  memset_0(&AccessState, 0, 0x190uLL);
  ContextEx = 0LL;
  ContextLength[0] = 0;
  v83 = 0LL;
  *(_OWORD *)v104 = 0LL;
  v105 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v91 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  *(_QWORD *)v84 = Process;
  v101 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v78 = PreviousMode;
  v90 = 0LL;
  v88 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v80 = (int)CurrentThread;
  v75 = 0;
  v72 = 0;
  memset(&EcpList, 0, sizeof(EcpList));
  v98 = 0LL;
  memset_0(v106, 0, 0x48uLL);
  v14 = ProcessFlags;
  if ( (ProcessFlags & 0xFFB17838) != 0 || (ThreadFlags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( (ProcessFlags & 0x8400) == 0x8400 )
    return -1073741776;
  v138 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v96 < 0x7FFFFFFF0000LL )
      v15 = (__int64)v96;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v95 < 0x7FFFFFFF0000LL )
      v16 = v95;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( ProcessObjectAttributes )
  {
    if ( PreviousMode && ((unsigned __int8)ProcessObjectAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = ProcessObjectAttributes->Attributes & 0x1DF2;
    else
      v17 = ProcessObjectAttributes->Attributes & 0x11FF2;
    v137 = v17;
  }
  memset_0(&v107, 0, 0x1F0uLL);
  if ( AttributeList )
  {
    result = PspBuildCreateProcessContext((__int64 *)AttributeList, PreviousMode, 0, (char *)&v107);
    if ( result < 0 )
      return result;
    v72 = v130 != 0;
  }
  v19 = 0x20000;
  if ( (ProcessFlags & 0x40) != 0 && (v108 & 0x20000) != 0 && !BYTE1(v107) )
  {
    v14 = ProcessFlags & 0xFFFFFFBF;
    v108 &= ~0x20000uLL;
  }
  if ( (v14 & 4) == 0 && (v108 & 0x800) != 0 || (v108 & 0x20000) != 0 && (v14 & 0x40) == 0 )
    goto LABEL_122;
  LOBYTE(v18) = PreviousMode;
  ProcessProtection = PspCaptureCreateInfo(v18, CreateInfo, &v107);
  if ( ProcessProtection < 0 )
  {
LABEL_100:
    if ( v124 && qword_140F04570 )
      guard_dispatch_icall_no_overrides(v124);
    goto LABEL_103;
  }
  v21 = 1;
  if ( (v108 & 1) != 0 )
  {
    ProcessProtection = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1,
                          128,
                          (__int64)PsProcessType,
                          PreviousMode,
                          0x72437350u,
                          &v82,
                          0LL,
                          0LL);
    if ( ProcessProtection < 0 )
      goto LABEL_100;
    Process = v82;
    v118 = v82;
  }
  v82 = Process;
  v135 = PspEstimateNewProcessServerSilo(Process, v131, v132);
  if ( (v110 & 0xC) == 4 && (Process != *(_QWORD *)v84 || (*(_DWORD *)(*(_QWORD *)v84 + 1532LL) & 0x1000) != 0) )
    goto LABEL_122;
  LOBYTE(v22) = PreviousMode;
  ProcessProtection = PspReferenceTokenForNewProcess(Process, v120, v22, &v121);
  if ( ProcessProtection < 0 )
  {
    v121 = 0LL;
    goto LABEL_100;
  }
  if ( v120 && (int)SeQueryServerSiloToken((__int64)v121, (__int64)&v83) >= 0 && !PspIsSiloInSilo(v83, v135) )
    goto LABEL_122;
  if ( (v108 & 0x20) == 0 )
  {
    if ( Process == *(_QWORD *)v84
      && PreviousMode
      && !v94
      && (v110 & 0xC) == 0
      && (v108 & 0x80u) == 0LL
      && (v108 & 0x20000) == 0
      && (v109 & 0x10) == 0 )
    {
      v109 &= ~4u;
      Level = *(_BYTE *)(Process + 1530);
      v68 = v82;
      v69 = *(_BYTE *)(v82 + 1529);
      LOBYTE(v68) = *(_BYTE *)(v82 + 1528);
      LODWORD(ContextEx) = v68;
      if ( (v14 & 0x40) != 0 && (Level & 7) == 0 )
      {
        ProcessProtection = -1073741790;
        goto LABEL_100;
      }
      LOBYTE(v23) = PreviousMode;
      ProcessProtection = PspValidateCreateProcessProtection(v84[0], (int)&v107, v23, v14, (PS_PROTECTION)Level);
      if ( ProcessProtection < 0 )
        goto LABEL_100;
      v39 = 0LL;
LABEL_65:
      LOBYTE(v38) = Level;
      LOBYTE(v37) = PreviousMode;
      ProcessProtection = PspAllocateProcess(
                            v82,
                            v37,
                            EnabledExtendedFeatures,
                            v38,
                            (char)ContextEx,
                            v69,
                            (__int64)v126,
                            (__int64)v121,
                            v14,
                            0,
                            (__int64)&v107,
                            v120 != 0,
                            v90,
                            (__int64)&v79,
                            (__int64)&SystemArgument1);
      if ( ProcessProtection < 0 )
        goto LABEL_100;
      v40 = v126 != 0LL ? 1048587 : 1048603;
      v41 = *((_DWORD *)SystemArgument1 + 469) & 0x4000;
      EnabledExtendedFeatures = v41 != 0 ? 0x800 : 0;
      if ( v41 )
        v40 |= 0x100040u;
      RtlGetExtendedContextLength2(v40, ContextLength, v41 != 0 ? 0x800 : 0);
      if ( v72 )
      {
        v39 = 0LL;
        v46 = 0LL;
      }
      else
      {
        v42 = ContextLength[0];
        v43 = ContextLength[0] + 15LL;
        if ( v43 <= ContextLength[0] )
          v43 = 0xFFFFFFFFFFFFFF0LL;
        v44 = alloca(v43 & 0xFFFFFFFFFFFFFFF0uLL);
        *(_QWORD *)ContextLength = &v69;
        memset_0(&v69, 0, v42);
        v45 = v40;
        v46 = *(PCONTEXT *)ContextLength;
        RtlInitializeExtendedContext2(*(PCONTEXT *)ContextLength, v45, &ContextEx, EnabledExtendedFeatures);
        if ( v126 )
        {
          v47 = v128;
          if ( !*((_QWORD *)SystemArgument1 + 98) )
            v47 = *((_QWORD *)SystemArgument1 + 92);
          PspCreateUserContext((__int64)v46, 1, qword_140FC6480, v113, v47);
        }
        else
        {
          ProcessProtection = PspGetContextThreadInternal((__int64)v91, (__int64)v46, 0, 1, 1);
          if ( ProcessProtection < 0 )
          {
            PspUnlockProcessExclusive((__int64)SystemArgument1, (__int64)v91);
            PspRundownSingleProcess((char *)SystemArgument1, 0);
            goto LABEL_100;
          }
          v46 = *(PCONTEXT *)ContextLength;
          *(_QWORD *)(*(_QWORD *)ContextLength + 120LL) = 297LL;
        }
        v104[0] = (__int64)v106;
      }
      ObfReferenceObjectWithTag(SystemArgument1, 0x72437350u);
      if ( v39 )
      {
        *(_BYTE *)v39 = 0;
        v60 = v114;
        if ( (unsigned __int64)v114 < 0x40000 )
          v60 = 0x40000LL;
        v39[3] = v60;
        v39[2] = *((_QWORD *)&v114 + 1);
        v39[1] = DWORD2(v113);
      }
      ContextLength[0] = 0;
      PspMapThreadCreationFlags(ThreadFlags, (int *)&v76);
      if ( (_BYTE)v79 )
      {
        ContextLength[0] = 2;
        LODWORD(v76) = v76 | 0x10;
      }
      if ( HIBYTE(v79) )
        v14 |= 0x400u;
      if ( v72 )
        LODWORD(v76) = v76 | 0x400;
      LODWORD(v76) = v76 | 0x60;
      ProcessProtection = PspAllocateThread(
                            (ULONG_PTR)SystemArgument1,
                            (__int64)v100,
                            PreviousMode,
                            (__int64)&v107,
                            (size_t)v46,
                            v104,
                            0LL,
                            0LL,
                            (int *)&v76,
                            &v92,
                            v39,
                            (__int64)&AccessState);
      if ( ProcessProtection < 0 )
      {
        PspUnlockProcessExclusive((__int64)SystemArgument1, (__int64)v91);
        PspRundownSingleProcess((char *)SystemArgument1, 0);
        goto LABEL_99;
      }
      v48 = *(_QWORD *)v84;
      if ( PsTestProtectedProcessIncompatibility(PreviousMode, *(PS_PROTECTION **)v84, (PS_PROTECTION *)SystemArgument1) )
      {
        Feature_ID51912085__private_IsEnabledPreCheck();
        v50 = v87;
        if ( (v87 & 0x2000000) != 0 )
        {
          v50 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)Level >> 4) + 4] & 0x1FFFFF | v87 & 0xFDFFFFFF;
          if ( !v118 || v48 == v118 )
            v50 |= 1u;
        }
        v49 = v86;
        if ( (v86 & 0x2000000) != 0 )
        {
          v49 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)Level >> 4) + 8] & 0x1FFFFF | v86 & 0xFDFFFFFF;
          if ( !v118 || v48 == v118 )
            v49 |= 1u;
        }
      }
      else
      {
        v49 = v86;
        v50 = v87;
      }
      if ( v127 )
        v51 = v127 + 112;
      else
        v51 = 0LL;
      inserted = PspInsertProcess(
                   (char *)SystemArgument1,
                   (struct _KPROCESS *)v82,
                   v50,
                   v14,
                   v119,
                   ContextLength[0],
                   v51,
                   &v136);
      ProcessProtection = PspInsertThread(
                            (char *)v92,
                            (ULONG_PTR)SystemArgument1,
                            (__int64)v106,
                            &v76,
                            v49,
                            v39,
                            (__int64)&v107,
                            0LL,
                            &AccessState,
                            (PVOID *)v95,
                            (_OWORD *)v111);
      KiLeaveCriticalRegionUnsafe((__int64)v91, v53, v54, v55);
      if ( inserted < 0 )
      {
        PspRundownSingleProcess((char *)SystemArgument1, 0);
        ProcessProtection = inserted;
LABEL_98:
        ObfDereferenceObject(v92);
LABEL_99:
        ObfDereferenceObjectWithTag(SystemArgument1, 0x72437350u);
        goto LABEL_100;
      }
      if ( ProcessProtection >= 0 )
      {
        ProcessServerSilo = PsGetProcessServerSilo((__int64)SystemArgument1);
        if ( ProcessServerSilo == v135 )
        {
          ProcessProtection = PspCreateObjectHandle(
                                SystemArgument1,
                                (__int64)&v136,
                                (struct _OBJECT_TYPE *)PsProcessType);
          if ( ProcessProtection >= 0 )
          {
            v57 = v112;
            if ( v112 )
            {
              *v112 = v113;
              v57[1] = v114;
              v57[2] = v115;
              v57[3] = v116;
            }
            *v96 = v139;
            v59 = *(PS_PROTECTION **)v84;
            ProcessProtection = PspUpdateCreateInfo(6, (__int64)&v107, (__int64)SystemArgument1);
            if ( ProcessProtection >= 0 )
              goto LABEL_96;
            if ( (v137 & 0x200) != 0 || (v65 = 1, (*(_DWORD *)&v59[1532].Level & 0x1000) != 0) )
              v65 = 0;
            ObCloseHandle(v139, v65);
          }
          if ( (v141 & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)v84 + 1532LL) & 0x1000) != 0 )
            v21 = 0;
          ObCloseHandle(v142, v21);
        }
        else
        {
          ProcessProtection = -1073741267;
        }
      }
LABEL_96:
      SeDeleteAccessState((__int64)&v136);
      if ( ProcessProtection < 0 )
        PsTerminateProcess((volatile signed __int32 *)SystemArgument1, ProcessProtection);
      goto LABEL_98;
    }
LABEL_122:
    ProcessProtection = -1073741811;
    goto LABEL_100;
  }
  v25 = (v108 & 0x20000) != 0 ? BYTE1(v107) : 0;
  Source.Level = v25;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    InputBuffer = v129[0];
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
  }
  if ( (v14 & 0x400000) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    ProcessProtection = -1073741727;
    goto LABEL_100;
  }
  LOBYTE(v24) = v25;
  ProcessProtection = SeQuerySigningPolicy(v121, v129, (v14 >> 6) & 1, v24, &v70, &v73, &Source);
  if ( ProcessProtection < 0 )
    goto LABEL_100;
  if ( (v14 & 0x20000) != 0 )
  {
    LOBYTE(v26) = v70;
    v61 = SeCompareSigningLevels(v26);
    v19 = v70;
    if ( !v61 )
      v19 = 8;
  }
  else
  {
    LOBYTE(v19) = v70;
  }
  LODWORD(ContextEx) = v19;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v27 = 1600;
  if ( PreviousMode != 1 )
    v27 = 576;
  ObjectAttributes.Attributes = v27;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v129;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ProcessProtection = 0;
  if ( qword_140FD73C0 )
    ProcessProtection = guard_dispatch_icall_no_overrides(v121);
  if ( ProcessProtection < 0 )
    goto LABEL_100;
  ProcessProtection = PspGetMemoryPartitionContext(v82, v14, v131, v132, &v90);
  if ( ProcessProtection < 0 )
    goto LABEL_100;
  ProcessProtection = PspCreateUserProcessEcp((__int64)&EcpList, (__int64)v121);
  if ( ProcessProtection < 0 )
    goto LABEL_100;
  v28 = v122 | 0x100020;
  LODWORD(v83) = v122 | 0x100020;
  v29 = EcpList.DeviceObjectHint != 0LL;
  if ( EcpList.ExtraCreateParameter )
  {
    ProcessProtection = FsRtlpPrepareExtraCreateParametersForCreate((ULONG_PTR)EcpList.ExtraCreateParameter);
    if ( ProcessProtection < 0 )
      goto LABEL_50;
    v28 = v83;
  }
  if ( EcpList.TxnParameters )
    LODWORD(v29) = v29 | 4;
  if ( v98 != 1 && EcpList.Size >= 0x28u )
    LODWORD(v29) = v29 | 0x40;
  ProcessProtection = IopCreateFile(
                        &Handle,
                        v28,
                        (__int64)&ObjectAttributes,
                        (NTSTATUS *)&IoStatusBlock.0,
                        0LL,
                        128,
                        5,
                        1u,
                        96,
                        0LL,
                        0,
                        0,
                        0LL,
                        256,
                        v29,
                        &EcpList.Size);
LABEL_50:
  if ( ProcessProtection < 0 )
  {
    if ( v122 )
      ProcessProtection = IoCreateFileEx(
                            &Handle,
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
                            &EcpList);
    if ( ProcessProtection < 0 )
    {
      Handle = 0LL;
      v62 = 1;
LABEL_145:
      PspUpdateCreateInfo(v62, (__int64)&v107, 0LL);
      goto LABEL_100;
    }
  }
  Object = 0LL;
  ProcessProtection = ObReferenceObjectByHandle(Handle, 0x100020u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v124 = Object;
  if ( ProcessProtection >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    v30 = 4 * v72 + 1;
    LODWORD(v83) = 4 * v72 + 1;
    if ( v134 )
    {
      v63 = SeDuplicateTokenAndAddOriginClaim(v121, v134, v133, &v88);
      v64 = (unsigned __int8)v80;
      if ( v63 >= 0 )
        v64 = 1;
      v80 = v64;
      v75 = v64;
      v30 = v83;
    }
    v31 = v88;
    if ( !(_BYTE)v80 )
      v31 = v121;
    v88 = v31;
    while ( 1 )
    {
      ProcessProtection = MmCreateSpecialImageSection(
                            (__int64 *)v125,
                            (int)&ObjectAttributes,
                            (__int64)v88,
                            v19,
                            (__int64)Handle,
                            v30);
      if ( ProcessProtection < 0 )
      {
        v125[0] = 0LL;
        v62 = 2;
        goto LABEL_145;
      }
      Object = 0LL;
      ProcessProtection = ObReferenceObjectByHandle(v125[0], 8u, MmSectionObjectType, 0, &Object, 0LL);
      v126 = Object;
      if ( ProcessProtection < 0 )
      {
        v126 = 0LL;
        goto LABEL_100;
      }
      Level = Source.Level;
      ProcessProtection = PspGetProcessProtectionRequirementsFromImage((__int64)Object);
      if ( ProcessProtection < 0 )
        goto LABEL_100;
      LOBYTE(v34) = v74;
      if ( v74 == Level )
        break;
      ProcessProtection = SeQuerySigningPolicy(v121, v129, 1LL, v34, &v69, &v73, &Source);
      if ( ProcessProtection < 0 )
        goto LABEL_100;
      v67 = v69;
      if ( v69 == (_BYTE)v19 )
      {
        Level = Source.Level;
        break;
      }
      if ( (v19 & 0x30) != 0 && (v69 & 0x30) != (v19 & 0x30) )
        goto LABEL_122;
      LOBYTE(v66) = v69;
      if ( !(unsigned int)SeCompareSigningLevels(v66) )
        goto LABEL_122;
      ObCloseHandle(v125[0], 0);
      ObfDereferenceObject(v126);
      v125[0] = 0LL;
      v126 = 0LL;
      LOBYTE(v19) = v67;
      LODWORD(ContextEx) = v19;
      v30 = v83;
    }
    LOBYTE(v33) = PreviousMode;
    v35 = *(PS_PROTECTION **)v84;
    ProcessProtection = PspValidateCreateProcessProtection(v84[0], (int)&v107, v33, v14, (PS_PROTECTION)Level);
    if ( ProcessProtection < 0 )
      goto LABEL_100;
    if ( (v14 & 0x40000) != 0
      || (Level & 7) != 1 && PspCheckForInvalidAccessByProtection(PreviousMode, v35[1530], (PS_PROTECTION)Level) )
    {
      v109 |= 8u;
    }
    PspGetProcessParameterOverrides(&v107, v90);
    LOBYTE(v36) = PreviousMode;
    ProcessProtection = PspCaptureProcessParameters(v36, v94, &v107);
    if ( ProcessProtection >= 0 )
    {
      v39 = v143;
      v69 = v73;
      goto LABEL_65;
    }
    v109 &= ~4u;
    goto LABEL_100;
  }
  v124 = 0LL;
LABEL_103:
  PspDeleteMemoryPartitionContext(v90);
  PspDeleteCreateProcessContext((__int64)&v107);
  if ( EcpList.ExtraCreateParameter )
    FsRtlFreeExtraCreateParameterList(EcpList.ExtraCreateParameter);
  if ( (_BYTE)v80 )
    ObfDereferenceObject(v88);
  return ProcessProtection;
}
