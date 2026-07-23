/*
 * XREFs of SepCreateAppContainerToken @ 0x140606A30
 * Callers:
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SepSidInTokenSidHash @ 0x1403BEFB0 (SepSidInTokenSidHash.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1403EAEE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCapabilitiesHasAppSiloBaseSID @ 0x1403EB1A0 (SepCapabilitiesHasAppSiloBaseSID.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x14040ECA0 (SepLocateTokenIntegrity.c)
 *     SepIsAppSiloCapability @ 0x14047E93C (SepIsAppSiloCapability.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_871661881__private_IsEnabledDeviceUsageNoInline @ 0x140605A94 (Feature_871661881__private_IsEnabledDeviceUsageNoInline.c)
 *     SepCheckCreateAppContainer @ 0x140792ECC (SepCheckCreateAppContainer.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     ObInsertObject @ 0x140853260 (ObInsertObject.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     SepFinalizeTokenAcls @ 0x1408E6CA0 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlQueryElevationFlags @ 0x1408E8AB0 (RtlQueryElevationFlags.c)
 *     SepSetTokenCachedHandles @ 0x140913AE0 (SepSetTokenCachedHandles.c)
 *     RtlGetAppContainerSidType @ 0x1409143B0 (RtlGetAppContainerSidType.c)
 *     SepSetTokenCapabilities @ 0x1409854B8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x140A0C9C0 (SepSetTokenPackage.c)
 *     RtlIsPackageSid @ 0x140A4069C (RtlIsPackageSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140A412E4 (SeSetMandatoryPolicyToken.c)
 *     RtlIsCapabilitySid @ 0x140A41A18 (RtlIsCapabilitySid.c)
 *     SepSetTokenLowboxNumber @ 0x140A42978 (SepSetTokenLowboxNumber.c)
 *     SepCheckCapabilities @ 0x140A8926C (SepCheckCapabilities.c)
 */

NTSTATUS __fastcall SepCreateAppContainerToken(
        HANDLE *a1,
        PVOID *a2,
        ACCESS_MASK a3,
        int a4,
        KPROCESSOR_MODE AccessMode,
        __int64 a6)
{
  int v6; // esi
  __int64 v8; // rax
  _BYTE *v9; // r15
  __int64 v10; // r14
  unsigned int v11; // r12d
  NTSTATUS result; // eax
  void *v13; // rcx
  PVOID v14; // r13
  int AppContainerSidType; // ebx
  HANDLE *v16; // rsi
  char v17; // r14
  PVOID *v18; // rdi
  ACCESS_MASK GrantedAccess; // eax
  unsigned int v20; // ebx
  PSID *v21; // rsi
  unsigned int v22; // edi
  PSID v23; // r14
  unsigned int v24; // edi
  _BYTE **v25; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 TokenIntegrity; // rax
  __int64 v28; // rcx
  int v29; // eax
  struct _KTHREAD *v30; // rax
  PERESOURCE *PrimaryToken; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  struct _KTHREAD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdi
  int v38; // r9d
  struct _KTHREAD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // edx
  __int64 v49; // rax
  __int64 v50; // r9
  int v51; // r8d
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  int v55; // eax
  int v56; // eax
  _DWORD *v57; // rdi
  signed __int32 v58[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v61; // [rsp+30h] [rbp-E8h]
  char v62; // [rsp+40h] [rbp-D8h]
  char v63; // [rsp+41h] [rbp-D7h]
  PVOID v64; // [rsp+48h] [rbp-D0h] BYREF
  char v65; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+51h] [rbp-C7h] BYREF
  _RTL_ELEVATION_FLAGS Flags[2]; // [rsp+58h] [rbp-C0h] BYREF
  int v68; // [rsp+60h] [rbp-B8h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+64h] [rbp-B4h]
  HANDLE Handle; // [rsp+68h] [rbp-B0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v71; // [rsp+70h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+90h] [rbp-88h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v73; // [rsp+98h] [rbp-80h] BYREF
  char v74[4]; // [rsp+A0h] [rbp-78h] BYREF
  char v75[4]; // [rsp+A4h] [rbp-74h] BYREF
  __int128 v76; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-58h] BYREF

  v6 = a4;
  *(_DWORD *)((char *)&v66 + 3) = 0;
  Handle = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v65 = 0;
  v62 = 0;
  v73 = 0LL;
  v64 = 0LL;
  v68 = 1;
  memset(&v71, 0, sizeof(v71));
  v63 = 0;
  v8 = *(_QWORD *)(a6 + 8);
  v9 = *(_BYTE **)(v8 + 16);
  v10 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)&Flags[0].Flags = v10;
  v11 = *(_DWORD *)(v8 + 32);
  if ( a1 )
  {
    if ( !a2 )
      goto LABEL_5;
    return -1073741811;
  }
  if ( !a2 )
    return -1073741811;
