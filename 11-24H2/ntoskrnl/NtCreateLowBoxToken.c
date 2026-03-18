/*
 * XREFs of NtCreateLowBoxToken @ 0x140AD8020
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepCapabilitiesHasAppSiloBaseSID @ 0x140364188 (SepCapabilitiesHasAppSiloBaseSID.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140364418 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSidInTokenSidHash @ 0x1403DF2C0 (SepSidInTokenSidHash.c)
 *     SepLocateTokenIntegrity @ 0x14041B160 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x1404600D0 (RtlSubAuthorityCountSid.c)
 *     SepIsAppSiloCapability @ 0x1404833CC (SepIsAppSiloCapability.c)
 *     SepCaptureHandles @ 0x140498D9C (SepCaptureHandles.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E4B64 (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_871661881__private_IsEnabledDeviceUsageNoInline @ 0x140608390 (Feature_871661881__private_IsEnabledDeviceUsageNoInline.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     SepSetTokenCachedHandles @ 0x1408F2494 (SepSetTokenCachedHandles.c)
 *     RtlGetAppContainerSidType @ 0x1408F2D70 (RtlGetAppContainerSidType.c)
 *     SepFinalizeTokenAcls @ 0x14090F550 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 *     RtlQueryElevationFlags @ 0x140911360 (RtlQueryElevationFlags.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140936340 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x140936380 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenPackage @ 0x140A141B0 (SepSetTokenPackage.c)
 *     SeReleaseSid @ 0x140A249A0 (SeReleaseSid.c)
 *     RtlIsPackageSid @ 0x140A4997C (RtlIsPackageSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4A5C4 (SeSetMandatoryPolicyToken.c)
 *     RtlIsCapabilitySid @ 0x140A4AD90 (RtlIsCapabilitySid.c)
 *     SepSetTokenLowboxNumber @ 0x140A4BC18 (SepSetTokenLowboxNumber.c)
 *     SepCheckCreateLowBox @ 0x140A6CF24 (SepCheckCreateLowBox.c)
 *     SepCheckCapabilities @ 0x140A8CD3C (SepCheckCapabilities.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtCreateLowBoxToken(
        HANDLE *a1,
        void *a2,
        ACCESS_MASK a3,
        int a4,
        _BYTE *Src,
        unsigned int a6,
        char *a7,
        unsigned int a8,
        __int64 a9)
{
  HANDLE *v10; // r13
  char v11; // di
  char PreviousMode; // r12
  __int64 v13; // rcx
  NTSTATUS result; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int AppContainerSidType; // ebx
  ACCESS_MASK GrantedAccess; // r13d
  unsigned int v19; // ebx
  __int64 *v20; // rdi
  unsigned int v21; // r14d
  void *v22; // r15
  PSID *v23; // rdi
  unsigned int v24; // ebx
  __int64 v25; // r9
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v27; // rdi
  PSID *TokenIntegrity; // rax
  PSID v29; // r14
  int v30; // ecx
  struct _KTHREAD *v31; // rax
  PERESOURCE *PrimaryToken; // r14
  void *v33; // r15
  int v34; // ecx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rax
  void *v37; // rcx
  int v38; // eax
  unsigned __int8 *v39; // rdi
  _DWORD *v40; // rbx
  signed __int32 v41[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-E0h]
  __int64 v44; // [rsp+30h] [rbp-D8h]
  char v45; // [rsp+50h] [rbp-B8h]
  char v46; // [rsp+51h] [rbp-B7h]
  PVOID v47; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+68h] [rbp-A0h] BYREF
  PSID *v50; // [rsp+70h] [rbp-98h] BYREF
  PVOID Token; // [rsp+78h] [rbp-90h] BYREF
  int v52; // [rsp+80h] [rbp-88h] BYREF
  int v53; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v54; // [rsp+88h] [rbp-80h] BYREF
  int v55; // [rsp+8Ch] [rbp-7Ch] BYREF
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-70h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v58; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v59; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-48h] BYREF

  v10 = a1;
  v50 = 0LL;
  v54 = 0;
  P = 0LL;
  Sid = 0LL;
  v58 = 0LL;
  Handle = 0LL;
  v47 = 0LL;
  v55 = 1;
  v46 = 0;
  v11 = 0;
  v45 = 0;
  v52 = 0;
  LOBYTE(v48) = 0;
  v59 = 0LL;
  v60 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
      v13 = (__int64)v10;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    if ( 8LL * a8 && (a9 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  if ( !Src )
    return -1073741811;
  if ( a8 )
  {
    if ( a9 )
      goto LABEL_13;
    return -1073741776;
  }
  if ( a9 )
    return -1073741776;
LABEL_13:
  Token = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, &v58);
  if ( result < 0 )
    return result;
  AppContainerSidType = SeCaptureSid(Src, PreviousMode, v15, v16, (int)Object, 1, &Sid);
  if ( AppContainerSidType >= 0 )
  {
    AppContainerSidType = SepCheckCreateLowBox(Sid);
    if ( AppContainerSidType >= 0 )
    {
      if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
      {
        AppContainerSidType = -1073741659;
        v11 = v45;
        goto LABEL_83;
      }
      GrantedAccess = v58.GrantedAccess;
      if ( a3 )
        GrantedAccess = a3;
      if ( a7 )
        AppContainerSidType = SeCaptureSidAndAttributesArray(
                                a7,
                                a6,
                                PreviousMode,
                                0LL,
                                0,
                                (__int64)HandleInformation,
                                v44,
                                (PVOID *)&v50,
                                &v54);
      if ( AppContainerSidType < 0 )
        goto LABEL_81;
      AppContainerSidType = SepCaptureHandles(a8, a9, (__int64 *)&P);
      if ( AppContainerSidType < 0 )
        goto LABEL_81;
      if ( RtlIsPackageSid((__int64)Sid) )
      {
        if ( ((*((_BYTE *)Sid + 1) - 8) & 0xFB) != 0 )
        {
          AppContainerSidType = -1073700350;
          goto LABEL_81;
        }
        v19 = 0;
        if ( a6 )
        {
          v20 = (__int64 *)v50;
          while ( RtlIsCapabilitySid(*v20) )
          {
            v21 = 0;
            if ( v19 )
            {
              v22 = (void *)*v20;
              while ( !RtlEqualSid(v22, v50[2 * v21]) )
              {
                if ( ++v21 >= v19 )
                  goto LABEL_36;
              }
              AppContainerSidType = -1073741811;
              goto LABEL_81;
            }
LABEL_36:
            ++v19;
            v20 += 2;
            if ( v19 >= a6 )
              goto LABEL_37;
          }
        }
        else
        {
LABEL_37:
          v23 = v50;
          if ( SepCapabilitiesHasAppSiloBaseSID(a6, (__int64)v50) || (v24 = 0, !a6) )
          {
LABEL_41:
            AppContainerSidType = RtlGetAppContainerSidType((char *)Sid, &v52);
            if ( AppContainerSidType >= 0 )
            {
              if ( v52 != 1
                || (AppContainerSidType = SepCheckCapabilities(Token, a6, (__int64)v50, v25, (char *)&v48), (_BYTE)v48) )
              {
                if ( AppContainerSidType < 0 )
                  goto LABEL_81;
                if ( (unsigned int)Feature_871661881__private_IsEnabledDeviceUsageNoInline() )
                {
                  v53 = 0;
                  RtlQueryElevationFlags(&v53);
                  if ( (v53 & 0x18) == 0x10 )
                  {
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->KernelApcDisable;
                    v27 = (PERESOURCE *)Token;
                    ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
                    TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)v27);
                    if ( TokenIntegrity )
                    {
                      v29 = *TokenIntegrity;
                      v30 = *RtlSubAuthorityCountSid(*TokenIntegrity);
                      if ( (_BYTE)v30 )
                      {
                        if ( *RtlSubAuthoritySid(v29, v30 - 1) >= 0x3000 )
                        {
                          memset(&SubjectContext, 0, sizeof(SubjectContext));
                          SeCaptureSubjectContext(&SubjectContext);
                          v31 = KeGetCurrentThread();
                          --v31->KernelApcDisable;
                          PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                          ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                          v33 = *(void **)SepLocateTokenIntegrity((__int64)PrimaryToken);
                          v34 = *RtlSubAuthorityCountSid(v33);
                          if ( !(_BYTE)v34 || *RtlSubAuthoritySid(v33, v34 - 1) < 0x3000 )
                            AppContainerSidType = -1073741790;
                          ExReleaseResourceLite(PrimaryToken[6]);
                          KeLeaveCriticalRegion();
                          SeReleaseSubjectContext(&SubjectContext);
                        }
                      }
                    }
                    ExReleaseResourceLite(v27[6]);
                    KeLeaveCriticalRegion();
                    if ( AppContainerSidType < 0 )
                      goto LABEL_81;
                  }
                }
                AppContainerSidType = SepDuplicateToken((__int64)Token, a4, 0, 1, 0, PreviousMode, 0, &v47);
                if ( AppContainerSidType < 0 )
                  goto LABEL_81;
                v11 = 1;
                v45 = 1;
                AppContainerSidType = SeSetMandatoryPolicyToken((__int64)v47, &v55);
                if ( AppContainerSidType < 0 )
                  goto LABEL_82;
                v35 = KeGetCurrentThread();
                --v35->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v47 + 6), 1u);
                _InterlockedOr(v41, 0);
                v46 = 1;
                v36 = SepLocateTokenIntegrity((__int64)v47);
                if ( v36 )
                {
                  v37 = *(void **)v36;
                  v38 = *(unsigned __int8 *)(*(_QWORD *)v36 + 1LL);
                  if ( (_BYTE)v38 )
                    *RtlSubAuthoritySid(v37, v38 - 1) = 4096;
                  *((_QWORD *)v47 + 9) &= 0x200800000uLL;
                  *((_QWORD *)v47 + 10) &= 0x200800000uLL;
                  *((_QWORD *)v47 + 8) &= 0x200800000uLL;
                  *((_DWORD *)v47 + 50) &= (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
                                         ? 0xFFFFCFFF
                                         : 0xFFFFDFFF;
                  *((_DWORD *)v47 + 50) |= 0x4000u;
                }
                else
                {
                  AppContainerSidType = -1073740730;
                }
                if ( AppContainerSidType < 0 )
                  goto LABEL_82;
                v39 = (unsigned __int8 *)Sid;
                AppContainerSidType = SepSetTokenCapabilities((__int64)v47, Sid, (__int64)v50, a6);
                if ( AppContainerSidType < 0 )
                  goto LABEL_81;
                AppContainerSidType = SepSetTokenLowboxNumber((__int64)v47, (__int64)v39);
                if ( AppContainerSidType < 0 )
                  goto LABEL_81;
                *((_QWORD *)&v59 + 1) = v39;
                AppContainerSidType = SepSetTokenCachedHandles(v47, &v59, a8, (HANDLE *)P);
                if ( AppContainerSidType < 0 )
                  goto LABEL_81;
                AppContainerSidType = SepSetTokenPackage((__int64)v47, v39);
                if ( AppContainerSidType < 0 )
                  goto LABEL_81;
                AppContainerSidType = SepAppendAceToTokenDefaultDacl((__int64)v47, v39);
                if ( AppContainerSidType < 0 )
                  goto LABEL_81;
                v40 = v47;
                if ( SepSidInTokenSidHash(
                       (__int64)v47 + 808,
                       0LL,
                       (unsigned __int8 *)SePermissiveLearningModeCapabilitySid,
                       0,
                       1,
                       0) )
                {
                  _InterlockedIncrement(&SepLearningModeTokenCount);
                  *((_DWORD *)v47 + 50) |= 0x3000000u;
                }
                else
                {
                  v40[50] &= 0xFCFFFFFF;
                  if ( SepSidInTokenSidHash(
                         (__int64)v47 + 808,
                         0LL,
                         (unsigned __int8 *)SeLearningModeLoggingCapabilitySid,
                         0,
                         1,
                         0) )
                  {
                    _InterlockedIncrement(&SepLearningModeTokenCount);
                    *((_DWORD *)v47 + 50) |= 0x1000000u;
                  }
                }
                *((_QWORD *)v47 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v41, 0);
                ExReleaseResourceLite(*((PERESOURCE *)v47 + 6));
                KeLeaveCriticalRegion();
                v46 = 0;
                AppContainerSidType = ObInsertObjectEx(
                                        (struct _FILE_OBJECT *)v47,
                                        0LL,
                                        GrantedAccess,
                                        1,
                                        0,
                                        0LL,
                                        (__int64)&Handle);
                if ( AppContainerSidType >= 0 )
                {
                  AppContainerSidType = SepAppendAceToTokenObjectAcl((ULONG_PTR *)v47, 983551, Sid);
                  if ( AppContainerSidType < 0 )
                    goto LABEL_81;
                  SepFinalizeTokenAcls(v47);
                  ObfDereferenceObject(v47);
                }
                v11 = 0;
LABEL_82:
                v10 = a1;
                goto LABEL_83;
              }
              AppContainerSidType = -1073741790;
            }
LABEL_81:
            v11 = v45;
            goto LABEL_82;
          }
          while ( !SepIsAppSiloCapability(*v23) )
          {
            ++v24;
            v23 += 2;
            if ( v24 >= a6 )
              goto LABEL_41;
          }
        }
      }
      AppContainerSidType = -1073741811;
      goto LABEL_81;
    }
  }
LABEL_83:
  if ( v46 )
  {
    if ( AppContainerSidType >= 0 )
      *((_QWORD *)v47 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v41, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v47 + 6));
    KeLeaveCriticalRegion();
  }
  if ( AppContainerSidType < 0 )
  {
    if ( v11 )
      ObfDereferenceObject(v47);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v50 )
    SeReleaseLuidAndAttributesArray(v50, PreviousMode);
  if ( Sid )
    SeReleaseSid(Sid, PreviousMode, 1);
  if ( Token )
    ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AppContainerSidType >= 0 )
    *v10 = Handle;
  return AppContainerSidType;
}
