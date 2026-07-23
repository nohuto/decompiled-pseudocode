/*
 * XREFs of NtQueryInformationToken @ 0x140AC8E20
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405DCC60 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140360510 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepReferenceTokenByHandle @ 0x140361130 (SepReferenceTokenByHandle.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1403D1F20 (SepSidInTokenSidHash.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     SeQueryTokenIntegrity @ 0x14041C680 (SeQueryTokenIntegrity.c)
 *     SepCopyTokenIntegrity @ 0x14041C6A0 (SepCopyTokenIntegrity.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     SepConvertTokenPrivileges @ 0x140430798 (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1404307C0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x1404324C0 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x140435EE0 (SeQueryMandatoryPolicyToken.c)
 *     SepGetTokenElevation @ 0x140449F00 (SepGetTokenElevation.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140449F64 (SepDeReferenceLogonSessionDirect.c)
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     SepIsSandboxedToken @ 0x140450644 (SepIsSandboxedToken.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     RtlSubAuthorityCountSid @ 0x140461BC0 (RtlSubAuthorityCountSid.c)
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x140461BF8 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 *     SepGetTokenElevationType @ 0x140470F34 (SepGetTokenElevationType.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405D8BC8 (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     RtlCopySid @ 0x1408A5010 (RtlCopySid.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     RtlCopySidAndAttributesArray @ 0x140998A50 (RtlCopySidAndAttributesArray.c)
 *     SeQuerySessionIdToken @ 0x1409FF180 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A05194 (AuthzBasepQueryClaimAttributesToken.c)
 *     SepReferenceLogonSessionSilo @ 0x140A2B0F4 (SepReferenceLogonSessionSilo.c)
 *     RtlQueryElevationFlags @ 0x140A4AFD0 (RtlQueryElevationFlags.c)
 *     SeSetSessionIdToken @ 0x140A4CF28 (SeSetSessionIdToken.c)
 *     SepCopyTokenAccessInformation @ 0x140ACC360 (SepCopyTokenAccessInformation.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v9; // rsi
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v11; // rcx
  PULONG v12; // r15
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v15; // rdi
  ULONG v16; // r8d
  struct _ERESOURCE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rcx
  struct _ERESOURCE *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rax
  unsigned int *v27; // rbx
  unsigned int v28; // ecx
  ULONG v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // r9
  struct _KTHREAD *v32; // rax
  unsigned int v33; // ecx
  ULONG v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // r9
  struct _KTHREAD *v37; // rax
  unsigned int v38; // eax
  ULONG v39; // edi
  struct _KTHREAD *v40; // rax
  ULONG v41; // ecx
  struct _KTHREAD *v42; // rax
  ULONG v43; // ecx
  struct _KTHREAD *v44; // rax
  __int64 v45; // rax
  ULONG v46; // eax
  char *v47; // rcx
  PVOID v48; // r8
  struct _KTHREAD *v49; // rax
  int v50; // edx
  __int64 v51; // rax
  PVOID v52; // rbx
  int v53; // edi
  int v54; // r13d
  struct _KTHREAD *v55; // rax
  _RTL_ELEVATION_FLAGS v56; // r10d
  unsigned int v57; // r8d
  _RTL_ELEVATION_FLAGS v58; // eax
  _QWORD *v59; // rdx
  __int64 v60; // r9
  __int64 v61; // r11
  _QWORD *v62; // rcx
  int v63; // r10d
  int v64; // r11d
  __int64 v65; // r8
  _RTL_ELEVATION_FLAGS v66; // edi
  unsigned int v67; // r13d
  unsigned __int64 v68; // rax
  _QWORD *v69; // rdx
  __int64 v70; // r9
  _QWORD *v71; // rcx
  unsigned int v72; // r13d
  int Sid; // edx
  ULONG v74; // ecx
  _SID_AND_ATTRIBUTES *v75; // r9
  _SID_AND_ATTRIBUTES *v76; // rdi
  __int64 v77; // rsi
  struct _KTHREAD *v78; // rax
  int v79; // r13d
  __int64 v80; // rbx
  __int64 v81; // rcx
  int v82; // eax
  int v83; // eax
  int v84; // ecx
  int v85; // r9d
  int v86; // r10d
  unsigned int v87; // ebx
  ULONG v88; // ecx
  unsigned int v89; // eax
  _QWORD *v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r11
  __int64 v93; // rcx
  int v94; // r11d
  int v95; // ebx
  int v96; // edx
  unsigned int v97; // r9d
  unsigned int v98; // ecx
  _QWORD *v99; // rdx
  unsigned int v100; // eax
  __int64 v101; // r8
  __int64 v102; // r10
  _QWORD *v103; // rax
  int v104; // r9d
  int v105; // r10d
  ULONG v106; // edx
  unsigned int v107; // r11d
  unsigned int v108; // ecx
  _QWORD *v109; // rdx
  unsigned int v110; // eax
  __int64 v111; // r8
  __int64 v112; // rbx
  _QWORD *v113; // rax
  __int64 v114; // rax
  char v115; // r11
  unsigned __int8 *v116; // rax
  unsigned int *v117; // rdx
  unsigned int v118; // r9d
  unsigned __int64 v119; // rax
  signed int InternalSecurityAttributeValueCopyoutBufferSize; // r8d
  unsigned int v121; // eax
  unsigned int v122; // ecx
  void **v123; // rbx
  unsigned int v124; // edx
  unsigned int v125; // ecx
  unsigned int v126; // eax
  int v127; // r8d
  ULONG v128; // edx
  int v129; // r9d
  int v130; // r10d
  int v131; // ebx
  ULONG v132; // ecx
  int v133; // r9d
  struct _KTHREAD *v134; // rax
  bool v135; // bl
  int IsEnabledDeviceUsageNoInline; // eax
  PVOID v137; // r15
  __int64 v138; // rbx
  NTSTATUS v139; // r12d
  NTSTATUS inserted; // ebx
  PVOID v141; // rbx
  NTSTATUS v142; // edi
  __int64 v143; // r12
  __int64 v144; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  int v146; // edi
  int v147; // ecx
  __int64 v148; // rbx
  struct _KTHREAD *v149; // rax
  __int64 v150; // rdx
  __int64 v151; // r8
  __int64 v152; // r9
  PSID **PrimaryToken; // rbx
  __int64 v154; // rdi
  struct _KTHREAD *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // r9
  PSID v159; // rbx
  int v160; // r12d
  const wchar_t *v161; // r15
  unsigned __int16 *v162; // r8
  unsigned __int16 v163; // r9
  struct _LIST_ENTRY *Flink; // r10
  unsigned __int64 v165; // rax
  __int64 v166; // rcx
  unsigned __int16 *v167; // r11
  unsigned __int16 *v168; // rdi
  unsigned __int64 v169; // rbx
  unsigned __int64 v170; // r8
  unsigned __int64 v171; // r9
  unsigned int v172; // ebx
  int v173; // eax
  struct _KTHREAD *v174; // rax
  PERESOURCE *v175; // rdi
  int TokenElevation; // ebx
  __int64 v177; // rdx
  __int64 v178; // r8
  __int64 v179; // r9
  int v180; // esi
  struct _KTHREAD *v181; // rax
  PVOID v182; // rbx
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // r8
  __int64 v186; // r9
  ULONG v187; // edi
  struct _KTHREAD *v188; // rax
  unsigned __int8 *v189; // rdx
  struct _KTHREAD *v190; // rax
  unsigned int v191; // ecx
  ULONG v192; // r8d
  __int64 v193; // rdx
  __int64 v194; // r9
  struct _KTHREAD *v195; // rax
  unsigned __int8 *v196; // rdx
  ULONG v197; // eax
  NTSTATUS MandatoryPolicyToken; // ebx
  PVOID v199; // rcx
  struct _KTHREAD *v200; // rax
  __int64 v201; // rdx
  unsigned int v202; // r8d
  __int64 v203; // r9
  __int64 v204; // rdx
  __int64 v205; // r8
  __int64 v206; // r9
  ULONG v207; // eax
  struct _KTHREAD *v208; // rax
  PVOID v209; // r13
  __int64 v210; // rbx
  __int128 *v211; // rcx
  __int128 *v212; // rbx
  ULONG v213; // edi
  struct _ERESOURCE *v214; // rcx
  __int64 v215; // rdx
  __int64 v216; // r8
  __int64 v217; // r9
  struct _KTHREAD *v218; // rax
  __int64 v219; // rdx
  ULONG v220; // r11d
  ULONG v221; // r8d
  __int64 v222; // rdx
  __int64 v223; // r9
  struct _KTHREAD *v224; // rax
  unsigned int *v225; // rcx
  ULONG v226; // edi
  ULONG v227; // edi
  struct _KTHREAD *v228; // rax
  char v229; // cl
  void *v230; // r8
  unsigned __int8 *v231; // rdx
  struct _KTHREAD *v232; // rax
  char v233; // dl
  struct _KTHREAD *v234; // rax
  ULONG v235; // edi
  __int64 v236; // rax
  PULONG RemainingSidAreaSize; // [rsp+30h] [rbp-198h]
  __int64 v238; // [rsp+80h] [rbp-148h] BYREF
  PVOID Object; // [rsp+88h] [rbp-140h] BYREF
  void *v240; // [rsp+90h] [rbp-138h] BYREF
  int v241; // [rsp+98h] [rbp-130h] BYREF
  PSID RemainingSidArea; // [rsp+A0h] [rbp-128h] BYREF
  bool v243; // [rsp+A8h] [rbp-120h]
  ULONG SessionId; // [rsp+ACh] [rbp-11Ch] BYREF
  int v245[2]; // [rsp+B0h] [rbp-118h] BYREF
  _RTL_ELEVATION_FLAGS Flags[2]; // [rsp+B8h] [rbp-110h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+C0h] [rbp-108h]
  unsigned int v248; // [rsp+C4h] [rbp-104h] BYREF
  PVOID v249; // [rsp+C8h] [rbp-100h] BYREF
  PVOID v250; // [rsp+D0h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp-F0h] BYREF
  _SID_AND_ATTRIBUTES Src; // [rsp+E0h] [rbp-E8h] BYREF
  int v253[2]; // [rsp+F0h] [rbp-D8h]
  int v254; // [rsp+F8h] [rbp-D0h]
  _SID_AND_ATTRIBUTES IntegritySA; // [rsp+100h] [rbp-C8h] BYREF
  __int128 v256; // [rsp+110h] [rbp-B8h] BYREF
  __int128 v257; // [rsp+120h] [rbp-A8h]
  __int128 v258; // [rsp+130h] [rbp-98h] BYREF
  __int128 v259; // [rsp+140h] [rbp-88h] BYREF
  __int128 v260; // [rsp+150h] [rbp-78h]
  __int128 v261; // [rsp+160h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+170h] [rbp-58h] BYREF
  __int128 v263; // [rsp+190h] [rbp-38h]

  v9 = 0LL;
  Object = 0LL;
  v241 = 0;
  *(_QWORD *)v253 = 0LL;
  Src = 0LL;
  RemainingSidArea = 0LL;
  SessionId = 0;
  v263 = 0LL;
  v256 = 0LL;
  v257 = 0LL;
  v258 = 0LL;
  LOBYTE(v238) = 0;
  v240 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(TokenInformation, TokenInformationLength, 4u);
    v11 = 0x7FFFFFFF0000LL;
    v12 = ReturnLength;
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v11 = (__int64)ReturnLength;
    *(_DWORD *)v11 = *(_DWORD *)v11;
  }
  else
  {
    v12 = ReturnLength;
  }
  switch ( TokenInformationClass )
  {
    case TokenUser:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v15 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v16 = 4 * *(unsigned __int8 *)(**((_QWORD **)v15 + 19) + 1LL) + 24;
        *v12 = v16;
        if ( TokenInformationLength < v16 )
          goto LABEL_9;
        RtlCopySidAndAttributesArray(
          1u,
          *((PSID_AND_ATTRIBUTES *)v15 + 19),
          v16,
          (PSID_AND_ATTRIBUTES)TokenInformation,
          (char *)TokenInformation + 16,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_15;
      }
      return result;
    case TokenGroups:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        v27 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v28 = v27[31];
        v29 = 16 * v28 - 8;
        if ( v28 > 1 )
        {
          v30 = *((_QWORD *)v27 + 19) + 16LL;
          v31 = v28 - 1;
          do
          {
            v29 += 4 * *(unsigned __int8 *)(*(_QWORD *)v30 + 1LL) + 8;
            v30 += 16LL;
            --v31;
          }
          while ( v31 );
        }
        *v12 = v29;
        if ( TokenInformationLength >= v29 )
        {
          *(_DWORD *)TokenInformation = v27[31] - 1;
          RtlCopySidAndAttributesArray(
            v27[31] - 1,
            (PSID_AND_ATTRIBUTES)(*((_QWORD *)v27 + 19) + 16LL),
            v29,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v27[31] - 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case TokenPrivileges:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        v27 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v38 = SepTokenPrivilegeCount((__int64)v27);
        if ( v38 <= 1 )
          v39 = 16;
        else
          v39 = 12 * v38 + 4;
        *v12 = v39;
        if ( TokenInformationLength >= v39 )
        {
          SepConvertTokenPrivileges((__int64)v27, TokenInformation);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case TokenOwner:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        v40 = KeGetCurrentThread();
        --v40->KernelApcDisable;
        v27 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v41 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v27 + 19) + 16LL * v27[36]) + 1LL) + 16;
        *v12 = v41;
        if ( TokenInformationLength < v41 )
          goto LABEL_24;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
        RtlCopySid(v41 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v27 + 19) + 16LL * v27[36]));
        goto LABEL_26;
      }
      return result;
    case TokenPrimaryGroup:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        v42 = KeGetCurrentThread();
        --v42->KernelApcDisable;
        v27 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v43 = 4 * *(unsigned __int8 *)(*((_QWORD *)v27 + 21) + 1LL) + 16;
        *v12 = v43;
        if ( TokenInformationLength < v43 )
          goto LABEL_24;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
        RtlCopySid(v43 - 8, (char *)TokenInformation + 8, *((PSID *)v27 + 21));
        goto LABEL_26;
      }
      return result;
    case TokenDefaultDacl:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        v241 = 8;
        v44 = KeGetCurrentThread();
        --v44->KernelApcDisable;
        v27 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v45 = *((_QWORD *)v27 + 23);
        if ( v45 )
          v46 = *(unsigned __int16 *)(v45 + 2) + 8;
        else
          v46 = v241;
        *v12 = v46;
        if ( TokenInformationLength >= v46 )
        {
          v47 = (char *)TokenInformation + 8;
          if ( *((_QWORD *)v27 + 23) )
          {
            *(_QWORD *)TokenInformation = v47;
            memmove(v47, *((const void **)v27 + 23), *(unsigned __int16 *)(*((_QWORD *)v27 + 23) + 2LL));
          }
          else
          {
            *(_QWORD *)TokenInformation = 0LL;
          }
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case TokenSource:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 0x10u,
                 PreviousMode,
                 TokenInformationLength,
                 &Object,
                 &v238,
                 &v240);
      if ( result >= 0 )
      {
        *v12 = 16;
        if ( TokenInformationLength < 0x10 )
          goto LABEL_11;
        v21 = Object;
        *(_OWORD *)TokenInformation = *(_OWORD *)Object;
        goto LABEL_18;
      }
      return result;
    case TokenType:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        *v12 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_11;
        v21 = Object;
        *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
        goto LABEL_18;
      }
      return result;
    case TokenImpersonationLevel:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        v21 = Object;
        if ( *((_DWORD *)Object + 48) != 2 )
        {
          ObfDereferenceObjectWithTag(Object, 0x74726853u);
          return -1073741821;
        }
        *v12 = 4;
        if ( TokenInformationLength >= 4 )
        {
          *(_DWORD *)TokenInformation = v21[49];
          goto LABEL_18;
        }
        goto LABEL_12;
      }
      return result;
    case TokenStatistics:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        *v12 = 56;
        if ( TokenInformationLength < 0x38 )
          goto LABEL_11;
        v49 = KeGetCurrentThread();
        --v49->KernelApcDisable;
        v27 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v254 = 0;
        *(_QWORD *)TokenInformation = *((_QWORD *)v27 + 2);
        *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v27 + 3);
        *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v27 + 5);
        *((_DWORD *)TokenInformation + 6) = v27[48];
        *((_DWORD *)TokenInformation + 7) = v27[49];
        *((_DWORD *)TokenInformation + 8) = v27[34];
        v50 = v27[34] - 4 * *(unsigned __int8 *)(*((_QWORD *)v27 + 21) + 1LL) - 8;
        v254 = v50;
        v51 = *((_QWORD *)v27 + 23);
        if ( v51 )
        {
          v50 -= *(unsigned __int16 *)(v51 + 2);
          v254 = v50;
        }
        *((_DWORD *)TokenInformation + 9) = v50;
        *((_DWORD *)TokenInformation + 10) = v27[31] - 1;
        *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v27);
        *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v27 + 7);
        goto LABEL_26;
      }
      return result;
    case TokenRestrictedSids:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        v27 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v33 = v27[32];
        v34 = 16 * v33 + 8;
        if ( v33 )
        {
          v35 = *((_QWORD *)v27 + 20);
          v36 = v33;
          do
          {
            v34 += 4 * *(unsigned __int8 *)(*(_QWORD *)v35 + 1LL) + 8;
            v35 += 16LL;
            --v36;
          }
          while ( v36 );
        }
        *v12 = v34;
        if ( TokenInformationLength >= v34 )
        {
          *(_DWORD *)TokenInformation = v27[32];
          RtlCopySidAndAttributesArray(
            v27[32],
            *((PSID_AND_ATTRIBUTES *)v27 + 20),
            v34,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v27[32] + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case TokenSessionId:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result >= 0 )
      {
        *v12 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_11;
        v52 = Object;
        SeQuerySessionIdToken(Object, &SessionId);
        *(_DWORD *)TokenInformation = SessionId;
        *v12 = 4;
        goto LABEL_75;
      }
      return result;
    case TokenGroupsAndPrivileges:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v53 = 0;
      v54 = 0;
      v55 = KeGetCurrentThread();
      --v55->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v245[0] = SepTokenPrivilegeCount((__int64)v27);
      LODWORD(Src.Sid) = 12 * v245[0];
      v56.Flags = v27[31];
      LODWORD(v250) = 16 * v56.Flags;
      v57 = 16 * v56.Flags;
      v58.Flags = 0;
      if ( v56.Flags < 2 )
        goto LABEL_81;
      v240 = (void *)*((_QWORD *)v27 + 19);
      v59 = v240;
      v60 = ((v56.Flags - 2) >> 1) + 1;
      Flags[0].Flags = 2 * v60;
      v61 = 2 * v60;
      do
      {
        v53 += (4 * *(unsigned __int8 *)(*v59 + 1LL) + 15) & 0xFFFFFFF8;
        v54 += (4 * *(unsigned __int8 *)(v59[2] + 1LL) + 15) & 0xFFFFFFF8;
        v59 += 4;
        --v60;
      }
      while ( v60 );
      v58.Flags = (ULONG)Flags[0];
      if ( Flags[0].Flags < v56.Flags )
      {
        v62 = v240;
      }
      else
      {
LABEL_81:
        if ( v58.Flags >= v56.Flags )
        {
LABEL_85:
          v63 = 0;
          v64 = 0;
          v65 = v53 + v54 + v57;
          v66.Flags = v27[32];
          LODWORD(v249) = 16 * v66.Flags;
          v67 = 16 * v66.Flags;
          v68 = 0LL;
          if ( v66.Flags < 2 )
            goto LABEL_89;
          RemainingSidArea = (PSID)*((_QWORD *)v27 + 20);
          v69 = RemainingSidArea;
          v70 = ((v66.Flags - 2) >> 1) + 1;
          Flags[0].Flags = 2 * v70;
          v240 = (void *)(2 * v70);
          do
          {
            v63 += (4 * *(unsigned __int8 *)(*v69 + 1LL) + 15) & 0xFFFFFFF8;
            v64 += (4 * *(unsigned __int8 *)(v69[2] + 1LL) + 15) & 0xFFFFFFF8;
            v69 += 4;
            --v70;
          }
          while ( v70 );
          v68 = Flags[0].Flags;
          if ( Flags[0].Flags < v66.Flags )
          {
            v68 = (unsigned __int64)v240;
            v71 = RemainingSidArea;
          }
          else
          {
LABEL_89:
            if ( (unsigned int)v68 >= v66.Flags )
            {
LABEL_93:
              v72 = v63 + v64 + v67;
              Sid = (int)Src.Sid;
              v74 = v65 + v72 + LODWORD(Src.Sid) + 56;
              *v12 = v74;
              if ( TokenInformationLength < v74 )
                goto LABEL_24;
              *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v27 + 3);
              *((_DWORD *)TokenInformation + 1) = v65;
              *(_DWORD *)TokenInformation = v27[31];
              v75 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
              *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
              *((_DWORD *)TokenInformation + 5) = v72;
              *((_DWORD *)TokenInformation + 4) = v27[32];
              if ( v27[32] )
              {
                v76 = (_SID_AND_ATTRIBUTES *)((char *)v75 + ((v65 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
                *((_QWORD *)TokenInformation + 3) = v76;
              }
              else
              {
                *((_QWORD *)TokenInformation + 3) = 0LL;
                v76 = *(_SID_AND_ATTRIBUTES **)v253;
              }
              *((_DWORD *)TokenInformation + 9) = Sid;
              *((_DWORD *)TokenInformation + 8) = v245[0];
              v77 = (__int64)v75 + v72 + (unsigned int)v65;
              *((_QWORD *)TokenInformation + 5) = v77;
              RtlCopySidAndAttributesArray(
                v27[31],
                *((PSID_AND_ATTRIBUTES *)v27 + 19),
                v65 - (_DWORD)v250,
                v75,
                (char *)v75 + (unsigned int)v250,
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
              if ( v76 )
                RtlCopySidAndAttributesArray(
                  v27[32],
                  *((PSID_AND_ATTRIBUTES *)v27 + 20),
                  v72 - (_DWORD)v249,
                  v76,
                  (char *)v76 + (unsigned int)v249,
                  &RemainingSidArea,
                  (PULONG)&RemainingSidArea);
              SepConvertTokenPrivilegesToLuidAndAttributes(v27, v77);
              goto LABEL_26;
            }
            v71 = (_QWORD *)*((_QWORD *)v27 + 20);
          }
          v67 = (_DWORD)v249 + ((4 * *(unsigned __int8 *)(v71[2 * v68] + 1LL) + 15) & 0xFFFFFFF8);
          goto LABEL_93;
        }
        v62 = (_QWORD *)*((_QWORD *)v27 + 19);
        v61 = v58.Flags;
      }
      v57 = (_DWORD)v250 + ((4 * *(unsigned __int8 *)(v62[2 * v61] + 1LL) + 15) & 0xFFFFFFF8);
      goto LABEL_85;
    case TokenSandBoxInert:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        return -1073741789;
      v21 = Object;
      *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) >> 6) & 1;
      goto LABEL_18;
    case TokenAuditPolicy:
      if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
        return -1073741727;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v133, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 31;
      if ( TokenInformationLength < 0x1F )
        goto LABEL_11;
      v134 = KeGetCurrentThread();
      --v134->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      *(_OWORD *)TokenInformation = *(_OWORD *)(v27 + 22);
      *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v27 + 13);
      *((_DWORD *)TokenInformation + 6) = v27[28];
      *((_WORD *)TokenInformation + 14) = *((_WORD *)v27 + 58);
      *((_BYTE *)TokenInformation + 30) = *((_BYTE *)v27 + 118);
      goto LABEL_26;
    case TokenOrigin:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 8;
      if ( TokenInformationLength < 8 )
        goto LABEL_11;
      v21 = Object;
      *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
      goto LABEL_18;
    case TokenElevationType:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      *(_DWORD *)TokenInformation = SepGetTokenElevationType((__int64)Object);
      ObfDereferenceObjectWithTag(v48, 0x74726853u);
      return 0;
    case TokenLinkedToken:
      *(_QWORD *)v245 = 0LL;
      Handle = 0LL;
      v249 = 0LL;
      v259 = 0LL;
      v260 = 0LL;
      *(_QWORD *)&v261 = 0LL;
      DWORD2(v261) = 0;
      v243 = 0;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 8;
      if ( TokenInformationLength != 8 )
      {
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return -1073741820;
      }
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      {
        Flags[0].Flags = 0;
        RtlQueryElevationFlags(Flags);
        v135 = (Flags[0].Flags & 0x18) == 16;
        v243 = v135;
      }
      else
      {
        v135 = 0;
      }
      LOBYTE(v238) = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
      LODWORD(Src.Sid) = 2 - ((_BYTE)v238 != 0);
      IsEnabledDeviceUsageNoInline = Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline();
      v137 = Object;
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( v135 && (unsigned int)SepGetTokenElevationType((__int64)Object) == 3 )
        {
          *(_QWORD *)&Flags[0].Flags = 0LL;
          v138 = *(_QWORD *)(*((_QWORD *)v137 + 27) + 8LL);
          v139 = -1073741822;
          if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
            && ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
          {
            v139 = guard_dispatch_icall_no_overrides(v138);
            ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
          }
          if ( v139 < 0 )
          {
            ObfDereferenceObjectWithTag(v137, 0x74726853u);
            return v139;
          }
          v250 = 0LL;
          inserted = ObReferenceObjectByHandle(
                       *(HANDLE *)&Flags[0].Flags,
                       8u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       0,
                       &v250,
                       0LL);
          ObCloseHandle(*(HANDLE *)&Flags[0].Flags, 0);
          if ( inserted < 0 )
            goto LABEL_194;
          v141 = v250;
          v142 = SepReferenceLogonSessionSilo(
                   (_DWORD *)v250 + 6,
                   *(_QWORD *)(*((_QWORD *)v137 + 27) + 160LL),
                   (__int64 *)v245);
          ObfDereferenceObject(v141);
          if ( v142 < 0 )
          {
            ObfDereferenceObjectWithTag(v137, 0x74726853u);
            return v142;
          }
          SeQuerySessionIdToken(v137, &SessionId);
          v143 = *(_QWORD *)v245;
          inserted = SeSetSessionIdToken(*(PACCESS_TOKEN *)(*(_QWORD *)v245 + 48LL), SessionId);
          if ( inserted < 0
            || (*(_QWORD *)(v143 + 16) = *(_QWORD *)(*((_QWORD *)v137 + 27) + 8LL),
                v144 = *((_QWORD *)v137 + 27),
                CurrentServerSilo = PsGetCurrentServerSilo(),
                inserted = SepReferenceLogonSessionSilo(
                             (_DWORD *)(v144 + 8),
                             CurrentServerSilo,
                             (__int64 *)&IntegritySA),
                inserted < 0) )
          {
            SepDeReferenceLogonSessionDirect((_QWORD *)v143);
            goto LABEL_194;
          }
          goto LABEL_197;
        }
        inserted = SepReferenceLogonSessionSilo(
                     (_DWORD *)(*((_QWORD *)v137 + 27) + 16LL),
                     *(_QWORD *)(*((_QWORD *)v137 + 27) + 160LL),
                     (__int64 *)v245);
        if ( inserted < 0 )
          goto LABEL_194;
      }
      else
      {
        inserted = SepReferenceLogonSessionSilo(
                     (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                     *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                     (__int64 *)v245);
        if ( inserted < 0 )
          goto LABEL_194;
      }
      v143 = *(_QWORD *)v245;
LABEL_197:
      v146 = 0;
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() && v243 && !(_BYTE)v238 )
      {
        v147 = 0;
        v148 = *(_QWORD *)(*((_QWORD *)v137 + 27) + 48LL);
        if ( v148 )
        {
          v149 = KeGetCurrentThread();
          --v149->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v148 + 48), 1u);
          LODWORD(RemainingSidArea) = *(_DWORD *)(v148 + 200);
          ExReleaseResourceLite(*(PERESOURCE *)(v148 + 48));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v150, v151, v152);
          v137 = Object;
          v143 = *(_QWORD *)v245;
          v147 = (int)RemainingSidArea;
        }
        v146 = 0;
        if ( (v147 & 0x8000000) != 0 )
        {
          Flags[0].Flags = 0;
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          PrimaryToken = (PSID **)SubjectContext.PrimaryToken;
          v154 = *(_QWORD *)(*((_QWORD *)SubjectContext.PrimaryToken + 27) + 48LL);
          if ( v154 )
          {
            v155 = KeGetCurrentThread();
            --v155->KernelApcDisable;
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v154 + 48), 1u);
            Flags[0] = *(_RTL_ELEVATION_FLAGS *)(v154 + 200);
            ExReleaseResourceLite(*(PERESOURCE *)(v154 + 48));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v156, v157, v158);
            v137 = Object;
            v143 = *(_QWORD *)v245;
            PrimaryToken = (PSID **)SubjectContext.PrimaryToken;
          }
          v146 = 0;
          if ( (Flags[0].Flags & 0x8000000) == 0
            || !RtlEqualSid(**((PSID **)v137 + 19), *PrimaryToken[19])
            || (IntegritySA = 0LL, SeQueryTokenIntegrity(PrimaryToken, &IntegritySA), IntegritySA.Attributes != 96)
            || (v159 = IntegritySA.Sid, *RtlSubAuthorityCountSid(IntegritySA.Sid) != 1)
            || *RtlSubAuthoritySid(v159, 0) != 12288 )
          {
LABEL_231:
            v172 = 1;
            SeReleaseSubjectContext(&SubjectContext);
            goto LABEL_234;
          }
          IntegritySA.Sid = (PSID)KeGetCurrentThread()->ApcState.Process[1].LastRebalanceQpc;
          v160 = 0;
          v161 = L"02";
          while ( 1 )
          {
            Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
            v165 = *v161;
            v166 = *v162;
            if ( (unsigned __int16)v166 >= (unsigned __int16)v165 )
            {
              v167 = (unsigned __int16 *)*((_QWORD *)v161 + 1);
              v168 = &v167[v165 >> 1];
              if ( v167 >= v168 )
              {
LABEL_232:
                v172 = 1;
                v146 = 1;
                v137 = Object;
                v143 = *(_QWORD *)v245;
                SeReleaseSubjectContext(&SubjectContext);
                goto LABEL_234;
              }
              v169 = *((_QWORD *)v162 + 1) + 2 * ((v166 - (unsigned __int64)*v161) >> 1) - (_QWORD)v167;
              while ( 1 )
              {
                v170 = *v167;
                if ( (unsigned int)v170 >= 0x61 )
                {
                  if ( (unsigned int)v170 > 0x7A )
                  {
                    if ( Flink && (unsigned __int16)v170 >= v163 )
                      LOWORD(v170) = *((_WORD *)&Flink->Flink
                                     + (v170 & 0xF)
                                     + *((unsigned __int16 *)&Flink->Flink
                                       + ((unsigned __int8)v170 >> 4)
                                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v170 >> 8))))
                                   + v170;
                  }
                  else
                  {
                    LOWORD(v170) = v170 - 32;
                  }
                }
                v171 = *(unsigned __int16 *)((char *)v167 + v169);
                if ( (unsigned int)v171 >= 0x61 )
                {
                  if ( (unsigned int)v171 > 0x7A )
                  {
                    if ( Flink && (unsigned __int16)v171 >= 0xC0u )
                      LOWORD(v171) = *((_WORD *)&Flink->Flink
                                     + (v171 & 0xF)
                                     + *((unsigned __int16 *)&Flink->Flink
                                       + ((unsigned __int8)v171 >> 4)
                                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v171 >> 8))))
                                   + v171;
                  }
                  else
                  {
                    LOWORD(v171) = v171 - 32;
                  }
                }
                if ( (_WORD)v170 != (_WORD)v171 )
                  break;
                if ( ++v167 >= v168 )
                  goto LABEL_232;
                v163 = 192;
              }
            }
            ++v160;
            v161 += 8;
            if ( v160 )
            {
              v146 = 0;
              v137 = Object;
              v143 = *(_QWORD *)v245;
              goto LABEL_231;
            }
          }
        }
      }
      v172 = 1;
LABEL_234:
      LODWORD(v259) = 48;
      *((_QWORD *)&v259 + 1) = 0LL;
      v173 = 0;
      if ( !PreviousMode )
        v173 = 512;
      DWORD2(v260) = v173;
      *(_QWORD *)&v260 = 0LL;
      v261 = 0LL;
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
        v172 = v146 + 1;
      inserted = SepDuplicateToken(
                   *(__int128 **)(v143 + 48),
                   (__int64)&v259,
                   0,
                   (int)Src.Sid,
                   v172,
                   0,
                   0,
                   (__int64 *)&v249);
      SepDeReferenceLogonSessionDirect((_QWORD *)v143);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObjectEx((char *)v249, 0LL, 983551, 0, 0, 0LL, (__int64)&Handle);
        if ( inserted >= 0 )
        {
          *(_QWORD *)TokenInformation = Handle;
          ObfDereferenceObjectWithTag(v137, 0x74726853u);
          return 0;
        }
      }
LABEL_194:
      ObfDereferenceObjectWithTag(v137, 0x74726853u);
      return inserted;
    case TokenElevation:
      *v12 = 4;
      if ( TokenInformationLength != 4 )
        return -1073741820;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v174 = KeGetCurrentThread();
      --v174->KernelApcDisable;
      v175 = (PERESOURCE *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      TokenElevation = SepGetTokenElevation((__int64)v175);
      ExReleaseResourceLite(v175[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v177, v178, v179);
      *(_DWORD *)TokenInformation = TokenElevation;
      goto LABEL_17;
    case TokenHasRestrictions:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 1;
      if ( !TokenInformationLength )
        goto LABEL_11;
      v21 = Object;
      *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
      goto LABEL_18;
    case TokenAccessInformation:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v78 = KeGetCurrentThread();
      --v78->KernelApcDisable;
      v15 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v79 = 0;
      v80 = 1LL;
      v81 = 37LL;
      do
      {
        v82 = v79 + 1;
        if ( (*((_QWORD *)v15 + 8) & v80) == 0 )
          v82 = v79;
        v79 = v82;
        v80 = __ROL8__(v80, 1);
        --v81;
      }
      while ( v81 );
      v83 = 12 * v82 + 16;
      v84 = v83 - 12;
      if ( !v79 )
        v84 = v83;
      LODWORD(RemainingSidArea) = v84;
      v85 = 0;
      v86 = 0;
      v87 = *((_DWORD *)v15 + 31);
      v88 = 16 * v87;
      Flags[0].Flags = 16 * v87;
      v248 = *((_DWORD *)v15 + 32);
      LODWORD(v250) = 16 * v248;
      LODWORD(Handle) = *((_DWORD *)v15 + 200);
      LODWORD(v249) = 16 * (_DWORD)Handle;
      v253[0] = 16 * v87;
      v89 = 0;
      if ( v87 < 2 )
        goto LABEL_112;
      *(_QWORD *)v245 = *((_QWORD *)v15 + 19);
      v90 = *(_QWORD **)v245;
      v91 = ((v87 - 2) >> 1) + 1;
      LODWORD(Src.Sid) = 2 * v91;
      v92 = 2 * v91;
      do
      {
        v85 += (4 * *(unsigned __int8 *)(*v90 + 1LL) + 15) & 0xFFFFFFF8;
        v86 += (4 * *(unsigned __int8 *)(v90[2] + 1LL) + 15) & 0xFFFFFFF8;
        v90 += 4;
        --v91;
      }
      while ( v91 );
      v89 = (unsigned int)Src.Sid;
      if ( LODWORD(Src.Sid) < v87 )
      {
        v93 = *(_QWORD *)v245;
        goto LABEL_115;
      }
      v88 = v253[0];
LABEL_112:
      if ( v89 < v87 )
      {
        v93 = *((_QWORD *)v15 + 19);
        v92 = v89;
LABEL_115:
        v88 = Flags[0].Flags + ((4 * *(unsigned __int8 *)(*(_QWORD *)(v93 + 16 * v92) + 1LL) + 15) & 0xFFFFFFF8);
      }
      v94 = 0;
      v95 = 0;
      v253[0] = v85 + v86 + v88;
      v96 = (int)v250;
      v241 = (int)v250;
      v97 = 0;
      v98 = v248;
      if ( v248 < 2 )
        goto LABEL_121;
      Src.Sid = (PSID)*((_QWORD *)v15 + 20);
      v99 = Src.Sid;
      v100 = ((v248 - 2) >> 1) + 1;
      v101 = v100;
      v97 = 2 * v100;
      v102 = 2LL * v100;
      do
      {
        v94 += (4 * *(unsigned __int8 *)(*v99 + 1LL) + 15) & 0xFFFFFFF8;
        v95 += (4 * *(unsigned __int8 *)(v99[2] + 1LL) + 15) & 0xFFFFFFF8;
        v99 += 4;
        --v101;
      }
      while ( v101 );
      v98 = v248;
      if ( v97 < v248 )
      {
        v103 = Src.Sid;
        goto LABEL_124;
      }
      v96 = v241;
LABEL_121:
      if ( v97 < v98 )
      {
        v103 = (_QWORD *)*((_QWORD *)v15 + 20);
        v102 = v97;
LABEL_124:
        v96 = (_DWORD)v250 + ((4 * *(unsigned __int8 *)(v103[2 * v102] + 1LL) + 15) & 0xFFFFFFF8);
      }
      v104 = 0;
      v105 = 0;
      v241 = v94 + v95 + v96;
      v106 = (unsigned int)v249;
      SessionId = (unsigned int)v249;
      v107 = 0;
      v108 = (unsigned int)Handle;
      if ( (unsigned int)Handle < 2 )
        goto LABEL_130;
      Src.Sid = (PSID)*((_QWORD *)v15 + 99);
      v109 = Src.Sid;
      v110 = ((unsigned int)((_DWORD)Handle - 2) >> 1) + 1;
      v111 = v110;
      v107 = 2 * v110;
      v112 = 2LL * v110;
      do
      {
        v104 += (4 * *(unsigned __int8 *)(*v109 + 1LL) + 15) & 0xFFFFFFF8;
        v105 += (4 * *(unsigned __int8 *)(v109[2] + 1LL) + 15) & 0xFFFFFFF8;
        v109 += 4;
        --v111;
      }
      while ( v111 );
      v108 = (unsigned int)Handle;
      if ( v107 < (unsigned int)Handle )
      {
        v113 = Src.Sid;
        goto LABEL_133;
      }
      v106 = SessionId;
LABEL_130:
      if ( v107 < v108 )
      {
        v113 = (_QWORD *)*((_QWORD *)v15 + 99);
        v112 = v107;
LABEL_133:
        v106 = (_DWORD)v249 + ((4 * *(unsigned __int8 *)(v113[2 * v112] + 1LL) + 15) & 0xFFFFFFF8);
      }
      SessionId = v104 + v105 + v106;
      LODWORD(Src.Sid) = 0;
      v114 = *((_QWORD *)v15 + 98);
      if ( v114 )
        LODWORD(Src.Sid) = (4 * *(unsigned __int8 *)(v114 + 1) + 15) & 0xFFFFFFF8;
      v115 = v238;
      v116 = (unsigned __int8 *)v240;
      if ( !(_BYTE)v238 )
        v116 = (unsigned __int8 *)*((_QWORD *)v15 + 138);
      v245[0] = 0;
      if ( v116 )
        v245[0] = (4 * v116[1] + 15) & 0xFFFFFFF8;
      v117 = (unsigned int *)*((_QWORD *)v15 + 97);
      v118 = 0;
      LODWORD(Handle) = 0;
      if ( !v117 )
        goto LABEL_158;
      v119 = 112LL * *v117;
      if ( v119 > 0xFFFFFFFF )
      {
        InternalSecurityAttributeValueCopyoutBufferSize = -1073741675;
        goto LABEL_155;
      }
      v121 = v119 + 48;
      v122 = -1;
      if ( v121 >= 0x30 )
        v122 = v121;
      InternalSecurityAttributeValueCopyoutBufferSize = v121 < 0x30 ? 0xC0000095 : 0;
      if ( v121 < 0x30 )
        goto LABEL_155;
      IntegritySA.Sid = v117 + 2;
      v123 = (void **)*((_QWORD *)v117 + 1);
      if ( v123 == (void **)(v117 + 2) )
      {
LABEL_153:
        v118 = v122;
LABEL_155:
        v115 = v238;
        if ( InternalSecurityAttributeValueCopyoutBufferSize >= 0 )
          LODWORD(v9) = v118;
        goto LABEL_158;
      }
      while ( 1 )
      {
        v124 = (v122 + 1) & 0xFFFFFFFE;
        if ( v124 < v122 )
          break;
        v125 = v124 + *((unsigned __int16 *)v123 + 16);
        v126 = -1;
        if ( v125 >= v124 )
          v126 = v124 + *((unsigned __int16 *)v123 + 16);
        v248 = v126;
        InternalSecurityAttributeValueCopyoutBufferSize = v125 < v124 ? 0xC0000095 : 0;
        if ( v125 < v124
          || (InternalSecurityAttributeValueCopyoutBufferSize = AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(
                                                                  (__int64)v123,
                                                                  &v248),
              InternalSecurityAttributeValueCopyoutBufferSize < 0) )
        {
          v118 = (unsigned int)Handle;
          goto LABEL_155;
        }
        v123 = (void **)*v123;
        v122 = v248;
        if ( v123 == IntegritySA.Sid )
          goto LABEL_153;
      }
      v115 = v238;
LABEL_158:
      v127 = v245[0];
      v128 = SessionId;
      v129 = (int)Src.Sid;
      v130 = v241;
      v131 = v253[0];
      v132 = v241 + LODWORD(Src.Sid) + SessionId + v245[0] + v9 + (_DWORD)RemainingSidArea + v253[0] + 904;
      *v12 = v132;
      if ( TokenInformationLength < v132 )
      {
LABEL_9:
        v17 = (struct _ERESOURCE *)*((_QWORD *)v15 + 6);
LABEL_10:
        ExReleaseResourceLite(v17);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
LABEL_11:
        v21 = Object;
LABEL_12:
        ObfDereferenceObjectWithTag(v21, 0x74726853u);
        return -1073741789;
      }
      else
      {
        SepCopyTokenAccessInformation(
          (int)v15,
          (int)TokenInformation,
          TokenInformationLength,
          v79,
          v131,
          Flags[0].Flags,
          v130,
          (int)v250,
          v129,
          v128,
          (int)v249,
          v127,
          v9,
          v115,
          v240);
LABEL_15:
        v22 = (struct _ERESOURCE *)*((_QWORD *)v15 + 6);
LABEL_16:
        ExReleaseResourceLite(v22);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
LABEL_17:
        v21 = Object;
LABEL_18:
        ObfDereferenceObjectWithTag(v21, 0x74726853u);
        return 0;
      }
    case TokenVirtualizationAllowed:
    case TokenVirtualizationEnabled:
    case TokenUIAccess:
    case TokenIsAppContainer:
    case TokenIsRestricted:
    case TokenPrivateNameSpace:
    case TokenIsSandboxed:
    case TokenIsAppSilo:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      v52 = Object;
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationAllowed:
          v180 = *((_DWORD *)Object + 50) >> 9;
          break;
        case TokenVirtualizationEnabled:
          v180 = *((_DWORD *)Object + 50) >> 10;
          break;
        case TokenUIAccess:
          v180 = *((_DWORD *)Object + 50) >> 12;
          break;
        case TokenIsRestricted:
          LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x18) != 0;
          goto LABEL_265;
        case TokenPrivateNameSpace:
          LOWORD(v180) = *((_WORD *)Object + 101);
          break;
        case TokenIsSandboxed:
          LODWORD(v9) = SepIsSandboxedToken(Object, PreviousMode);
          goto LABEL_265;
        case TokenIsAppSilo:
          LODWORD(v9) = SepSidInTokenSidHash((__int64)Object + 808, 0LL, (unsigned __int8 *)SeAppSiloSid, 0, 1, 0);
          goto LABEL_265;
        default:
          v180 = *((_DWORD *)Object + 50) >> 14;
          break;
      }
      LODWORD(v9) = v180 & 1;
LABEL_265:
      *(_DWORD *)TokenInformation = v9;
LABEL_75:
      ObfDereferenceObjectWithTag(v52, 0x74726853u);
      return 0;
    case TokenIntegrityLevel:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v195 = KeGetCurrentThread();
      --v195->KernelApcDisable;
      v15 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      SepCopyTokenIntegrity((__int64)v15, (__int64)&Src);
      v196 = (unsigned __int8 *)Src.Sid;
      v197 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
      *v12 = v197;
      if ( TokenInformationLength < v197 )
        goto LABEL_9;
      RtlCopySidAndAttributesArray(
        1u,
        &Src,
        4 * v196[1] + 8,
        (PSID_AND_ATTRIBUTES)TokenInformation,
        (char *)TokenInformation + 16,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_15;
    case TokenMandatoryPolicy:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      MandatoryPolicyToken = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
      SecurityAttributesToken = MandatoryPolicyToken;
      ObfDereferenceObjectWithTag(v199, 0x74726853u);
      return MandatoryPolicyToken;
    case TokenLogonSid:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v200 = KeGetCurrentThread();
      --v200->KernelApcDisable;
      v15 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v201 = 0LL;
      v202 = *((_DWORD *)v15 + 31);
      if ( !v202 )
        goto LABEL_299;
      v203 = *((_QWORD *)v15 + 19);
      while ( (*(_DWORD *)(v203 + 16LL * (unsigned int)v201 + 8) & 0xC0000000) != 0xC0000000 )
      {
        v201 = (unsigned int)(v201 + 1);
        if ( (unsigned int)v201 >= v202 )
          goto LABEL_299;
      }
      v9 = *(_QWORD *)(v203 + 16LL * (unsigned int)v201);
LABEL_299:
      if ( !v9 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v204, v205, v206);
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return -1073741275;
      }
      v207 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v15 + 19) + 16LL * (unsigned int)v201) + 1LL) + 32;
      *v12 = v207;
      if ( TokenInformationLength < v207 )
        goto LABEL_9;
      *(_DWORD *)TokenInformation = 1;
      RtlCopySidAndAttributesArray(
        1u,
        (PSID_AND_ATTRIBUTES)(*((_QWORD *)v15 + 19) + 16 * v201),
        4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v15 + 19) + 16 * v201) + 1LL) + 8,
        (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
        (char *)TokenInformation + 24,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_15;
    case TokenCapabilities:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v190 = KeGetCurrentThread();
      --v190->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v191 = v27[200];
      v192 = 16 * v191 + 8;
      if ( v191 )
      {
        v193 = *((_QWORD *)v27 + 99);
        v194 = v191;
        do
        {
          v192 += 4 * *(unsigned __int8 *)(*(_QWORD *)v193 + 1LL) + 8;
          v193 += 16LL;
          --v194;
        }
        while ( v194 );
      }
      *v12 = v192;
      if ( TokenInformationLength < v192 )
        goto LABEL_24;
      *(_DWORD *)TokenInformation = v27[200];
      RtlCopySidAndAttributesArray(
        v27[200],
        *((PSID_AND_ATTRIBUTES *)v27 + 99),
        v192,
        (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
        (char *)TokenInformation + 16 * v27[200] + 8,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_26;
    case TokenAppContainerSid:
      v187 = 8;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v188 = KeGetCurrentThread();
      --v188->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v189 = (unsigned __int8 *)*((_QWORD *)v27 + 98);
      if ( v189 )
        v187 = 4 * v189[1] + 16;
      *v12 = v187;
      if ( TokenInformationLength < v187 )
        goto LABEL_24;
      if ( v189 )
        v189 = (unsigned __int8 *)TokenInformation + 8;
      *(_QWORD *)TokenInformation = v189;
      if ( v189 )
        RtlCopySid(v187 - 8, v189, *((PSID *)v27 + 98));
      goto LABEL_26;
    case TokenAppContainerNumber:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      v181 = KeGetCurrentThread();
      --v181->KernelApcDisable;
      v182 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v183 = *((_QWORD *)v182 + 135);
      if ( v183 )
        LODWORD(v9) = *(_DWORD *)(v183 + 40);
      ExReleaseResourceLite(*((PERESOURCE *)v182 + 6));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v184, v185, v186);
      *(_DWORD *)TokenInformation = v9;
      goto LABEL_17;
    case TokenUserClaimAttributes:
    case TokenDeviceClaimAttributes:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v208 = KeGetCurrentThread();
      --v208->KernelApcDisable;
      v209 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v210 = *((_QWORD *)v209 + 137);
      if ( v210
        && ((v211 = *(__int128 **)(v210 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
        && ((v212 = *(__int128 **)(v210 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
      {
        if ( TokenInformationClass == TokenUserClaimAttributes )
          v212 = v211;
        AuthzBasepQueryClaimAttributesToken(v212, 0LL, 0, &v241);
        v213 = v241;
      }
      else
      {
        v213 = 16;
        *(_QWORD *)&v257 = (char *)&v256 + 8;
        *((_QWORD *)&v256 + 1) = (char *)&v256 + 8;
        DWORD2(v257) = 0;
        *((_QWORD *)&v258 + 1) = &v258;
        *(_QWORD *)&v258 = &v258;
        v212 = &v256;
      }
      *v12 = v213;
      if ( TokenInformationLength < v213 )
      {
        v17 = (struct _ERESOURCE *)*((_QWORD *)v209 + 6);
        goto LABEL_10;
      }
      SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(
                                  v212,
                                  TokenInformation,
                                  TokenInformationLength,
                                  &v241);
      v214 = (struct _ERESOURCE *)*((_QWORD *)v209 + 6);
LABEL_316:
      ExReleaseResourceLite(v214);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v215, v216, v217);
      ObfDereferenceObjectWithTag(Object, 0x74726853u);
      return SecurityAttributesToken;
    case TokenDeviceGroups:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v218 = KeGetCurrentThread();
      --v218->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v219 = *((_QWORD *)v27 + 137);
      if ( v219 && (v220 = *(_DWORD *)v219) != 0 )
      {
        v221 = 16 * v220 + 8;
      }
      else
      {
        v220 = 0;
        v221 = 24;
      }
      if ( v220 )
      {
        v222 = *(_QWORD *)(v219 + 8);
        v223 = v220;
        do
        {
          v221 += 4 * *(unsigned __int8 *)(*(_QWORD *)v222 + 1LL) + 8;
          v222 += 16LL;
          --v223;
        }
        while ( v223 );
      }
      *v12 = v221;
      if ( TokenInformationLength < v221 )
        goto LABEL_24;
      *(_OWORD *)TokenInformation = 0LL;
      *((_QWORD *)TokenInformation + 2) = 0LL;
      *(_DWORD *)TokenInformation = v220;
      if ( v220 )
        RtlCopySidAndAttributesArray(
          v220,
          *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v27 + 137) + 8LL),
          v221,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v220 + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
      goto LABEL_26;
    case TokenSecurityAttributes:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v224 = KeGetCurrentThread();
      --v224->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v225 = (unsigned int *)*((_QWORD *)v27 + 97);
      if ( v225 )
      {
        AuthzBasepQuerySecurityAttributesToken(v225, 0LL, 0, 0LL, 0, &v241);
        v226 = v241;
      }
      else
      {
        v226 = 16;
      }
      *v12 = v226;
      if ( TokenInformationLength < v226 )
        goto LABEL_24;
      SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                  *((unsigned int **)v27 + 97),
                                  0LL,
                                  0,
                                  TokenInformation,
                                  TokenInformationLength,
                                  &v241);
LABEL_335:
      v214 = (struct _ERESOURCE *)*((_QWORD *)v27 + 6);
      goto LABEL_316;
    case TokenProcessTrustLevel:
      v227 = 8;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v228 = KeGetCurrentThread();
      --v228->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v229 = v238;
      v230 = v240;
      v231 = (unsigned __int8 *)v240;
      if ( !(_BYTE)v238 )
        v231 = (unsigned __int8 *)*((_QWORD *)v27 + 138);
      if ( v231 )
        v227 = 4 * v231[1] + 16;
      *v12 = v227;
      if ( TokenInformationLength < v227 )
        goto LABEL_24;
      if ( v231 )
        v231 = (unsigned __int8 *)TokenInformation + 8;
      *(_QWORD *)TokenInformation = v231;
      if ( v231 )
      {
        if ( !v229 )
          v230 = (void *)*((_QWORD *)v27 + 138);
        RtlCopySid(v227 - 8, v231, v230);
      }
      goto LABEL_26;
    case TokenSingletonAttributes:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v232 = KeGetCurrentThread();
      --v232->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      LODWORD(RemainingSidAreaSize) = TokenInformationLength;
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                  (__int64)v27,
                                  v233,
                                  0LL,
                                  0,
                                  1,
                                  TokenInformation,
                                  (size_t)RemainingSidAreaSize,
                                  v12);
      goto LABEL_335;
    case TokenBnoIsolation:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v238, &v240);
      if ( result < 0 )
        return result;
      v234 = KeGetCurrentThread();
      --v234->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v235 = 16;
      v236 = *((_QWORD *)v27 + 144);
      if ( v236 )
        v235 = *(unsigned __int16 *)(v236 + 42) + 16;
      *v12 = v235;
      if ( TokenInformationLength < v235 )
      {
LABEL_24:
        v17 = (struct _ERESOURCE *)*((_QWORD *)v27 + 6);
        goto LABEL_10;
      }
      if ( *((_QWORD *)v27 + 144) )
      {
        *((_BYTE *)TokenInformation + 8) = 1;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
        memmove(
          (char *)TokenInformation + 16,
          *(const void **)(*((_QWORD *)v27 + 144) + 48LL),
          *(unsigned __int16 *)(*((_QWORD *)v27 + 144) + 42LL));
      }
      else
      {
        *((_BYTE *)TokenInformation + 8) = 0;
        *(_QWORD *)TokenInformation = 0LL;
      }
LABEL_26:
      v22 = (struct _ERESOURCE *)*((_QWORD *)v27 + 6);
      goto LABEL_16;
    default:
      return -1073741821;
  }
}