LABEL_5:
  if ( !v9 )
    return -1073741811;
  v13 = *(void **)(v8 + 8);
  if ( v13 )
  {
    Token = 0LL;
    result = ObReferenceObjectByHandle(v13, 2u, (POBJECT_TYPE)SeTokenObjectType, AccessMode, &Token, &v73);
    v14 = Token;
    if ( result < 0 )
      return result;
  }
  else
  {
    v14 = (PVOID)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, v75, &v66, v74, 0LL);
  }
  AppContainerSidType = SepCheckCreateAppContainer(v9);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  if ( *((_DWORD *)v14 + 48) != 1 && *((int *)v14 + 49) < 2 )
  {
    AppContainerSidType = -1073741659;
LABEL_15:
    v16 = a1;
    goto LABEL_16;
  }
  GrantedAccess = v73.GrantedAccess;
  if ( a3 )
    GrantedAccess = a3;
  DesiredAccess = GrantedAccess;
  if ( !RtlIsPackageSid(v9) )
  {
LABEL_33:
    AppContainerSidType = -1073741811;
    goto LABEL_15;
  }
  if ( ((v9[1] - 8) & 0xFB) != 0 )
  {
    AppContainerSidType = -1073700350;
    goto LABEL_15;
  }
  v20 = 0;
  if ( v11 )
  {
    v21 = (PSID *)v10;
    while ( RtlIsCapabilitySid(*v21) )
    {
      v22 = 0;
      if ( v20 )
      {
        v23 = *v21;
        while ( !RtlEqualSid(v23, *(PSID *)(*(_QWORD *)&Flags[0].Flags + 16LL * v22)) )
        {
          if ( ++v22 >= v20 )
            goto LABEL_43;
        }
        goto LABEL_33;
      }
LABEL_43:
      ++v20;
      v21 += 2;
      if ( v20 >= v11 )
      {
        v6 = a4;
        v10 = *(_QWORD *)&Flags[0].Flags;
        goto LABEL_45;
      }
    }
    goto LABEL_33;
  }
LABEL_45:
  if ( !SepCapabilitiesHasAppSiloBaseSID(v11, v10) )
  {
    v24 = 0;
    if ( v11 )
    {
      v25 = (_BYTE **)v10;
      while ( !SepIsAppSiloCapability(*v25) )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= v11 )
          goto LABEL_50;
      }
      goto LABEL_33;
    }
  }
