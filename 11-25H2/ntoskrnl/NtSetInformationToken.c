/*
 * XREFs of NtSetInformationToken @ 0x140ACC810
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x14036C588 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLocateTokenIntegrity @ 0x14041DC40 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140461BC0 (RtlSubAuthorityCountSid.c)
 *     SepLinkLogonSessions @ 0x1404A1A1C (SepLinkLogonSessions.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405D8BC8 (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     SepOneWayLinkLogonSessions @ 0x1405FC0DC (SepOneWayLinkLogonSessions.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeSetPrivateNameSpaceToken @ 0x140780578 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x1407807B4 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x140780820 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x140780880 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x140782D10 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x14078320C (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x140783230 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x140784688 (SepRemoveTokenLogonSession.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140868260 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SeCaptureSidAndAttributesArray @ 0x1408A38E0 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     SepIdAssignableAsOwner @ 0x14091C2A4 (SepIdAssignableAsOwner.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140982C90 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeReleaseAcl @ 0x140997EBC (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140997ED8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureAcl @ 0x140998F9C (SeCaptureAcl.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A06268 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A0E024 (SepDereferenceLowBoxNumberEntry.c)
 *     SeReleaseSid @ 0x140A19690 (SeReleaseSid.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140A3B60C (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x140A418BC (SepShouldSetDelinkFlags.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4769C (SeSetMandatoryPolicyToken.c)
 *     RtlQueryElevationFlags @ 0x140A4AFD0 (RtlQueryElevationFlags.c)
 *     SepExpandDynamic @ 0x140A4CE40 (SepExpandDynamic.c)
 *     SeSetSessionIdToken @ 0x140A4CF28 (SeSetSessionIdToken.c)
 *     SepAppendDefaultDacl @ 0x140A5AE20 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140A5DD10 (SepFreeDefaultDacl.c)
 *     SepStopReferencingLogonSession @ 0x140A744C0 (SepStopReferencingLogonSession.c)
 *     SeSetVirtualizationToken @ 0x140A85DC0 (SeSetVirtualizationToken.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  PERESOURCE *v15; // rsi
  struct _KTHREAD *v16; // rax
  PERESOURCE *v17; // rbx
  _QWORD *v18; // rdx
  NTSTATUS v19; // ebx
  struct _KTHREAD *v20; // rax
  char v21; // bl
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KTHREAD *v24; // rax
  struct _ERESOURCE *v25; // rcx
  struct _KTHREAD *v26; // rax
  _QWORD *v27; // r8
  char *v28; // rbx
  _OWORD *v29; // rcx
  int v30; // ebx
  struct _KTHREAD *v31; // rax
  PVOID v32; // r14
  ULONG v33; // ebx
  int v34; // eax
  char *v35; // rcx
  struct _KTHREAD *v36; // rax
  PERESOURCE *v37; // rsi
  PVOID v38; // rbx
  unsigned int v39; // edx
  __int64 v40; // r8
  __int64 v41; // r9
  char *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r15
  PERESOURCE *v45; // rcx
  unsigned int v46; // esi
  struct _KTHREAD *v47; // rax
  PERESOURCE *v48; // r15
  _QWORD *v49; // rbx
  __int64 v50; // rax
  unsigned int v51; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v53; // al
  __int32 v54; // ebx
  __int32 v55; // ebx
  __int32 v56; // ebx
  __int32 v57; // ebx
  int v58; // ebx
  int v59; // ebx
  int v60; // ebx
  struct _KTHREAD *v61; // rax
  PERESOURCE *v62; // rbx
  int v63; // ebx
  int v64; // r15d
  PVOID v65; // rbx
  char ShouldSetDelinkFlags; // si
  struct _KTHREAD *v67; // rcx
  PERESOURCE *v68; // r15
  int *v69; // rdx
  _DWORD *v70; // rbx
  struct _KTHREAD *v71; // rax
  _DWORD *v72; // rdx
  int v73; // eax
  unsigned int v74; // eax
  PSID *v75; // r12
  unsigned __int16 *v76; // rbx
  int v77; // ecx
  int v78; // ecx
  ULONG v79; // r15d
  struct _KTHREAD *v80; // rax
  char *v81; // rbx
  PSID *TokenIntegrity; // rax
  PSID v83; // r13
  UCHAR v84; // r12
  ULONG v85; // eax
  ULONG v86; // eax
  int v87; // eax
  int v88; // eax
  void *v89; // rcx
  void *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // r8
  struct _KTHREAD *v93; // rax
  int v94; // eax
  signed __int32 v95[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v98; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  NTSTATUS v100; // [rsp+58h] [rbp-C0h]
  char v101; // [rsp+5Ch] [rbp-BCh]
  KPROCESSOR_MODE v102; // [rsp+5Dh] [rbp-BBh]
  unsigned int v103; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v105; // [rsp+68h] [rbp-B0h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v107; // [rsp+78h] [rbp-A0h] BYREF
  PSID Sid1; // [rsp+80h] [rbp-98h] BYREF
  PVOID P; // [rsp+88h] [rbp-90h] BYREF
  _OWORD *v110; // [rsp+90h] [rbp-88h] BYREF
  PVOID v111; // [rsp+98h] [rbp-80h]
  int v112; // [rsp+A0h] [rbp-78h] BYREF
  int v113; // [rsp+A4h] [rbp-74h]
  int v114; // [rsp+A8h] [rbp-70h]
  __int64 v115; // [rsp+B0h] [rbp-68h] BYREF
  PSID *v116; // [rsp+B8h] [rbp-60h] BYREF
  PSID *v117; // [rsp+C0h] [rbp-58h]
  int v118; // [rsp+C8h] [rbp-50h]
  int v119; // [rsp+CCh] [rbp-4Ch]
  __int64 v120; // [rsp+D0h] [rbp-48h] BYREF
  int v121; // [rsp+D8h] [rbp-40h]
  unsigned int v122; // [rsp+DCh] [rbp-3Ch] BYREF
  int v123; // [rsp+E0h] [rbp-38h]
  PSID v124; // [rsp+E8h] [rbp-30h]
  PSID v125; // [rsp+F0h] [rbp-28h]
  PSID v126; // [rsp+F8h] [rbp-20h]

  v8 = 0;
  v101 = 0;
  v103 = 0;
  v115 = 0LL;
  v116 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v102 = PreviousMode;
  if ( PreviousMode && TokenInformationLength && ((unsigned __int8)TokenInformation & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags
    || (v10 = 0x24800F8B5070LL, !_bittest64(&v10, TokenInformationClass)) )
  {
    if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      return -1073741821;
    Flags.Flags = 0;
    if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 0x18) != 0x10 || TokenInformationClass != -2 )
      return -1073741821;
  }
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken || TokenInformationClass == -2 )
  {
    v11 = 136;
  }
  Token = 0LL;
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v15 = (PERESOURCE *)Token;
  v111 = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenLinkedToken )
    {
      switch ( TokenInformationClass )
      {
        case 19:
          if ( TokenInformationLength != 8 )
            goto LABEL_109;
          v126 = *(PSID *)TokenInformation;
          v34 = SepLinkLogonSessions((__int64)Token, v126, PreviousMode);
          break;
        case -2:
          if ( TokenInformationLength != 8 )
            goto LABEL_109;
          v125 = *(PSID *)TokenInformation;
          v34 = SepOneWayLinkLogonSessions((__int64)Token, v125, PreviousMode);
          break;
        case 4:
          if ( TokenInformationLength < 8 )
            goto LABEL_90;
          Sid1 = *(PSID *)TokenInformation;
          v19 = SeCaptureSid(Sid1, PreviousMode, v13, v14, (int)Object, 1, &Sid1);
          v100 = v19;
          if ( v19 < 0 )
            goto LABEL_92;
          v51 = 0;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v95, 0);
          while ( 1 )
          {
            if ( v51 >= *((_DWORD *)v15 + 31) )
            {
              _InterlockedOr(v95, 0);
              ExReleaseResourceLite(v15[6]);
              KeLeaveCriticalRegion();
              ObfDereferenceObject(v15);
              SeReleaseSid(Sid1, PreviousMode, 1);
              return -1073741734;
            }
            if ( RtlEqualSid(Sid1, (&v15[19]->SystemResourcesList.Flink)[2 * v51]) )
              break;
            ++v51;
          }
          if ( SepIdAssignableAsOwner((__int64)v15, v51) )
          {
            *((_DWORD *)v15 + 36) = v51;
            v53 = 1;
            v101 = 1;
            v100 = 0;
          }
          else
          {
            v100 = -1073741734;
            v53 = v101;
          }
          if ( v53 )
          {
            v117 = (PSID *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
            v15[7] = (PERESOURCE)v117;
          }
          _InterlockedOr(v95, 0);
          ExReleaseResourceLite(v15[6]);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v15);
          SeReleaseSid(Sid1, PreviousMode, 1);
          return v100;
        case 5:
          if ( TokenInformationLength < 8 )
            goto LABEL_90;
          v107 = *(_QWORD *)TokenInformation;
          v19 = SeCaptureSid((_BYTE *)v107, PreviousMode, v13, v14, (int)Object, 1, (PSID *)&v107);
          v100 = v19;
          v45 = v15;
          if ( v19 < 0 )
          {
LABEL_93:
            ObfDereferenceObject(v45);
            return v19;
          }
          if ( SepIdAssignableAsGroup((__int64)v15, (void *)v107) )
          {
            v46 = 4 * *(unsigned __int8 *)(v107 + 1) + 8;
            v103 = v46;
            v47 = KeGetCurrentThread();
            --v47->KernelApcDisable;
            v48 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v95, 0);
            v49 = Token;
            v50 = *((_QWORD *)Token + 23);
            if ( v50 )
            {
              v46 += *(unsigned __int16 *)(v50 + 2);
              v103 = v46;
            }
            if ( v46 <= *((_DWORD *)Token + 34) )
            {
              v100 = SepExpandDynamic((__int64)Token, v103);
              if ( v100 >= 0 )
              {
                SepFreePrimaryGroup((__int64)v49);
                SepAppendPrimaryGroup((__int64)v49, (unsigned __int8 *)v107);
                v49[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v95, 0);
                ExReleaseResourceLite(v48[6]);
                KeLeaveCriticalRegion();
              }
              else
              {
                _InterlockedOr(v95, 0);
                ExReleaseResourceLite(v48[6]);
                KeLeaveCriticalRegion();
                v8 = v100;
              }
            }
            else
            {
              _InterlockedOr(v95, 0);
              ExReleaseResourceLite(v48[6]);
              KeLeaveCriticalRegion();
              v8 = -1073741671;
            }
            v15 = (PERESOURCE *)Token;
          }
          else
          {
            v8 = -1073741733;
          }
          ObfDereferenceObject(v15);
          SeReleaseSid((void *)v107, PreviousMode, 1);
          return v8;
        case 6:
          if ( TokenInformationLength < 8 )
            goto LABEL_90;
          v35 = *(char **)TokenInformation;
          v105 = (__int64)v35;
          if ( v35 )
          {
            v19 = SeCaptureAcl(v35, PreviousMode, v13, v14, 1, (int)HandleInformation, (PVOID *)&v105, &v103);
            v100 = v19;
          }
          else
          {
            v103 = 0;
            v19 = 0;
            v100 = 0;
          }
          if ( v19 < 0 )
            goto LABEL_92;
          v36 = KeGetCurrentThread();
          --v36->KernelApcDisable;
          v37 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v95, 0);
          v38 = Token;
          v39 = v103 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
          v103 = v39;
          if ( v39 <= *((_DWORD *)Token + 34) )
          {
            v100 = SepExpandDynamic((__int64)Token, v39);
            if ( v100 >= 0 )
            {
              v42 = (char *)*((_QWORD *)v38 + 23);
              if ( !v42
                || (v100 = SeCaptureAcl(
                             v42,
                             0,
                             v40,
                             v41,
                             1,
                             (int)HandleInformation,
                             (PVOID *)&v115,
                             (unsigned int *)&v120),
                    v100 >= 0) )
              {
                SepFreeDefaultDacl((__int64)v38);
                v44 = v105;
                if ( v105 )
                  SepAppendDefaultDacl((__int64)v38, (unsigned __int16 *)v105);
                SeTokenDefaultDaclChangedAuditAlarm(v43, (__int64)v38, (__int64)TokenHandle, v115, v44);
                *((_QWORD *)v38 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v95, 0);
                ExReleaseResourceLite(v37[6]);
                KeLeaveCriticalRegion();
                ObfDereferenceObject(Token);
                if ( v105 )
                  SeReleaseAcl((void *)v105, PreviousMode);
                if ( v115 )
                  SeReleaseAcl((void *)v115, 0);
                return 0;
              }
            }
            _InterlockedOr(v95, 0);
            ExReleaseResourceLite(v37[6]);
            KeLeaveCriticalRegion();
            ObfDereferenceObject(Token);
            if ( v105 )
              SeReleaseAcl((void *)v105, PreviousMode);
            return v100;
          }
          else
          {
            _InterlockedOr(v95, 0);
            ExReleaseResourceLite(v37[6]);
            KeLeaveCriticalRegion();
            ObfDereferenceObject(Token);
            if ( v105 )
              SeReleaseAcl((void *)v105, PreviousMode);
            return -1073741671;
          }
        case 12:
          if ( TokenInformationLength == 4 )
          {
            v33 = *(_DWORD *)TokenInformation;
            v119 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_51;
            v34 = SeSetSessionIdToken(v15, v33);
            break;
          }
LABEL_90:
          ObfDereferenceObject(Token);
          return -1073741820;
        default:
          switch ( TokenInformationClass )
          {
            case TokenSessionReference:
              if ( TokenInformationLength != 4 )
                goto LABEL_109;
              v30 = *(_DWORD *)TokenInformation;
              v118 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_51;
              if ( !v30 )
              {
                v31 = KeGetCurrentThread();
                --v31->KernelApcDisable;
                v32 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v95, 0);
                v15 = (PERESOURCE *)Token;
                if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                {
                  if ( SeTokenLeakTracking )
                    SepRemoveTokenLogonSession((__int64)Token);
                  v19 = SepStopReferencingLogonSession((__int64)v15);
                  v100 = v19;
                  if ( v19 < 0 )
                    goto LABEL_92;
                }
                _InterlockedOr(v95, 0);
                v25 = (struct _ERESOURCE *)*((_QWORD *)v32 + 6);
                goto LABEL_47;
              }
              break;
            case TokenAuditPolicy:
              v110 = 0LL;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_51;
              v20 = KeGetCurrentThread();
              --v20->KernelApcDisable;
              v15 = (PERESOURCE *)Token;
              ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
              v21 = *((_BYTE *)v15 + 119);
              ExReleaseResourceLite(v15[6]);
              KeLeaveCriticalRegion();
              if ( !v21 )
              {
                if ( !TokenInformation )
                {
                  v24 = KeGetCurrentThread();
                  --v24->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(v15[6], 1u);
                  _InterlockedOr(v95, 0);
                  *((_BYTE *)v15 + 119) = 1;
                  *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v95, 0);
                  v25 = v15[6];
LABEL_47:
                  ExReleaseResourceLite(v25);
                  KeLeaveCriticalRegion();
                  v15 = (PERESOURCE *)Token;
                  goto LABEL_48;
                }
                v19 = SepCaptureAuditPolicy(
                        (__int64)TokenInformation,
                        PreviousMode,
                        v22,
                        v23,
                        (int)Object,
                        (int)HandleInformation,
                        &v110);
                v100 = v19;
                if ( v19 < 0 )
                  goto LABEL_92;
                v26 = KeGetCurrentThread();
                --v26->KernelApcDisable;
                ExAcquireResourceExclusiveLite(v15[6], 1u);
                _InterlockedOr(v95, 0);
                *((_BYTE *)v15 + 119) = 2;
                v27 = Token;
                v28 = (char *)Token + 88;
                v29 = v110;
                *(_OWORD *)((char *)Token + 88) = *v110;
                *((_QWORD *)v28 + 2) = *((_QWORD *)v29 + 2);
                *((_DWORD *)v28 + 6) = *((_DWORD *)v29 + 6);
                *((_WORD *)v28 + 14) = *((_WORD *)v29 + 14);
                v28[30] = *((_BYTE *)v29 + 30);
                v27[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v95, 0);
                ExReleaseResourceLite(v15[6]);
                KeLeaveCriticalRegion();
                SepModifyTokenPolicyCounter((__int64)v28, 1);
                ObfDereferenceObject(Token);
                SepReleaseAuditPolicy(v110, PreviousMode);
                return 0;
              }
              break;
            case TokenOrigin:
              if ( TokenInformationLength == 8 )
              {
                v124 = *(PSID *)TokenInformation;
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v16 = KeGetCurrentThread();
                  --v16->KernelApcDisable;
                  v17 = (PERESOURCE *)Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v95, 0);
                  v18 = Token;
                  if ( !*((_QWORD *)Token + 28) )
                    *((_QWORD *)Token + 28) = v124;
                  v18[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v95, 0);
                  ExReleaseResourceLite(v17[6]);
                  KeLeaveCriticalRegion();
                  v19 = 0;
LABEL_31:
                  v15 = (PERESOURCE *)Token;
LABEL_92:
                  v45 = v15;
                  goto LABEL_93;
                }
LABEL_51:
                v19 = -1073741727;
                goto LABEL_92;
              }
LABEL_109:
              v19 = -1073741820;
              goto LABEL_92;
            default:
              return -1073741811;
          }
          v19 = -1073741811;
          goto LABEL_92;
      }
LABEL_53:
      v19 = v34;
      goto LABEL_92;
    }
    v54 = TokenInformationClass - 23;
    if ( !v54 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_109;
      v114 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_51;
      v93 = KeGetCurrentThread();
      --v93->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v95, 0);
      v72 = Token;
      v94 = *((_DWORD *)Token + 50);
      if ( v114 )
        v74 = v94 | 0x200;
      else
        v74 = v94 & 0xFFFFFDFF;
      goto LABEL_201;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_109;
      v123 = *(_DWORD *)TokenInformation;
      SeSetVirtualizationToken((__int64)Token, v123);
LABEL_48:
      v19 = 0;
      goto LABEL_92;
    }
    v56 = v55 - 1;
    if ( v56 )
    {
      v57 = v56 - 1;
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v58 )
        {
          v59 = v58 - 12;
          if ( !v59 )
          {
            P = 0LL;
            if ( TokenInformation && TokenInformationLength >= 0x10 )
            {
              v64 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, PreviousMode, &P);
              if ( v64 >= 0 )
              {
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  v64 = -1073741727;
                v100 = v64;
                if ( v64 >= 0 )
                {
                  v65 = P;
                  ShouldSetDelinkFlags = SepShouldSetDelinkFlags(*((_DWORD **)P + 1), *(_QWORD *)P);
                  v67 = KeGetCurrentThread();
                  --v67->KernelApcDisable;
                  v68 = (PERESOURCE *)Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v95, 0);
                  v69 = (int *)*((_QWORD *)v65 + 1);
                  v70 = Token;
                  v100 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v69, *(_QWORD *)P);
                  if ( v100 >= 0 && ShouldSetDelinkFlags )
                    v70[50] |= 0x20000u;
                  *((_QWORD *)v70 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v95, 0);
                  ExReleaseResourceLite(v68[6]);
                  KeLeaveCriticalRegion();
                  SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
                  v19 = v100;
                  goto LABEL_31;
                }
                SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
              }
              v19 = v64;
              goto LABEL_92;
            }
            goto LABEL_109;
          }
          v60 = v59 - 3;
          if ( v60 )
          {
            if ( v60 != 3 )
              return -1073741811;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_51;
            if ( TokenInformationLength != 4 )
              goto LABEL_109;
            HIDWORD(v120) = *(_DWORD *)TokenInformation;
            if ( !HIDWORD(v120) && ((_DWORD)v15[25] & 0x80000) != 0 )
            {
              v61 = KeGetCurrentThread();
              --v61->KernelApcDisable;
              v62 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v95, 0);
              *((_DWORD *)v15 + 50) &= ~0x80000u;
              *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v95, 0);
              ExReleaseResourceLite(v62[6]);
              KeLeaveCriticalRegion();
              v15 = (PERESOURCE *)Token;
            }
            ObfDereferenceObject(v15);
            return 0;
          }
          if ( TokenInformationLength != 4 )
            goto LABEL_109;
          v63 = *(_DWORD *)TokenInformation;
          v121 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_51;
          v34 = SeSetPrivateNameSpaceToken((__int64)v15, v63);
        }
        else
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_109;
          v112 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_51;
          if ( *((_BYTE *)v15 + 204) )
          {
            v19 = -1073741525;
            goto LABEL_92;
          }
          v34 = SeSetMandatoryPolicyToken((__int64)v15, &v112);
        }
        goto LABEL_53;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_109;
      v113 = *(_DWORD *)TokenInformation;
      if ( v113 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_51;
      v71 = KeGetCurrentThread();
      --v71->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v95, 0);
      v72 = Token;
      v73 = *((_DWORD *)Token + 50);
      if ( v113 )
        v74 = v73 | 0x1000;
      else
        v74 = v73 & 0xFFFFEFFF;
LABEL_201:
      v72[50] = v74;
      *((_QWORD *)v72 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v95, 0);
      v15 = (PERESOURCE *)Token;
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      goto LABEL_48;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_109;
    v34 = SeCaptureSidAndAttributesArray(
            (char *)TokenInformation,
            1u,
            PreviousMode,
            0LL,
            0,
            (__int64)HandleInformation,
            v98,
            (PVOID *)&v116,
            &v122);
    v100 = v34;
    if ( v34 < 0 )
      goto LABEL_53;
    v75 = v116;
    v76 = (unsigned __int16 *)*v116;
    v77 = *(_DWORD *)((char *)*v116 + 2) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
    if ( !v77 )
      v77 = v76[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
    if ( v77 )
    {
LABEL_157:
      ObfDereferenceObject(v15);
      SeReleaseLuidAndAttributesArray(v75, PreviousMode);
      return -1073740730;
    }
    v78 = *RtlSubAuthorityCountSid(*v116);
    if ( (_BYTE)v78 )
    {
      v79 = *RtlSubAuthoritySid(v76, v78 - 1);
      if ( v79 > 0x4000 )
        goto LABEL_157;
    }
    else
    {
      v79 = 0;
    }
    v80 = KeGetCurrentThread();
    --v80->KernelApcDisable;
    v111 = Token;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v95, 0);
    v81 = (char *)Token;
    TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
    v117 = TokenIntegrity;
    if ( !TokenIntegrity )
    {
      v19 = -1073740730;
LABEL_193:
      _InterlockedOr(v95, 0);
      ExReleaseResourceLite(*((PERESOURCE *)v111 + 6));
      KeLeaveCriticalRegion();
      ObfDereferenceObject(Token);
      SeReleaseLuidAndAttributesArray(v116, PreviousMode);
      return v19;
    }
    v83 = *TokenIntegrity;
    v84 = *RtlSubAuthorityCountSid(*TokenIntegrity);
    if ( v84 )
      v85 = *RtlSubAuthoritySid(v83, (unsigned int)v84 - 1);
    else
      v85 = 0;
    if ( v79 <= v85 )
    {
      if ( v84 )
        v86 = *RtlSubAuthoritySid(v83, (unsigned int)v84 - 1);
      else
        v86 = 0;
      if ( v79 < v86 )
        *((_DWORD *)v81 + 50) &= ~0x1000u;
    }
    else
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v19 = -1073741727;
        goto LABEL_193;
      }
      if ( v81[204] )
      {
        v19 = -1073741525;
        goto LABEL_193;
      }
    }
    v87 = *((unsigned __int8 *)*v117 + 1);
    if ( (_BYTE)v87 )
    {
      *RtlSubAuthoritySid(*v117, v87 - 1) = v79;
      if ( v79 < 0x3000 )
      {
        *((_QWORD *)v81 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v81 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      v88 = *((_DWORD *)v81 + 50);
      if ( v79 >= 0x2000 )
      {
        if ( (v88 & 0x4000) != 0 )
        {
          SepRemoveAceFromTokenDefaultDacl((__int64)v81, *((void **)v81 + 98));
          *((_DWORD *)v81 + 50) &= ~0x4000u;
          v89 = (void *)*((_QWORD *)v81 + 98);
          if ( v89 )
          {
            ExFreePoolWithTag(v89, 0);
            *((_QWORD *)v81 + 98) = 0LL;
          }
          v90 = (void *)*((_QWORD *)v81 + 99);
          if ( v90 )
          {
            ExFreePoolWithTag(v90, 0);
            *((_QWORD *)v81 + 99) = 0LL;
            *((_DWORD *)v81 + 200) = 0;
            memset_0(v81 + 808, 0, 0x110uLL);
          }
          v91 = *((_QWORD *)v81 + 135);
          if ( v91 )
          {
            SepDereferenceLowBoxNumberEntry(*((_DWORD *)v81 + 30), v91);
            *((_QWORD *)v81 + 135) = 0LL;
          }
          v92 = *((_QWORD *)v81 + 136);
          if ( v92 )
          {
            SepDereferenceCachedHandlesEntryInternal(*((_QWORD *)v81 + 27) + 88LL, 0, v92, 0LL);
            *((_QWORD *)v81 + 136) = 0LL;
          }
        }
        *((_DWORD *)v81 + 50) |= 0x2000u;
      }
      else
      {
        *((_QWORD *)v81 + 9) &= 0x202800000uLL;
        *((_QWORD *)v81 + 10) &= 0x202800000uLL;
        *((_DWORD *)v81 + 50) = v88 & 0xFFFFDFFF;
      }
      *((_QWORD *)v81 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      v19 = 0;
    }
    else
    {
      v19 = -1073741811;
    }
    goto LABEL_193;
  }
  return result;
}
