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

__int64 __fastcall NtCreateUserProcess(
        HANDLE *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbx
  char PreviousMode; // r15
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r12d
  signed int ProcessProtection; // esi
  KPROCESSOR_MODE v21; // r14
  __int64 v22; // r8
  int v23; // r8d
  __int64 v24; // r9
  unsigned __int8 v25; // bl
  __int64 v26; // rcx
  ULONG v27; // eax
  int v28; // eax
  int v29; // ebx
  char v30; // cl
  PVOID v31; // rax
  unsigned __int8 v32; // bl
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // edx
  int v40; // r9d
  __int64 *v41; // r12
  int v42; // esi
  int v43; // ecx
  size_t v44; // r8
  unsigned __int64 v45; // rax
  void *v46; // rsp
  int v47; // edx
  size_t v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rsi
  int v52; // r15d
  unsigned int v53; // r8d
  __int64 v54; // rax
  int inserted; // ebx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 ProcessServerSilo; // rax
  _OWORD *v60; // rax
  __int64 result; // rax
  __int64 v62; // rbx
  __int64 v63; // rax
  int v64; // eax
  int v65; // ecx
  int v66; // eax
  int v67; // ecx
  KPROCESSOR_MODE v68; // dl
  __int64 v69; // rcx
  char v70; // bl
  int v71; // eax
  char v72; // [rsp+80h] [rbp+0h] BYREF
  unsigned __int8 v73; // [rsp+81h] [rbp+1h] BYREF
  unsigned __int8 v74; // [rsp+82h] [rbp+2h] BYREF
  bool v75; // [rsp+83h] [rbp+3h]
  char v76; // [rsp+84h] [rbp+4h] BYREF
  char v77; // [rsp+85h] [rbp+5h]
  char v78; // [rsp+86h] [rbp+6h]
  __int64 v79; // [rsp+88h] [rbp+8h] BYREF
  PVOID SystemArgument1; // [rsp+90h] [rbp+10h] BYREF
  char v81; // [rsp+98h] [rbp+18h]
  __int16 v82; // [rsp+9Ch] [rbp+1Ch] BYREF
  int v83; // [rsp+A0h] [rbp+20h]
  char v84[8]; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v85; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v86; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v87; // [rsp+C0h] [rbp+40h]
  __int64 v88; // [rsp+C8h] [rbp+48h] BYREF
  int v89; // [rsp+D0h] [rbp+50h]
  unsigned int v90; // [rsp+D4h] [rbp+54h]
  PVOID v91; // [rsp+D8h] [rbp+58h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v93; // [rsp+E8h] [rbp+68h] BYREF
  struct _KTHREAD *v94; // [rsp+F0h] [rbp+70h]
  PVOID v95; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v96; // [rsp+100h] [rbp+80h]
  __int64 v97; // [rsp+108h] [rbp+88h]
  __int64 v98; // [rsp+110h] [rbp+90h]
  HANDLE *v99; // [rsp+118h] [rbp+98h]
  struct _IO_DRIVER_CREATE_CONTEXT EcpList; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v101; // [rsp+140h] [rbp+C0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+148h] [rbp+C8h] BYREF
  __int64 v103; // [rsp+178h] [rbp+F8h]
  __int64 v104; // [rsp+180h] [rbp+100h]
  __int128 v105; // [rsp+188h] [rbp+108h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+198h] [rbp+118h] BYREF
  __int64 v107[2]; // [rsp+1A8h] [rbp+128h] BYREF
  __int64 v108; // [rsp+1B8h] [rbp+138h]
  _BYTE v109[80]; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v110; // [rsp+210h] [rbp+190h] BYREF
  __int64 v111; // [rsp+218h] [rbp+198h]
  char v112; // [rsp+220h] [rbp+1A0h]
  char v113; // [rsp+221h] [rbp+1A1h]
  __int64 v114; // [rsp+228h] [rbp+1A8h]
  _OWORD *v115; // [rsp+238h] [rbp+1B8h]
  __int128 v116; // [rsp+248h] [rbp+1C8h]
  __int128 v117; // [rsp+258h] [rbp+1D8h]
  __int128 v118; // [rsp+268h] [rbp+1E8h]
  __int128 v119; // [rsp+278h] [rbp+1F8h]
  ULONG_PTR BugCheckParameter1; // [rsp+290h] [rbp+210h]
  __int64 v121; // [rsp+298h] [rbp+218h]
  HANDLE v122; // [rsp+2A0h] [rbp+220h]
  __int64 v123; // [rsp+2A8h] [rbp+228h]
  void *v124; // [rsp+2B0h] [rbp+230h] BYREF
  int v125; // [rsp+2BCh] [rbp+23Ch]
  HANDLE Handle; // [rsp+2C0h] [rbp+240h] BYREF
  PVOID v127; // [rsp+2C8h] [rbp+248h]
  HANDLE v128[2]; // [rsp+2D0h] [rbp+250h] BYREF
  PVOID v129; // [rsp+2E0h] [rbp+260h]
  __int64 v130; // [rsp+2E8h] [rbp+268h]
  unsigned int v131; // [rsp+2FCh] [rbp+27Ch]
  _OWORD v132[7]; // [rsp+300h] [rbp+280h] BYREF
  __int64 v133; // [rsp+378h] [rbp+2F8h]
  __int64 v134; // [rsp+380h] [rbp+300h]
  unsigned int v135; // [rsp+38Ch] [rbp+30Ch]
  unsigned int v136; // [rsp+39Ch] [rbp+31Ch]
  __int64 v137; // [rsp+3A0h] [rbp+320h]
  __int64 v138; // [rsp+3B8h] [rbp+338h]
  struct _ACCESS_STATE v139; // [rsp+400h] [rbp+380h] BYREF
  int v140; // [rsp+580h] [rbp+500h]
  char v141; // [rsp+584h] [rbp+504h]
  HANDLE v142; // [rsp+588h] [rbp+508h]
  struct _ACCESS_STATE AccessState; // [rsp+590h] [rbp+510h] BYREF
  int v144; // [rsp+710h] [rbp+690h]
  HANDLE v145; // [rsp+718h] [rbp+698h]
  __int64 v146[2]; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v147; // [rsp+730h] [rbp+6B0h]
  char v148; // [rsp+738h] [rbp+6B8h]

  v89 = a4;
  v90 = a3;
  v98 = a2;
  v99 = a1;
  v96 = a5;
  v103 = a6;
  v97 = a9;
  v82 = 0;
  LODWORD(v79) = 0;
  *(_DWORD *)(&EcpList.Size + 1) = 0;
  *(&EcpList.Size + 3) = 0;
  IoStatusBlock = 0LL;
  SystemArgument1 = 0LL;
  v95 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v85 = 0LL;
  memset_0(&v139, 0, 0x190uLL);
  v105 = 0LL;
  v77 = 0;
  v73 = 0;
  v76 = 0;
  v72 = 0;
  *(_OWORD *)v146 = 0LL;
  v147 = 0LL;
  v148 = 0;
  memset_0(&AccessState, 0, 0x190uLL);
  v88 = 0LL;
  *(_DWORD *)v84 = 0;
  v86 = 0LL;
  *(_OWORD *)v107 = 0LL;
  v108 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v94 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v87 = Process;
  v104 = Process;
  PreviousMode = CurrentThread->PreviousMode;
  v81 = PreviousMode;
  v93 = 0LL;
  v91 = 0LL;
  LOBYTE(CurrentThread) = 0;
  v83 = (int)CurrentThread;
  v78 = 0;
  v75 = 0;
  memset(&EcpList, 0, sizeof(EcpList));
  v101 = 0LL;
  memset_0(v109, 0, 0x48uLL);
  v14 = a7;
  if ( (a7 & 0xFFB17838) != 0 || (a8 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (a7 & 0x8400) == 0x8400 )
    return 3221225520LL;
  v141 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v99 < 0x7FFFFFFF0000LL )
      v15 = (__int64)v99;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v98 < 0x7FFFFFFF0000LL )
      v16 = v98;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  if ( a5 )
  {
    if ( PreviousMode && (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( PreviousMode )
      v17 = *(_DWORD *)(a5 + 24) & 0x1DF2;
    else
      v17 = *(_DWORD *)(a5 + 24) & 0x11FF2;
    v140 = v17;
  }
  memset_0(&v110, 0, 0x1F0uLL);
  if ( a11 )
  {
    result = PspBuildCreateProcessContext(a11, PreviousMode, 0, (char *)&v110);
    if ( (int)result < 0 )
      return result;
    v75 = v133 != 0;
  }
  v19 = 0x20000;
  if ( (a7 & 0x40) != 0 && (v111 & 0x20000) != 0 && !BYTE1(v110) )
  {
    v14 = a7 & 0xFFFFFFBF;
    v111 &= ~0x20000uLL;
  }
  if ( (v14 & 4) == 0 && (v111 & 0x800) != 0 || (v111 & 0x20000) != 0 && (v14 & 0x40) == 0 )
    goto LABEL_122;
  LOBYTE(v18) = PreviousMode;
  ProcessProtection = PspCaptureCreateInfo(v18, a10, &v110);
  if ( ProcessProtection < 0 )
  {
LABEL_100:
    if ( v127 && qword_140F04570 )
      guard_dispatch_icall_no_overrides(v127);
    goto LABEL_103;
  }
  v21 = 1;
  if ( (v111 & 1) != 0 )
  {
    ProcessProtection = ObpReferenceObjectByHandleWithTag(
                          BugCheckParameter1,
                          128,
                          (__int64)PsProcessType,
                          PreviousMode,
                          0x72437350u,
                          &v85,
                          0LL,
                          0LL);
    if ( ProcessProtection < 0 )
      goto LABEL_100;
    Process = v85;
    v121 = v85;
  }
  v85 = Process;
  v138 = PspEstimateNewProcessServerSilo(Process, v134, v135);
  if ( (v113 & 0xC) == 4 && (Process != v87 || (*(_DWORD *)(v87 + 1532) & 0x1000) != 0) )
    goto LABEL_122;
  LOBYTE(v22) = PreviousMode;
  ProcessProtection = PspReferenceTokenForNewProcess(Process, v123, v22, &v124);
  if ( ProcessProtection < 0 )
  {
    v124 = 0LL;
    goto LABEL_100;
  }
  if ( v123 && (int)SeQueryServerSiloToken((__int64)v124, (__int64)&v86) >= 0 && !PspIsSiloInSilo(v86, v138) )
    goto LABEL_122;
  if ( (v111 & 0x20) == 0 )
  {
    if ( Process == v87
      && PreviousMode
      && !v97
      && (v113 & 0xC) == 0
      && (v111 & 0x80u) == 0LL
      && (v111 & 0x20000) == 0
      && (v112 & 0x10) == 0 )
    {
      v112 &= ~4u;
      v32 = *(_BYTE *)(Process + 1530);
      v71 = v85;
      v72 = *(_BYTE *)(v85 + 1529);
      LOBYTE(v71) = *(_BYTE *)(v85 + 1528);
      LODWORD(v88) = v71;
      if ( (v14 & 0x40) != 0 && (v32 & 7) == 0 )
      {
        ProcessProtection = -1073741790;
        goto LABEL_100;
      }
      LOBYTE(v23) = PreviousMode;
      ProcessProtection = PspValidateCreateProcessProtection(v87, (unsigned int)&v110, v23, v14, v32);
      if ( ProcessProtection < 0 )
        goto LABEL_100;
      v41 = 0LL;
LABEL_65:
      LOBYTE(v40) = v32;
      LOBYTE(v39) = PreviousMode;
      ProcessProtection = PspAllocateProcess(
                            v85,
                            v39,
                            v96,
                            v40,
                            v88,
                            v72,
                            (__int64)v129,
                            (__int64)v124,
                            v14,
                            0,
                            (__int64)&v110,
                            v123 != 0,
                            v93,
                            (__int64)&v82,
                            (__int64)&SystemArgument1);
      if ( ProcessProtection < 0 )
        goto LABEL_100;
      v42 = v129 != 0LL ? 1048587 : 1048603;
      v43 = *((_DWORD *)SystemArgument1 + 469) & 0x4000;
      v96 = v43 != 0 ? 0x800 : 0;
      if ( v43 )
        v42 |= 0x100040u;
      RtlGetExtendedContextLength2(v42, v84, v43 != 0 ? 0x800 : 0);
      if ( v75 )
      {
        v41 = 0LL;
        v48 = 0LL;
      }
      else
      {
        v44 = *(unsigned int *)v84;
        v45 = *(unsigned int *)v84 + 15LL;
        if ( v45 <= *(unsigned int *)v84 )
          v45 = 0xFFFFFFFFFFFFFF0LL;
        v46 = alloca(v45 & 0xFFFFFFFFFFFFFFF0uLL);
        *(_QWORD *)v84 = &v72;
        memset_0(&v72, 0, v44);
        v47 = v42;
        v48 = *(_QWORD *)v84;
        RtlInitializeExtendedContext2(*(__int64 *)v84, v47, &v88, v96);
        if ( v129 )
        {
          v49 = v131;
          if ( !*((_QWORD *)SystemArgument1 + 98) )
            v49 = *((_QWORD *)SystemArgument1 + 92);
          PspCreateUserContext(v48, 1, qword_140FC6480, v116, v49);
        }
        else
        {
          ProcessProtection = PspGetContextThreadInternal((__int64)v94, v48, 0, 1, 1);
          if ( ProcessProtection < 0 )
          {
            PspUnlockProcessExclusive((__int64)SystemArgument1, (__int64)v94);
            PspRundownSingleProcess((char *)SystemArgument1, 0);
            goto LABEL_100;
          }
          v48 = *(_QWORD *)v84;
          *(_QWORD *)(*(_QWORD *)v84 + 120LL) = 297LL;
        }
        v107[0] = (__int64)v109;
      }
      ObfReferenceObjectWithTag(SystemArgument1, 0x72437350u);
      if ( v41 )
      {
        *(_BYTE *)v41 = 0;
        v63 = v117;
        if ( (unsigned __int64)v117 < 0x40000 )
          v63 = 0x40000LL;
        v41[3] = v63;
        v41[2] = *((_QWORD *)&v117 + 1);
        v41[1] = DWORD2(v116);
      }
      *(_DWORD *)v84 = 0;
      PspMapThreadCreationFlags(a8, (int *)&v79);
      if ( (_BYTE)v82 )
      {
        *(_DWORD *)v84 = 2;
        LODWORD(v79) = v79 | 0x10;
      }
      if ( HIBYTE(v82) )
        v14 |= 0x400u;
      if ( v75 )
        LODWORD(v79) = v79 | 0x400;
      LODWORD(v79) = v79 | 0x60;
      ProcessProtection = PspAllocateThread(
                            (ULONG_PTR)SystemArgument1,
                            v103,
                            PreviousMode,
                            (__int64)&v110,
                            v48,
                            v107,
                            0LL,
                            0LL,
                            (int *)&v79,
                            &v95,
                            v41,
                            (__int64)&AccessState);
      if ( ProcessProtection < 0 )
      {
        PspUnlockProcessExclusive((__int64)SystemArgument1, (__int64)v94);
        PspRundownSingleProcess((char *)SystemArgument1, 0);
        goto LABEL_99;
      }
      v51 = v87;
      LOBYTE(v50) = PreviousMode;
      if ( PsTestProtectedProcessIncompatibility(v50, v87, (__int64)SystemArgument1) )
      {
        Feature_ID51912085__private_IsEnabledPreCheck();
        v53 = v90;
        if ( (v90 & 0x2000000) != 0 )
        {
          v53 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v32 >> 4) + 4] & 0x1FFFFF | v90 & 0xFDFFFFFF;
          if ( !v121 || v51 == v121 )
            v53 |= 1u;
        }
        v52 = v89;
        if ( (v89 & 0x2000000) != 0 )
        {
          v52 = ~*(_DWORD *)&RtlProtectedAccess2[12 * ((unsigned __int64)v32 >> 4) + 8] & 0x1FFFFF | v89 & 0xFDFFFFFF;
          if ( !v121 || v51 == v121 )
            v52 |= 1u;
        }
      }
      else
      {
        v52 = v89;
        v53 = v90;
      }
      if ( v130 )
        v54 = v130 + 112;
      else
        v54 = 0LL;
      inserted = PspInsertProcess((char *)SystemArgument1, (struct _KPROCESS *)v85, v53, v14, v122, v84[0], v54, &v139);
      ProcessProtection = PspInsertThread(
                            (char *)v95,
                            (ULONG_PTR)SystemArgument1,
                            (__int64)v109,
                            &v79,
                            v52,
                            v41,
                            (__int64)&v110,
                            0LL,
                            &AccessState,
                            (PVOID *)v98,
                            (_OWORD *)v114);
      KiLeaveCriticalRegionUnsafe((__int64)v94, v56, v57, v58);
      if ( inserted < 0 )
      {
        PspRundownSingleProcess((char *)SystemArgument1, 0);
        ProcessProtection = inserted;
LABEL_98:
        ObfDereferenceObject(v95);
LABEL_99:
        ObfDereferenceObjectWithTag(SystemArgument1, 0x72437350u);
        goto LABEL_100;
      }
      if ( ProcessProtection >= 0 )
      {
        ProcessServerSilo = PsGetProcessServerSilo((__int64)SystemArgument1);
        if ( ProcessServerSilo == v138 )
        {
          ProcessProtection = PspCreateObjectHandle(
                                SystemArgument1,
                                (__int64)&v139,
                                (struct _OBJECT_TYPE *)PsProcessType);
          if ( ProcessProtection >= 0 )
          {
            v60 = v115;
            if ( v115 )
            {
              *v115 = v116;
              v60[1] = v117;
              v60[2] = v118;
              v60[3] = v119;
            }
            *v99 = v142;
            v62 = v87;
            ProcessProtection = PspUpdateCreateInfo(6, (__int64)&v110, (__int64)SystemArgument1);
            if ( ProcessProtection >= 0 )
              goto LABEL_96;
            if ( (v140 & 0x200) != 0 || (v68 = 1, (*(_DWORD *)(v62 + 1532) & 0x1000) != 0) )
              v68 = 0;
            ObCloseHandle(v142, v68);
          }
          if ( (v144 & 0x200) != 0 || (*(_DWORD *)(v87 + 1532) & 0x1000) != 0 )
            v21 = 0;
          ObCloseHandle(v145, v21);
        }
        else
        {
          ProcessProtection = -1073741267;
        }
      }
LABEL_96:
      SeDeleteAccessState((__int64)&v139);
      if ( ProcessProtection < 0 )
        PsTerminateProcess((volatile signed __int32 *)SystemArgument1, ProcessProtection);
      goto LABEL_98;
    }
LABEL_122:
    ProcessProtection = -1073741811;
    goto LABEL_100;
  }
  v25 = (v111 & 0x20000) != 0 ? BYTE1(v110) : 0;
  v74 = v25;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    v105 = v132[0];
    ZwSystemDebugControl(38LL, (__int64)&v105);
  }
  if ( (v14 & 0x400000) != 0 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    ProcessProtection = -1073741727;
    goto LABEL_100;
  }
  LOBYTE(v24) = v25;
  ProcessProtection = SeQuerySigningPolicy(v124, v132, (v14 >> 6) & 1, v24, &v73, &v76, &v74);
  if ( ProcessProtection < 0 )
    goto LABEL_100;
  if ( (v14 & 0x20000) != 0 )
  {
    LOBYTE(v26) = v73;
    v64 = SeCompareSigningLevels(v26);
    v19 = v73;
    if ( !v64 )
      v19 = 8;
  }
  else
  {
    LOBYTE(v19) = v73;
  }
  LODWORD(v88) = v19;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v27 = 1600;
  if ( PreviousMode != 1 )
    v27 = 576;
  ObjectAttributes.Attributes = v27;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v132;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ProcessProtection = 0;
  if ( qword_140FD73C0 )
    ProcessProtection = guard_dispatch_icall_no_overrides(v124);
  if ( ProcessProtection < 0 )
    goto LABEL_100;
  ProcessProtection = PspGetMemoryPartitionContext(v85, v14, v134, v135, &v93);
  if ( ProcessProtection < 0 )
    goto LABEL_100;
  ProcessProtection = PspCreateUserProcessEcp((__int64)&EcpList, (__int64)v124);
  if ( ProcessProtection < 0 )
    goto LABEL_100;
  v28 = v125 | 0x100020;
  LODWORD(v86) = v125 | 0x100020;
  v29 = EcpList.DeviceObjectHint != 0LL;
  if ( EcpList.ExtraCreateParameter )
  {
    ProcessProtection = FsRtlpPrepareExtraCreateParametersForCreate((ULONG_PTR)EcpList.ExtraCreateParameter);
    if ( ProcessProtection < 0 )
      goto LABEL_50;
    v28 = v86;
  }
  if ( EcpList.TxnParameters )
    v29 |= 4u;
  if ( v101 != 1 && EcpList.Size >= 0x28u )
    v29 |= 0x40u;
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
    if ( v125 )
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
      v65 = 1;
