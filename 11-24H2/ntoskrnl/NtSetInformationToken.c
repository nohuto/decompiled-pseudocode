/*
 * XREFs of NtSetInformationToken @ 0x140AD6C10
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140357454 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x1403658FC (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLocateTokenIntegrity @ 0x14041B160 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x1404600D0 (RtlSubAuthorityCountSid.c)
 *     SepLinkLogonSessions @ 0x1404A1250 (SepLinkLogonSessions.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E4B64 (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_871661881__private_IsEnabledDeviceUsageNoInline @ 0x140608390 (Feature_871661881__private_IsEnabledDeviceUsageNoInline.c)
 *     SepOneWayLinkLogonSessions @ 0x1406083E4 (SepOneWayLinkLogonSessions.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeSetPrivateNameSpaceToken @ 0x14078F838 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14078FA74 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14078FAE0 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14078FB40 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x140791FD0 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x1407924CC (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1407924F0 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x140793A58 (SepRemoveTokenLogonSession.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSid @ 0x140864EF8 (SeCaptureSid.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140887F4C (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1408F2FA8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     RtlQueryElevationFlags @ 0x140911360 (RtlQueryElevationFlags.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140936340 (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140936364 (SeReleaseAcl.c)
 *     SeCaptureSidAndAttributesArray @ 0x140936600 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureAcl @ 0x14099EADC (SeCaptureAcl.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A08D24 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SeReleaseSid @ 0x140A249A0 (SeReleaseSid.c)
 *     SepIdAssignableAsOwner @ 0x140A2D748 (SepIdAssignableAsOwner.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140A3FD9C (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x140A42884 (SepShouldSetDelinkFlags.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A45514 (SepDereferenceLowBoxNumberEntry.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4A5C4 (SeSetMandatoryPolicyToken.c)
 *     SepExpandDynamic @ 0x140A4FCE4 (SepExpandDynamic.c)
 *     SeSetSessionIdToken @ 0x140A50448 (SeSetSessionIdToken.c)
 *     SepAppendDefaultDacl @ 0x140A5D034 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140A5FFB8 (SepFreeDefaultDacl.c)
 *     SepStopReferencingLogonSession @ 0x140A76594 (SepStopReferencingLogonSession.c)
 *     SeSetVirtualizationToken @ 0x140A8A728 (SeSetVirtualizationToken.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v71; // r9
  struct _KTHREAD *v72; // rax
  _DWORD *v73; // rdx
  int v74; // eax
  unsigned int v75; // eax
  PSID *v76; // r12
  unsigned __int16 *v77; // rbx
  int v78; // ecx
  int v79; // ecx
  ULONG v80; // r15d
  struct _KTHREAD *v81; // rax
  char *v82; // rbx
  PVOID *TokenIntegrity; // rax
  PSID *v84; // r13
  UCHAR v85; // r12
  ULONG v86; // eax
  ULONG v87; // eax
  PSID v88; // rsi
  int v89; // ecx
  struct _KTHREAD *v90; // rax
  PACCESS_TOKEN PrimaryToken; // rbx
  void *v92; // rsi
  int v93; // ecx
  ULONG v94; // eax
  struct _ERESOURCE *v95; // rcx
  int v96; // eax
  int v97; // eax
  void *v98; // rcx
  void *v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // r8
  struct _KTHREAD *v102; // rax
  int v103; // eax
  signed __int32 v104[8]; // [rsp+0h] [rbp-138h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-118h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-110h]
  __int64 v107; // [rsp+30h] [rbp-108h]
  PVOID Token; // [rsp+50h] [rbp-E8h] BYREF
  NTSTATUS v109; // [rsp+58h] [rbp-E0h]
  char v110; // [rsp+5Ch] [rbp-DCh]
  KPROCESSOR_MODE v111; // [rsp+5Dh] [rbp-DBh]
  unsigned int v112; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v114; // [rsp+68h] [rbp-D0h] BYREF
  int v115; // [rsp+70h] [rbp-C8h] BYREF
  int v116; // [rsp+74h] [rbp-C4h] BYREF
  __int64 v117; // [rsp+78h] [rbp-C0h] BYREF
  PSID Sid1; // [rsp+80h] [rbp-B8h] BYREF
  PVOID P; // [rsp+88h] [rbp-B0h] BYREF
  PVOID Sid; // [rsp+90h] [rbp-A8h]
  _OWORD *v121; // [rsp+98h] [rbp-A0h] BYREF
  int v122; // [rsp+A0h] [rbp-98h] BYREF
  int v123; // [rsp+A4h] [rbp-94h]
  int v124; // [rsp+A8h] [rbp-90h]
  __int64 v125; // [rsp+B0h] [rbp-88h] BYREF
  PSID *v126; // [rsp+B8h] [rbp-80h] BYREF
  PERESOURCE *v127; // [rsp+C0h] [rbp-78h]
  int v128; // [rsp+C8h] [rbp-70h]
  int v129; // [rsp+CCh] [rbp-6Ch]
  __int64 v130; // [rsp+D0h] [rbp-68h] BYREF
  int v131; // [rsp+D8h] [rbp-60h]
  unsigned int v132; // [rsp+DCh] [rbp-5Ch] BYREF
  int v133; // [rsp+E0h] [rbp-58h]
  PSID v134; // [rsp+E8h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-48h] BYREF
  PSID v136; // [rsp+110h] [rbp-28h]
  PSID v137; // [rsp+118h] [rbp-20h]

  v8 = 0;
  v110 = 0;
  v112 = 0;
  v125 = 0LL;
  v126 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v111 = PreviousMode;
  if ( PreviousMode && TokenInformationLength && ((unsigned __int8)TokenInformation & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned int)TokenInformationClass > TokenChildProcessFlags
    || (v10 = 0x24800F8B5070LL, !_bittest64(&v10, TokenInformationClass)) )
  {
    if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      return -1073741821;
    v115 = 0;
    if ( (int)RtlQueryElevationFlags(&v115) < 0 || (v115 & 0x18) != 0x10 || TokenInformationClass != -2 )
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
  Sid = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenLinkedToken )
    {
      switch ( TokenInformationClass )
      {
        case 19:
          if ( TokenInformationLength != 8 )
            goto LABEL_109;
          v137 = *(PSID *)TokenInformation;
          v34 = SepLinkLogonSessions((__int64)Token, v137, PreviousMode);
          break;
        case -2:
          if ( TokenInformationLength != 8 )
            goto LABEL_109;
          v136 = *(PSID *)TokenInformation;
          v34 = SepOneWayLinkLogonSessions((__int64)Token, v136, PreviousMode);
          break;
        case 4:
          if ( TokenInformationLength < 8 )
            goto LABEL_90;
          Sid1 = *(PSID *)TokenInformation;
          v19 = SeCaptureSid(Sid1, PreviousMode, v13, v14, (int)Object, 1, &Sid1);
          v109 = v19;
          if ( v19 < 0 )
            goto LABEL_92;
          v51 = 0;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v104, 0);
          while ( 1 )
          {
            if ( v51 >= *((_DWORD *)v15 + 31) )
            {
              _InterlockedOr(v104, 0);
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
            v110 = 1;
            v109 = 0;
          }
          else
          {
            v109 = -1073741734;
            v53 = v110;
          }
          if ( v53 )
          {
            v127 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
            v15[7] = (PERESOURCE)v127;
          }
          _InterlockedOr(v104, 0);
          ExReleaseResourceLite(v15[6]);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v15);
          SeReleaseSid(Sid1, PreviousMode, 1);
          return v109;
        case 5:
          if ( TokenInformationLength < 8 )
            goto LABEL_90;
          v117 = *(_QWORD *)TokenInformation;
          v19 = SeCaptureSid((_BYTE *)v117, PreviousMode, v13, v14, (int)Object, 1, (PSID *)&v117);
          v109 = v19;
          v45 = v15;
          if ( v19 < 0 )
          {
LABEL_93:
            ObfDereferenceObject(v45);
            return v19;
          }
          if ( SepIdAssignableAsGroup((__int64)v15, (void *)v117) )
          {
            v46 = 4 * *(unsigned __int8 *)(v117 + 1) + 8;
            v112 = v46;
            v47 = KeGetCurrentThread();
            --v47->KernelApcDisable;
            v48 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v104, 0);
            v49 = Token;
            v50 = *((_QWORD *)Token + 23);
            if ( v50 )
            {
              v46 += *(unsigned __int16 *)(v50 + 2);
              v112 = v46;
            }
            if ( v46 <= *((_DWORD *)Token + 34) )
            {
              v109 = SepExpandDynamic((__int64)Token, v112);
              if ( v109 >= 0 )
              {
                SepFreePrimaryGroup((__int64)v49);
                SepAppendPrimaryGroup((__int64)v49, (unsigned __int8 *)v117);
                v49[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v104, 0);
                ExReleaseResourceLite(v48[6]);
                KeLeaveCriticalRegion();
              }
              else
              {
                _InterlockedOr(v104, 0);
                ExReleaseResourceLite(v48[6]);
                KeLeaveCriticalRegion();
                v8 = v109;
              }
            }
            else
            {
              _InterlockedOr(v104, 0);
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
          SeReleaseSid((void *)v117, PreviousMode, 1);
          return v8;
        case 6:
          if ( TokenInformationLength < 8 )
            goto LABEL_90;
          v35 = *(char **)TokenInformation;
          v114 = (__int64)v35;
          if ( v35 )
          {
            v19 = SeCaptureAcl(v35, PreviousMode, v13, v14, 1, (int)HandleInformation, (PVOID *)&v114, &v112);
            v109 = v19;
          }
          else
          {
            v112 = 0;
            v19 = 0;
            v109 = 0;
          }
          if ( v19 < 0 )
            goto LABEL_92;
          v36 = KeGetCurrentThread();
          --v36->KernelApcDisable;
          v37 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v104, 0);
          v38 = Token;
          v39 = v112 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
          v112 = v39;
          if ( v39 <= *((_DWORD *)Token + 34) )
          {
            v109 = SepExpandDynamic((__int64)Token, v39);
            if ( v109 >= 0 )
            {
              v42 = (char *)*((_QWORD *)v38 + 23);
              if ( !v42
                || (v109 = SeCaptureAcl(
                             v42,
                             0,
                             v40,
                             v41,
                             1,
                             (int)HandleInformation,
                             (PVOID *)&v125,
                             (unsigned int *)&v130),
                    v109 >= 0) )
              {
                SepFreeDefaultDacl((__int64)v38);
                v44 = v114;
                if ( v114 )
                  SepAppendDefaultDacl((__int64)v38, (unsigned __int16 *)v114);
                SeTokenDefaultDaclChangedAuditAlarm(v43, (__int64)v38, (__int64)TokenHandle, v125, v44);
                *((_QWORD *)v38 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v104, 0);
                ExReleaseResourceLite(v37[6]);
                KeLeaveCriticalRegion();
                ObfDereferenceObject(Token);
                if ( v114 )
                  SeReleaseAcl((void *)v114, PreviousMode);
                if ( v125 )
                  SeReleaseAcl((void *)v125, 0);
                return 0;
              }
            }
            _InterlockedOr(v104, 0);
            ExReleaseResourceLite(v37[6]);
            KeLeaveCriticalRegion();
            ObfDereferenceObject(Token);
            if ( v114 )
              SeReleaseAcl((void *)v114, PreviousMode);
            return v109;
          }
          else
          {
            _InterlockedOr(v104, 0);
            ExReleaseResourceLite(v37[6]);
            KeLeaveCriticalRegion();
            ObfDereferenceObject(Token);
            if ( v114 )
              SeReleaseAcl((void *)v114, PreviousMode);
            return -1073741671;
          }
        case 12:
          if ( TokenInformationLength == 4 )
          {
            v33 = *(_DWORD *)TokenInformation;
            v129 = *(_DWORD *)TokenInformation;
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
              v128 = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_51;
              if ( !v30 )
              {
                v31 = KeGetCurrentThread();
                --v31->KernelApcDisable;
                v32 = Token;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                _InterlockedOr(v104, 0);
                v15 = (PERESOURCE *)Token;
                if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                {
                  if ( SeTokenLeakTracking )
                    SepRemoveTokenLogonSession((__int64)Token);
                  v19 = SepStopReferencingLogonSession((__int64)v15);
                  v109 = v19;
                  if ( v19 < 0 )
                    goto LABEL_92;
                }
                _InterlockedOr(v104, 0);
                v25 = (struct _ERESOURCE *)*((_QWORD *)v32 + 6);
                goto LABEL_47;
              }
              break;
            case TokenAuditPolicy:
              v121 = 0LL;
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
                  _InterlockedOr(v104, 0);
                  *((_BYTE *)v15 + 119) = 1;
                  *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v104, 0);
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
                        &v121);
                v109 = v19;
                if ( v19 < 0 )
                  goto LABEL_92;
                v26 = KeGetCurrentThread();
                --v26->KernelApcDisable;
                ExAcquireResourceExclusiveLite(v15[6], 1u);
                _InterlockedOr(v104, 0);
                *((_BYTE *)v15 + 119) = 2;
                v27 = Token;
                v28 = (char *)Token + 88;
                v29 = v121;
                *(_OWORD *)((char *)Token + 88) = *v121;
                *((_QWORD *)v28 + 2) = *((_QWORD *)v29 + 2);
                *((_DWORD *)v28 + 6) = *((_DWORD *)v29 + 6);
                *((_WORD *)v28 + 14) = *((_WORD *)v29 + 14);
                v28[30] = *((_BYTE *)v29 + 30);
                v27[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v104, 0);
                ExReleaseResourceLite(v15[6]);
                KeLeaveCriticalRegion();
                SepModifyTokenPolicyCounter((__int64)v28, 1);
                ObfDereferenceObject(Token);
                SepReleaseAuditPolicy(v121, PreviousMode);
                return 0;
              }
              break;
            case TokenOrigin:
              if ( TokenInformationLength == 8 )
              {
                v134 = *(PSID *)TokenInformation;
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v16 = KeGetCurrentThread();
                  --v16->KernelApcDisable;
                  v17 = (PERESOURCE *)Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v104, 0);
                  v18 = Token;
                  if ( !*((_QWORD *)Token + 28) )
                    *((_QWORD *)Token + 28) = v134;
                  v18[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v104, 0);
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
      v124 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_51;
      v102 = KeGetCurrentThread();
      --v102->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v104, 0);
      v73 = Token;
      v103 = *((_DWORD *)Token + 50);
      if ( v124 )
        v75 = v103 | 0x200;
      else
        v75 = v103 & 0xFFFFFDFF;
      goto LABEL_211;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_109;
      v133 = *(_DWORD *)TokenInformation;
      SeSetVirtualizationToken((__int64)Token, v133);
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
                v109 = v64;
                if ( v64 >= 0 )
                {
                  v65 = P;
                  ShouldSetDelinkFlags = SepShouldSetDelinkFlags(*((_DWORD **)P + 1), *(_QWORD *)P);
                  v67 = KeGetCurrentThread();
                  --v67->KernelApcDisable;
                  v68 = (PERESOURCE *)Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v104, 0);
                  v69 = (int *)*((_QWORD *)v65 + 1);
                  v70 = Token;
                  v109 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v69, *(_QWORD *)P, v71);
                  if ( v109 >= 0 && ShouldSetDelinkFlags )
                    v70[50] |= 0x20000u;
                  *((_QWORD *)v70 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v104, 0);
                  ExReleaseResourceLite(v68[6]);
                  KeLeaveCriticalRegion();
                  SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
                  v19 = v109;
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
            HIDWORD(v130) = *(_DWORD *)TokenInformation;
            if ( !HIDWORD(v130) && ((_DWORD)v15[25] & 0x80000) != 0 )
            {
              v61 = KeGetCurrentThread();
              --v61->KernelApcDisable;
              v62 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v104, 0);
              *((_DWORD *)v15 + 50) &= ~0x80000u;
              *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v104, 0);
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
          v131 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_51;
          v34 = SeSetPrivateNameSpaceToken((__int64)v15, v63);
        }
        else
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_109;
          v122 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_51;
          if ( *((_BYTE *)v15 + 204) )
          {
            v19 = -1073741525;
            goto LABEL_92;
          }
          v34 = SeSetMandatoryPolicyToken((__int64)v15, &v122);
        }
        goto LABEL_53;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_109;
      v123 = *(_DWORD *)TokenInformation;
      if ( v123 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_51;
      v72 = KeGetCurrentThread();
      --v72->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v104, 0);
      v73 = Token;
      v74 = *((_DWORD *)Token + 50);
      if ( v123 )
        v75 = v74 | 0x1000;
      else
        v75 = v74 & 0xFFFFEFFF;
LABEL_211:
      v73[50] = v75;
      *((_QWORD *)v73 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v104, 0);
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
            v107,
            (PVOID *)&v126,
            &v132);
    v109 = v34;
    if ( v34 < 0 )
      goto LABEL_53;
    v76 = v126;
    v77 = (unsigned __int16 *)*v126;
    v78 = *(_DWORD *)((char *)*v126 + 2) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
    if ( !v78 )
      v78 = v77[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
    if ( v78 )
    {
LABEL_157:
      ObfDereferenceObject(v15);
      SeReleaseLuidAndAttributesArray(v76, PreviousMode);
      return -1073740730;
    }
    v79 = *RtlSubAuthorityCountSid(*v126);
    if ( (_BYTE)v79 )
    {
      v80 = *RtlSubAuthoritySid(v77, v79 - 1);
      if ( v80 > 0x4000 )
        goto LABEL_157;
    }
    else
    {
      v80 = 0;
    }
    v81 = KeGetCurrentThread();
    --v81->KernelApcDisable;
    v127 = (PERESOURCE *)Token;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v104, 0);
    v82 = (char *)Token;
    TokenIntegrity = (PVOID *)SepLocateTokenIntegrity((__int64)Token);
    v84 = TokenIntegrity;
    if ( !TokenIntegrity )
    {
      v19 = -1073740730;
LABEL_203:
      _InterlockedOr(v104, 0);
      ExReleaseResourceLite(v127[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(Token);
      SeReleaseLuidAndAttributesArray(v126, PreviousMode);
      return v19;
    }
    Sid = *TokenIntegrity;
    v85 = *RtlSubAuthorityCountSid(Sid);
    if ( v85 )
      v86 = *RtlSubAuthoritySid(Sid, (unsigned int)v85 - 1);
    else
      v86 = 0;
    if ( v80 <= v86 )
    {
      if ( v85 )
        v87 = *RtlSubAuthoritySid(Sid, (unsigned int)v85 - 1);
      else
        v87 = 0;
      if ( v80 < v87 )
      {
        if ( (unsigned int)Feature_871661881__private_IsEnabledDeviceUsageNoInline() )
        {
          v116 = 0;
          RtlQueryElevationFlags(&v116);
          if ( (v116 & 0x18) == 0x10 )
          {
            v88 = *v84;
            v89 = *RtlSubAuthorityCountSid(*v84);
            if ( (_BYTE)v89 )
            {
              if ( *RtlSubAuthoritySid(v88, v89 - 1) >= 0x3000 )
              {
                memset(&SubjectContext, 0, sizeof(SubjectContext));
                SeCaptureSubjectContext(&SubjectContext);
                v90 = KeGetCurrentThread();
                --v90->KernelApcDisable;
                PrimaryToken = SubjectContext.PrimaryToken;
                ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                v92 = *(void **)SepLocateTokenIntegrity((__int64)PrimaryToken);
                v93 = *RtlSubAuthorityCountSid(v92);
                if ( (_BYTE)v93 )
                  v94 = *RtlSubAuthoritySid(v92, v93 - 1);
                else
                  v94 = 0;
                v95 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
                if ( v94 < 0x3000 )
                {
                  ExReleaseResourceLite(v95);
                  KeLeaveCriticalRegion();
                  SeReleaseSubjectContext(&SubjectContext);
                  v19 = -1073741790;
                  goto LABEL_203;
                }
                ExReleaseResourceLite(v95);
                KeLeaveCriticalRegion();
                SeReleaseSubjectContext(&SubjectContext);
                v82 = (char *)Token;
              }
            }
          }
        }
        *((_DWORD *)v82 + 50) &= ~0x1000u;
      }
    }
    else
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v19 = -1073741727;
        goto LABEL_203;
      }
      if ( v82[204] )
      {
        v19 = -1073741525;
        goto LABEL_203;
      }
    }
    v96 = *((unsigned __int8 *)*v84 + 1);
    if ( (_BYTE)v96 )
    {
      *RtlSubAuthoritySid(*v84, v96 - 1) = v80;
      if ( v80 < 0x3000 )
      {
        *((_QWORD *)v82 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v82 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      v97 = *((_DWORD *)v82 + 50);
      if ( v80 >= 0x2000 )
      {
        if ( (v97 & 0x4000) != 0 )
        {
          SepRemoveAceFromTokenDefaultDacl((__int64)v82, *((void **)v82 + 98));
          *((_DWORD *)v82 + 50) &= ~0x4000u;
          v98 = (void *)*((_QWORD *)v82 + 98);
          if ( v98 )
          {
            ExFreePoolWithTag(v98, 0);
            *((_QWORD *)v82 + 98) = 0LL;
          }
          v99 = (void *)*((_QWORD *)v82 + 99);
          if ( v99 )
          {
            ExFreePoolWithTag(v99, 0);
            *((_QWORD *)v82 + 99) = 0LL;
            *((_DWORD *)v82 + 200) = 0;
            memset_0(v82 + 808, 0, 0x110uLL);
          }
          v100 = *((_QWORD *)v82 + 135);
          if ( v100 )
          {
            SepDereferenceLowBoxNumberEntry(*((_DWORD *)v82 + 30), v100);
            *((_QWORD *)v82 + 135) = 0LL;
          }
          v101 = *((_QWORD *)v82 + 136);
          if ( v101 )
          {
            SepDereferenceCachedHandlesEntryInternal(*((_QWORD *)v82 + 27) + 96LL, 0, v101, 0LL);
            *((_QWORD *)v82 + 136) = 0LL;
          }
        }
        *((_DWORD *)v82 + 50) |= 0x2000u;
      }
      else
      {
        *((_QWORD *)v82 + 9) &= 0x202800000uLL;
        *((_QWORD *)v82 + 10) &= 0x202800000uLL;
        *((_DWORD *)v82 + 50) = v97 & 0xFFFFDFFF;
      }
      *((_QWORD *)v82 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      v19 = 0;
    }
    else
    {
      v19 = -1073741811;
    }
    goto LABEL_203;
  }
  return result;
}