LABEL_50:
  AppContainerSidType = RtlGetAppContainerSidType(v9, (PAPPCONTAINER_SID_TYPE)((char *)&v66 + 3));
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  if ( *(_DWORD *)((char *)&v66 + 3) == 1 )
  {
    AppContainerSidType = SepCheckCapabilities(v14, (__int64)&v65);
    if ( !v65 )
    {
LABEL_53:
      AppContainerSidType = -1073741790;
      goto LABEL_15;
    }
  }
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  if ( (unsigned int)Feature_871661881__private_IsEnabledDeviceUsageNoInline() )
  {
    Flags[0].Flags = 0;
    RtlQueryElevationFlags(Flags);
    if ( (Flags[0].Flags & 0x18) == 0x10 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v14 + 6), 1u);
      TokenIntegrity = SepLocateTokenIntegrity((__int64)v14);
      if ( TokenIntegrity )
      {
        v28 = *(_QWORD *)TokenIntegrity;
        v29 = *(unsigned __int8 *)(*(_QWORD *)TokenIntegrity + 1LL);
        if ( (_BYTE)v29 )
        {
          if ( *(_DWORD *)(v28 + 4LL * (unsigned int)(v29 - 1) + 8) >= 0x3000u )
          {
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            SeCaptureSubjectContext(&SubjectContext);
            v30 = KeGetCurrentThread();
            --v30->KernelApcDisable;
            PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v32 = SepLocateTokenIntegrity((__int64)PrimaryToken);
            v33 = *(_QWORD *)v32;
            v34 = *(unsigned __int8 *)(*(_QWORD *)v32 + 1LL);
            if ( !(_BYTE)v34 || *(_DWORD *)(v33 + 4LL * (unsigned int)(v34 - 1) + 8) < 0x3000u )
              AppContainerSidType = -1073741790;
            ExReleaseResourceLite(PrimaryToken[6]);
            KeLeaveCriticalRegion();
            SeReleaseSubjectContext(&SubjectContext);
          }
        }
      }
      ExReleaseResourceLite(*((PERESOURCE *)v14 + 6));
      KeLeaveCriticalRegion();
      if ( AppContainerSidType < 0 )
        goto LABEL_15;
    }
  }
  AppContainerSidType = SepDuplicateToken((_DWORD)v14, v6, 0, 1, 0, AccessMode, 0, (__int64)&v64);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  v62 = 1;
  AppContainerSidType = SeSetMandatoryPolicyToken(v64, &v68);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  v35 = KeGetCurrentThread();
  --v35->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v64 + 6), 1u);
  _InterlockedOr(v58, 0);
  v63 = 1;
  v36 = SepLocateTokenIntegrity((__int64)v64);
  v37 = v36;
  if ( !v36 )
  {
    AppContainerSidType = -1073740730;
    goto LABEL_114;
  }
  v38 = *(unsigned __int8 *)(*(_QWORD *)v36 + 1LL);
  if ( (_BYTE)v38 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a6 + 8) + 4LL) & 1) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)v36 + 4LL * (unsigned int)(v38 - 1) + 8) = 4096;
      goto LABEL_105;
    }
    SeCaptureSubjectContext(&v71);
    SeLockSubjectContext(&v71);
    v39 = KeGetCurrentThread();
    --v39->KernelApcDisable;
    ExAcquireResourceSharedLite(*((PERESOURCE *)v14 + 6), 1u);
    v40 = SepLocateTokenIntegrity((__int64)v14);
    if ( v40 )
    {
      v41 = *(_QWORD *)v40;
      v42 = *(unsigned __int8 *)(*(_QWORD *)v40 + 1LL);
      v43 = (_BYTE)v42 ? *(_DWORD *)(v41 + 4LL * (unsigned int)(v42 - 1) + 8) : 0;
      if ( *(_DWORD *)(*(_QWORD *)(a6 + 8) + 40LL) > v43 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v14 + 6));
        KeLeaveCriticalRegion();
LABEL_77:
        SeUnlockSubjectContext(&v71);
        SeReleaseSubjectContext(&v71);
        goto LABEL_53;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v14 + 6));
    KeLeaveCriticalRegion();
    v44 = SepLocateTokenIntegrity((__int64)v71.PrimaryToken);
    if ( v44 )
    {
      v45 = *(_QWORD *)v44;
      v46 = *(unsigned __int8 *)(*(_QWORD *)v44 + 1LL);
      if ( (_BYTE)v46 )
        v47 = *(_DWORD *)(v45 + 4LL * (unsigned int)(v46 - 1) + 8);
      else
        v47 = 0;
      v48 = *(_DWORD *)(*(_QWORD *)(a6 + 8) + 40LL);
      if ( v47 < v48 )
        goto LABEL_77;
      if ( v71.ClientToken )
      {
        if ( *((_DWORD *)v71.ClientToken + 48) == 2 && *((int *)v71.ClientToken + 49) < 2 )
          goto LABEL_77;
        v49 = SepLocateTokenIntegrity((__int64)v71.ClientToken);
        v50 = *(_QWORD *)v49;
        v51 = *(unsigned __int8 *)(*(_QWORD *)v49 + 1LL);
        if ( (_BYTE)v51 )
          v52 = *(_DWORD *)(v50 + 4LL * (unsigned int)(v51 - 1) + 8);
        else
          v52 = 0;
        if ( v52 >= v48 )
        {
          v53 = v48;
        }
        else if ( (_BYTE)v51 )
        {
          v53 = *(_DWORD *)(v50 + 4LL * (unsigned int)(v51 - 1) + 8);
        }
        else
        {
          v53 = 0;
        }
        if ( v48 >= v53 )
        {
          v54 = (_BYTE)v51 ? *(_DWORD *)(v50 + 4LL * (unsigned int)(v51 - 1) + 8) : 0;
          if ( v54 < v48 )
          {
            if ( (_BYTE)v51 )
              v48 = *(_DWORD *)(v50 + 4LL * (unsigned int)(v51 - 1) + 8);
            else
              v48 = 0;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)v37 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v37 + 1LL) - 1) + 8) = v48;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v37 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v37 + 1LL) - 1) + 8) = 4096;
    }
    SeUnlockSubjectContext(&v71);
    SeReleaseSubjectContext(&v71);
  }