LABEL_145:
      PspUpdateCreateInfo(v65, (__int64)&v110, 0LL);
      goto LABEL_100;
    }
  }
  Object = 0LL;
  ProcessProtection = ObReferenceObjectByHandle(Handle, 0x100020u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v127 = Object;
  if ( ProcessProtection >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    v30 = 4 * v75 + 1;
    LODWORD(v86) = 4 * v75 + 1;
    if ( v137 )
    {
      v66 = SeDuplicateTokenAndAddOriginClaim(v124, v137, v136, &v91);
      v67 = (unsigned __int8)v83;
      if ( v66 >= 0 )
        v67 = 1;
      v83 = v67;
      v78 = v67;
      v30 = v86;
    }
    v31 = v91;
    if ( !(_BYTE)v83 )
      v31 = v124;
    v91 = v31;
    while ( 1 )
    {
      ProcessProtection = MmCreateSpecialImageSection(
                            (__int64 *)v128,
                            (int)&ObjectAttributes,
                            (__int64)v91,
                            v19,
                            (__int64)Handle,
                            v30);
      if ( ProcessProtection < 0 )
      {
        v128[0] = 0LL;
        v65 = 2;
        goto LABEL_145;
      }
      Object = 0LL;
      ProcessProtection = ObReferenceObjectByHandle(v128[0], 8u, MmSectionObjectType, 0, &Object, 0LL);
      v129 = Object;
      if ( ProcessProtection < 0 )
      {
        v129 = 0LL;
        goto LABEL_100;
      }
      v32 = v74;
      ProcessProtection = PspGetProcessProtectionRequirementsFromImage((__int64)Object);
      if ( ProcessProtection < 0 )
        goto LABEL_100;
      LOBYTE(v34) = v77;
      if ( v77 == v32 )
        break;
      ProcessProtection = SeQuerySigningPolicy(v124, v132, 1LL, v34, &v72, &v76, &v74);
      if ( ProcessProtection < 0 )
        goto LABEL_100;
      v70 = v72;
      if ( v72 == (_BYTE)v19 )
      {
        v32 = v74;
        break;
      }
      if ( (v19 & 0x30) != 0 && (v72 & 0x30) != (v19 & 0x30) )
        goto LABEL_122;
      LOBYTE(v69) = v72;
      if ( !(unsigned int)SeCompareSigningLevels(v69) )
        goto LABEL_122;
      ObCloseHandle(v128[0], 0);
      ObfDereferenceObject(v129);
      v128[0] = 0LL;
      v129 = 0LL;
      LOBYTE(v19) = v70;
      LODWORD(v88) = v19;
      v30 = v86;
    }
    LOBYTE(v33) = PreviousMode;
    v35 = v87;
    ProcessProtection = PspValidateCreateProcessProtection(v87, (unsigned int)&v110, v33, v14, v32);
    if ( ProcessProtection < 0 )
      goto LABEL_100;
    if ( (v14 & 0x40000) != 0
      || (v32 & 7) != 1
      && (LOBYTE(v37) = PreviousMode,
          LOBYTE(v36) = *(_BYTE *)(v35 + 1530),
          PspCheckForInvalidAccessByProtection(v37, v36, v32)) )
    {
      v112 |= 8u;
    }
    PspGetProcessParameterOverrides(&v110, v93);
    LOBYTE(v38) = PreviousMode;
    ProcessProtection = PspCaptureProcessParameters(v38, v97, &v110);
    if ( ProcessProtection >= 0 )
    {
      v41 = v146;
      v72 = v76;
      goto LABEL_65;
    }
    v112 &= ~4u;
    goto LABEL_100;
  }
  v127 = 0LL;
LABEL_103:
  PspDeleteMemoryPartitionContext(v93);
  PspDeleteCreateProcessContext((__int64)&v110);
  if ( EcpList.ExtraCreateParameter )
    FsRtlFreeExtraCreateParameterList(EcpList.ExtraCreateParameter);
  if ( (_BYTE)v83 )
    ObfDereferenceObject(v91);
  return (unsigned int)ProcessProtection;
}
