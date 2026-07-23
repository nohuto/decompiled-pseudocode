/*
 * XREFs of NtSetInformationToken @ 0x140AD4280
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x1403E9B40 (SepRemoveAceFromTokenDefaultDacl.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x14040ECA0 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     SepLinkLogonSessions @ 0x14049BAB0 (SepLinkLogonSessions.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x140605A40 (Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_871661881__private_IsEnabledDeviceUsageNoInline @ 0x140605A94 (Feature_871661881__private_IsEnabledDeviceUsageNoInline.c)
 *     SepOneWayLinkLogonSessions @ 0x140605AE8 (SepOneWayLinkLogonSessions.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlReadULongFromUser @ 0x1406FA0A8 (RtlReadULongFromUser.c)
 *     SeSetPrivateNameSpaceToken @ 0x14078F808 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14078FA44 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14078FAB0 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14078FB10 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x140791FA0 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x14079249C (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1407924C0 (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x140793AF8 (SepRemoveTokenLogonSession.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14086395C (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeCaptureSid @ 0x140869508 (SeCaptureSid.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14088BDFC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlQueryElevationFlags @ 0x1408E8AB0 (RtlQueryElevationFlags.c)
 *     SeCaptureAcl @ 0x1409837A4 (SeCaptureAcl.c)
 *     SeCaptureSidAndAttributesArray @ 0x140985730 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x140985BDC (SeReleaseAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140985BF8 (SeReleaseLuidAndAttributesArray.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A05254 (SepDereferenceCachedHandlesEntryInternal.c)
 *     SeReleaseSid @ 0x140A18990 (SeReleaseSid.c)
 *     SepIdAssignableAsOwner @ 0x140A22188 (SepIdAssignableAsOwner.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140A35670 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x140A380C4 (SepShouldSetDelinkFlags.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A3B0C0 (SepDereferenceLowBoxNumberEntry.c)
 *     SeSetMandatoryPolicyToken @ 0x140A412E4 (SeSetMandatoryPolicyToken.c)
 *     SepExpandDynamic @ 0x140A46A94 (SepExpandDynamic.c)
 *     SeSetSessionIdToken @ 0x140A471F8 (SeSetSessionIdToken.c)
 *     SepAppendDefaultDacl @ 0x140A54D64 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140A58508 (SepFreeDefaultDacl.c)
 *     SepStopReferencingLogonSession @ 0x140A706B4 (SepStopReferencingLogonSession.c)
 *     SeSetVirtualizationToken @ 0x140A86A68 (SeSetVirtualizationToken.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  char PreviousMode; // r14
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  PERESOURCE *v15; // rsi
  NTSTATUS v16; // ebx
  int v17; // eax
  struct _KTHREAD *v18; // rax
  PVOID v19; // rbx
  _QWORD *v20; // rdx
  struct _ERESOURCE *v21; // rcx
  struct _KTHREAD *v22; // rax
  char v23; // bl
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rax
  struct _ERESOURCE *v27; // rcx
  struct _KTHREAD *v28; // rax
  _QWORD *v29; // r8
  char *v30; // rbx
  _OWORD *v31; // rcx
  int v32; // ebx
  struct _KTHREAD *v33; // rax
  PVOID v34; // r14
  ULONG v35; // ebx
  char *v36; // rcx
  struct _KTHREAD *v37; // rax
  PERESOURCE *v38; // rsi
  PVOID v39; // rbx
  unsigned int v40; // edx
  __int64 v41; // r8
  __int64 v42; // r9
  char *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r15
  PERESOURCE *v46; // rcx
  unsigned int v47; // esi
  struct _KTHREAD *v48; // rax
  PERESOURCE *v49; // r15
  _QWORD *v50; // rbx
  __int64 v51; // rax
  unsigned int v52; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v54; // al
  struct _KTHREAD *v55; // rax
  _QWORD *v56; // rdx
  int v57; // eax
  unsigned int v58; // eax
  __int32 v59; // ebx
  __int32 v60; // ebx
  __int32 v61; // ebx
  __int32 v62; // ebx
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  int v66; // ebx
  int v67; // ecx
  int v68; // eax
  unsigned int v69; // eax
  struct _KTHREAD *v70; // rax
  PVOID v71; // rbx
  int v72; // ebx
  int v73; // r15d
  PVOID v74; // rbx
  char ShouldSetDelinkFlags; // r15
  struct _KTHREAD *v76; // rcx
  PERESOURCE *v77; // rsi
  int *v78; // rdx
  _DWORD *v79; // rbx
  __int64 v80; // r9
  int ULongFromUser; // eax
  struct _KTHREAD *v82; // rax
  PVOID v83; // r14
  char *v84; // rbx
  void *v85; // rcx
  void *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // r8
  struct _KTHREAD *v89; // rax
  _QWORD *v90; // rdx
  int v91; // eax
  unsigned int v92; // eax
  bool v93; // r13
  PSID *v94; // r12
  unsigned __int16 *v95; // rbx
  int v96; // ecx
  int v97; // ecx
  ULONG v98; // r15d
  struct _KTHREAD *v99; // rax
  char *v100; // rbx
  PSID *TokenIntegrity; // rax
  PSID *v102; // r12
  int v103; // eax
  int v104; // esi
  ULONG v105; // ecx
  ULONG v106; // eax
  PSID v107; // rsi
  int v108; // ecx
  struct _KTHREAD *v109; // rax
  PACCESS_TOKEN PrimaryToken; // rbx
  void *v111; // rsi
  int v112; // ecx
  ULONG v113; // eax
  struct _ERESOURCE *v114; // rcx
  PSID v115; // rsi
  int v116; // ecx
  ULONG v117; // eax
  int v118; // r13d
  int v119; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v121; // ecx
  void *v122; // rcx
  void *v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // r8
  PSID v126; // rsi
  int v127; // ecx
  void *v128; // rcx
  void *v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // r8
  signed __int32 v132[8]; // [rsp+0h] [rbp-168h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-148h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-140h]
  __int64 v135; // [rsp+30h] [rbp-138h]
  PVOID Token; // [rsp+50h] [rbp-118h] BYREF
  NTSTATUS v137; // [rsp+58h] [rbp-110h]
  char v138; // [rsp+5Ch] [rbp-10Ch]
  char v139; // [rsp+5Dh] [rbp-10Bh]
  unsigned int v140; // [rsp+60h] [rbp-108h] BYREF
  __int64 v142; // [rsp+68h] [rbp-100h] BYREF
  _RTL_ELEVATION_FLAGS Flags; // [rsp+70h] [rbp-F8h] BYREF
  _RTL_ELEVATION_FLAGS v144; // [rsp+74h] [rbp-F4h] BYREF
  __int64 v145; // [rsp+78h] [rbp-F0h] BYREF
  PSID Sid1; // [rsp+80h] [rbp-E8h] BYREF
  PVOID P; // [rsp+88h] [rbp-E0h] BYREF
  PVOID v148; // [rsp+90h] [rbp-D8h]
  _OWORD *v149; // [rsp+98h] [rbp-D0h] BYREF
  PSID Sid; // [rsp+A0h] [rbp-C8h]
  int v151; // [rsp+A8h] [rbp-C0h]
  int v152; // [rsp+ACh] [rbp-BCh]
  int v153; // [rsp+B0h] [rbp-B8h]
  int v154; // [rsp+B4h] [rbp-B4h] BYREF
  int v155; // [rsp+B8h] [rbp-B0h]
  __int64 v156; // [rsp+C0h] [rbp-A8h] BYREF
  PSID *v157; // [rsp+C8h] [rbp-A0h] BYREF
  __int64 v158; // [rsp+D0h] [rbp-98h] BYREF
  int v159; // [rsp+D8h] [rbp-90h]
  unsigned int v160; // [rsp+DCh] [rbp-8Ch] BYREF
  int v161; // [rsp+E0h] [rbp-88h]
  int v162; // [rsp+E4h] [rbp-84h]
  int v163; // [rsp+E8h] [rbp-80h]
  PSID v164; // [rsp+F0h] [rbp-78h]
  PERESOURCE *v165; // [rsp+F8h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT v166; // [rsp+100h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-48h] BYREF
  PSID v168; // [rsp+140h] [rbp-28h]
  PSID v169; // [rsp+148h] [rbp-20h]

  v8 = 0;
  v138 = 0;
  v140 = 0;
  v156 = 0LL;
  v157 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v139 = PreviousMode;
  if ( PreviousMode && TokenInformationLength && ((unsigned __int8)TokenInformation & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned int)TokenInformationClass > (TokenIsAppSilo|TokenOwner)
    || (v10 = 0x1024802F8B5070LL, !_bittest64(&v10, TokenInformationClass)) )
  {
    if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      return -1073741821;
    Flags.Flags = 0;
    if ( RtlQueryElevationFlags(&Flags) < 0 || (Flags.Flags & 0x18) != 0x10 || TokenInformationClass != -2 )
      return -1073741821;
  }
  if ( !(unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline()
    && TokenInformationClass == (TokenIsAppSilo|TokenOwner) )
  {
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
  v148 = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenVirtualizationAllowed )
    {
      if ( TokenInformationClass != TokenVirtualizationAllowed )
      {
        switch ( TokenInformationClass )
        {
          case -2:
            if ( TokenInformationLength != 8 )
              goto LABEL_30;
            v169 = *(PSID *)TokenInformation;
            v17 = SepOneWayLinkLogonSessions((__int64)Token, v169, PreviousMode);
            goto LABEL_60;
          case 4:
            if ( TokenInformationLength < 8 )
              goto LABEL_97;
            Sid1 = *(PSID *)TokenInformation;
            v16 = SeCaptureSid(Sid1, PreviousMode, v13, v14, (int)Object, 1, &Sid1);
            v137 = v16;
            if ( v16 < 0 )
              goto LABEL_99;
            v52 = 0;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v132, 0);
            while ( 1 )
            {
              if ( v52 >= *((_DWORD *)v15 + 31) )
              {
                _InterlockedOr(v132, 0);
                ExReleaseResourceLite(v15[6]);
                KeLeaveCriticalRegion();
                ObfDereferenceObject(v15);
                SeReleaseSid(Sid1, PreviousMode, 1);
                return -1073741734;
              }
              if ( RtlEqualSid(Sid1, (&v15[19]->SystemResourcesList.Flink)[2 * v52]) )
                break;
              ++v52;
            }
            if ( SepIdAssignableAsOwner((__int64)v15, v52) )
            {
              *((_DWORD *)v15 + 36) = v52;
              v54 = 1;
              v138 = 1;
              v137 = 0;
            }
            else
            {
              v137 = -1073741734;
              v54 = v138;
            }
            if ( v54 )
            {
              Sid = (PSID)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
              v15[7] = (PERESOURCE)Sid;
            }
            _InterlockedOr(v132, 0);
            ExReleaseResourceLite(v15[6]);
            KeLeaveCriticalRegion();
            ObfDereferenceObject(v15);
            SeReleaseSid(Sid1, PreviousMode, 1);
            return v137;
          case 5:
            if ( TokenInformationLength < 8 )
              goto LABEL_97;
            v145 = *(_QWORD *)TokenInformation;
            v16 = SeCaptureSid((_BYTE *)v145, PreviousMode, v13, v14, (int)Object, 1, (PSID *)&v145);
            v137 = v16;
            v46 = v15;
            if ( v16 < 0 )
            {
LABEL_100:
              ObfDereferenceObject(v46);
              return v16;
            }
            if ( SepIdAssignableAsGroup((__int64)v15, (void *)v145) )
            {
              v47 = 4 * *(unsigned __int8 *)(v145 + 1) + 8;
              v140 = v47;
              v48 = KeGetCurrentThread();
              --v48->KernelApcDisable;
              v49 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v132, 0);
              v50 = Token;
              v51 = *((_QWORD *)Token + 23);
              if ( v51 )
              {
                v47 += *(unsigned __int16 *)(v51 + 2);
                v140 = v47;
              }
              if ( v47 <= *((_DWORD *)Token + 34) )
              {
                v137 = SepExpandDynamic((__int64)Token, v140);
                if ( v137 >= 0 )
                {
                  SepFreePrimaryGroup((__int64)v50);
                  SepAppendPrimaryGroup((__int64)v50, (unsigned __int8 *)v145);
                  v50[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v132, 0);
                  ExReleaseResourceLite(v49[6]);
                  KeLeaveCriticalRegion();
                }
                else
                {
                  _InterlockedOr(v132, 0);
                  ExReleaseResourceLite(v49[6]);
                  KeLeaveCriticalRegion();
                  v8 = v137;
                }
              }
              else
              {
                _InterlockedOr(v132, 0);
                ExReleaseResourceLite(v49[6]);
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
            SeReleaseSid((void *)v145, PreviousMode, 1);
            return v8;
          case 6:
            if ( TokenInformationLength < 8 )
              goto LABEL_97;
            v36 = *(char **)TokenInformation;
            v142 = (__int64)v36;
            if ( v36 )
            {
              v16 = SeCaptureAcl(v36, PreviousMode, v13, v14, 1, (int)HandleInformation, (PVOID *)&v142, &v140);
              v137 = v16;
            }
            else
            {
              v140 = 0;
              v16 = 0;
              v137 = 0;
            }
            if ( v16 < 0 )
              goto LABEL_99;
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            v38 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v132, 0);
            v39 = Token;
            v40 = v140 + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
            v140 = v40;
            if ( v40 <= *((_DWORD *)Token + 34) )
            {
              v137 = SepExpandDynamic((__int64)Token, v40);
              if ( v137 >= 0 )
              {
                v43 = (char *)*((_QWORD *)v39 + 23);
                if ( !v43
                  || (v137 = SeCaptureAcl(
                               v43,
                               0,
                               v41,
                               v42,
                               1,
                               (int)HandleInformation,
                               (PVOID *)&v156,
                               (unsigned int *)&v158),
                      v137 >= 0) )
                {
                  SepFreeDefaultDacl((__int64)v39);
                  v45 = v142;
                  if ( v142 )
                    SepAppendDefaultDacl((__int64)v39, (unsigned __int16 *)v142);
                  SeTokenDefaultDaclChangedAuditAlarm(v44, (__int64)v39, (__int64)TokenHandle, v156, v45);
                  *((_QWORD *)v39 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v132, 0);
                  ExReleaseResourceLite(v38[6]);
                  KeLeaveCriticalRegion();
                  ObfDereferenceObject(Token);
                  if ( v142 )
                    SeReleaseAcl((void *)v142, PreviousMode);
                  if ( v156 )
                    SeReleaseAcl((void *)v156, 0);
                  return 0;
                }
              }
              _InterlockedOr(v132, 0);
              ExReleaseResourceLite(v38[6]);
              KeLeaveCriticalRegion();
              ObfDereferenceObject(Token);
              if ( v142 )
                SeReleaseAcl((void *)v142, PreviousMode);
              return v137;
            }
            else
            {
              _InterlockedOr(v132, 0);
              ExReleaseResourceLite(v38[6]);
              KeLeaveCriticalRegion();
              ObfDereferenceObject(Token);
              if ( v142 )
                SeReleaseAcl((void *)v142, PreviousMode);
              return -1073741671;
            }
          case 12:
            if ( TokenInformationLength == 4 )
            {
              v35 = *(_DWORD *)TokenInformation;
              v163 = *(_DWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                v17 = SeSetSessionIdToken(v15, v35);
                goto LABEL_60;
              }
              goto LABEL_58;
            }
LABEL_97:
            ObfDereferenceObject(Token);
            return -1073741820;
          default:
            switch ( TokenInformationClass )
            {
              case TokenSessionReference:
                if ( TokenInformationLength != 4 )
                  goto LABEL_30;
                v32 = *(_DWORD *)TokenInformation;
                v162 = *(_DWORD *)TokenInformation;
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  goto LABEL_58;
                if ( !v32 )
                {
                  v33 = KeGetCurrentThread();
                  --v33->KernelApcDisable;
                  v34 = Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v132, 0);
                  v15 = (PERESOURCE *)Token;
                  if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                  {
                    if ( SeTokenLeakTracking )
                      SepRemoveTokenLogonSession((__int64)Token);
                    v16 = SepStopReferencingLogonSession((__int64)v15);
                    v137 = v16;
                    if ( v16 < 0 )
                      goto LABEL_99;
                  }
                  _InterlockedOr(v132, 0);
                  v27 = (struct _ERESOURCE *)*((_QWORD *)v34 + 6);
                  goto LABEL_54;
                }
                break;
              case TokenAuditPolicy:
                v149 = 0LL;
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  goto LABEL_58;
                v22 = KeGetCurrentThread();
                --v22->KernelApcDisable;
                v15 = (PERESOURCE *)Token;
                ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
                v23 = *((_BYTE *)v15 + 119);
                ExReleaseResourceLite(v15[6]);
                KeLeaveCriticalRegion();
                if ( !v23 )
                {
                  if ( !TokenInformation )
                  {
                    v26 = KeGetCurrentThread();
                    --v26->KernelApcDisable;
                    ExAcquireResourceExclusiveLite(v15[6], 1u);
                    _InterlockedOr(v132, 0);
                    *((_BYTE *)v15 + 119) = 1;
                    *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                    _InterlockedOr(v132, 0);
                    v27 = v15[6];
LABEL_54:
                    ExReleaseResourceLite(v27);
                    KeLeaveCriticalRegion();
                    v15 = (PERESOURCE *)Token;
                    goto LABEL_55;
                  }
                  v16 = SepCaptureAuditPolicy(
                          (__int64)TokenInformation,
                          PreviousMode,
                          v24,
                          v25,
                          (int)Object,
                          (int)HandleInformation,
                          &v149);
                  v137 = v16;
                  if ( v16 < 0 )
                    goto LABEL_99;
                  v28 = KeGetCurrentThread();
                  --v28->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(v15[6], 1u);
                  _InterlockedOr(v132, 0);
                  *((_BYTE *)v15 + 119) = 2;
                  v29 = Token;
                  v30 = (char *)Token + 88;
                  v31 = v149;
                  *(_OWORD *)((char *)Token + 88) = *v149;
                  *((_QWORD *)v30 + 2) = *((_QWORD *)v31 + 2);
                  *((_DWORD *)v30 + 6) = *((_DWORD *)v31 + 6);
                  *((_WORD *)v30 + 14) = *((_WORD *)v31 + 14);
                  v30[30] = *((_BYTE *)v31 + 30);
                  v29[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v132, 0);
                  ExReleaseResourceLite(v15[6]);
                  KeLeaveCriticalRegion();
                  SepModifyTokenPolicyCounter((__int64)v30, 1);
                  ObfDereferenceObject(Token);
                  SepReleaseAuditPolicy(v149, PreviousMode);
                  return 0;
                }
                break;
              case TokenOrigin:
                if ( TokenInformationLength != 8 )
                  goto LABEL_30;
                v164 = *(PSID *)TokenInformation;
                if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                {
                  v18 = KeGetCurrentThread();
                  --v18->KernelApcDisable;
                  v19 = Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v132, 0);
                  v20 = Token;
                  if ( !*((_QWORD *)Token + 28) )
                    *((_QWORD *)Token + 28) = v164;
                  v20[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v132, 0);
                  v21 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
LABEL_37:
                  ExReleaseResourceLite(v21);
                  KeLeaveCriticalRegion();
                  v16 = 0;
LABEL_38:
                  v15 = (PERESOURCE *)Token;
                  goto LABEL_99;
                }
                goto LABEL_58;
              case TokenLinkedToken:
                if ( TokenInformationLength != 8 )
                {
LABEL_30:
                  v16 = -1073741820;
LABEL_99:
                  v46 = v15;
                  goto LABEL_100;
                }
                v168 = *(PSID *)TokenInformation;
                v17 = SepLinkLogonSessions((__int64)Token, v168, PreviousMode);
LABEL_60:
                v16 = v17;
                goto LABEL_99;
              default:
                return -1073741811;
            }
            v16 = -1073741811;
            goto LABEL_99;
        }
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_30;
      v151 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_58;
      v55 = KeGetCurrentThread();
      --v55->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v132, 0);
      v56 = Token;
      v57 = *((_DWORD *)Token + 50);
      if ( v151 )
        v58 = v57 | 0x200;
      else
        v58 = v57 & 0xFFFFFDFF;
      *((_DWORD *)Token + 50) = v58;
      v56[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v132, 0);
      v15 = (PERESOURCE *)Token;
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
LABEL_121:
      v16 = 0;
      goto LABEL_99;
    }
    v59 = TokenInformationClass - 24;
    if ( !v59 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_30;
      v161 = *(_DWORD *)TokenInformation;
      SeSetVirtualizationToken((__int64)Token, v161);
      goto LABEL_55;
    }
    v60 = v59 - 1;
    if ( v60 )
    {
      v61 = v60 - 1;
      if ( v61 )
      {
        v62 = v61 - 1;
        if ( !v62 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_30;
          v154 = *(_DWORD *)TokenInformation;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            if ( *((_BYTE *)v15 + 204) )
            {
              v16 = -1073741525;
              goto LABEL_99;
            }
            v17 = SeSetMandatoryPolicyToken((__int64)v15, &v154);
            goto LABEL_60;
          }
          goto LABEL_58;
        }
        v63 = v62 - 2;
        if ( !v63 )
        {
          if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( TokenInformationLength != 4 )
              goto LABEL_30;
            if ( PreviousMode )
            {
              ULongFromUser = RtlReadULongFromUser((unsigned int *)TokenInformation);
              v153 = ULongFromUser;
            }
            else
            {
              ULongFromUser = *(_DWORD *)TokenInformation;
              v153 = *(_DWORD *)TokenInformation;
              v15 = (PERESOURCE *)Token;
            }
            if ( ULongFromUser )
            {
              v16 = -1073741637;
              goto LABEL_99;
            }
            if ( ((_DWORD)v15[25] & 0x4000) == 0 )
            {
              v16 = -1073700352;
              goto LABEL_99;
            }
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              v82 = KeGetCurrentThread();
              --v82->KernelApcDisable;
              v83 = Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v132, 0);
              v84 = (char *)Token;
              SepRemoveAceFromTokenDefaultDacl((__int64)Token, *((void **)Token + 98));
              *((_DWORD *)v15 + 50) &= ~0x4000u;
              v85 = (void *)*((_QWORD *)v84 + 98);
              if ( v85 )
              {
                ExFreePoolWithTag(v85, 0);
                *((_QWORD *)v84 + 98) = 0LL;
              }
              v86 = (void *)*((_QWORD *)v84 + 99);
              if ( v86 )
              {
                ExFreePoolWithTag(v86, 0);
                *((_QWORD *)v84 + 99) = 0LL;
                *((_DWORD *)v84 + 200) = 0;
                memset_0(v84 + 808, 0, 0x110uLL);
              }
              v87 = *((_QWORD *)v84 + 135);
              if ( v87 )
              {
                SepDereferenceLowBoxNumberEntry(*((_DWORD *)v84 + 30), v87);
                *((_QWORD *)v84 + 135) = 0LL;
              }
              v88 = *((_QWORD *)v84 + 136);
              if ( v88 )
              {
                SepDereferenceCachedHandlesEntryInternal(*((_QWORD *)v84 + 27) + 96LL, 0, v88, 0LL);
                *((_QWORD *)v84 + 136) = 0LL;
              }
              _InterlockedOr(v132, 0);
              v21 = (struct _ERESOURCE *)*((_QWORD *)v83 + 6);
              goto LABEL_37;
            }
LABEL_58:
            v16 = -1073741727;
            goto LABEL_99;
          }
          goto LABEL_141;
        }
        v64 = v63 - 10;
        if ( !v64 )
        {
          P = 0LL;
          if ( !TokenInformation || TokenInformationLength < 0x10 )
            goto LABEL_30;
          v73 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, PreviousMode, &P);
          if ( v73 >= 0 )
          {
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              v73 = -1073741727;
            v137 = v73;
            if ( v73 >= 0 )
            {
              v74 = P;
              ShouldSetDelinkFlags = SepShouldSetDelinkFlags(*((_DWORD **)P + 1), *(_QWORD *)P);
              v76 = KeGetCurrentThread();
              --v76->KernelApcDisable;
              v77 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v132, 0);
              v78 = (int *)*((_QWORD *)v74 + 1);
              v79 = Token;
              v137 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), v78, *(_QWORD *)P, v80);
              if ( v137 >= 0 && ShouldSetDelinkFlags )
                v79[50] |= 0x20000u;
              *((_QWORD *)v79 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v132, 0);
              ExReleaseResourceLite(v77[6]);
              KeLeaveCriticalRegion();
              SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
              v16 = v137;
              goto LABEL_38;
            }
            SepReleaseTokenSecurityAttributesAndOperationsInformation((PVOID *)P, PreviousMode);
          }
          v16 = v73;
          goto LABEL_99;
        }
        v65 = v64 - 3;
        if ( !v65 )
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_30;
          v72 = *(_DWORD *)TokenInformation;
          v159 = *(_DWORD *)TokenInformation;
          if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v17 = SeSetPrivateNameSpaceToken((__int64)v15, v72);
            goto LABEL_60;
          }
          goto LABEL_58;
        }
        v66 = v65 - 3;
        if ( v66 )
        {
          if ( v66 != 7 )
            return -1073741811;
          if ( (unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( TokenInformationLength != 4 )
              goto LABEL_30;
            if ( PreviousMode )
            {
              v67 = RtlReadULongFromUser((unsigned int *)TokenInformation);
              v152 = v67;
            }
            else
            {
              v67 = *(_DWORD *)TokenInformation;
              v152 = *(_DWORD *)TokenInformation;
              v15 = (PERESOURCE *)Token;
            }
            v68 = *((_DWORD *)v15 + 292);
            if ( v67 )
              v69 = v68 | 1;
            else
              v69 = v68 & 0xFFFFFFFE;
            *((_DWORD *)v15 + 292) = v69;
            goto LABEL_121;
          }
LABEL_141:
          v16 = -1073741821;
          goto LABEL_99;
        }
        if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_58;
        if ( TokenInformationLength != 4 )
          goto LABEL_30;
        HIDWORD(v158) = *(_DWORD *)TokenInformation;
        if ( !HIDWORD(v158) && ((_DWORD)v15[25] & 0x80000) != 0 )
        {
          v70 = KeGetCurrentThread();
          --v70->KernelApcDisable;
          v71 = Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v132, 0);
          *((_DWORD *)v15 + 50) &= ~0x80000u;
          *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v132, 0);
          v27 = (struct _ERESOURCE *)*((_QWORD *)v71 + 6);
          goto LABEL_54;
        }
      }
      else
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_30;
        v155 = *(_DWORD *)TokenInformation;
        if ( v155 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_58;
        v89 = KeGetCurrentThread();
        --v89->KernelApcDisable;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v132, 0);
        v90 = Token;
        v91 = *((_DWORD *)Token + 50);
        if ( v155 )
          v92 = v91 | 0x1000;
        else
          v92 = v91 & 0xFFFFEFFF;
        *((_DWORD *)Token + 50) = v92;
        v90[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        _InterlockedOr(v132, 0);
        v15 = (PERESOURCE *)Token;
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
      }
LABEL_55:
      v16 = 0;
      goto LABEL_99;
    }
    v93 = 0;
    if ( TokenInformationLength < 0x10 )
      goto LABEL_30;
    v17 = SeCaptureSidAndAttributesArray(
            (char *)TokenInformation,
            1u,
            PreviousMode,
            0LL,
            0,
            (__int64)HandleInformation,
            v135,
            (PVOID *)&v157,
            &v160);
    v137 = v17;
    if ( v17 < 0 )
      goto LABEL_60;
    v94 = v157;
    v95 = (unsigned __int16 *)*v157;
    v96 = *(_DWORD *)((char *)*v157 + 2) - *(_DWORD *)((char *)SeUntrustedMandatorySid + 2);
    if ( !v96 )
      v96 = v95[3] - *((unsigned __int16 *)SeUntrustedMandatorySid + 3);
    if ( v96 )
    {
LABEL_198:
      ObfDereferenceObject(v15);
      SeReleaseLuidAndAttributesArray(v94, PreviousMode);
      return -1073740730;
    }
    v97 = *RtlSubAuthorityCountSid(*v157);
    if ( (_BYTE)v97 )
    {
      v98 = *RtlSubAuthoritySid(v95, v97 - 1);
      if ( v98 > 0x4000 )
        goto LABEL_198;
    }
    else
    {
      v98 = 0;
    }
    v99 = KeGetCurrentThread();
    --v99->KernelApcDisable;
    v165 = (PERESOURCE *)Token;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v132, 0);
    v100 = (char *)Token;
    TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
    v102 = TokenIntegrity;
    if ( !TokenIntegrity )
    {
      v16 = -1073740730;
LABEL_264:
      _InterlockedOr(v132, 0);
      ExReleaseResourceLite(v165[6]);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(Token);
      SeReleaseLuidAndAttributesArray(v157, PreviousMode);
      return v16;
    }
    Sid = *TokenIntegrity;
    v103 = *RtlSubAuthorityCountSid(Sid);
    LODWORD(v148) = v103;
    v104 = v103;
    if ( (_BYTE)v103 )
    {
      v105 = *RtlSubAuthoritySid(Sid, v103 - 1);
      LOBYTE(v103) = (_BYTE)v148;
    }
    else
    {
      v105 = 0;
    }
    if ( v98 <= v105 )
    {
      if ( (_BYTE)v103 )
        v106 = *RtlSubAuthoritySid(Sid, v104 - 1);
      else
        v106 = 0;
      if ( v98 < v106 )
      {
        if ( (unsigned int)Feature_871661881__private_IsEnabledDeviceUsageNoInline() )
        {
          v144.Flags = 0;
          RtlQueryElevationFlags(&v144);
          if ( (v144.Flags & 0x18) == 0x10 )
          {
            v107 = *v102;
            v108 = *RtlSubAuthorityCountSid(*v102);
            if ( (_BYTE)v108 )
            {
              if ( *RtlSubAuthoritySid(v107, v108 - 1) >= 0x3000 )
              {
                memset(&SubjectContext, 0, sizeof(SubjectContext));
                SeCaptureSubjectContext(&SubjectContext);
                v109 = KeGetCurrentThread();
                --v109->KernelApcDisable;
                PrimaryToken = SubjectContext.PrimaryToken;
                ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                v111 = *(void **)SepLocateTokenIntegrity((__int64)PrimaryToken);
                v112 = *RtlSubAuthorityCountSid(v111);
                if ( (_BYTE)v112 )
                  v113 = *RtlSubAuthoritySid(v111, v112 - 1);
                else
                  v113 = 0;
                v114 = (struct _ERESOURCE *)*((_QWORD *)PrimaryToken + 6);
                if ( v113 < 0x3000 )
                {
                  ExReleaseResourceLite(v114);
                  KeLeaveCriticalRegion();
                  SeReleaseSubjectContext(&SubjectContext);
                  v16 = -1073741790;
                  goto LABEL_264;
                }
                ExReleaseResourceLite(v114);
                KeLeaveCriticalRegion();
                SeReleaseSubjectContext(&SubjectContext);
                v100 = (char *)Token;
              }
            }
          }
        }
        *((_DWORD *)v100 + 50) &= ~0x1000u;
      }
    }
    else
    {
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v16 = -1073741727;
        goto LABEL_264;
      }
      if ( v100[204] )
      {
        v16 = -1073741525;
        goto LABEL_264;
      }
    }
    if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
    {
      v115 = *v102;
      v116 = *RtlSubAuthorityCountSid(*v102);
      v117 = (_BYTE)v116 ? *RtlSubAuthoritySid(v115, v116 - 1) : 0;
      if ( v98 >= v117 )
      {
        memset(&v166, 0, sizeof(v166));
        SeCaptureSubjectContext(&v166);
        SeLockSubjectContext(&v166);
        v118 = *((_DWORD *)v166.PrimaryToken + 50);
        SeUnlockSubjectContext(&v166);
        SeReleaseSubjectContext(&v166);
        v93 = (v118 & 0x4000) == 0;
      }
    }
    v119 = *((unsigned __int8 *)*v102 + 1);
    if ( (_BYTE)v119 )
    {
      *RtlSubAuthoritySid(*v102, v119 - 1) = v98;
      if ( v98 < 0x3000 )
      {
        *((_QWORD *)v100 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v100 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      if ( v98 >= 0x2000 )
      {
        IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline();
        v121 = *((_DWORD *)v100 + 50) & 0x4000;
        if ( IsEnabledDeviceUsageNoInline )
        {
          if ( v121 && v93 )
          {
            SepRemoveAceFromTokenDefaultDacl((__int64)v100, *((void **)v100 + 98));
            *((_DWORD *)v100 + 50) &= ~0x4000u;
            v122 = (void *)*((_QWORD *)v100 + 98);
            if ( v122 )
            {
              ExFreePoolWithTag(v122, 0);
              *((_QWORD *)v100 + 98) = 0LL;
            }
            v123 = (void *)*((_QWORD *)v100 + 99);
            if ( v123 )
            {
              ExFreePoolWithTag(v123, 0);
              *((_QWORD *)v100 + 99) = 0LL;
              *((_DWORD *)v100 + 200) = 0;
              memset_0(v100 + 808, 0, 0x110uLL);
            }
            v124 = *((_QWORD *)v100 + 135);
            if ( v124 )
            {
              SepDereferenceLowBoxNumberEntry(*((_DWORD *)v100 + 30), v124);
              *((_QWORD *)v100 + 135) = 0LL;
            }
            v125 = *((_QWORD *)v100 + 136);
            if ( v125 )
            {
              SepDereferenceCachedHandlesEntryInternal(*((_QWORD *)v100 + 27) + 96LL, 0, v125, 0LL);
              *((_QWORD *)v100 + 136) = 0LL;
            }
          }
          v126 = *v102;
          v127 = *RtlSubAuthorityCountSid(*v102);
          if ( (_BYTE)v127 && *RtlSubAuthoritySid(v126, v127 - 1) >= 0x2000 )
            *((_DWORD *)v100 + 50) |= 0x2000u;
        }
        else
        {
          if ( v121 )
          {
            SepRemoveAceFromTokenDefaultDacl((__int64)v100, *((void **)v100 + 98));
            *((_DWORD *)v100 + 50) &= ~0x4000u;
            v128 = (void *)*((_QWORD *)v100 + 98);
            if ( v128 )
            {
              ExFreePoolWithTag(v128, 0);
              *((_QWORD *)v100 + 98) = 0LL;
            }
            v129 = (void *)*((_QWORD *)v100 + 99);
            if ( v129 )
            {
              ExFreePoolWithTag(v129, 0);
              *((_QWORD *)v100 + 99) = 0LL;
              *((_DWORD *)v100 + 200) = 0;
              memset_0(v100 + 808, 0, 0x110uLL);
            }
            v130 = *((_QWORD *)v100 + 135);
            if ( v130 )
            {
              SepDereferenceLowBoxNumberEntry(*((_DWORD *)v100 + 30), v130);
              *((_QWORD *)v100 + 135) = 0LL;
            }
            v131 = *((_QWORD *)v100 + 136);
            if ( v131 )
            {
              SepDereferenceCachedHandlesEntryInternal(*((_QWORD *)v100 + 27) + 96LL, 0, v131, 0LL);
              *((_QWORD *)v100 + 136) = 0LL;
            }
          }
          *((_DWORD *)v100 + 50) |= 0x2000u;
        }
      }
      else
      {
        *((_QWORD *)v100 + 9) &= 0x202800000uLL;
        *((_QWORD *)v100 + 10) &= 0x202800000uLL;
        *((_DWORD *)v100 + 50) &= ~0x2000u;
      }
      *((_QWORD *)v100 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      v16 = 0;
    }
    else
    {
      v16 = -1073741811;
    }
    goto LABEL_264;
  }
  return result;
}