LABEL_105:
  *((_QWORD *)v64 + 9) &= 0x200800000uLL;
  *((_QWORD *)v64 + 10) &= 0x200800000uLL;
  *((_QWORD *)v64 + 8) &= 0x200800000uLL;
  v55 = *(unsigned __int8 *)(*(_QWORD *)v37 + 1LL);
  if ( !(_BYTE)v55 || *(_DWORD *)(*(_QWORD *)v37 + 4LL * (unsigned int)(v55 - 1) + 8) < 0x2000u )
    *((_DWORD *)v64 + 50) &= ~0x2000u;
  if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
  {
    v56 = *(unsigned __int8 *)(*(_QWORD *)v37 + 1LL);
    if ( !(_BYTE)v56 || *(_DWORD *)(*(_QWORD *)v37 + 4LL * (unsigned int)(v56 - 1) + 8) < 0x3000u )
      *((_DWORD *)v64 + 50) &= ~0x1000u;
  }
  *((_DWORD *)v64 + 50) |= 0x4000u;
LABEL_114:
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  AppContainerSidType = SepSetTokenCapabilities(v64, v9, v10, v11);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  AppContainerSidType = SepSetTokenLowboxNumber(v64, v9);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  *((_QWORD *)&v76 + 1) = v9;
  AppContainerSidType = SepSetTokenCachedHandles(
                          v64,
                          &v76,
                          *(unsigned int *)(a6 + 24),
                          *(_QWORD *)(a6 + 16),
                          Object,
                          HandleInformation,
                          v61);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  AppContainerSidType = SepSetTokenPackage(v64, v9);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  AppContainerSidType = SepAppendAceToTokenDefaultDacl((__int64)v64, v9);
  if ( AppContainerSidType < 0 )
    goto LABEL_15;
  v57 = v64;
  if ( SepSidInTokenSidHash((__int64)v64 + 808, 0LL, (unsigned __int8 *)SePermissiveLearningModeCapabilitySid, 0, 1, 0) )
  {
    _InterlockedIncrement(&SepLearningModeTokenCount);
    *((_DWORD *)v64 + 50) |= 0x3000000u;
  }
  else
  {
    v57[50] &= 0xFCFFFFFF;
    if ( SepSidInTokenSidHash((__int64)v64 + 808, 0LL, (unsigned __int8 *)SeLearningModeLoggingCapabilitySid, 0, 1, 0) )
    {
      _InterlockedIncrement(&SepLearningModeTokenCount);
      *((_DWORD *)v64 + 50) |= 0x1000000u;
    }
  }
  *((_QWORD *)v64 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v58, 0);
  ExReleaseResourceLite(*((PERESOURCE *)v64 + 6));
  KeLeaveCriticalRegion();
  v63 = 0;
  v16 = a1;
  if ( !a1 )
  {
    v17 = v62;
LABEL_130:
    v18 = a2;
    if ( a2 )
      *a2 = v64;
    goto LABEL_18;
  }
  AppContainerSidType = ObInsertObject(v64, 0LL, DesiredAccess, 1u, 0LL, &Handle);
  if ( AppContainerSidType < 0 )
  {
    v17 = 0;
    goto LABEL_17;
  }
  AppContainerSidType = SepAppendAceToTokenObjectAcl((ULONG_PTR)v64);
  if ( AppContainerSidType >= 0 )
  {
    SepFinalizeTokenAcls(v64);
    ObfDereferenceObjectWithTag(v64, 0x746C6644u);
    v17 = 0;
    goto LABEL_130;
  }
LABEL_16:
  v17 = v62;
LABEL_17:
  v18 = a2;
LABEL_18:
  if ( v63 )
  {
    if ( AppContainerSidType >= 0 )
      *((_QWORD *)v64 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v58, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v64 + 6));
    KeLeaveCriticalRegion();
  }
  if ( AppContainerSidType >= 0 )
  {
    if ( v16 )
    {
      *v16 = Handle;
    }
    else if ( v18 )
    {
      *v18 = v64;
    }
  }
  else
  {
    if ( v17 )
      ObfDereferenceObjectWithTag(v64, 0x746C6644u);
    if ( Handle )
      ObCloseHandle(Handle, AccessMode);
  }
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
  return AppContainerSidType;
}
