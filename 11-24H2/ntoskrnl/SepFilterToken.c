/*
 * XREFs of SepFilterToken @ 0x140AD2664
 * Callers:
 *     SeFilterToken @ 0x14078F660 (SeFilterToken.c)
 *     NtFilterToken @ 0x140935F90 (NtFilterToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     RtlWalkFrameChain @ 0x14027DB70 (RtlWalkFrameChain.c)
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14035F940 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ExInitializeResourceLite @ 0x1403655E0 (ExInitializeResourceLite.c)
 *     RtlSidHashInitialize @ 0x140365780 (RtlSidHashInitialize.c)
 *     SepDuplicateLogonSessionReference @ 0x14043FF10 (SepDuplicateLogonSessionReference.c)
 *     Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406082E8 (Feature_2045735225__private_IsEnabledDeviceUsageNoInline.c)
 *     SeIsSystemContext @ 0x14060908C (SeIsSystemContext.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepModifyTokenPolicyCounter @ 0x14078FB40 (SepModifyTokenPolicyCounter.c)
 *     SepAddTokenLogonSession @ 0x140793570 (SepAddTokenLogonSession.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     RtlIsSandboxedToken @ 0x14090C230 (RtlIsSandboxedToken.c)
 *     SepSetTokenCapabilities @ 0x140936380 (SepSetTokenCapabilities.c)
 *     RtlCopySidAndAttributesArray @ 0x1409A7A90 (RtlCopySidAndAttributesArray.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1409B29B4 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x1409B2B94 (SepSidInSidAndAttributes.c)
 *     SepSetTokenTrust @ 0x1409DF8F0 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409F4CB4 (SepDuplicateTokenUserAndGroups.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1409F70DC (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenSessionById @ 0x1409FD934 (SepSetTokenSessionById.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A13F88 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepSetTokenPackage @ 0x140A141B0 (SepSetTokenPackage.c)
 *     SepReferenceLogonSession @ 0x140A31B0C (SepReferenceLogonSession.c)
 *     RtlIsPackageSid @ 0x140A4997C (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140A4AD90 (RtlIsCapabilitySid.c)
 *     SepDuplicateTokenClaims @ 0x140A5E164 (SepDuplicateTokenClaims.c)
 *     SepStopReferencingLogonSession @ 0x140A76594 (SepStopReferencingLogonSession.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        unsigned int a8,
        __int64 *a9,
        int a10,
        char **a11)
{
  PVOID *v13; // rdi
  unsigned int v14; // r14d
  __int64 *v15; // rbx
  __int64 Pool2; // rax
  PVOID *v17; // r14
  PVOID *v18; // rcx
  struct _ERESOURCE *v20; // r15
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // r8d
  unsigned int v25; // r12d
  signed int v26; // ebx
  int v27; // eax
  bool v28; // zf
  _QWORD *v29; // rbx
  _QWORD *v30; // rdx
  _BYTE *v31; // r13
  ULONG v32; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v34; // rdi
  _DWORD *v35; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v37; // ecx
  unsigned int v38; // ecx
  _DWORD *v39; // rbx
  int v40; // r14d
  __int64 v41; // rcx
  _DWORD *v42; // rcx
  __int64 v43; // rdx
  _KPROCESS *Process; // rcx
  void *v45; // rdi
  __int64 v46; // r14
  int v47; // eax
  unsigned int v48; // eax
  int v49; // r15d
  unsigned int v50; // ecx
  char *v51; // r15
  __int64 v52; // r8
  unsigned int v53; // r8d
  signed int v54; // eax
  unsigned int v55; // r12d
  __int64 v56; // r14
  __int64 *v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rax
  unsigned int v60; // r14d
  __int64 v61; // rax
  char *v62; // r15
  char v63; // al
  __int64 v64; // rax
  unsigned int v65; // r12d
  unsigned int v66; // r9d
  unsigned __int8 *v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdx
  int v71; // eax
  struct _ERESOURCE *v72; // rcx
  char v73; // bl
  struct _KTHREAD *v74; // rax
  PERESOURCE *PrimaryToken; // rbx
  __int64 *v76; // rcx
  int v77; // edx
  void *v78; // [rsp+28h] [rbp-E0h]
  __int64 v79; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  char PreviousMode; // [rsp+68h] [rbp-A0h]
  unsigned int v82; // [rsp+6Ch] [rbp-9Ch] BYREF
  PVOID v83; // [rsp+70h] [rbp-98h] BYREF
  __int64 v84; // [rsp+78h] [rbp-90h] BYREF
  __int64 v85; // [rsp+80h] [rbp-88h]
  __int64 v86; // [rsp+88h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-78h] BYREF
  __int128 v88; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v89; // [rsp+C0h] [rbp-48h]
  __int128 v90; // [rsp+D0h] [rbp-38h]
  int v91; // [rsp+E0h] [rbp-28h]
  int v92; // [rsp+E4h] [rbp-24h]
  __int64 v93; // [rsp+E8h] [rbp-20h]
  __int64 v94; // [rsp+F0h] [rbp-18h]
  int v95; // [rsp+F8h] [rbp-10h]
  int v96; // [rsp+FCh] [rbp-Ch]
  __int128 v97; // [rsp+100h] [rbp-8h]
  struct _SECURITY_SUBJECT_CONTEXT v98; // [rsp+110h] [rbp+8h] BYREF

  Object = 0LL;
  v92 = 0;
  v96 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = 0LL;
  LOWORD(v79) = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(&v98, 0, sizeof(v98));
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v14 = 0;
  if ( a8 )
  {
    v15 = a9;
    while ( !RtlIsPackageSid(*v15) && !RtlIsCapabilitySid(*v15) )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= a8 )
        goto LABEL_8;
    }
    return 3221225485LL;
  }
LABEL_8:
  Pool2 = ExAllocatePool2(0x100uLL);
  v17 = (PVOID *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 0;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
  *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
  *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
  *(_DWORD *)(Pool2 + 24) = 0;
  if ( SeTokenLeakTracking )
  {
    v13 = (PVOID *)ExAllocatePool2(0x100uLL);
    if ( !v13 )
    {
      v18 = v17;
      goto LABEL_16;
    }
  }
  v20 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
  if ( !v20 )
  {
    ExFreePoolWithTag(v17, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v18 = v13;
LABEL_16:
    ExFreePoolWithTag(v18, 0);
    return 3221225626LL;
  }
  v21 = *(_DWORD *)(a1 + 132);
  v22 = v21 + a10;
  if ( v21 + a10 < v21 )
  {
    v26 = -1073741675;
LABEL_129:
    ExFreePoolWithTag(v20, 0);
    ExFreePoolWithTag(v17, 0);
    v28 = SeTokenLeakTracking == 0;
LABEL_130:
    if ( !v28 )
      ExFreePoolWithTag(v13, 0);
    return (unsigned int)v26;
  }
  v23 = v22 + 4;
  v24 = -1;
  v25 = -1;
  if ( v22 + 4 >= v22 )
    v25 = v22 + 4;
  v26 = v23 < v22 ? 0xC0000095 : 0;
  v82 = v25;
  if ( v23 < v22 )
    goto LABEL_129;
  if ( v25 < 0xFFFFFB70 )
    v24 = v25 + 1168;
  v26 = v25 >= 0xFFFFFB70 ? 0xC0000095 : 0;
  if ( v25 + 1168 < 0x490 )
    goto LABEL_129;
  v27 = *(_DWORD *)(a1 + 136);
  v93 = 0LL;
  v95 = 0;
  v94 = 0LL;
  v91 = 48;
  v97 = 0LL;
  v26 = ObCreateObjectEx(a2, SeTokenObjectType, 0, a2, (__int64)v78, v24, v27, v24, &Object, 0LL);
  if ( v26 < 0 )
  {
    ExFreePoolWithTag(v20, 0);
    ExFreePoolWithTag(v17, 0);
    v28 = SeTokenLeakTracking == 0;
    goto LABEL_130;
  }
  v29 = Object;
  *((_QWORD *)Object + 6) = v20;
  ExInitializeResourceLite(v20);
  v30 = Object;
  v29[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v31 = Object;
  v30[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v31[204] = 0;
  *((_QWORD *)v31 + 3) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)v31 = *(_OWORD *)a1;
  *((_DWORD *)v31 + 35) = 0;
  *((_DWORD *)v31 + 32) = 0;
  *((_DWORD *)v31 + 33) = v25;
  *((_QWORD *)v31 + 4) = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v31 + 48) = *(_DWORD *)(a1 + 192);
  *((_DWORD *)v31 + 49) = *(_DWORD *)(a1 + 196);
  *((_QWORD *)v31 + 5) = *(_QWORD *)(a1 + 40);
  *((_QWORD *)v31 + 28) = *(_QWORD *)(a1 + 224);
  *((_QWORD *)v31 + 140) = 0LL;
  *((_QWORD *)v31 + 141) = 0LL;
  *((_QWORD *)v31 + 137) = 0LL;
  *((_QWORD *)v31 + 143) = v13;
  *((_DWORD *)v31 + 30) = 0;
  *((_QWORD *)v31 + 145) = 0LL;
  if ( SeTokenLeakTracking )
  {
    v32 = RtlWalkFrameChain(v13 + 5, 0x1Eu, 0);
    if ( KeGetCurrentIrql() < 2u )
      RtlWalkFrameChain((PVOID *)(*((_QWORD *)v31 + 143) + 40LL + 8LL * v32), 30 - v32, 1u);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v34 = (char *)Object;
  v35 = Object;
  *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
  v35[36] = *(_DWORD *)(a1 + 144);
  SepSetTokenSessionById((__int64)v35, *(_DWORD *)(a1 + 120), 0, 0LL, 0LL);
  *((_DWORD *)v31 + 30) = *(_DWORD *)(a1 + 120);
  IsEnabledDeviceUsageNoInline = Feature_2045735225__private_IsEnabledDeviceUsageNoInline();
  v37 = *(_DWORD *)(a1 + 200);
  if ( IsEnabledDeviceUsageNoInline )
    v38 = v37 & 0xEFFFFBD7;
  else
    v38 = v37 & 0xFFFFFBD7;
  v39 = v34 + 200;
  *((_DWORD *)v34 + 50) = v38;
  if ( (*((_DWORD *)v34 + 50) & 0x1000000) != 0 )
  {
    _InterlockedIncrement(&SepLearningModeTokenCount);
    v34 = (char *)Object;
  }
  *(_OWORD *)(v34 + 88) = *(_OWORD *)(a1 + 88);
  *(_OWORD *)(v34 + 104) = *(_OWORD *)(a1 + 104);
  *((_DWORD *)v34 + 52) = *(_DWORD *)(a1 + 208);
  *((_DWORD *)v34 + 53) = *(_DWORD *)(a1 + 212);
  *((_OWORD *)v34 + 4) = *(_OWORD *)(a1 + 64);
  *((_QWORD *)v34 + 10) = *(_QWORD *)(a1 + 80);
  *((_QWORD *)v34 + 97) = v17;
  if ( v34[119] == 2 )
    SepModifyTokenPolicyCounter((__int64)(v34 + 88), 1);
  *((_QWORD *)v34 + 135) = 0LL;
  *((_QWORD *)v34 + 136) = 0LL;
  *((_QWORD *)v34 + 144) = 0LL;
  *((_QWORD *)v34 + 99) = 0LL;
  *((_QWORD *)v34 + 98) = 0LL;
  *((_DWORD *)v34 + 200) = 0;
  memset_0(v34 + 808, 0, 0x110uLL);
  *((_QWORD *)v34 + 22) = 0LL;
  *((_QWORD *)v34 + 138) = 0LL;
  *((_QWORD *)v34 + 139) = 0LL;
  *((_QWORD *)v34 + 142) = 0LL;
  v40 = SepDuplicateLogonSessionReference((__int64)v34, a1);
  if ( v40 < 0 )
    goto LABEL_38;
  if ( (unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a1 + 200) & 0x10000000) != 0 )
  {
    v41 = *((_QWORD *)v34 + 27) + 16LL;
    v86 = 0LL;
    v40 = SepReferenceLogonSession(v41, (__int64)&v86);
    if ( v40 < 0 )
    {
LABEL_38:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v34);
      return (unsigned int)v40;
    }
    *v39 |= 0x10000000u;
  }
  SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
  *((_QWORD *)v34 + 142) = *(_QWORD *)(a1 + 1136);
  v42 = *(_DWORD **)(a1 + 776);
  if ( *v42 )
  {
    v40 = AuthzBasepDuplicateSecurityAttributes((__int64)v42, *((_QWORD *)v34 + 97), 0);
    if ( v40 < 0 )
      goto LABEL_38;
  }
  if ( *(_QWORD *)(a1 + 1096) )
  {
    v40 = SepDuplicateTokenClaims(a1, (__int64)v34);
    if ( v40 < 0 )
      goto LABEL_38;
  }
  if ( SeTokenLeakTracking )
  {
    **((_QWORD **)v31 + 143) = KeGetCurrentThread()[1].CycleTime;
    *(_QWORD *)(*((_QWORD *)v31 + 143) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
    *(_DWORD *)(*((_QWORD *)v31 + 143) + 32LL) = 15;
    *(_DWORD *)(*((_QWORD *)v31 + 143) + 280LL) = 0;
    *(_DWORD *)(*((_QWORD *)v31 + 143) + 284LL) = 0;
    v43 = *((_QWORD *)v31 + 143);
    v34 = (char *)Object;
    Process = KeGetCurrentThread()->ApcState.Process;
    *(_QWORD *)(v43 + 16) = Process[1].SecureState.SecureHandle;
    *(_DWORD *)(v43 + 24) = Process[1].KernelWaitTime;
    *(_WORD *)(v43 + 28) = WORD2(Process[1].KernelWaitTime);
    *(_BYTE *)(v43 + 30) = BYTE6(Process[1].KernelWaitTime);
    SepAddTokenLogonSession((__int64)v34);
  }
  if ( (a3 & 2) != 0 )
  {
    v45 = (void *)PsReferencePrimaryTokenWithTag((__int64)KeGetCurrentThread()->ApcState.Process, 0x746C6644u);
    if ( (int)SeIsSystemContext(v45, &v79) >= 0 && (_BYTE)v79 )
      *v39 |= 0x40u;
    ObfDereferenceObject(v45);
    v34 = (char *)Object;
  }
  v46 = (__int64)(v34 + 1168);
  v47 = ((_BYTE)v34 - 112) & 7;
  if ( (((_BYTE)v34 - 112) & 7) != 0 )
  {
    v46 += (unsigned int)(8 - v47);
    v82 = v25 - (8 - v47);
  }
  v48 = *(_DWORD *)(a1 + 128);
  v49 = *(_DWORD *)(a1 + 124);
  v50 = a8;
  *((_QWORD *)v34 + 19) = v46;
  if ( v48 > a8 )
    v50 = v48;
  v51 = (char *)(v46 + 16LL * (v50 + v49));
  v84 = (__int64)v51;
  if ( SepTokenSidSharingEnabled )
  {
    v26 = SepDuplicateTokenUserAndGroups(a1, (__int64)v34);
    if ( v26 < 0 )
    {
      *((_QWORD *)v34 + 19) = 0LL;
LABEL_96:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      goto LABEL_113;
    }
  }
  else
  {
    v53 = v82;
    *((_DWORD *)v34 + 31) = *(_DWORD *)(a1 + 124);
    v54 = RtlCopySidAndAttributesArray(*(_DWORD *)(a1 + 124), *(_QWORD *)(a1 + 152), v53, v46, v51, &v84, &v82);
    v51 = (char *)v84;
    v26 = v54;
  }
  v55 = 0;
  v56 = (unsigned int)(16 * *(_DWORD *)(a1 + 124)) + v46;
  *((_QWORD *)v34 + 20) = v56;
  if ( a8 )
  {
    v57 = a9;
    v85 = (__int64)a9;
    do
    {
      v58 = *(_DWORD *)(a1 + 128);
      if ( !v58 || SepSidInSidAndAttributes(*(unsigned __int8 ***)(a1 + 160), v58, v52, (_BYTE *)*v57) )
      {
        v26 = RtlCopySidAndAttributesArray(1u, (__int64)&a9[2 * v55], v82, v56, v51, &v84, &v82);
        v51 = (char *)v84;
        v56 += 16LL;
        *(_DWORD *)(*((_QWORD *)v34 + 20) + 16LL * (unsigned int)(*((_DWORD *)v31 + 32))++ + 8) = 7;
      }
      ++v55;
      v57 = (__int64 *)(v85 + 16);
      v85 += 16LL;
    }
    while ( v55 < a8 );
  }
  v59 = *(_QWORD *)(a1 + 184);
  v60 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v59 )
    v60 += *(unsigned __int16 *)(v59 + 2);
  v61 = ExAllocatePool2(0x100uLL);
  *((_QWORD *)v34 + 22) = v61;
  v62 = (char *)v61;
  if ( v61 )
  {
    if ( !*(_DWORD *)(a1 + 128) || *((_DWORD *)v34 + 32) )
    {
      v63 = 0;
      if ( *((_DWORD *)v34 + 32) )
      {
        *((_DWORD *)v34 + 50) |= 0x810u;
        v63 = 1;
      }
      else
      {
        *((_QWORD *)v34 + 20) = 0LL;
      }
      if ( (a3 & 8) != 0 )
      {
        *((_DWORD *)v34 + 50) |= 0x18u;
        v63 = 1;
      }
      if ( v63 )
      {
        v83 = 0LL;
        *(_QWORD *)&v90 = 0LL;
        DWORD2(v90) = 0;
        v64 = *(_QWORD *)(a1 + 216);
        v88 = 0LL;
        v89 = 0LL;
        if ( !*(_QWORD *)(v64 + 56) && (*(_DWORD *)(a1 + 200) & 0x18) == 0 )
        {
          LODWORD(v88) = 48;
          *((_QWORD *)&v88 + 1) = 0LL;
          DWORD2(v89) = 0;
          *(_QWORD *)&v89 = 0LL;
          v90 = 0LL;
          if ( (int)SepDuplicateToken(a1, (int)&v88, 0, 1, 0, 0, 0, &v83) >= 0 )
          {
            if ( (int)SepStopReferencingLogonSession((__int64)v83) >= 0 )
            {
              if ( _InterlockedCompareExchange64(
                     (volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 56LL),
                     (signed __int64)v83,
                     0LL) )
              {
                ObfDereferenceObject(v83);
              }
              v34 = (char *)Object;
            }
            else
            {
              ObfDereferenceObject(v83);
            }
          }
        }
      }
      memmove(v62, *(const void **)(a1 + 176), v60);
      if ( *(_QWORD *)(a1 + 184) )
        *((_QWORD *)v34 + 23) = &v62[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
      else
        *((_QWORD *)v34 + 23) = 0LL;
      v65 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
      v66 = *(_DWORD *)(a1 + 800);
      if ( v66 )
        v26 = SepSetTokenCapabilities((__int64)v34, *(void **)(a1 + 784), *(_QWORD *)(a1 + 792), v66);
      if ( v26 < 0 )
        goto LABEL_96;
      v67 = *(unsigned __int8 **)(a1 + 784);
      if ( v67 )
      {
        v26 = SepSetTokenPackage((__int64)v34, v67);
        if ( v26 < 0 )
          goto LABEL_96;
      }
      v68 = *(_QWORD *)(a1 + 1080);
      if ( v68 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v68 + 24)) <= 1 )
          __fastfail(0xEu);
        v34 = (char *)Object;
        *((_QWORD *)Object + 135) = *(_QWORD *)(a1 + 1080);
      }
      v69 = *(_QWORD *)(a1 + 1088);
      if ( v69 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v69 + 24)) <= 1 )
          __fastfail(0xEu);
        v34 = (char *)Object;
        *((_QWORD *)Object + 136) = *(_QWORD *)(a1 + 1088);
      }
      v70 = *(_QWORD *)(a1 + 1152);
      if ( v70 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v70 + 24)) <= 1 )
          __fastfail(0xEu);
        v34 = (char *)Object;
        *((_QWORD *)Object + 144) = *(_QWORD *)(a1 + 1152);
      }
      v71 = SepSetTokenTrust((__int64)v34, *(unsigned __int8 **)(a1 + 1104));
      v72 = *(struct _ERESOURCE **)(a1 + 48);
      v40 = v71;
      if ( v71 >= 0 )
      {
        ExReleaseResourceLite(v72);
        KeLeaveCriticalRegion();
        *((_QWORD *)v34 + 21) = &v62[v65];
        SepRemoveDisabledGroupsAndPrivileges((__int64)v34, a3, a4, a5, a6, a7);
        RtlSidHashInitialize(*((__int64 **)v34 + 19), *((_DWORD *)v34 + 31), (_QWORD *)v34 + 29);
        RtlSidHashInitialize(*((__int64 **)v34 + 20), *((_DWORD *)v34 + 32), (_QWORD *)v34 + 63);
        SeCaptureSubjectContext(&SubjectContext);
        v73 = PreviousMode;
        v98.PrimaryToken = SubjectContext.PrimaryToken;
        if ( !RtlIsSandboxedToken(&SubjectContext, PreviousMode) )
          goto LABEL_119;
        if ( !RtlIsSandboxedToken(&v98, v73) )
          goto LABEL_119;
        v74 = KeGetCurrentThread();
        PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
        --v74->KernelApcDisable;
        ExAcquireResourceSharedLite(PrimaryToken[6], 1u);
        v34 = (char *)Object;
        v40 = SepNewTokenAsRestrictedAsProcessToken((signed __int32 *)Object, (PSID **)PrimaryToken, (_BYTE *)&v79 + 1);
        ExReleaseResourceLite(PrimaryToken[6]);
        KeLeaveCriticalRegion();
        if ( v40 < 0 || !BYTE1(v79) )
        {
          ObfDereferenceObject(v34);
          SeReleaseSubjectContext(&SubjectContext);
        }
        else
        {
LABEL_119:
          SeReleaseSubjectContext(&SubjectContext);
          v76 = (__int64 *)*((_QWORD *)v34 + 99);
          if ( v76 )
            RtlSidHashInitialize(v76, *((_DWORD *)v34 + 200), (_QWORD *)v34 + 101);
          if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 15 )
          {
            if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
            {
              v34 = (char *)Object;
              *(_DWORD *)(*((_QWORD *)Object + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
              v77 = *(_DWORD *)(*((_QWORD *)v34 + 143) + 280LL);
              if ( v77 >= SepTokenLeakBreakCount )
              {
                DbgPrint("\nToken number 0x%x = 0x%p\n", v77, v34);
                __debugbreak();
              }
            }
            else
            {
              v34 = (char *)Object;
            }
          }
          *a11 = v34;
        }
        return (unsigned int)v40;
      }
      ExReleaseResourceLite(v72);
      v26 = v40;
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      v26 = -1073741811;
    }
  }
  else
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    v26 = -1073741670;
  }
LABEL_113:
  KeLeaveCriticalRegion();
  ObfDereferenceObject(v34);
  return (unsigned int)v26;
}
