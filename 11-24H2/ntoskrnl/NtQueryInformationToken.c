/*
 * XREFs of NtQueryInformationToken @ 0x140AD3370
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405E8DB0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140358240 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140358820 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepReferenceTokenByHandle @ 0x140359440 (SepReferenceTokenByHandle.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     SepSidInTokenSidHash @ 0x1403DF2C0 (SepSidInTokenSidHash.c)
 *     SeQueryTokenIntegrity @ 0x140419484 (SeQueryTokenIntegrity.c)
 *     SepCopyTokenIntegrity @ 0x1404194A0 (SepCopyTokenIntegrity.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140424630 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x140428B80 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x1404316C0 (SeQueryMandatoryPolicyToken.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140446E44 (SepDeReferenceLogonSessionDirect.c)
 *     SepGetTokenElevation @ 0x1404478C8 (SepGetTokenElevation.c)
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     SepIsSandboxedToken @ 0x140451CC8 (SepIsSandboxedToken.c)
 *     SepConvertTokenPrivileges @ 0x14045AC48 (SepConvertTokenPrivileges.c)
 *     RtlSubAuthorityCountSid @ 0x1404600D0 (RtlSubAuthorityCountSid.c)
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x1404609F0 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 *     SepGetTokenElevationType @ 0x14046F484 (SepGetTokenElevationType.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E4B64 (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406082E8 (Feature_2045735225__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateToken @ 0x140856520 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     RtlCopySid @ 0x140910120 (RtlCopySid.c)
 *     RtlQueryElevationFlags @ 0x140911360 (RtlQueryElevationFlags.c)
 *     RtlCopySidAndAttributesArray @ 0x1409A7A90 (RtlCopySidAndAttributesArray.c)
 *     SepCopyTokenAccessInformation @ 0x1409E2D6C (SepCopyTokenAccessInformation.c)
 *     SeQuerySessionIdToken @ 0x1409FBF70 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A07290 (AuthzBasepQueryClaimAttributesToken.c)
 *     SepReferenceLogonSessionSilo @ 0x140A31B44 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x140A50448 (SeSetSessionIdToken.c)
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
  _QWORD *v27; // rbx
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
  unsigned int v56; // r10d
  unsigned int v57; // r8d
  unsigned int v58; // eax
  _QWORD *v59; // rdx
  __int64 v60; // r9
  __int64 v61; // r11
  __int64 v62; // rcx
  int v63; // r10d
  int v64; // r11d
  __int64 v65; // r8
  unsigned int v66; // edi
  unsigned int v67; // r13d
  __int64 v68; // rax
  _QWORD *v69; // rdx
  __int64 v70; // r9
  __int64 v71; // rcx
  unsigned int v72; // r13d
  int v73; // edx
  ULONG v74; // ecx
  char *v75; // r9
  __int64 v76; // rdi
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
  unsigned int v88; // ecx
  unsigned int v89; // eax
  _QWORD *v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r11
  _QWORD *v93; // rcx
  int v94; // r11d
  int v95; // ebx
  unsigned int v96; // edx
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
  __int64 v116; // rax
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
  unsigned int v129; // r9d
  unsigned int v130; // r10d
  unsigned int v131; // ebx
  ULONG v132; // ecx
  int v133; // r9d
  struct _KTHREAD *v134; // rax
  bool v135; // bl
  int IsEnabledDeviceUsageNoInline; // eax
  PVOID v137; // r15
  __int64 v138; // rbx
  __int64 v139; // rbx
  NTSTATUS v140; // r12d
  __int64 v141; // r8
  __int64 v142; // r9
  NTSTATUS v143; // ebx
  PVOID v144; // rbx
  NTSTATUS v145; // edi
  _QWORD *v146; // r12
  __int64 v147; // rbx
  unsigned __int64 v148; // rax
  int v149; // edi
  int v150; // ecx
  __int64 v151; // rbx
  struct _KTHREAD *v152; // rax
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // r9
  PSID **PrimaryToken; // rbx
  __int64 v157; // rdi
  struct _KTHREAD *v158; // rax
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  PSID Sid; // rbx
  int v163; // r12d
  const wchar_t *v164; // r15
  unsigned __int16 *v165; // r8
  unsigned __int16 v166; // r9
  struct _LIST_ENTRY *Flink; // r10
  unsigned __int64 v168; // rax
  __int64 v169; // rcx
  unsigned __int16 *v170; // r11
  unsigned __int16 *v171; // rdi
  unsigned __int64 v172; // rbx
  unsigned __int64 v173; // r8
  unsigned __int64 v174; // r9
  unsigned int v175; // ebx
  int v176; // eax
  int v177; // r9d
  _QWORD *v178; // rdi
  __int64 v179; // rdx
  NTSTATUS v180; // ebx
  int v181; // eax
  _QWORD *v182; // r15
  __int64 v183; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  NTSTATUS inserted; // ebx
  struct _KTHREAD *v186; // rax
  PERESOURCE *v187; // rdi
  int TokenElevation; // ebx
  __int64 v189; // rdx
  __int64 v190; // r8
  __int64 v191; // r9
  int v192; // esi
  struct _KTHREAD *v193; // rax
  PVOID v194; // rbx
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // r8
  __int64 v198; // r9
  ULONG v199; // edi
  struct _KTHREAD *v200; // rax
  unsigned __int8 *v201; // rdx
  struct _KTHREAD *v202; // rax
  unsigned int v203; // ecx
  ULONG v204; // r8d
  __int64 v205; // rdx
  __int64 v206; // r9
  struct _KTHREAD *v207; // rax
  __int64 v208; // rdx
  ULONG v209; // eax
  NTSTATUS MandatoryPolicyToken; // ebx
  PVOID v211; // rcx
  struct _KTHREAD *v212; // rax
  __int64 v213; // rdx
  unsigned int v214; // r8d
  __int64 v215; // r9
  __int64 v216; // rdx
  __int64 v217; // r8
  __int64 v218; // r9
  ULONG v219; // eax
  struct _KTHREAD *v220; // rax
  PVOID v221; // r13
  __int64 v222; // rbx
  __int128 *v223; // rcx
  __int128 *v224; // rbx
  ULONG v225; // edi
  struct _ERESOURCE *v226; // rcx
  __int64 v227; // rdx
  __int64 v228; // r8
  __int64 v229; // r9
  struct _KTHREAD *v230; // rax
  __int64 v231; // rdx
  unsigned int v232; // r11d
  ULONG v233; // r8d
  __int64 v234; // rdx
  __int64 v235; // r9
  struct _KTHREAD *v236; // rax
  unsigned int *v237; // rcx
  ULONG v238; // edi
  ULONG v239; // edi
  struct _KTHREAD *v240; // rax
  char v241; // cl
  void *v242; // r8
  unsigned __int8 *v243; // rdx
  struct _KTHREAD *v244; // rax
  PERESOURCE *v245; // rbx
  char v246; // dl
  struct _KTHREAD *v247; // rax
  PVOID v248; // rbx
  ULONG v249; // edi
  __int64 v250; // rax
  size_t Size; // [rsp+30h] [rbp-1A8h]
  __int64 v252; // [rsp+80h] [rbp-158h] BYREF
  PVOID Object; // [rsp+88h] [rbp-150h] BYREF
  __int64 v254; // [rsp+90h] [rbp-148h] BYREF
  int v255; // [rsp+98h] [rbp-140h] BYREF
  __int64 v256; // [rsp+A0h] [rbp-138h] BYREF
  bool v257; // [rsp+A8h] [rbp-130h]
  ULONG SessionId; // [rsp+ACh] [rbp-12Ch] BYREF
  HANDLE v259; // [rsp+B0h] [rbp-128h] BYREF
  PVOID v260; // [rsp+B8h] [rbp-120h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-118h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+C8h] [rbp-110h]
  unsigned int v263; // [rsp+CCh] [rbp-10Ch] BYREF
  HANDLE v264; // [rsp+D0h] [rbp-108h] BYREF
  PVOID v265; // [rsp+D8h] [rbp-100h] BYREF
  PVOID v266; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v267; // [rsp+E8h] [rbp-F0h]
  int v268; // [rsp+F0h] [rbp-E8h]
  struct _SID_AND_ATTRIBUTES IntegritySA; // [rsp+F8h] [rbp-E0h] BYREF
  __int128 v270; // [rsp+108h] [rbp-D0h] BYREF
  __int128 v271; // [rsp+118h] [rbp-C0h]
  __int128 v272; // [rsp+128h] [rbp-B0h]
  __int128 v273; // [rsp+138h] [rbp-A0h] BYREF
  __int128 v274; // [rsp+148h] [rbp-90h]
  __int128 v275; // [rsp+158h] [rbp-80h] BYREF
  __int128 v276; // [rsp+168h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+178h] [rbp-60h] BYREF
  __int128 v278; // [rsp+198h] [rbp-40h]

  v9 = 0LL;
  Object = 0LL;
  v255 = 0;
  v267 = 0LL;
  v276 = 0LL;
  v256 = 0LL;
  SessionId = 0;
  v278 = 0LL;
  v273 = 0LL;
  v274 = 0LL;
  v275 = 0LL;
  LOBYTE(v252) = 0;
  v254 = 0LL;
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
    case -2:
      if ( !(unsigned int)Feature_2045735225__private_IsEnabledDeviceUsageNoInline() )
        return -1073741821;
      v264 = 0LL;
      v259 = 0LL;
      v260 = 0LL;
      DWORD1(v270) = 0;
      HIDWORD(v271) = 0;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741821;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v177, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 8;
      if ( TokenInformationLength != 8 )
        goto LABEL_172;
      if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      {
        v21 = Object;
        goto LABEL_381;
      }
      LODWORD(Handle) = 0;
      RtlQueryElevationFlags((int *)&Handle);
      v178 = Object;
      if ( ((unsigned __int8)Handle & 0x18) != 0x10
        || (unsigned int)SepGetTokenElevationType((__int64)Object) != 2
        || (v179 = v178[27], !*(_QWORD *)(v179 + 24)) )
      {
        v21 = v178;
        goto LABEL_381;
      }
      v180 = SepReferenceLogonSessionSilo((_DWORD *)(v179 + 24), *(_QWORD *)(v179 + 168), (__int64 *)&v264);
      if ( v180 < 0 )
        goto LABEL_254;
      LODWORD(v270) = 48;
      *((_QWORD *)&v270 + 1) = 0LL;
      v181 = 0;
      if ( !PreviousMode )
        v181 = 512;
      DWORD2(v271) = v181;
      *(_QWORD *)&v271 = 0LL;
      v272 = 0LL;
      SeQuerySessionIdToken(v178, &SessionId);
      v182 = v264;
      v180 = SeSetSessionIdToken(*((PACCESS_TOKEN *)v264 + 7), SessionId);
      if ( v180 < 0 )
      {
        SepDeReferenceLogonSessionDirect(v182);
LABEL_254:
        ObfDereferenceObjectWithTag(v178, 0x74726853u);
        return v180;
      }
      v180 = SepDuplicateToken(v182[7], (int)&v270, 0, 1, 1u, 0, 0, &v260);
      SepDeReferenceLogonSessionDirect(v182);
      if ( v180 < 0 )
        goto LABEL_254;
      v183 = *((_QWORD *)v260 + 27);
      CurrentServerSilo = PsGetCurrentServerSilo();
      inserted = SepReferenceLogonSessionSilo((_DWORD *)(v183 + 16), CurrentServerSilo, (__int64 *)&IntegritySA);
      if ( inserted < 0
        || (*((_DWORD *)v260 + 50) |= 0x10000000u,
            inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v260, 0LL, 983551, 0, 0, 0LL, (__int64)&v259),
            inserted < 0) )
      {
        ObfDereferenceObject(v260);
        ObfDereferenceObjectWithTag(v178, 0x74726853u);
        return inserted;
      }
      else
      {
        *(_QWORD *)TokenInformation = v259;
        ObfDereferenceObjectWithTag(v178, 0x74726853u);
        return 0;
      }
    case 1:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
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
          *((_QWORD *)v15 + 19),
          v16,
          (__int64)TokenInformation,
          (char *)TokenInformation + 16,
          &v256,
          (unsigned int *)&v256);
        goto LABEL_15;
      }
      return result;
    case 2:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        v27 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v28 = *((_DWORD *)v27 + 31);
        v29 = 16 * v28 - 8;
        if ( v28 > 1 )
        {
          v30 = v27[19] + 16LL;
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
          *(_DWORD *)TokenInformation = *((_DWORD *)v27 + 31) - 1;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)v27 + 31) - 1,
            v27[19] + 16LL,
            v29,
            (__int64)TokenInformation + 8,
            (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v27 + 31) - 32) + 24,
            &v256,
            (unsigned int *)&v256);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case 3:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        v37 = KeGetCurrentThread();
        --v37->KernelApcDisable;
        v27 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v38 = SepTokenPrivilegeCount((__int64)v27);
        if ( v38 <= 1 )
          v39 = 16;
        else
          v39 = 12 * v38 + 4;
        *v12 = v39;
        if ( TokenInformationLength >= v39 )
        {
          SepConvertTokenPrivileges(v27, TokenInformation);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case 4:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        v40 = KeGetCurrentThread();
        --v40->KernelApcDisable;
        v27 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v41 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v27[19] + 16LL * *((unsigned int *)v27 + 36)) + 1LL) + 16;
        *v12 = v41;
        if ( TokenInformationLength < v41 )
          goto LABEL_24;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
        RtlCopySid(v41 - 8, (char *)TokenInformation + 8, *(PSID *)(v27[19] + 16LL * *((unsigned int *)v27 + 36)));
        goto LABEL_26;
      }
      return result;
    case 5:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        v42 = KeGetCurrentThread();
        --v42->KernelApcDisable;
        v27 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v43 = 4 * *(unsigned __int8 *)(v27[21] + 1LL) + 16;
        *v12 = v43;
        if ( TokenInformationLength < v43 )
          goto LABEL_24;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
        RtlCopySid(v43 - 8, (char *)TokenInformation + 8, (PSID)v27[21]);
        goto LABEL_26;
      }
      return result;
    case 6:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        v255 = 8;
        v44 = KeGetCurrentThread();
        --v44->KernelApcDisable;
        v27 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v45 = v27[23];
        if ( v45 )
          v46 = *(unsigned __int16 *)(v45 + 2) + 8;
        else
          v46 = v255;
        *v12 = v46;
        if ( TokenInformationLength >= v46 )
        {
          v47 = (char *)TokenInformation + 8;
          if ( v27[23] )
          {
            *(_QWORD *)TokenInformation = v47;
            memmove(v47, (const void *)v27[23], *(unsigned __int16 *)(v27[23] + 2LL));
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
    case 7:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 0x10u,
                 PreviousMode,
                 TokenInformationLength,
                 &Object,
                 &v252,
                 &v254);
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
    case 8:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
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
    case 9:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        v21 = Object;
        if ( *((_DWORD *)Object + 48) != 2 )
        {
LABEL_381:
          ObfDereferenceObjectWithTag(v21, 0x74726853u);
          return -1073741821;
        }
        *v12 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_12;
        *(_DWORD *)TokenInformation = v21[49];
        goto LABEL_18;
      }
      return result;
    case 10:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        *v12 = 56;
        if ( TokenInformationLength < 0x38 )
          goto LABEL_11;
        v49 = KeGetCurrentThread();
        --v49->KernelApcDisable;
        v27 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v268 = 0;
        *(_QWORD *)TokenInformation = v27[2];
        *((_QWORD *)TokenInformation + 1) = v27[3];
        *((_QWORD *)TokenInformation + 2) = v27[5];
        *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v27 + 48);
        *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v27 + 49);
        *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v27 + 34);
        v50 = *((_DWORD *)v27 + 34) - 4 * *(unsigned __int8 *)(v27[21] + 1LL) - 8;
        v268 = v50;
        v51 = v27[23];
        if ( v51 )
        {
          v50 -= *(unsigned __int16 *)(v51 + 2);
          v268 = v50;
        }
        *((_DWORD *)TokenInformation + 9) = v50;
        *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v27 + 31) - 1;
        *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v27);
        *((_QWORD *)TokenInformation + 6) = v27[7];
        goto LABEL_26;
      }
      return result;
    case 11:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        v27 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v33 = *((_DWORD *)v27 + 32);
        v34 = 16 * v33 + 8;
        if ( v33 )
        {
          v35 = v27[20];
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
          *(_DWORD *)TokenInformation = *((_DWORD *)v27 + 32);
          RtlCopySidAndAttributesArray(
            *((_DWORD *)v27 + 32),
            v27[20],
            v34,
            (__int64)TokenInformation + 8,
            (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v27 + 32)) + 8,
            &v256,
            (unsigned int *)&v256);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case 12:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result >= 0 )
      {
        *v12 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_11;
        v52 = Object;
        SeQuerySessionIdToken(Object, &SessionId);
        *(_DWORD *)TokenInformation = SessionId;
        *v12 = 4;
        goto LABEL_74;
      }
      return result;
    case 13:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v53 = 0;
      v54 = 0;
      v55 = KeGetCurrentThread();
      --v55->KernelApcDisable;
      v27 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      LODWORD(v259) = SepTokenPrivilegeCount((__int64)v27);
      LODWORD(v260) = 12 * (_DWORD)v259;
      v56 = *((_DWORD *)v27 + 31);
      LODWORD(v266) = 16 * v56;
      v57 = 16 * v56;
      v58 = 0;
      if ( v56 < 2 )
        goto LABEL_80;
      v254 = v27[19];
      v59 = (_QWORD *)v254;
      v60 = ((v56 - 2) >> 1) + 1;
      LODWORD(Handle) = 2 * v60;
      v61 = 2 * v60;
      do
      {
        v53 += (4 * *(unsigned __int8 *)(*v59 + 1LL) + 15) & 0xFFFFFFF8;
        v54 += (4 * *(unsigned __int8 *)(v59[2] + 1LL) + 15) & 0xFFFFFFF8;
        v59 += 4;
        --v60;
      }
      while ( v60 );
      v58 = (unsigned int)Handle;
      if ( (unsigned int)Handle < v56 )
      {
        v62 = v254;
      }
      else
      {
LABEL_80:
        if ( v58 >= v56 )
        {
LABEL_84:
          v63 = 0;
          v64 = 0;
          v65 = v53 + v54 + v57;
          v66 = *((_DWORD *)v27 + 32);
          LODWORD(v265) = 16 * v66;
          v67 = 16 * v66;
          v68 = 0LL;
          if ( v66 < 2 )
            goto LABEL_88;
          v256 = v27[20];
          v69 = (_QWORD *)v256;
          v70 = ((v66 - 2) >> 1) + 1;
          LODWORD(Handle) = 2 * v70;
          v254 = 2 * v70;
          do
          {
            v63 += (4 * *(unsigned __int8 *)(*v69 + 1LL) + 15) & 0xFFFFFFF8;
            v64 += (4 * *(unsigned __int8 *)(v69[2] + 1LL) + 15) & 0xFFFFFFF8;
            v69 += 4;
            --v70;
          }
          while ( v70 );
          v68 = (unsigned int)Handle;
          if ( (unsigned int)Handle < v66 )
          {
            v68 = v254;
            v71 = v256;
          }
          else
          {
LABEL_88:
            if ( (unsigned int)v68 >= v66 )
            {
LABEL_92:
              v72 = v63 + v64 + v67;
              v73 = (int)v260;
              v74 = v65 + v72 + (_DWORD)v260 + 56;
              *v12 = v74;
              if ( TokenInformationLength < v74 )
                goto LABEL_24;
              *((_QWORD *)TokenInformation + 6) = v27[3];
              *((_DWORD *)TokenInformation + 1) = v65;
              *(_DWORD *)TokenInformation = *((_DWORD *)v27 + 31);
              v75 = (char *)TokenInformation + 56;
              *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
              *((_DWORD *)TokenInformation + 5) = v72;
              *((_DWORD *)TokenInformation + 4) = *((_DWORD *)v27 + 32);
              if ( *((_DWORD *)v27 + 32) )
              {
                v76 = (__int64)&v75[(v65 + 7) & 0xFFFFFFFFFFFFFFF8uLL];
                *((_QWORD *)TokenInformation + 3) = v76;
              }
              else
              {
                *((_QWORD *)TokenInformation + 3) = 0LL;
                v76 = v267;
              }
              *((_DWORD *)TokenInformation + 9) = v73;
              *((_DWORD *)TokenInformation + 8) = (_DWORD)v259;
              v77 = (__int64)&v75[(unsigned int)v65 + (unsigned __int64)v72];
              *((_QWORD *)TokenInformation + 5) = v77;
              RtlCopySidAndAttributesArray(
                *((_DWORD *)v27 + 31),
                v27[19],
                v65 - (_DWORD)v266,
                (__int64)v75,
                &v75[(unsigned int)v266],
                &v256,
                (unsigned int *)&v256);
              if ( v76 )
                RtlCopySidAndAttributesArray(
                  *((_DWORD *)v27 + 32),
                  v27[20],
                  v72 - (_DWORD)v265,
                  v76,
                  (char *)(v76 + (unsigned int)v265),
                  &v256,
                  (unsigned int *)&v256);
              SepConvertTokenPrivilegesToLuidAndAttributes(v27, v77);
              goto LABEL_26;
            }
            v71 = v27[20];
          }
          v67 = (_DWORD)v265 + ((4 * *(unsigned __int8 *)(*(_QWORD *)(v71 + 16 * v68) + 1LL) + 15) & 0xFFFFFFF8);
          goto LABEL_92;
        }
        v62 = v27[19];
        v61 = v58;
      }
      v57 = (_DWORD)v266 + ((4 * *(unsigned __int8 *)(*(_QWORD *)(v62 + 16 * v61) + 1LL) + 15) & 0xFFFFFFF8);
      goto LABEL_84;
    case 15:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        return -1073741789;
      v21 = Object;
      *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) >> 6) & 1;
      goto LABEL_18;
    case 16:
      if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
        return -1073741727;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v133, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 31;
      if ( TokenInformationLength < 0x1F )
        goto LABEL_11;
      v134 = KeGetCurrentThread();
      --v134->KernelApcDisable;
      v27 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      *(_OWORD *)TokenInformation = *(_OWORD *)(v27 + 11);
      *((_QWORD *)TokenInformation + 2) = v27[13];
      *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v27 + 28);
      *((_WORD *)TokenInformation + 14) = *((_WORD *)v27 + 58);
      *((_BYTE *)TokenInformation + 30) = *((_BYTE *)v27 + 118);
      goto LABEL_26;
    case 17:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 8;
      if ( TokenInformationLength < 8 )
        goto LABEL_11;
      v21 = Object;
      *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
      goto LABEL_18;
    case 18:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      *(_DWORD *)TokenInformation = SepGetTokenElevationType((__int64)Object);
      ObfDereferenceObjectWithTag(v48, 0x74726853u);
      return 0;
    case 19:
      v259 = 0LL;
      v264 = 0LL;
      v265 = 0LL;
      v270 = 0LL;
      v271 = 0LL;
      *(_QWORD *)&v272 = 0LL;
      DWORD2(v272) = 0;
      v257 = 0;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 8;
      if ( TokenInformationLength != 8 )
      {
LABEL_172:
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return -1073741820;
      }
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      {
        LODWORD(Handle) = 0;
        RtlQueryElevationFlags((int *)&Handle);
        v135 = ((unsigned __int8)Handle & 0x18) == 16;
        v257 = v135;
      }
      else
      {
        v135 = 0;
      }
      LOBYTE(v252) = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
      LODWORD(v260) = 2 - ((_BYTE)v252 != 0);
      IsEnabledDeviceUsageNoInline = Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline();
      v137 = Object;
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( v135 && (unsigned int)SepGetTokenElevationType((__int64)Object) == 3 )
        {
          v138 = *((_QWORD *)v137 + 27);
          if ( !*(_QWORD *)(v138 + 16) )
          {
            Handle = 0LL;
            v139 = *(_QWORD *)(v138 + 8);
            v140 = -1073741822;
            if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
              && ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
            {
              v140 = guard_dispatch_icall_no_overrides(v139, &Handle, v141, v142);
              ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
            }
            if ( v140 < 0 )
            {
              ObfDereferenceObjectWithTag(v137, 0x74726853u);
              return v140;
            }
            v266 = 0LL;
            v143 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &v266, 0LL);
            ObCloseHandle(Handle, 0);
            if ( v143 < 0 )
              goto LABEL_194;
            v144 = v266;
            v145 = SepReferenceLogonSessionSilo(
                     (_DWORD *)v266 + 6,
                     *(_QWORD *)(*((_QWORD *)v137 + 27) + 168LL),
                     (__int64 *)&v259);
            ObfDereferenceObject(v144);
            if ( v145 < 0 )
            {
              ObfDereferenceObjectWithTag(v137, 0x74726853u);
              return v145;
            }
            SeQuerySessionIdToken(v137, &SessionId);
            v146 = v259;
            v143 = SeSetSessionIdToken(*((PACCESS_TOKEN *)v259 + 7), SessionId);
            if ( v143 < 0
              || (v146[2] = *(_QWORD *)(*((_QWORD *)v137 + 27) + 8LL),
                  v147 = *((_QWORD *)v137 + 27),
                  v148 = PsGetCurrentServerSilo(),
                  v143 = SepReferenceLogonSessionSilo((_DWORD *)(v147 + 8), v148, (__int64 *)&IntegritySA),
                  v143 < 0) )
            {
              SepDeReferenceLogonSessionDirect(v146);
              goto LABEL_194;
            }
            goto LABEL_197;
          }
        }
        v143 = SepReferenceLogonSessionSilo(
                 (_DWORD *)(*((_QWORD *)v137 + 27) + 16LL),
                 *(_QWORD *)(*((_QWORD *)v137 + 27) + 168LL),
                 (__int64 *)&v259);
        if ( v143 < 0 )
          goto LABEL_194;
      }
      else
      {
        v143 = SepReferenceLogonSessionSilo(
                 (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                 *(_QWORD *)(*((_QWORD *)Object + 27) + 168LL),
                 (__int64 *)&v259);
        if ( v143 < 0 )
          goto LABEL_194;
      }
      v146 = v259;
LABEL_197:
      v149 = 0;
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() && v257 && !(_BYTE)v252 )
      {
        v150 = 0;
        v151 = *(_QWORD *)(*((_QWORD *)v137 + 27) + 56LL);
        if ( v151 )
        {
          v152 = KeGetCurrentThread();
          --v152->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v151 + 48), 1u);
          LODWORD(v256) = *(_DWORD *)(v151 + 200);
          ExReleaseResourceLite(*(PERESOURCE *)(v151 + 48));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v153, v154, v155);
          v137 = Object;
          v146 = v259;
          v150 = v256;
        }
        v149 = 0;
        if ( (v150 & 0x8000000) != 0 )
        {
          LODWORD(Handle) = 0;
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          PrimaryToken = (PSID **)SubjectContext.PrimaryToken;
          v157 = *(_QWORD *)(*((_QWORD *)SubjectContext.PrimaryToken + 27) + 56LL);
          if ( v157 )
          {
            v158 = KeGetCurrentThread();
            --v158->KernelApcDisable;
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v157 + 48), 1u);
            LODWORD(Handle) = *(_DWORD *)(v157 + 200);
            ExReleaseResourceLite(*(PERESOURCE *)(v157 + 48));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v159, v160, v161);
            v137 = Object;
            v146 = v259;
            PrimaryToken = (PSID **)SubjectContext.PrimaryToken;
          }
          v149 = 0;
          if ( ((unsigned int)Handle & 0x8000000) == 0
            || !RtlEqualSid(**((PSID **)v137 + 19), *PrimaryToken[19])
            || (IntegritySA = 0LL, SeQueryTokenIntegrity(PrimaryToken, &IntegritySA), IntegritySA.Attributes != 96)
            || (Sid = IntegritySA.Sid, *RtlSubAuthorityCountSid(IntegritySA.Sid) != 1)
            || *RtlSubAuthoritySid(Sid, 0) != 12288 )
          {
LABEL_231:
            v175 = 1;
            SeReleaseSubjectContext(&SubjectContext);
            goto LABEL_234;
          }
          IntegritySA.Sid = (PSID)KeGetCurrentThread()->ApcState.Process[1].LastRebalanceQpc;
          v163 = 0;
          v164 = L"02";
          while ( 1 )
          {
            Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
            v168 = *v164;
            v169 = *v165;
            if ( (unsigned __int16)v169 >= (unsigned __int16)v168 )
            {
              v170 = (unsigned __int16 *)*((_QWORD *)v164 + 1);
              v171 = &v170[v168 >> 1];
              if ( v170 >= v171 )
              {
LABEL_232:
                v175 = 1;
                v149 = 1;
                v137 = Object;
                v146 = v259;
                SeReleaseSubjectContext(&SubjectContext);
                goto LABEL_234;
              }
              v172 = *((_QWORD *)v165 + 1) + 2 * ((v169 - (unsigned __int64)*v164) >> 1) - (_QWORD)v170;
              while ( 1 )
              {
                v173 = *v170;
                if ( (unsigned int)v173 >= 0x61 )
                {
                  if ( (unsigned int)v173 > 0x7A )
                  {
                    if ( Flink && (unsigned __int16)v173 >= v166 )
                      LOWORD(v173) = *((_WORD *)&Flink->Flink
                                     + (v173 & 0xF)
                                     + *((unsigned __int16 *)&Flink->Flink
                                       + ((unsigned __int8)v173 >> 4)
                                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v173 >> 8))))
                                   + v173;
                  }
                  else
                  {
                    LOWORD(v173) = v173 - 32;
                  }
                }
                v174 = *(unsigned __int16 *)((char *)v170 + v172);
                if ( (unsigned int)v174 >= 0x61 )
                {
                  if ( (unsigned int)v174 > 0x7A )
                  {
                    if ( Flink && (unsigned __int16)v174 >= 0xC0u )
                      LOWORD(v174) = *((_WORD *)&Flink->Flink
                                     + (v174 & 0xF)
                                     + *((unsigned __int16 *)&Flink->Flink
                                       + ((unsigned __int8)v174 >> 4)
                                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v174 >> 8))))
                                   + v174;
                  }
                  else
                  {
                    LOWORD(v174) = v174 - 32;
                  }
                }
                if ( (_WORD)v173 != (_WORD)v174 )
                  break;
                if ( ++v170 >= v171 )
                  goto LABEL_232;
                v166 = 192;
              }
            }
            ++v163;
            v164 += 8;
            if ( v163 )
            {
              v149 = 0;
              v137 = Object;
              v146 = v259;
              goto LABEL_231;
            }
          }
        }
      }
      v175 = 1;
LABEL_234:
      LODWORD(v270) = 48;
      *((_QWORD *)&v270 + 1) = 0LL;
      v176 = 0;
      if ( !PreviousMode )
        v176 = 512;
      DWORD2(v271) = v176;
      *(_QWORD *)&v271 = 0LL;
      v272 = 0LL;
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
        v175 = v149 + 1;
      v143 = SepDuplicateToken(v146[7], (int)&v270, 0, (int)v260, v175, 0, 0, &v265);
      SepDeReferenceLogonSessionDirect(v146);
      if ( v143 >= 0 )
      {
        v143 = ObInsertObjectEx((struct _FILE_OBJECT *)v265, 0LL, 983551, 0, 0, 0LL, (__int64)&v264);
        if ( v143 >= 0 )
        {
          *(_QWORD *)TokenInformation = v264;
          ObfDereferenceObjectWithTag(v137, 0x74726853u);
          return 0;
        }
      }
LABEL_194:
      ObfDereferenceObjectWithTag(v137, 0x74726853u);
      return v143;
    case 20:
      *v12 = 4;
      if ( TokenInformationLength != 4 )
        return -1073741820;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v186 = KeGetCurrentThread();
      --v186->KernelApcDisable;
      v187 = (PERESOURCE *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      TokenElevation = SepGetTokenElevation((__int64)v187);
      ExReleaseResourceLite(v187[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v189, v190, v191);
      *(_DWORD *)TokenInformation = TokenElevation;
      goto LABEL_17;
    case 21:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 1;
      if ( !TokenInformationLength )
        goto LABEL_11;
      v21 = Object;
      *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
      goto LABEL_18;
    case 22:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
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
        if ( (v80 & *((_QWORD *)v15 + 8)) == 0 )
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
      LODWORD(v256) = v84;
      v85 = 0;
      v86 = 0;
      v87 = *((_DWORD *)v15 + 31);
      v88 = 16 * v87;
      LODWORD(Handle) = 16 * v87;
      v263 = *((_DWORD *)v15 + 32);
      LODWORD(v266) = 16 * v263;
      LODWORD(v264) = *((_DWORD *)v15 + 200);
      LODWORD(v265) = 16 * (_DWORD)v264;
      LODWORD(v267) = 16 * v87;
      v89 = 0;
      if ( v87 < 2 )
        goto LABEL_111;
      v259 = (HANDLE)*((_QWORD *)v15 + 19);
      v90 = v259;
      v91 = ((v87 - 2) >> 1) + 1;
      LODWORD(v260) = 2 * v91;
      v92 = 2 * v91;
      do
      {
        v85 += (4 * *(unsigned __int8 *)(*v90 + 1LL) + 15) & 0xFFFFFFF8;
        v86 += (4 * *(unsigned __int8 *)(v90[2] + 1LL) + 15) & 0xFFFFFFF8;
        v90 += 4;
        --v91;
      }
      while ( v91 );
      v89 = (unsigned int)v260;
      if ( (unsigned int)v260 < v87 )
      {
        v93 = v259;
        goto LABEL_114;
      }
      v88 = v267;
LABEL_111:
      if ( v89 < v87 )
      {
        v93 = (_QWORD *)*((_QWORD *)v15 + 19);
        v92 = v89;
LABEL_114:
        v88 = (_DWORD)Handle + ((4 * *(unsigned __int8 *)(v93[2 * v92] + 1LL) + 15) & 0xFFFFFFF8);
      }
      v94 = 0;
      v95 = 0;
      LODWORD(v267) = v85 + v86 + v88;
      v96 = (unsigned int)v266;
      v255 = (int)v266;
      v97 = 0;
      v98 = v263;
      if ( v263 < 2 )
        goto LABEL_120;
      v260 = (PVOID)*((_QWORD *)v15 + 20);
      v99 = v260;
      v100 = ((v263 - 2) >> 1) + 1;
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
      v98 = v263;
      if ( v97 < v263 )
      {
        v103 = v260;
        goto LABEL_123;
      }
      v96 = v255;
LABEL_120:
      if ( v97 < v98 )
      {
        v103 = (_QWORD *)*((_QWORD *)v15 + 20);
        v102 = v97;
LABEL_123:
        v96 = (_DWORD)v266 + ((4 * *(unsigned __int8 *)(v103[2 * v102] + 1LL) + 15) & 0xFFFFFFF8);
      }
      v104 = 0;
      v105 = 0;
      v255 = v94 + v95 + v96;
      v106 = (unsigned int)v265;
      SessionId = (unsigned int)v265;
      v107 = 0;
      v108 = (unsigned int)v264;
      if ( (unsigned int)v264 < 2 )
        goto LABEL_129;
      v260 = (PVOID)*((_QWORD *)v15 + 99);
      v109 = v260;
      v110 = ((unsigned int)((_DWORD)v264 - 2) >> 1) + 1;
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
      v108 = (unsigned int)v264;
      if ( v107 < (unsigned int)v264 )
      {
        v113 = v260;
        goto LABEL_132;
      }
      v106 = SessionId;
LABEL_129:
      if ( v107 < v108 )
      {
        v113 = (_QWORD *)*((_QWORD *)v15 + 99);
        v112 = v107;
LABEL_132:
        v106 = (_DWORD)v265 + ((4 * *(unsigned __int8 *)(v113[2 * v112] + 1LL) + 15) & 0xFFFFFFF8);
      }
      SessionId = v104 + v105 + v106;
      LODWORD(v260) = 0;
      v114 = *((_QWORD *)v15 + 98);
      if ( v114 )
        LODWORD(v260) = (4 * *(unsigned __int8 *)(v114 + 1) + 15) & 0xFFFFFFF8;
      v115 = v252;
      v116 = v254;
      if ( !(_BYTE)v252 )
        v116 = *((_QWORD *)v15 + 138);
      LODWORD(v259) = 0;
      if ( v116 )
        LODWORD(v259) = (4 * *(unsigned __int8 *)(v116 + 1) + 15) & 0xFFFFFFF8;
      v117 = (unsigned int *)*((_QWORD *)v15 + 97);
      v118 = 0;
      LODWORD(v264) = 0;
      if ( !v117 )
        goto LABEL_157;
      v119 = 112LL * *v117;
      if ( v119 > 0xFFFFFFFF )
      {
        InternalSecurityAttributeValueCopyoutBufferSize = -1073741675;
        goto LABEL_154;
      }
      v121 = v119 + 48;
      v122 = -1;
      if ( v121 >= 0x30 )
        v122 = v121;
      InternalSecurityAttributeValueCopyoutBufferSize = v121 < 0x30 ? 0xC0000095 : 0;
      if ( v121 < 0x30 )
        goto LABEL_154;
      IntegritySA.Sid = v117 + 2;
      v123 = (void **)*((_QWORD *)v117 + 1);
      if ( v123 == (void **)(v117 + 2) )
      {
LABEL_152:
        v118 = v122;
LABEL_154:
        v115 = v252;
        if ( InternalSecurityAttributeValueCopyoutBufferSize >= 0 )
          LODWORD(v9) = v118;
        goto LABEL_157;
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
        v263 = v126;
        InternalSecurityAttributeValueCopyoutBufferSize = v125 < v124 ? 0xC0000095 : 0;
        if ( v125 < v124
          || (InternalSecurityAttributeValueCopyoutBufferSize = AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(
                                                                  (__int64)v123,
                                                                  &v263),
              InternalSecurityAttributeValueCopyoutBufferSize < 0) )
        {
          v118 = (unsigned int)v264;
          goto LABEL_154;
        }
        v123 = (void **)*v123;
        v122 = v263;
        if ( v123 == IntegritySA.Sid )
          goto LABEL_152;
      }
      v115 = v252;
LABEL_157:
      v127 = (int)v259;
      v128 = SessionId;
      v129 = (unsigned int)v260;
      v130 = v255;
      v131 = v267;
      v132 = v255 + (_DWORD)v260 + SessionId + (_DWORD)v259 + v9 + v256 + v267 + 904;
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
          (__int64)v15,
          (__int64)TokenInformation,
          TokenInformationLength,
          v79,
          v131,
          (unsigned int)Handle,
          v130,
          (unsigned int)v266,
          v129,
          v128,
          (unsigned int)v265,
          v127,
          v9,
          v115,
          (void *)v254);
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
    case 23:
    case 24:
    case 26:
    case 29:
    case 40:
    case 42:
    case 47:
    case 48:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      v52 = Object;
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationAllowed:
          v192 = *((_DWORD *)Object + 50) >> 9;
          break;
        case TokenVirtualizationEnabled:
          v192 = *((_DWORD *)Object + 50) >> 10;
          break;
        case TokenUIAccess:
          v192 = *((_DWORD *)Object + 50) >> 12;
          break;
        case TokenIsRestricted:
          LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x18) != 0;
          goto LABEL_286;
        case TokenPrivateNameSpace:
          LOWORD(v192) = *((_WORD *)Object + 101);
          break;
        case MaxTokenInfoClass:
          LODWORD(v9) = SepIsSandboxedToken(Object, PreviousMode);
          goto LABEL_286;
        case TokenAppContainerNumber|TokenAuditPolicy:
          LODWORD(v9) = SepSidInTokenSidHash((__int64)Object + 808, 0LL, (unsigned __int8 *)SeAppSiloSid, 0, 1, 0);
          goto LABEL_286;
        default:
          v192 = *((_DWORD *)Object + 50) >> 14;
          break;
      }
      LODWORD(v9) = v192 & 1;
LABEL_286:
      *(_DWORD *)TokenInformation = v9;
LABEL_74:
      ObfDereferenceObjectWithTag(v52, 0x74726853u);
      return 0;
    case 25:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v207 = KeGetCurrentThread();
      --v207->KernelApcDisable;
      v15 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      SepCopyTokenIntegrity((__int64)v15, (__int64)&v276);
      v208 = v276;
      v209 = 4 * *(unsigned __int8 *)(v276 + 1) + 24;
      *v12 = v209;
      if ( TokenInformationLength < v209 )
        goto LABEL_9;
      RtlCopySidAndAttributesArray(
        1u,
        (__int64)&v276,
        4 * *(unsigned __int8 *)(v208 + 1) + 8,
        (__int64)TokenInformation,
        (char *)TokenInformation + 16,
        &v256,
        (unsigned int *)&v256);
      goto LABEL_15;
    case 27:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      MandatoryPolicyToken = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
      SecurityAttributesToken = MandatoryPolicyToken;
      ObfDereferenceObjectWithTag(v211, 0x74726853u);
      return MandatoryPolicyToken;
    case 28:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v212 = KeGetCurrentThread();
      --v212->KernelApcDisable;
      v15 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v213 = 0LL;
      v214 = *((_DWORD *)v15 + 31);
      if ( !v214 )
        goto LABEL_320;
      v215 = *((_QWORD *)v15 + 19);
      while ( (*(_DWORD *)(v215 + 16LL * (unsigned int)v213 + 8) & 0xC0000000) != 0xC0000000 )
      {
        v213 = (unsigned int)(v213 + 1);
        if ( (unsigned int)v213 >= v214 )
          goto LABEL_320;
      }
      v9 = *(_QWORD *)(v215 + 16LL * (unsigned int)v213);
LABEL_320:
      if ( !v9 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v216, v217, v218);
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return -1073741275;
      }
      v219 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v15 + 19) + 16LL * (unsigned int)v213) + 1LL) + 32;
      *v12 = v219;
      if ( TokenInformationLength < v219 )
        goto LABEL_9;
      *(_DWORD *)TokenInformation = 1;
      RtlCopySidAndAttributesArray(
        1u,
        *((_QWORD *)v15 + 19) + 16 * v213,
        4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v15 + 19) + 16 * v213) + 1LL) + 8,
        (__int64)TokenInformation + 8,
        (char *)TokenInformation + 24,
        &v256,
        (unsigned int *)&v256);
      goto LABEL_15;
    case 30:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v202 = KeGetCurrentThread();
      --v202->KernelApcDisable;
      v27 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v203 = *((_DWORD *)v27 + 200);
      v204 = 16 * v203 + 8;
      if ( v203 )
      {
        v205 = v27[99];
        v206 = v203;
        do
        {
          v204 += 4 * *(unsigned __int8 *)(*(_QWORD *)v205 + 1LL) + 8;
          v205 += 16LL;
          --v206;
        }
        while ( v206 );
      }
      *v12 = v204;
      if ( TokenInformationLength < v204 )
        goto LABEL_24;
      *(_DWORD *)TokenInformation = *((_DWORD *)v27 + 200);
      RtlCopySidAndAttributesArray(
        *((_DWORD *)v27 + 200),
        v27[99],
        v204,
        (__int64)TokenInformation + 8,
        (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v27 + 200)) + 8,
        &v256,
        (unsigned int *)&v256);
      goto LABEL_26;
    case 31:
      v199 = 8;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v200 = KeGetCurrentThread();
      --v200->KernelApcDisable;
      v27 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v201 = (unsigned __int8 *)v27[98];
      if ( v201 )
        v199 = 4 * v201[1] + 16;
      *v12 = v199;
      if ( TokenInformationLength < v199 )
        goto LABEL_24;
      if ( v201 )
        v201 = (unsigned __int8 *)TokenInformation + 8;
      *(_QWORD *)TokenInformation = v201;
      if ( v201 )
        RtlCopySid(v199 - 8, v201, (PSID)v27[98]);
      goto LABEL_26;
    case 32:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      v193 = KeGetCurrentThread();
      --v193->KernelApcDisable;
      v194 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v195 = *((_QWORD *)v194 + 135);
      if ( v195 )
        LODWORD(v9) = *(_DWORD *)(v195 + 40);
      ExReleaseResourceLite(*((PERESOURCE *)v194 + 6));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v196, v197, v198);
      *(_DWORD *)TokenInformation = v9;
      goto LABEL_17;
    case 33:
    case 34:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v220 = KeGetCurrentThread();
      --v220->KernelApcDisable;
      v221 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v222 = *((_QWORD *)v221 + 137);
      if ( v222
        && ((v223 = *(__int128 **)(v222 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
        && ((v224 = *(__int128 **)(v222 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
      {
        if ( TokenInformationClass == TokenUserClaimAttributes )
          v224 = v223;
        AuthzBasepQueryClaimAttributesToken(v224, 0LL, 0, &v255);
        v225 = v255;
      }
      else
      {
        v225 = 16;
        *(_QWORD *)&v274 = (char *)&v273 + 8;
        *((_QWORD *)&v273 + 1) = (char *)&v273 + 8;
        DWORD2(v274) = 0;
        *((_QWORD *)&v275 + 1) = &v275;
        *(_QWORD *)&v275 = &v275;
        v224 = &v273;
      }
      *v12 = v225;
      if ( TokenInformationLength < v225 )
      {
        v17 = (struct _ERESOURCE *)*((_QWORD *)v221 + 6);
        goto LABEL_10;
      }
      SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(
                                  v224,
                                  TokenInformation,
                                  TokenInformationLength,
                                  &v255);
      v226 = (struct _ERESOURCE *)*((_QWORD *)v221 + 6);
LABEL_337:
      ExReleaseResourceLite(v226);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v227, v228, v229);
LABEL_338:
      ObfDereferenceObjectWithTag(Object, 0x74726853u);
      return SecurityAttributesToken;
    case 37:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v230 = KeGetCurrentThread();
      --v230->KernelApcDisable;
      v27 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v231 = v27[137];
      if ( v231 && (v232 = *(_DWORD *)v231) != 0 )
      {
        v233 = 16 * v232 + 8;
      }
      else
      {
        v232 = 0;
        v233 = 24;
      }
      if ( v232 )
      {
        v234 = *(_QWORD *)(v231 + 8);
        v235 = v232;
        do
        {
          v233 += 4 * *(unsigned __int8 *)(*(_QWORD *)v234 + 1LL) + 8;
          v234 += 16LL;
          --v235;
        }
        while ( v235 );
      }
      *v12 = v233;
      if ( TokenInformationLength < v233 )
        goto LABEL_24;
      *(_OWORD *)TokenInformation = 0LL;
      *((_QWORD *)TokenInformation + 2) = 0LL;
      *(_DWORD *)TokenInformation = v232;
      if ( v232 )
        RtlCopySidAndAttributesArray(
          v232,
          *(_QWORD *)(v27[137] + 8LL),
          v233,
          (__int64)TokenInformation + 8,
          (char *)TokenInformation + 16 * v232 + 8,
          &v256,
          (unsigned int *)&v256);
      goto LABEL_26;
    case 39:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v236 = KeGetCurrentThread();
      --v236->KernelApcDisable;
      v27 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v237 = (unsigned int *)v27[97];
      if ( v237 )
      {
        AuthzBasepQuerySecurityAttributesToken(v237, 0LL, 0, 0LL, 0, &v255);
        v238 = v255;
      }
      else
      {
        v238 = 16;
      }
      *v12 = v238;
      if ( TokenInformationLength < v238 )
        goto LABEL_24;
      SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                  (unsigned int *)v27[97],
                                  0LL,
                                  0,
                                  TokenInformation,
                                  TokenInformationLength,
                                  &v255);
      v226 = (struct _ERESOURCE *)v27[6];
      goto LABEL_337;
    case 41:
      v239 = 8;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v240 = KeGetCurrentThread();
      --v240->KernelApcDisable;
      v27 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v241 = v252;
      v242 = (void *)v254;
      v243 = (unsigned __int8 *)v254;
      if ( !(_BYTE)v252 )
        v243 = (unsigned __int8 *)v27[138];
      if ( v243 )
        v239 = 4 * v243[1] + 16;
      *v12 = v239;
      if ( TokenInformationLength < v239 )
      {
LABEL_24:
        v17 = (struct _ERESOURCE *)v27[6];
        goto LABEL_10;
      }
      if ( v243 )
        v243 = (unsigned __int8 *)TokenInformation + 8;
      *(_QWORD *)TokenInformation = v243;
      if ( v243 )
      {
        if ( !v241 )
          v242 = (void *)v27[138];
        RtlCopySid(v239 - 8, v243, v242);
      }
LABEL_26:
      v22 = (struct _ERESOURCE *)v27[6];
      goto LABEL_16;
    case 43:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v244 = KeGetCurrentThread();
      --v244->KernelApcDisable;
      v245 = (PERESOURCE *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      LODWORD(Size) = TokenInformationLength;
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                  (__int64)v245,
                                  v246,
                                  0LL,
                                  0,
                                  1,
                                  TokenInformation,
                                  Size,
                                  v12);
      ExReleaseResourceLite(v245[6]);
      KeLeaveCriticalRegionThread();
      goto LABEL_338;
    case 44:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v252, &v254);
      if ( result < 0 )
        return result;
      v247 = KeGetCurrentThread();
      --v247->KernelApcDisable;
      v248 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v249 = 16;
      v250 = *((_QWORD *)v248 + 144);
      if ( v250 )
        v249 = *(unsigned __int16 *)(v250 + 42) + 16;
      *v12 = v249;
      if ( TokenInformationLength < v249 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v248 + 6));
        KeLeaveCriticalRegionThread();
        goto LABEL_11;
      }
      if ( *((_QWORD *)v248 + 144) )
      {
        *((_BYTE *)TokenInformation + 8) = 1;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
        memmove(
          (char *)TokenInformation + 16,
          *(const void **)(*((_QWORD *)v248 + 144) + 48LL),
          *(unsigned __int16 *)(*((_QWORD *)v248 + 144) + 42LL));
      }
      else
      {
        *((_BYTE *)TokenInformation + 8) = 0;
        *(_QWORD *)TokenInformation = 0LL;
      }
      ExReleaseResourceLite(*((PERESOURCE *)v248 + 6));
      KeLeaveCriticalRegionThread();
      goto LABEL_17;
    default:
      return -1073741821;
  }
}
