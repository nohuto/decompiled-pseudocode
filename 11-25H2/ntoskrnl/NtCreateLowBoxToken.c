/*
 * XREFs of NtCreateLowBoxToken @ 0x140ACDB00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepCapabilitiesHasAppSiloBaseSID @ 0x14036B2D0 (SepCapabilitiesHasAppSiloBaseSID.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14036B568 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSidInTokenSidHash @ 0x1403D1F20 (SepSidInTokenSidHash.c)
 *     SepLocateTokenIntegrity @ 0x14041DC40 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     SepIsAppSiloCapability @ 0x140482B34 (SepIsAppSiloCapability.c)
 *     SepCaptureHandles @ 0x14049C02C (SepCaptureHandles.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     SepFinalizeTokenAcls @ 0x1408A4398 (SepFinalizeTokenAcls.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     SepSetTokenCachedHandles @ 0x14098384C (SepSetTokenCachedHandles.c)
 *     RtlGetAppContainerSidType @ 0x140984120 (RtlGetAppContainerSidType.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140997ED8 (SeReleaseLuidAndAttributesArray.c)
 *     RtlIsPackageSid @ 0x140998B14 (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x140998B5C (RtlIsCapabilitySid.c)
 *     SepSetTokenPackage @ 0x140998C54 (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x140A08CB8 (SepSetTokenCapabilities.c)
 *     SepSetTokenLowboxNumber @ 0x140A0DB74 (SepSetTokenLowboxNumber.c)
 *     SeReleaseSid @ 0x140A19690 (SeReleaseSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4769C (SeSetMandatoryPolicyToken.c)
 *     SepCheckCreateLowBox @ 0x140A6B954 (SepCheckCreateLowBox.c)
 *     SepCheckCapabilities @ 0x140A87D3C (SepCheckCapabilities.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  POBJECT_ATTRIBUTES v9; // r14
  PHANDLE v11; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v13; // rcx
  NTSTATUS result; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  NTSTATUS appended; // ebx
  char v18; // di
  ACCESS_MASK GrantedAccess; // r13d
  ULONG v20; // ebx
  PSID *v21; // rdi
  unsigned int v22; // r14d
  PSID v23; // r15
  PSID *v24; // rdi
  ULONG v25; // ebx
  __int64 v26; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 TokenIntegrity; // rax
  void *v29; // rcx
  int v30; // eax
  unsigned __int8 *v31; // rdi
  _DWORD *v32; // rbx
  signed __int32 v33[8]; // [rsp+0h] [rbp-E8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-C0h]
  __int64 v36; // [rsp+30h] [rbp-B8h]
  char v37; // [rsp+50h] [rbp-98h]
  char v38; // [rsp+51h] [rbp-97h]
  PVOID v39; // [rsp+58h] [rbp-90h] BYREF
  __int64 v40; // [rsp+60h] [rbp-88h] BYREF
  PSID Sid; // [rsp+68h] [rbp-80h] BYREF
  PSID *v42; // [rsp+70h] [rbp-78h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+78h] [rbp-70h] BYREF
  PVOID Token; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+88h] [rbp-60h] BYREF
  int v46; // [rsp+8Ch] [rbp-5Ch] BYREF
  PVOID P; // [rsp+90h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v49; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v50; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-30h]

  v9 = ObjectAttributes;
  v11 = TokenHandle;
  v42 = 0LL;
  v45 = 0;
  P = 0LL;
  Sid = 0LL;
  v49 = 0LL;
  Handle = 0LL;
  v39 = 0LL;
  v46 = 1;
  v38 = 0;
  v37 = 0;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v40) = 0;
  v50 = 0LL;
  v51 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v11 < 0x7FFFFFFF0000LL )
      v13 = (__int64)v11;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    if ( 8LL * HandleCount && ((unsigned __int8)Handles & 7) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  if ( !PackageSid )
    return -1073741811;
  if ( HandleCount )
  {
    if ( Handles )
      goto LABEL_13;
    return -1073741776;
  }
  if ( Handles )
    return -1073741776;
LABEL_13:
  Token = 0LL;
  result = ObReferenceObjectByHandle(
             ExistingTokenHandle,
             2u,
             (POBJECT_TYPE)SeTokenObjectType,
             PreviousMode,
             &Token,
             &v49);
  if ( result < 0 )
    return result;
  appended = SeCaptureSid(PackageSid, PreviousMode, v15, v16, (int)Object, 1, &Sid);
  if ( appended < 0 )
    goto LABEL_19;
  appended = SepCheckCreateLowBox(Sid);
  if ( appended < 0 )
    goto LABEL_19;
  if ( *((_DWORD *)Token + 48) == 1 || *((int *)Token + 49) >= 2 )
  {
    GrantedAccess = v49.GrantedAccess;
    if ( DesiredAccess )
      GrantedAccess = DesiredAccess;
    if ( Capabilities )
      appended = SeCaptureSidAndAttributesArray(
                   (char *)Capabilities,
                   CapabilityCount,
                   PreviousMode,
                   0LL,
                   0,
                   (__int64)HandleInformation,
                   v36,
                   (PVOID *)&v42,
                   &v45);
    if ( appended < 0 )
      goto LABEL_70;
    appended = SepCaptureHandles(HandleCount, (__int64)Handles, (__int64 *)&P);
    if ( appended < 0 )
      goto LABEL_70;
    if ( RtlIsPackageSid(Sid) )
    {
      if ( ((*((_BYTE *)Sid + 1) - 8) & 0xFB) != 0 )
      {
        appended = -1073700350;
        goto LABEL_70;
      }
      v20 = 0;
      if ( CapabilityCount )
      {
        v21 = v42;
        while ( RtlIsCapabilitySid(*v21) )
        {
          v22 = 0;
          if ( v20 )
          {
            v23 = *v21;
            while ( !RtlEqualSid(v23, v42[2 * v22]) )
            {
              if ( ++v22 >= v20 )
                goto LABEL_37;
            }
            appended = -1073741811;
            goto LABEL_70;
          }
LABEL_37:
          ++v20;
          v21 += 2;
          if ( v20 >= CapabilityCount )
          {
            v9 = ObjectAttributes;
            goto LABEL_39;
          }
        }
      }
      else
      {
LABEL_39:
        v24 = v42;
        if ( SepCapabilitiesHasAppSiloBaseSID(CapabilityCount, (__int64)v42) || (v25 = 0, !CapabilityCount) )
        {
LABEL_43:
          appended = RtlGetAppContainerSidType(Sid, &AppContainerSidType);
          if ( appended >= 0 )
          {
            if ( AppContainerSidType != ChildAppContainerSidType
              || (appended = SepCheckCapabilities(Token, CapabilityCount, (__int64)v42, v26, (char *)&v40), (_BYTE)v40) )
            {
              if ( appended < 0 )
                goto LABEL_70;
              appended = SepDuplicateToken((__int128 *)Token, (__int64)v9, 0, 1, 0, PreviousMode, 0, (__int64 *)&v39);
              if ( appended < 0 )
                goto LABEL_70;
              v18 = 1;
              v37 = 1;
              appended = SeSetMandatoryPolicyToken((__int64)v39, &v46);
              if ( appended < 0 )
                goto LABEL_71;
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v39 + 6), 1u);
              _InterlockedOr(v33, 0);
              v38 = 1;
              TokenIntegrity = SepLocateTokenIntegrity((__int64)v39);
              if ( TokenIntegrity )
              {
                v29 = *(void **)TokenIntegrity;
                v30 = *(unsigned __int8 *)(*(_QWORD *)TokenIntegrity + 1LL);
                if ( (_BYTE)v30 )
                  *RtlSubAuthoritySid(v29, v30 - 1) = 4096;
                *((_QWORD *)v39 + 9) &= 0x200800000uLL;
                *((_QWORD *)v39 + 10) &= 0x200800000uLL;
                *((_QWORD *)v39 + 8) &= 0x200800000uLL;
                *((_DWORD *)v39 + 50) &= ~0x2000u;
                *((_DWORD *)v39 + 50) |= 0x4000u;
              }
              else
              {
                appended = -1073740730;
              }
              if ( appended < 0 )
                goto LABEL_71;
              v31 = (unsigned __int8 *)Sid;
              appended = SepSetTokenCapabilities((__int64)v39, Sid, (char *)v42, CapabilityCount);
              if ( appended < 0 )
                goto LABEL_70;
              appended = SepSetTokenLowboxNumber((__int64)v39, (__int64)v31);
              if ( appended < 0 )
                goto LABEL_70;
              *((_QWORD *)&v50 + 1) = v31;
              appended = SepSetTokenCachedHandles(v39, &v50, HandleCount, (HANDLE *)P);
              if ( appended < 0 )
                goto LABEL_70;
              appended = SepSetTokenPackage((__int64)v39, v31);
              if ( appended < 0 )
                goto LABEL_70;
              appended = SepAppendAceToTokenDefaultDacl((__int64)v39, v31);
              if ( appended < 0 )
                goto LABEL_70;
              v32 = v39;
              if ( SepSidInTokenSidHash(
                     (__int64)v39 + 808,
                     0LL,
                     (unsigned __int8 *)SePermissiveLearningModeCapabilitySid,
                     0,
                     1,
                     0) )
              {
                _InterlockedIncrement(&SepLearningModeTokenCount);
                *((_DWORD *)v39 + 50) |= 0x3000000u;
              }
              else
              {
                v32[50] &= 0xFCFFFFFF;
                if ( SepSidInTokenSidHash(
                       (__int64)v39 + 808,
                       0LL,
                       (unsigned __int8 *)SeLearningModeLoggingCapabilitySid,
                       0,
                       1,
                       0) )
                {
                  _InterlockedIncrement(&SepLearningModeTokenCount);
                  *((_DWORD *)v39 + 50) |= 0x1000000u;
                }
              }
              *((_QWORD *)v39 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v33, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v39 + 6));
              KeLeaveCriticalRegion();
              v38 = 0;
              appended = ObInsertObjectEx((char *)v39, 0LL, GrantedAccess, 1, 0, 0LL, (__int64)&Handle);
              if ( appended >= 0 )
              {
                appended = SepAppendAceToTokenObjectAcl((ULONG_PTR *)v39, 0xF01FFu, Sid);
                if ( appended < 0 )
                  goto LABEL_70;
                SepFinalizeTokenAcls(v39);
                ObfDereferenceObject(v39);
              }
              v18 = 0;
LABEL_71:
              v11 = TokenHandle;
              goto LABEL_72;
            }
            appended = -1073741790;
          }
LABEL_70:
          v18 = v37;
          goto LABEL_71;
        }
        while ( !SepIsAppSiloCapability(*v24) )
        {
          ++v25;
          v24 += 2;
          if ( v25 >= CapabilityCount )
            goto LABEL_43;
        }
      }
    }
    appended = -1073741811;
    goto LABEL_70;
  }
  appended = -1073741659;
LABEL_19:
  v18 = v37;
LABEL_72:
  if ( v38 )
  {
    if ( appended >= 0 )
      *((_QWORD *)v39 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v33, 0);
    ExReleaseResourceLite(*((PERESOURCE *)v39 + 6));
    KeLeaveCriticalRegion();
  }
  if ( appended < 0 )
  {
    if ( v18 )
      ObfDereferenceObject(v39);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v42 )
    SeReleaseLuidAndAttributesArray(v42, PreviousMode);
  if ( Sid )
    SeReleaseSid(Sid, PreviousMode, 1);
  if ( Token )
    ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *v11 = Handle;
  return appended;
}
