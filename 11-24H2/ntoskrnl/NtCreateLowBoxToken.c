/*
 * XREFs of NtCreateLowBoxToken @ 0x140AD5A60
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SepSidInTokenSidHash @ 0x1403BEFB0 (SepSidInTokenSidHash.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1403EAEE8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCapabilitiesHasAppSiloBaseSID @ 0x1403EB1A0 (SepCapabilitiesHasAppSiloBaseSID.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x14040ECA0 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     SepIsAppSiloCapability @ 0x14047E93C (SepIsAppSiloCapability.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_871661881__private_IsEnabledDeviceUsageNoInline @ 0x140605A94 (Feature_871661881__private_IsEnabledDeviceUsageNoInline.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SeCaptureHandles @ 0x140607B70 (SeCaptureHandles.c)
 *     SepCheckCreateAppContainer @ 0x140792ECC (SepCheckCreateAppContainer.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     SepFinalizeTokenAcls @ 0x1408E6CA0 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlQueryElevationFlags @ 0x1408E8AB0 (RtlQueryElevationFlags.c)
 *     SepSetTokenCachedHandles @ 0x140913AE0 (SepSetTokenCachedHandles.c)
 *     RtlGetAppContainerSidType @ 0x1409143B0 (RtlGetAppContainerSidType.c)
 *     SepSetTokenCapabilities @ 0x1409854B8 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140985BF8 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenPackage @ 0x140A0C9C0 (SepSetTokenPackage.c)
 *     SeReleaseSid @ 0x140A18990 (SeReleaseSid.c)
 *     RtlIsPackageSid @ 0x140A4069C (RtlIsPackageSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140A412E4 (SeSetMandatoryPolicyToken.c)
 *     RtlIsCapabilitySid @ 0x140A41A18 (RtlIsCapabilitySid.c)
 *     SepSetTokenLowboxNumber @ 0x140A42978 (SepSetTokenLowboxNumber.c)
 *     SepCheckCapabilities @ 0x140A8926C (SepCheckCapabilities.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateLowBoxToken(
        PHANDLE TokenHandle,
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PSID PackageSid,
        ULONG CapabilityCount,
        PSID_AND_ATTRIBUTES Capabilities,
        ULONG HandleCount,
        HANDLE *Handles)
{
  int v9; // r13d
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r15d
  char v16; // si
  __int64 v17; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // ebx
  char v20; // si
  char PreviousMode; // r13
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  ACCESS_MASK GrantedAccess; // eax
  ULONG v26; // ebx
  PSID *v27; // rsi
  PSID v28; // r12
  PSID *v29; // rsi
  ULONG v30; // ebx
  __int64 v31; // r9
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v33; // rsi
  PSID *TokenIntegrity; // rax
  PSID v35; // r15
  int v36; // ecx
  struct _KTHREAD *v37; // rax
  PERESOURCE *PrimaryToken; // r15
  void *v39; // r12
  int v40; // ecx
  struct _KTHREAD *v41; // rax
  __int64 v42; // rax
  void *v43; // rcx
  int v44; // eax
  unsigned __int8 *v45; // rsi
  _DWORD *v46; // rbx
  signed __int32 v47[8]; // [rsp+0h] [rbp-188h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-168h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-160h]
  __int64 v50; // [rsp+30h] [rbp-158h]
  char v51; // [rsp+50h] [rbp-138h]
  char v52; // [rsp+51h] [rbp-137h]
  PVOID v53; // [rsp+58h] [rbp-130h] BYREF
  __int64 v54; // [rsp+60h] [rbp-128h] BYREF
  PSID Sid; // [rsp+68h] [rbp-120h] BYREF
  PSID *v56; // [rsp+70h] [rbp-118h] BYREF
  PVOID Token; // [rsp+78h] [rbp-110h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+80h] [rbp-108h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+84h] [rbp-104h] BYREF
  unsigned int v60; // [rsp+88h] [rbp-100h] BYREF
  unsigned int v61; // [rsp+8Ch] [rbp-FCh] BYREF
  int v62; // [rsp+90h] [rbp-F8h] BYREF
  ACCESS_MASK v63; // [rsp+94h] [rbp-F4h]
  PVOID v64; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-E8h] BYREF
  PVOID P; // [rsp+A8h] [rbp-E0h] BYREF
  PVOID v67; // [rsp+B0h] [rbp-D8h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-D0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v69; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-C0h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-B0h]
  __int128 v72; // [rsp+E8h] [rbp-A0h]
  __int64 v73[2]; // [rsp+F8h] [rbp-90h] BYREF
  __int128 v74; // [rsp+108h] [rbp-80h]
  __int128 v75; // [rsp+118h] [rbp-70h] BYREF
  __int64 v76; // [rsp+128h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+130h] [rbp-58h] BYREF
  int v80; // [rsp+1A8h] [rbp+20h]

  v80 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v15 = 0;
  if ( !(unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
  {
    v56 = 0LL;
    v61 = 0;
    v67 = 0LL;
    Sid = 0LL;
    v69 = 0LL;
    Handle = 0LL;
    v53 = 0LL;
    v62 = 1;
    v52 = 0;
    v20 = 0;
    v51 = 0;
    AppContainerSidType = NotAppContainerSidType;
    LOBYTE(v54) = 0;
    v75 = 0LL;
    v76 = 0LL;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v22 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)TokenHandle < 0x7FFFFFFF0000LL )
        v22 = (__int64)TokenHandle;
      *(_QWORD *)v22 = *(_QWORD *)v22;
      if ( 8LL * HandleCount && ((unsigned __int8)Handles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    if ( !PackageSid )
      return -1073741811;
    if ( HandleCount )
    {
      if ( !Handles )
        return -1073741776;
    }
    else if ( Handles )
    {
      return -1073741776;
    }
    Token = 0LL;
    result = ObReferenceObjectByHandle(
               ExistingTokenHandle,
               2u,
               (POBJECT_TYPE)SeTokenObjectType,
               PreviousMode,
               &Token,
               &v69);
    if ( result < 0 )
      return result;
    appended = SeCaptureSid(PackageSid, PreviousMode, v23, v24, (int)Object, 1, &Sid);
    if ( appended < 0 )
      goto LABEL_117;
    appended = SepCheckCreateAppContainer(Sid);
    if ( appended < 0 )
      goto LABEL_117;
    if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
    {
      appended = -1073741659;
LABEL_116:
      v20 = v51;
      goto LABEL_117;
    }
    GrantedAccess = v69.GrantedAccess;
    if ( DesiredAccess )
      GrantedAccess = DesiredAccess;
    v63 = GrantedAccess;
    if ( CapabilityCount )
    {
      if ( Capabilities )
      {
LABEL_56:
        if ( Capabilities )
          appended = SeCaptureSidAndAttributesArray(
                       (char *)Capabilities,
                       CapabilityCount,
                       PreviousMode,
                       0LL,
                       0,
                       (__int64)HandleInformation,
                       v50,
                       (PVOID *)&v56,
                       &v61);
        if ( appended < 0 )
          goto LABEL_116;
        appended = SeCaptureHandles(HandleCount, (__int64)Handles, (__int64 *)&v67);
        if ( appended < 0 )
          goto LABEL_116;
        if ( !RtlIsPackageSid(Sid) )
          goto LABEL_61;
        if ( ((*((_BYTE *)Sid + 1) - 8) & 0xFB) != 0 )
        {
          appended = -1073700350;
          goto LABEL_116;
        }
        v26 = 0;
        if ( CapabilityCount )
        {
          v27 = v56;
          while ( RtlIsCapabilitySid(*v27) )
          {
            if ( v26 )
            {
              v28 = *v27;
              while ( !RtlEqualSid(v28, v56[2 * v15]) )
              {
                if ( ++v15 >= v26 )
                  goto LABEL_71;
              }
              appended = -1073741811;
              goto LABEL_116;
            }
LABEL_71:
            ++v26;
            v27 += 2;
            v15 = 0;
            if ( v26 >= CapabilityCount )
              goto LABEL_72;
          }
          goto LABEL_61;
        }
LABEL_72:
        v29 = v56;
        if ( !SepCapabilitiesHasAppSiloBaseSID(CapabilityCount, (__int64)v56) )
        {
          v30 = 0;
          if ( CapabilityCount )
          {
            while ( !SepIsAppSiloCapability(*v29) )
            {
              ++v30;
              v29 += 2;
              if ( v30 >= CapabilityCount )
                goto LABEL_76;
            }
LABEL_61:
            appended = -1073741811;
            goto LABEL_116;
          }
        }
LABEL_76:
        appended = RtlGetAppContainerSidType(Sid, &AppContainerSidType);
        if ( appended < 0 )
          goto LABEL_116;
        if ( AppContainerSidType == ChildAppContainerSidType )
        {
          appended = SepCheckCapabilities(Token, CapabilityCount, (__int64)v56, v31, (char *)&v54);
          if ( !(_BYTE)v54 )
          {
            appended = -1073741790;
            goto LABEL_116;
          }
        }
        if ( appended < 0 )
          goto LABEL_116;
        if ( (unsigned int)Feature_871661881__private_IsEnabledDeviceUsageNoInline() )
        {
          Flags.Flags = 0;
          RtlQueryElevationFlags(&Flags);
          if ( (Flags.Flags & 0x18) == 0x10 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v33 = (PERESOURCE *)Token;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
            TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)v33);
            if ( TokenIntegrity )
            {
              v35 = *TokenIntegrity;
              v36 = *RtlSubAuthorityCountSid(*TokenIntegrity);
              if ( (_BYTE)v36 )
              {
                if ( *RtlSubAuthoritySid(v35, v36 - 1) >= 0x3000 )
                {
                  memset(&SubjectContext, 0, sizeof(SubjectContext));
                  SeCaptureSubjectContext(&SubjectContext);
                  v37 = KeGetCurrentThread();
                  --v37->KernelApcDisable;
                  PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                  ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                  v39 = *(void **)SepLocateTokenIntegrity((__int64)PrimaryToken);
                  v40 = *RtlSubAuthorityCountSid(v39);
                  if ( !(_BYTE)v40 || *RtlSubAuthoritySid(v39, v40 - 1) < 0x3000 )
                    appended = -1073741790;
                  ExReleaseResourceLite(PrimaryToken[6]);
                  KeLeaveCriticalRegion();
                  SeReleaseSubjectContext(&SubjectContext);
                }
              }
            }
            ExReleaseResourceLite(v33[6]);
            KeLeaveCriticalRegion();
            if ( appended < 0 )
              goto LABEL_116;
          }
        }
        appended = SepDuplicateToken((__int64)Token, v80, 0, 1, 0, PreviousMode, 0, &v53);
        if ( appended < 0 )
          goto LABEL_116;
        v20 = 1;
        v51 = 1;
        appended = SeSetMandatoryPolicyToken((__int64)v53, &v62);
        if ( appended < 0 )
          goto LABEL_117;
        v41 = KeGetCurrentThread();
        --v41->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)v53 + 6), 1u);
        _InterlockedOr(v47, 0);
        v52 = 1;
        v42 = SepLocateTokenIntegrity((__int64)v53);
        if ( v42 )
        {
          v43 = *(void **)v42;
          v44 = *(unsigned __int8 *)(*(_QWORD *)v42 + 1LL);
          if ( (_BYTE)v44 )
            *RtlSubAuthoritySid(v43, v44 - 1) = 4096;
          *((_QWORD *)v53 + 9) &= 0x200800000uLL;
          *((_QWORD *)v53 + 10) &= 0x200800000uLL;
          *((_QWORD *)v53 + 8) &= 0x200800000uLL;
          *((_DWORD *)v53 + 50) &= (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
                                 ? 0xFFFFCFFF
                                 : 0xFFFFDFFF;
          *((_DWORD *)v53 + 50) |= 0x4000u;
        }
        else
        {
          appended = -1073740730;
        }
        if ( appended < 0 )
          goto LABEL_117;
        v45 = (unsigned __int8 *)Sid;
        appended = SepSetTokenCapabilities((__int64)v53, Sid, (__int64)v56, CapabilityCount);
        if ( appended < 0 )
          goto LABEL_116;
        appended = SepSetTokenLowboxNumber((__int64)v53, (__int64)v45);
        if ( appended < 0 )
          goto LABEL_116;
        *((_QWORD *)&v75 + 1) = v45;
        appended = SepSetTokenCachedHandles(v53, &v75, HandleCount, (HANDLE *)v67);
        if ( appended < 0 )
          goto LABEL_116;
        appended = SepSetTokenPackage((__int64)v53, v45);
        if ( appended < 0 )
          goto LABEL_116;
        appended = SepAppendAceToTokenDefaultDacl((__int64)v53, v45);
        if ( appended < 0 )
          goto LABEL_116;
        v46 = v53;
        if ( SepSidInTokenSidHash(
               (__int64)v53 + 808,
               0LL,
               (unsigned __int8 *)SePermissiveLearningModeCapabilitySid,
               0,
               1,
               0) )
        {
          _InterlockedAdd(&SepLearningModeTokenCount, 1u);
          *((_DWORD *)v53 + 50) |= 0x3000000u;
        }
        else
        {
          v46[50] &= 0xFCFFFFFF;
          if ( SepSidInTokenSidHash(
                 (__int64)v53 + 808,
                 0LL,
                 (unsigned __int8 *)SeLearningModeLoggingCapabilitySid,
                 0,
                 1,
                 0) )
          {
            _InterlockedAdd(&SepLearningModeTokenCount, 1u);
            *((_DWORD *)v53 + 50) |= 0x1000000u;
          }
        }
        *((_QWORD *)v53 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        _InterlockedOr(v47, 0);
        ExReleaseResourceLite(*((PERESOURCE *)v53 + 6));
        KeLeaveCriticalRegion();
        v52 = 0;
        appended = ObInsertObjectEx((struct _FILE_OBJECT *)v53, 0LL, v63, 1, 0, 0LL, (__int64)&Handle);
        if ( appended >= 0 )
        {
          appended = SepAppendAceToTokenObjectAcl((ULONG_PTR *)v53, 983551, Sid);
          if ( appended < 0 )
            goto LABEL_116;
          SepFinalizeTokenAcls(v53);
          ObfDereferenceObject(v53);
        }
        v20 = 0;
LABEL_117:
        if ( v52 )
        {
          if ( appended >= 0 )
            *((_QWORD *)v53 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v47, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v53 + 6));
          KeLeaveCriticalRegion();
        }
        if ( appended < 0 )
        {
          if ( v20 )
            ObfDereferenceObject(v53);
          if ( Handle )
            ObCloseHandle(Handle, PreviousMode);
        }
        if ( v56 )
          SeReleaseLuidAndAttributesArray(v56, PreviousMode);
        if ( Sid )
          SeReleaseSid(Sid, PreviousMode, 1);
        if ( Token )
          ObfDereferenceObject(Token);
        if ( v67 )
          ExFreePoolWithTag(v67, 0);
        if ( appended >= 0 )
          *TokenHandle = Handle;
        return appended;
      }
    }
    else if ( !Capabilities )
    {
      goto LABEL_56;
    }
    appended = -1073741776;
    goto LABEL_116;
  }
  v64 = 0LL;
  v60 = 0;
  P = 0LL;
  v65 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  *(_OWORD *)v73 = 0LL;
  v74 = 0LL;
  v16 = KeGetCurrentThread()->PreviousMode;
  if ( v16 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TokenHandle < 0x7FFFFFFF0000LL )
      v17 = (__int64)TokenHandle;
    *(_QWORD *)v17 = *(_QWORD *)v17;
    if ( 8LL * HandleCount && ((unsigned __int8)Handles & 7) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  if ( !ExistingTokenHandle )
    return -1073741816;
  if ( !PackageSid )
    return -1073741811;
  if ( HandleCount )
  {
    if ( Handles )
      goto LABEL_14;
    return -1073741776;
  }
  if ( Handles )
    return -1073741776;
LABEL_14:
  appended = SeCaptureSid(PackageSid, v16, v13, v14, (int)Object, 1, (PSID *)&v65);
  if ( appended >= 0 )
  {
    if ( CapabilityCount )
    {
      if ( Capabilities )
      {
LABEL_20:
        if ( Capabilities )
          appended = SeCaptureSidAndAttributesArray(
                       (char *)Capabilities,
                       CapabilityCount,
                       v16,
                       0LL,
                       0,
                       (__int64)HandleInformation,
                       v50,
                       &v64,
                       &v60);
        if ( appended >= 0 )
        {
          appended = SeCaptureHandles(HandleCount, (__int64)Handles, (__int64 *)&P);
          if ( appended >= 0 )
          {
            v73[1] = (__int64)&v70;
            LODWORD(v70) = 48;
            DWORD1(v70) |= 1u;
            *(_QWORD *)&v71 = v65;
            *((_QWORD *)&v71 + 1) = v64;
            LODWORD(v72) = CapabilityCount;
            *((_QWORD *)&v70 + 1) = ExistingTokenHandle;
            *(_QWORD *)&v74 = P;
            DWORD2(v74) = HandleCount;
            appended = SepCreateAppContainerToken(TokenHandle, 0LL, DesiredAccess, v9, v16, (__int64)v73);
          }
        }
        goto LABEL_25;
      }
    }
    else if ( !Capabilities )
    {
      goto LABEL_20;
    }
    appended = -1073741776;
  }
LABEL_25:
  if ( v64 )
    SeReleaseLuidAndAttributesArray(v64, v16);
  if ( v65 )
    SeReleaseSid((void *)v65, v16, 1);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return appended;
}
