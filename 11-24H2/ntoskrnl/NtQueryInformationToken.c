/*
 * XREFs of NtQueryInformationToken @ 0x140AD09E0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405E6300 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B7C30 (AuthzBasepQuerySecurityAttributesToken.c)
 *     SepSidInTokenSidHash @ 0x1403BEFB0 (SepSidInTokenSidHash.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     SepReferenceTokenByHandle @ 0x1403E36B0 (SepReferenceTokenByHandle.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SeQueryTokenIntegrity @ 0x140409224 (SeQueryTokenIntegrity.c)
 *     SepCopyTokenIntegrity @ 0x140409240 (SepCopyTokenIntegrity.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1404184E0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x14041CCD0 (SepTokenPrivilegeCount.c)
 *     SeQueryMandatoryPolicyToken @ 0x140423C00 (SeQueryMandatoryPolicyToken.c)
 *     SepDeReferenceLogonSessionDirect @ 0x14043F618 (SepDeReferenceLogonSessionDirect.c)
 *     SepGetTokenElevation @ 0x14043FFE8 (SepGetTokenElevation.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     SepIsSandboxedToken @ 0x140446D78 (SepIsSandboxedToken.c)
 *     SepConvertTokenPrivileges @ 0x140450078 (SepConvertTokenPrivileges.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x140455E80 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 *     SepGetTokenElevationType @ 0x140469B94 (SepGetTokenElevationType.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x1405E208C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_2045735225__private_IsEnabledDeviceUsageNoInline @ 0x1406059EC (Feature_2045735225__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     RtlQueryElevationFlags @ 0x1408E8AB0 (RtlQueryElevationFlags.c)
 *     RtlCopySidAndAttributesArray @ 0x140990EE0 (RtlCopySidAndAttributesArray.c)
 *     SepCopyTokenAccessInformation @ 0x1409DD7CC (SepCopyTokenAccessInformation.c)
 *     SeQuerySessionIdToken @ 0x1409F4CB0 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A037C0 (AuthzBasepQueryClaimAttributesToken.c)
 *     SepReferenceLogonSessionSilo @ 0x140A25AB4 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x140A471F8 (SeSetSessionIdToken.c)
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
  _DWORD *v18; // rcx
  struct _ERESOURCE *v19; // rcx
  struct _KTHREAD *v20; // rax
  _QWORD *v21; // rbx
  unsigned int v22; // ecx
  ULONG v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r9
  struct _KTHREAD *v26; // rax
  unsigned int v27; // ecx
  ULONG v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // r9
  struct _KTHREAD *v31; // rax
  unsigned int v32; // eax
  ULONG v33; // edi
  struct _KTHREAD *v34; // rax
  ULONG v35; // ecx
  struct _KTHREAD *v36; // rax
  ULONG v37; // ecx
  struct _KTHREAD *v38; // rax
  __int64 v39; // rax
  ULONG v40; // eax
  char *v41; // rcx
  PVOID v42; // r8
  struct _KTHREAD *v43; // rax
  int v44; // edx
  __int64 v45; // rax
  PVOID v46; // rbx
  int v47; // edi
  int v48; // r13d
  struct _KTHREAD *v49; // rax
  _RTL_ELEVATION_FLAGS v50; // r10d
  unsigned int v51; // r8d
  _RTL_ELEVATION_FLAGS v52; // eax
  _QWORD *v53; // rdx
  __int64 v54; // r9
  __int64 v55; // r11
  __int64 v56; // rcx
  int v57; // r10d
  int v58; // r11d
  __int64 v59; // r8
  _RTL_ELEVATION_FLAGS v60; // edi
  unsigned int v61; // r13d
  __int64 v62; // rax
  _QWORD *v63; // rdx
  __int64 v64; // r9
  _QWORD *v65; // rcx
  unsigned int v66; // r13d
  int v67; // edx
  ULONG v68; // ecx
  _SID_AND_ATTRIBUTES *v69; // r9
  _SID_AND_ATTRIBUTES *v70; // rdi
  __int64 v71; // rsi
  struct _KTHREAD *v72; // rax
  int v73; // r13d
  __int64 v74; // rbx
  __int64 v75; // rcx
  int v76; // eax
  int v77; // eax
  int v78; // ecx
  int v79; // r9d
  int v80; // r10d
  unsigned int v81; // ebx
  ULONG v82; // ecx
  unsigned int v83; // eax
  _QWORD *v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r11
  _QWORD *v87; // rcx
  int v88; // r11d
  int v89; // ebx
  unsigned int v90; // edx
  unsigned int v91; // r9d
  unsigned int v92; // ecx
  _QWORD *v93; // rdx
  unsigned int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r10
  _QWORD *v97; // rax
  int v98; // r9d
  int v99; // r10d
  ULONG v100; // edx
  unsigned int v101; // r11d
  unsigned int v102; // ecx
  _QWORD *v103; // rdx
  unsigned int v104; // eax
  __int64 v105; // r8
  __int64 v106; // rbx
  _QWORD *v107; // rax
  __int64 v108; // rax
  char v109; // r11
  __int64 v110; // rax
  unsigned int *v111; // rdx
  unsigned int v112; // r9d
  unsigned __int64 v113; // rax
  signed int InternalSecurityAttributeValueCopyoutBufferSize; // r8d
  unsigned int v115; // eax
  unsigned int v116; // ecx
  void **v117; // rbx
  unsigned int v118; // edx
  unsigned int v119; // ecx
  unsigned int v120; // eax
  int v121; // r8d
  ULONG v122; // edx
  unsigned int v123; // r9d
  unsigned int v124; // r10d
  unsigned int v125; // ebx
  ULONG v126; // ecx
  int v127; // r9d
  struct _KTHREAD *v128; // rax
  bool v129; // bl
  int IsEnabledDeviceUsageNoInline; // eax
  PVOID v131; // r15
  __int64 v132; // rbx
  __int64 v133; // rbx
  NTSTATUS v134; // r12d
  NTSTATUS v135; // ebx
  PVOID v136; // rbx
  NTSTATUS v137; // edi
  _QWORD *v138; // r12
  __int64 v139; // rbx
  unsigned __int64 v140; // rax
  int v141; // edi
  int v142; // ecx
  __int64 v143; // rbx
  struct _KTHREAD *v144; // rax
  PSID **PrimaryToken; // rbx
  __int64 v146; // rdi
  struct _KTHREAD *v147; // rax
  PSID Sid; // rbx
  int v149; // r12d
  const wchar_t *v150; // r15
  unsigned __int16 *v151; // r8
  unsigned __int16 v152; // r9
  struct _LIST_ENTRY *Flink; // r10
  unsigned __int64 v154; // rax
  __int64 v155; // rcx
  unsigned __int16 *v156; // r11
  unsigned __int16 *v157; // rdi
  unsigned __int64 v158; // rbx
  unsigned __int64 v159; // r8
  unsigned __int64 v160; // r9
  unsigned int v161; // ebx
  int v162; // eax
  int v163; // r9d
  _QWORD *v164; // rdi
  __int64 v165; // rdx
  NTSTATUS v166; // ebx
  int v167; // eax
  _QWORD *v168; // r15
  __int64 v169; // rbx
  unsigned __int64 CurrentServerSilo; // rax
  NTSTATUS inserted; // ebx
  struct _KTHREAD *v172; // rax
  PERESOURCE *v173; // rdi
  int TokenElevation; // ebx
  int v175; // esi
  struct _KTHREAD *v176; // rax
  PVOID v177; // rbx
  __int64 v178; // rax
  ULONG v179; // edi
  struct _KTHREAD *v180; // rax
  unsigned __int8 *v181; // rdx
  struct _KTHREAD *v182; // rax
  unsigned int v183; // ecx
  ULONG v184; // r8d
  __int64 v185; // rdx
  __int64 v186; // r9
  struct _KTHREAD *v187; // rax
  unsigned __int8 *v188; // rdx
  ULONG v189; // eax
  NTSTATUS MandatoryPolicyToken; // ebx
  PVOID v191; // rcx
  struct _KTHREAD *v192; // rax
  __int64 v193; // rdx
  unsigned int v194; // r8d
  __int64 v195; // r9
  ULONG v196; // eax
  struct _KTHREAD *v197; // rax
  PVOID v198; // r13
  __int64 v199; // rbx
  __int128 *v200; // rcx
  __int128 *v201; // rbx
  ULONG v202; // edi
  struct _ERESOURCE *v203; // rcx
  struct _KTHREAD *v204; // rax
  __int64 v205; // rdx
  ULONG v206; // r11d
  ULONG v207; // r8d
  __int64 v208; // rdx
  __int64 v209; // r9
  struct _KTHREAD *v210; // rax
  unsigned int *v211; // rcx
  ULONG v212; // edi
  ULONG v213; // edi
  struct _KTHREAD *v214; // rax
  char v215; // cl
  void *v216; // r8
  unsigned __int8 *v217; // rdx
  struct _KTHREAD *v218; // rax
  PERESOURCE *v219; // rbx
  char v220; // dl
  struct _KTHREAD *v221; // rax
  ULONG v222; // edi
  __int64 v223; // rax
  PULONG RemainingSidAreaSize; // [rsp+30h] [rbp-1A8h]
  __int64 v225; // [rsp+80h] [rbp-158h] BYREF
  PVOID Object; // [rsp+88h] [rbp-150h] BYREF
  __int64 v227; // [rsp+90h] [rbp-148h] BYREF
  int v228; // [rsp+98h] [rbp-140h] BYREF
  PSID RemainingSidArea; // [rsp+A0h] [rbp-138h] BYREF
  bool v230; // [rsp+A8h] [rbp-130h]
  ULONG SessionId; // [rsp+ACh] [rbp-12Ch] BYREF
  HANDLE v232; // [rsp+B0h] [rbp-128h] BYREF
  PVOID v233; // [rsp+B8h] [rbp-120h] BYREF
  _RTL_ELEVATION_FLAGS Flags[2]; // [rsp+C0h] [rbp-118h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+C8h] [rbp-110h]
  unsigned int v236; // [rsp+CCh] [rbp-10Ch] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp-108h] BYREF
  PVOID v238; // [rsp+D8h] [rbp-100h] BYREF
  PVOID v239; // [rsp+E0h] [rbp-F8h] BYREF
  _SID_AND_ATTRIBUTES *v240; // [rsp+E8h] [rbp-F0h]
  int v241; // [rsp+F0h] [rbp-E8h]
  _SID_AND_ATTRIBUTES IntegritySA; // [rsp+F8h] [rbp-E0h] BYREF
  __int128 v243; // [rsp+108h] [rbp-D0h] BYREF
  __int128 v244; // [rsp+118h] [rbp-C0h]
  __int128 v245; // [rsp+128h] [rbp-B0h]
  __int128 v246; // [rsp+138h] [rbp-A0h] BYREF
  __int128 v247; // [rsp+148h] [rbp-90h]
  __int128 v248; // [rsp+158h] [rbp-80h] BYREF
  _SID_AND_ATTRIBUTES Src; // [rsp+168h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+178h] [rbp-60h] BYREF
  __int128 v251; // [rsp+198h] [rbp-40h]

  v9 = 0LL;
  Object = 0LL;
  v228 = 0;
  v240 = 0LL;
  Src = 0LL;
  RemainingSidArea = 0LL;
  SessionId = 0;
  v251 = 0LL;
  v246 = 0LL;
  v247 = 0LL;
  v248 = 0LL;
  LOBYTE(v225) = 0;
  v227 = 0LL;
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
      Handle = 0LL;
      v232 = 0LL;
      v233 = 0LL;
      DWORD1(v243) = 0;
      HIDWORD(v244) = 0;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        return -1073741821;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v163, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 8;
      if ( TokenInformationLength != 8 )
        goto LABEL_172;
      if ( !(unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
      {
        v18 = Object;
        goto LABEL_380;
      }
      Flags[0].Flags = 0;
      RtlQueryElevationFlags(Flags);
      v164 = Object;
      if ( (Flags[0].Flags & 0x18) != 0x10
        || (unsigned int)SepGetTokenElevationType((__int64)Object) != 2
        || (v165 = v164[27], !*(_QWORD *)(v165 + 24)) )
      {
        v18 = v164;
        goto LABEL_380;
      }
      v166 = SepReferenceLogonSessionSilo((_DWORD *)(v165 + 24), *(_QWORD *)(v165 + 168), (__int64 *)&Handle);
      if ( v166 < 0 )
        goto LABEL_254;
      LODWORD(v243) = 48;
      *((_QWORD *)&v243 + 1) = 0LL;
      v167 = 0;
      if ( !PreviousMode )
        v167 = 512;
      DWORD2(v244) = v167;
      *(_QWORD *)&v244 = 0LL;
      v245 = 0LL;
      SeQuerySessionIdToken(v164, &SessionId);
      v168 = Handle;
      v166 = SeSetSessionIdToken(*((PACCESS_TOKEN *)Handle + 7), SessionId);
      if ( v166 < 0 )
      {
        SepDeReferenceLogonSessionDirect(v168);
LABEL_254:
        ObfDereferenceObjectWithTag(v164, 0x74726853u);
        return v166;
      }
      v166 = SepDuplicateToken(v168[7], (int)&v243, 0, 1, 1u, 0, 0, &v233);
      SepDeReferenceLogonSessionDirect(v168);
      if ( v166 < 0 )
        goto LABEL_254;
      v169 = *((_QWORD *)v233 + 27);
      CurrentServerSilo = PsGetCurrentServerSilo();
      inserted = SepReferenceLogonSessionSilo((_DWORD *)(v169 + 16), CurrentServerSilo, (__int64 *)&IntegritySA);
      if ( inserted < 0
        || (*((_DWORD *)v233 + 50) |= 0x10000000u,
            inserted = ObInsertObjectEx((struct _FILE_OBJECT *)v233, 0LL, 983551, 0, 0, 0LL, (__int64)&v232),
            inserted < 0) )
      {
        ObfDereferenceObject(v233);
        ObfDereferenceObjectWithTag(v164, 0x74726853u);
        return inserted;
      }
      else
      {
        *(_QWORD *)TokenInformation = v232;
        ObfDereferenceObjectWithTag(v164, 0x74726853u);
        return 0;
      }
    case 1:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
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
    case 2:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        v21 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v22 = *((_DWORD *)v21 + 31);
        v23 = 16 * v22 - 8;
        if ( v22 > 1 )
        {
          v24 = v21[19] + 16LL;
          v25 = v22 - 1;
          do
          {
            v23 += 4 * *(unsigned __int8 *)(*(_QWORD *)v24 + 1LL) + 8;
            v24 += 16LL;
            --v25;
          }
          while ( v25 );
        }
        *v12 = v23;
        if ( TokenInformationLength >= v23 )
        {
          *(_DWORD *)TokenInformation = *((_DWORD *)v21 + 31) - 1;
          RtlCopySidAndAttributesArray(
            *((_DWORD *)v21 + 31) - 1,
            (PSID_AND_ATTRIBUTES)(v21[19] + 16LL),
            v23,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v21 + 31) - 32) + 24,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case 3:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        v21 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v32 = SepTokenPrivilegeCount((__int64)v21);
        if ( v32 <= 1 )
          v33 = 16;
        else
          v33 = 12 * v32 + 4;
        *v12 = v33;
        if ( TokenInformationLength >= v33 )
        {
          SepConvertTokenPrivileges(v21, TokenInformation);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case 4:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        v21 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v35 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v21[19] + 16LL * *((unsigned int *)v21 + 36)) + 1LL) + 16;
        *v12 = v35;
        if ( TokenInformationLength < v35 )
          goto LABEL_24;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
        RtlCopySid(v35 - 8, (char *)TokenInformation + 8, *(PSID *)(v21[19] + 16LL * *((unsigned int *)v21 + 36)));
        goto LABEL_26;
      }
      return result;
    case 5:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        v36 = KeGetCurrentThread();
        --v36->KernelApcDisable;
        v21 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v37 = 4 * *(unsigned __int8 *)(v21[21] + 1LL) + 16;
        *v12 = v37;
        if ( TokenInformationLength < v37 )
          goto LABEL_24;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
        RtlCopySid(v37 - 8, (char *)TokenInformation + 8, (PSID)v21[21]);
        goto LABEL_26;
      }
      return result;
    case 6:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        v228 = 8;
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        v21 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v39 = v21[23];
        if ( v39 )
          v40 = *(unsigned __int16 *)(v39 + 2) + 8;
        else
          v40 = v228;
        *v12 = v40;
        if ( TokenInformationLength >= v40 )
        {
          v41 = (char *)TokenInformation + 8;
          if ( v21[23] )
          {
            *(_QWORD *)TokenInformation = v41;
            memmove(v41, (const void *)v21[23], *(unsigned __int16 *)(v21[23] + 2LL));
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
                 &v225,
                 &v227);
      if ( result >= 0 )
      {
        *v12 = 16;
        if ( TokenInformationLength < 0x10 )
          goto LABEL_11;
        v18 = Object;
        *(_OWORD *)TokenInformation = *(_OWORD *)Object;
        goto LABEL_18;
      }
      return result;
    case 8:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        *v12 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_11;
        v18 = Object;
        *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
        goto LABEL_18;
      }
      return result;
    case 9:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        v18 = Object;
        if ( *((_DWORD *)Object + 48) != 2 )
        {
LABEL_380:
          ObfDereferenceObjectWithTag(v18, 0x74726853u);
          return -1073741821;
        }
        *v12 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_12;
        *(_DWORD *)TokenInformation = v18[49];
        goto LABEL_18;
      }
      return result;
    case 10:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        *v12 = 56;
        if ( TokenInformationLength < 0x38 )
          goto LABEL_11;
        v43 = KeGetCurrentThread();
        --v43->KernelApcDisable;
        v21 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v241 = 0;
        *(_QWORD *)TokenInformation = v21[2];
        *((_QWORD *)TokenInformation + 1) = v21[3];
        *((_QWORD *)TokenInformation + 2) = v21[5];
        *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v21 + 48);
        *((_DWORD *)TokenInformation + 7) = *((_DWORD *)v21 + 49);
        *((_DWORD *)TokenInformation + 8) = *((_DWORD *)v21 + 34);
        v44 = *((_DWORD *)v21 + 34) - 4 * *(unsigned __int8 *)(v21[21] + 1LL) - 8;
        v241 = v44;
        v45 = v21[23];
        if ( v45 )
        {
          v44 -= *(unsigned __int16 *)(v45 + 2);
          v241 = v44;
        }
        *((_DWORD *)TokenInformation + 9) = v44;
        *((_DWORD *)TokenInformation + 10) = *((_DWORD *)v21 + 31) - 1;
        *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v21);
        *((_QWORD *)TokenInformation + 6) = v21[7];
        goto LABEL_26;
      }
      return result;
    case 11:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        v21 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v27 = *((_DWORD *)v21 + 32);
        v28 = 16 * v27 + 8;
        if ( v27 )
        {
          v29 = v21[20];
          v30 = v27;
          do
          {
            v28 += 4 * *(unsigned __int8 *)(*(_QWORD *)v29 + 1LL) + 8;
            v29 += 16LL;
            --v30;
          }
          while ( v30 );
        }
        *v12 = v28;
        if ( TokenInformationLength >= v28 )
        {
          *(_DWORD *)TokenInformation = *((_DWORD *)v21 + 32);
          RtlCopySidAndAttributesArray(
            *((_DWORD *)v21 + 32),
            (PSID_AND_ATTRIBUTES)v21[20],
            v28,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v21 + 32)) + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      return result;
    case 12:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result >= 0 )
      {
        *v12 = 4;
        if ( TokenInformationLength < 4 )
          goto LABEL_11;
        v46 = Object;
        SeQuerySessionIdToken(Object, &SessionId);
        *(_DWORD *)TokenInformation = SessionId;
        *v12 = 4;
        goto LABEL_74;
      }
      return result;
    case 13:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v47 = 0;
      v48 = 0;
      v49 = KeGetCurrentThread();
      --v49->KernelApcDisable;
      v21 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      LODWORD(v232) = SepTokenPrivilegeCount((__int64)v21);
      LODWORD(v233) = 12 * (_DWORD)v232;
      v50.Flags = *(_DWORD *)((ULONG)v21 + 124);
      LODWORD(v239) = 16 * v50.Flags;
      v51 = 16 * v50.Flags;
      v52.Flags = 0;
      if ( v50.Flags < 2 )
        goto LABEL_80;
      v227 = v21[19];
      v53 = (_QWORD *)v227;
      v54 = ((v50.Flags - 2) >> 1) + 1;
      Flags[0].Flags = 2 * v54;
      v55 = 2 * v54;
      do
      {
        v47 += (4 * *(unsigned __int8 *)(*v53 + 1LL) + 15) & 0xFFFFFFF8;
        v48 += (4 * *(unsigned __int8 *)(v53[2] + 1LL) + 15) & 0xFFFFFFF8;
        v53 += 4;
        --v54;
      }
      while ( v54 );
      v52.Flags = (ULONG)Flags[0];
      if ( Flags[0].Flags < v50.Flags )
      {
        v56 = v227;
      }
      else
      {
LABEL_80:
        if ( v52.Flags >= v50.Flags )
        {
LABEL_84:
          v57 = 0;
          v58 = 0;
          v59 = v47 + v48 + v51;
          v60.Flags = v21[16];
          LODWORD(v238) = 16 * v60.Flags;
          v61 = 16 * v60.Flags;
          v62 = 0LL;
          if ( v60.Flags < 2 )
            goto LABEL_88;
          RemainingSidArea = (PSID)v21[20];
          v63 = RemainingSidArea;
          v64 = ((v60.Flags - 2) >> 1) + 1;
          Flags[0].Flags = 2 * v64;
          v227 = 2 * v64;
          do
          {
            v57 += (4 * *(unsigned __int8 *)(*v63 + 1LL) + 15) & 0xFFFFFFF8;
            v58 += (4 * *(unsigned __int8 *)(v63[2] + 1LL) + 15) & 0xFFFFFFF8;
            v63 += 4;
            --v64;
          }
          while ( v64 );
          v62 = Flags[0].Flags;
          if ( Flags[0].Flags < v60.Flags )
          {
            v62 = v227;
            v65 = RemainingSidArea;
          }
          else
          {
LABEL_88:
            if ( (unsigned int)v62 >= v60.Flags )
            {
LABEL_92:
              v66 = v57 + v58 + v61;
              v67 = (int)v233;
              v68 = v59 + v66 + (_DWORD)v233 + 56;
              *v12 = v68;
              if ( TokenInformationLength < v68 )
                goto LABEL_24;
              *((_QWORD *)TokenInformation + 6) = v21[3];
              *((_DWORD *)TokenInformation + 1) = v59;
              *(_DWORD *)TokenInformation = *((_DWORD *)v21 + 31);
              v69 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
              *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
              *((_DWORD *)TokenInformation + 5) = v66;
              *((_DWORD *)TokenInformation + 4) = *((_DWORD *)v21 + 32);
              if ( *((_DWORD *)v21 + 32) )
              {
                v70 = (_SID_AND_ATTRIBUTES *)((char *)v69 + ((v59 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
                *((_QWORD *)TokenInformation + 3) = v70;
              }
              else
              {
                *((_QWORD *)TokenInformation + 3) = 0LL;
                v70 = v240;
              }
              *((_DWORD *)TokenInformation + 9) = v67;
              *((_DWORD *)TokenInformation + 8) = (_DWORD)v232;
              v71 = (__int64)v69 + (unsigned int)v59 + (unsigned __int64)v66;
              *((_QWORD *)TokenInformation + 5) = v71;
              RtlCopySidAndAttributesArray(
                *((_DWORD *)v21 + 31),
                (PSID_AND_ATTRIBUTES)v21[19],
                v59 - (_DWORD)v239,
                v69,
                (char *)v69 + (unsigned int)v239,
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
              if ( v70 )
                RtlCopySidAndAttributesArray(
                  *((_DWORD *)v21 + 32),
                  (PSID_AND_ATTRIBUTES)v21[20],
                  v66 - (_DWORD)v238,
                  v70,
                  (char *)v70 + (unsigned int)v238,
                  &RemainingSidArea,
                  (PULONG)&RemainingSidArea);
              SepConvertTokenPrivilegesToLuidAndAttributes(v21, v71);
              goto LABEL_26;
            }
            v65 = (_QWORD *)v21[20];
          }
          v61 = (_DWORD)v238 + ((4 * *(unsigned __int8 *)(v65[2 * v62] + 1LL) + 15) & 0xFFFFFFF8);
          goto LABEL_92;
        }
        v56 = v21[19];
        v55 = v52.Flags;
      }
      v51 = (_DWORD)v239 + ((4 * *(unsigned __int8 *)(*(_QWORD *)(v56 + 16 * v55) + 1LL) + 15) & 0xFFFFFFF8);
      goto LABEL_84;
    case 15:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        return -1073741789;
      v18 = Object;
      *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) >> 6) & 1;
      goto LABEL_18;
    case 16:
      if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
        return -1073741727;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v127, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 31;
      if ( TokenInformationLength < 0x1F )
        goto LABEL_11;
      v128 = KeGetCurrentThread();
      --v128->KernelApcDisable;
      v21 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      *(_OWORD *)TokenInformation = *(_OWORD *)(v21 + 11);
      *((_QWORD *)TokenInformation + 2) = v21[13];
      *((_DWORD *)TokenInformation + 6) = *((_DWORD *)v21 + 28);
      *((_WORD *)TokenInformation + 14) = *((_WORD *)v21 + 58);
      *((_BYTE *)TokenInformation + 30) = *((_BYTE *)v21 + 118);
LABEL_26:
      v19 = (struct _ERESOURCE *)v21[6];
      goto LABEL_16;
    case 17:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 8;
      if ( TokenInformationLength < 8 )
        goto LABEL_11;
      v18 = Object;
      *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
      goto LABEL_18;
    case 18:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      *(_DWORD *)TokenInformation = SepGetTokenElevationType((__int64)Object);
      ObfDereferenceObjectWithTag(v42, 0x74726853u);
      return 0;
    case 19:
      v232 = 0LL;
      Handle = 0LL;
      v238 = 0LL;
      v243 = 0LL;
      v244 = 0LL;
      *(_QWORD *)&v245 = 0LL;
      DWORD2(v245) = 0;
      v230 = 0;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
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
        Flags[0].Flags = 0;
        RtlQueryElevationFlags(Flags);
        v129 = (Flags[0].Flags & 0x18) == 16;
        v230 = v129;
      }
      else
      {
        v129 = 0;
      }
      LOBYTE(v225) = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
      LODWORD(v233) = 2 - ((_BYTE)v225 != 0);
      IsEnabledDeviceUsageNoInline = Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline();
      v131 = Object;
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( v129 && (unsigned int)SepGetTokenElevationType((__int64)Object) == 3 )
        {
          v132 = *((_QWORD *)v131 + 27);
          if ( !*(_QWORD *)(v132 + 16) )
          {
            *(_QWORD *)&Flags[0].Flags = 0LL;
            v133 = *(_QWORD *)(v132 + 8);
            v134 = -1073741822;
            if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
              && ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
            {
              v134 = guard_dispatch_icall_no_overrides(v133, Flags);
              ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
            }
            if ( v134 < 0 )
            {
              ObfDereferenceObjectWithTag(v131, 0x74726853u);
              return v134;
            }
            v239 = 0LL;
            v135 = ObReferenceObjectByHandle(
                     *(HANDLE *)&Flags[0].Flags,
                     8u,
                     (POBJECT_TYPE)SeTokenObjectType,
                     0,
                     &v239,
                     0LL);
            ObCloseHandle(*(HANDLE *)&Flags[0].Flags, 0);
            if ( v135 < 0 )
              goto LABEL_194;
            v136 = v239;
            v137 = SepReferenceLogonSessionSilo(
                     (_DWORD *)v239 + 6,
                     *(_QWORD *)(*((_QWORD *)v131 + 27) + 168LL),
                     (__int64 *)&v232);
            ObfDereferenceObject(v136);
            if ( v137 < 0 )
            {
              ObfDereferenceObjectWithTag(v131, 0x74726853u);
              return v137;
            }
            SeQuerySessionIdToken(v131, &SessionId);
            v138 = v232;
            v135 = SeSetSessionIdToken(*((PACCESS_TOKEN *)v232 + 7), SessionId);
            if ( v135 < 0
              || (v138[2] = *(_QWORD *)(*((_QWORD *)v131 + 27) + 8LL),
                  v139 = *((_QWORD *)v131 + 27),
                  v140 = PsGetCurrentServerSilo(),
                  v135 = SepReferenceLogonSessionSilo((_DWORD *)(v139 + 8), v140, (__int64 *)&IntegritySA),
                  v135 < 0) )
            {
              SepDeReferenceLogonSessionDirect(v138);
              goto LABEL_194;
            }
            goto LABEL_197;
          }
        }
        v135 = SepReferenceLogonSessionSilo(
                 (_DWORD *)(*((_QWORD *)v131 + 27) + 16LL),
                 *(_QWORD *)(*((_QWORD *)v131 + 27) + 168LL),
                 (__int64 *)&v232);
        if ( v135 < 0 )
          goto LABEL_194;
      }
      else
      {
        v135 = SepReferenceLogonSessionSilo(
                 (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                 *(_QWORD *)(*((_QWORD *)Object + 27) + 168LL),
                 (__int64 *)&v232);
        if ( v135 < 0 )
          goto LABEL_194;
      }
      v138 = v232;
LABEL_197:
      v141 = 0;
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() && v230 && !(_BYTE)v225 )
      {
        v142 = 0;
        v143 = *(_QWORD *)(*((_QWORD *)v131 + 27) + 56LL);
        if ( v143 )
        {
          v144 = KeGetCurrentThread();
          --v144->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v143 + 48), 1u);
          LODWORD(RemainingSidArea) = *(_DWORD *)(v143 + 200);
          ExReleaseResourceLite(*(PERESOURCE *)(v143 + 48));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v131 = Object;
          v138 = v232;
          v142 = (int)RemainingSidArea;
        }
        v141 = 0;
        if ( (v142 & 0x8000000) != 0 )
        {
          Flags[0].Flags = 0;
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          SeCaptureSubjectContext(&SubjectContext);
          PrimaryToken = (PSID **)SubjectContext.PrimaryToken;
          v146 = *(_QWORD *)(*((_QWORD *)SubjectContext.PrimaryToken + 27) + 56LL);
          if ( v146 )
          {
            v147 = KeGetCurrentThread();
            --v147->KernelApcDisable;
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v146 + 48), 1u);
            Flags[0] = *(_RTL_ELEVATION_FLAGS *)(v146 + 200);
            ExReleaseResourceLite(*(PERESOURCE *)(v146 + 48));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v131 = Object;
            v138 = v232;
            PrimaryToken = (PSID **)SubjectContext.PrimaryToken;
          }
          v141 = 0;
          if ( (Flags[0].Flags & 0x8000000) == 0
            || !RtlEqualSid(**((PSID **)v131 + 19), *PrimaryToken[19])
            || (IntegritySA = 0LL, SeQueryTokenIntegrity(PrimaryToken, &IntegritySA), IntegritySA.Attributes != 96)
            || (Sid = IntegritySA.Sid, *RtlSubAuthorityCountSid(IntegritySA.Sid) != 1)
            || *RtlSubAuthoritySid(Sid, 0) != 12288 )
          {
LABEL_231:
            v161 = 1;
            SeReleaseSubjectContext(&SubjectContext);
            goto LABEL_234;
          }
          IntegritySA.Sid = (PSID)KeGetCurrentThread()->ApcState.Process[1].LastRebalanceQpc;
          v149 = 0;
          v150 = L"02";
          while ( 1 )
          {
            Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
            v154 = *v150;
            v155 = *v151;
            if ( (unsigned __int16)v155 >= (unsigned __int16)v154 )
            {
              v156 = (unsigned __int16 *)*((_QWORD *)v150 + 1);
              v157 = &v156[v154 >> 1];
              if ( v156 >= v157 )
              {
LABEL_232:
                v161 = 1;
                v141 = 1;
                v131 = Object;
                v138 = v232;
                SeReleaseSubjectContext(&SubjectContext);
                goto LABEL_234;
              }
              v158 = *((_QWORD *)v151 + 1) + 2 * ((v155 - (unsigned __int64)*v150) >> 1) - (_QWORD)v156;
              while ( 1 )
              {
                v159 = *v156;
                if ( (unsigned int)v159 >= 0x61 )
                {
                  if ( (unsigned int)v159 > 0x7A )
                  {
                    if ( Flink && (unsigned __int16)v159 >= v152 )
                      LOWORD(v159) = *((_WORD *)&Flink->Flink
                                     + (v159 & 0xF)
                                     + *((unsigned __int16 *)&Flink->Flink
                                       + ((unsigned __int8)v159 >> 4)
                                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v159 >> 8))))
                                   + v159;
                  }
                  else
                  {
                    LOWORD(v159) = v159 - 32;
                  }
                }
                v160 = *(unsigned __int16 *)((char *)v156 + v158);
                if ( (unsigned int)v160 >= 0x61 )
                {
                  if ( (unsigned int)v160 > 0x7A )
                  {
                    if ( Flink && (unsigned __int16)v160 >= 0xC0u )
                      LOWORD(v160) = *((_WORD *)&Flink->Flink
                                     + (v160 & 0xF)
                                     + *((unsigned __int16 *)&Flink->Flink
                                       + ((unsigned __int8)v160 >> 4)
                                       + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v160 >> 8))))
                                   + v160;
                  }
                  else
                  {
                    LOWORD(v160) = v160 - 32;
                  }
                }
                if ( (_WORD)v159 != (_WORD)v160 )
                  break;
                if ( ++v156 >= v157 )
                  goto LABEL_232;
                v152 = 192;
              }
            }
            ++v149;
            v150 += 8;
            if ( v149 )
            {
              v141 = 0;
              v131 = Object;
              v138 = v232;
              goto LABEL_231;
            }
          }
        }
      }
      v161 = 1;
LABEL_234:
      LODWORD(v243) = 48;
      *((_QWORD *)&v243 + 1) = 0LL;
      v162 = 0;
      if ( !PreviousMode )
        v162 = 512;
      DWORD2(v244) = v162;
      *(_QWORD *)&v244 = 0LL;
      v245 = 0LL;
      if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline() )
        v161 = v141 + 1;
      v135 = SepDuplicateToken(v138[7], (int)&v243, 0, (int)v233, v161, 0, 0, &v238);
      SepDeReferenceLogonSessionDirect(v138);
      if ( v135 >= 0 )
      {
        v135 = ObInsertObjectEx((struct _FILE_OBJECT *)v238, 0LL, 983551, 0, 0, 0LL, (__int64)&Handle);
        if ( v135 >= 0 )
        {
          *(_QWORD *)TokenInformation = Handle;
          ObfDereferenceObjectWithTag(v131, 0x74726853u);
          return 0;
        }
      }
LABEL_194:
      ObfDereferenceObjectWithTag(v131, 0x74726853u);
      return v135;
    case 20:
      *v12 = 4;
      if ( TokenInformationLength != 4 )
        return -1073741820;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v172 = KeGetCurrentThread();
      --v172->KernelApcDisable;
      v173 = (PERESOURCE *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      TokenElevation = SepGetTokenElevation((__int64)v173);
      ExReleaseResourceLite(v173[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      *(_DWORD *)TokenInformation = TokenElevation;
      goto LABEL_17;
    case 21:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 1;
      if ( !TokenInformationLength )
        goto LABEL_11;
      v18 = Object;
      *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
      goto LABEL_18;
    case 22:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v72 = KeGetCurrentThread();
      --v72->KernelApcDisable;
      v15 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v73 = 0;
      v74 = 1LL;
      v75 = 37LL;
      do
      {
        v76 = v73 + 1;
        if ( (v74 & *((_QWORD *)v15 + 8)) == 0 )
          v76 = v73;
        v73 = v76;
        v74 = __ROL8__(v74, 1);
        --v75;
      }
      while ( v75 );
      v77 = 12 * v76 + 16;
      v78 = v77 - 12;
      if ( !v73 )
        v78 = v77;
      LODWORD(RemainingSidArea) = v78;
      v79 = 0;
      v80 = 0;
      v81 = *((_DWORD *)v15 + 31);
      v82 = 16 * v81;
      Flags[0].Flags = 16 * v81;
      v236 = *((_DWORD *)v15 + 32);
      LODWORD(v239) = 16 * v236;
      LODWORD(Handle) = *((_DWORD *)v15 + 200);
      LODWORD(v238) = 16 * (_DWORD)Handle;
      LODWORD(v240) = 16 * v81;
      v83 = 0;
      if ( v81 < 2 )
        goto LABEL_111;
      v232 = (HANDLE)*((_QWORD *)v15 + 19);
      v84 = v232;
      v85 = ((v81 - 2) >> 1) + 1;
      LODWORD(v233) = 2 * v85;
      v86 = 2 * v85;
      do
      {
        v79 += (4 * *(unsigned __int8 *)(*v84 + 1LL) + 15) & 0xFFFFFFF8;
        v80 += (4 * *(unsigned __int8 *)(v84[2] + 1LL) + 15) & 0xFFFFFFF8;
        v84 += 4;
        --v85;
      }
      while ( v85 );
      v83 = (unsigned int)v233;
      if ( (unsigned int)v233 < v81 )
      {
        v87 = v232;
        goto LABEL_114;
      }
      v82 = (unsigned int)v240;
LABEL_111:
      if ( v83 < v81 )
      {
        v87 = (_QWORD *)*((_QWORD *)v15 + 19);
        v86 = v83;
LABEL_114:
        v82 = Flags[0].Flags + ((4 * *(unsigned __int8 *)(v87[2 * v86] + 1LL) + 15) & 0xFFFFFFF8);
      }
      v88 = 0;
      v89 = 0;
      LODWORD(v240) = v79 + v80 + v82;
      v90 = (unsigned int)v239;
      v228 = (int)v239;
      v91 = 0;
      v92 = v236;
      if ( v236 < 2 )
        goto LABEL_120;
      v233 = (PVOID)*((_QWORD *)v15 + 20);
      v93 = v233;
      v94 = ((v236 - 2) >> 1) + 1;
      v95 = v94;
      v91 = 2 * v94;
      v96 = 2LL * v94;
      do
      {
        v88 += (4 * *(unsigned __int8 *)(*v93 + 1LL) + 15) & 0xFFFFFFF8;
        v89 += (4 * *(unsigned __int8 *)(v93[2] + 1LL) + 15) & 0xFFFFFFF8;
        v93 += 4;
        --v95;
      }
      while ( v95 );
      v92 = v236;
      if ( v91 < v236 )
      {
        v97 = v233;
        goto LABEL_123;
      }
      v90 = v228;
LABEL_120:
      if ( v91 < v92 )
      {
        v97 = (_QWORD *)*((_QWORD *)v15 + 20);
        v96 = v91;
LABEL_123:
        v90 = (_DWORD)v239 + ((4 * *(unsigned __int8 *)(v97[2 * v96] + 1LL) + 15) & 0xFFFFFFF8);
      }
      v98 = 0;
      v99 = 0;
      v228 = v88 + v89 + v90;
      v100 = (unsigned int)v238;
      SessionId = (unsigned int)v238;
      v101 = 0;
      v102 = (unsigned int)Handle;
      if ( (unsigned int)Handle < 2 )
        goto LABEL_129;
      v233 = (PVOID)*((_QWORD *)v15 + 99);
      v103 = v233;
      v104 = ((unsigned int)((_DWORD)Handle - 2) >> 1) + 1;
      v105 = v104;
      v101 = 2 * v104;
      v106 = 2LL * v104;
      do
      {
        v98 += (4 * *(unsigned __int8 *)(*v103 + 1LL) + 15) & 0xFFFFFFF8;
        v99 += (4 * *(unsigned __int8 *)(v103[2] + 1LL) + 15) & 0xFFFFFFF8;
        v103 += 4;
        --v105;
      }
      while ( v105 );
      v102 = (unsigned int)Handle;
      if ( v101 < (unsigned int)Handle )
      {
        v107 = v233;
        goto LABEL_132;
      }
      v100 = SessionId;
LABEL_129:
      if ( v101 < v102 )
      {
        v107 = (_QWORD *)*((_QWORD *)v15 + 99);
        v106 = v101;
LABEL_132:
        v100 = (_DWORD)v238 + ((4 * *(unsigned __int8 *)(v107[2 * v106] + 1LL) + 15) & 0xFFFFFFF8);
      }
      SessionId = v98 + v99 + v100;
      LODWORD(v233) = 0;
      v108 = *((_QWORD *)v15 + 98);
      if ( v108 )
        LODWORD(v233) = (4 * *(unsigned __int8 *)(v108 + 1) + 15) & 0xFFFFFFF8;
      v109 = v225;
      v110 = v227;
      if ( !(_BYTE)v225 )
        v110 = *((_QWORD *)v15 + 138);
      LODWORD(v232) = 0;
      if ( v110 )
        LODWORD(v232) = (4 * *(unsigned __int8 *)(v110 + 1) + 15) & 0xFFFFFFF8;
      v111 = (unsigned int *)*((_QWORD *)v15 + 97);
      v112 = 0;
      LODWORD(Handle) = 0;
      if ( !v111 )
        goto LABEL_157;
      v113 = 112LL * *v111;
      if ( v113 > 0xFFFFFFFF )
      {
        InternalSecurityAttributeValueCopyoutBufferSize = -1073741675;
        goto LABEL_154;
      }
      v115 = v113 + 48;
      v116 = -1;
      if ( v115 >= 0x30 )
        v116 = v115;
      InternalSecurityAttributeValueCopyoutBufferSize = v115 < 0x30 ? 0xC0000095 : 0;
      if ( v115 < 0x30 )
        goto LABEL_154;
      IntegritySA.Sid = v111 + 2;
      v117 = (void **)*((_QWORD *)v111 + 1);
      if ( v117 == (void **)(v111 + 2) )
      {
LABEL_152:
        v112 = v116;
LABEL_154:
        v109 = v225;
        if ( InternalSecurityAttributeValueCopyoutBufferSize >= 0 )
          LODWORD(v9) = v112;
        goto LABEL_157;
      }
      while ( 1 )
      {
        v118 = (v116 + 1) & 0xFFFFFFFE;
        if ( v118 < v116 )
          break;
        v119 = v118 + *((unsigned __int16 *)v117 + 16);
        v120 = -1;
        if ( v119 >= v118 )
          v120 = v118 + *((unsigned __int16 *)v117 + 16);
        v236 = v120;
        InternalSecurityAttributeValueCopyoutBufferSize = v119 < v118 ? 0xC0000095 : 0;
        if ( v119 < v118
          || (InternalSecurityAttributeValueCopyoutBufferSize = AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(
                                                                  (__int64)v117,
                                                                  &v236),
              InternalSecurityAttributeValueCopyoutBufferSize < 0) )
        {
          v112 = (unsigned int)Handle;
          goto LABEL_154;
        }
        v117 = (void **)*v117;
        v116 = v236;
        if ( v117 == IntegritySA.Sid )
          goto LABEL_152;
      }
      v109 = v225;
LABEL_157:
      v121 = (int)v232;
      v122 = SessionId;
      v123 = (unsigned int)v233;
      v124 = v228;
      v125 = (unsigned int)v240;
      v126 = v228 + (_DWORD)v233 + SessionId + (_DWORD)v232 + v9 + (_DWORD)RemainingSidArea + (_DWORD)v240 + 904;
      *v12 = v126;
      if ( TokenInformationLength < v126 )
      {
LABEL_9:
        v17 = (struct _ERESOURCE *)*((_QWORD *)v15 + 6);
LABEL_10:
        ExReleaseResourceLite(v17);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_11:
        v18 = Object;
LABEL_12:
        ObfDereferenceObjectWithTag(v18, 0x74726853u);
        return -1073741789;
      }
      else
      {
        SepCopyTokenAccessInformation(
          (__int64)v15,
          (__int64)TokenInformation,
          TokenInformationLength,
          v73,
          v125,
          Flags[0].Flags,
          v124,
          (unsigned int)v239,
          v123,
          v122,
          (unsigned int)v238,
          v121,
          v9,
          v109,
          (void *)v227);
LABEL_15:
        v19 = (struct _ERESOURCE *)*((_QWORD *)v15 + 6);
LABEL_16:
        ExReleaseResourceLite(v19);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_17:
        v18 = Object;
LABEL_18:
        ObfDereferenceObjectWithTag(v18, 0x74726853u);
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
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      v46 = Object;
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationAllowed:
          v175 = *((_DWORD *)Object + 50) >> 9;
          break;
        case TokenVirtualizationEnabled:
          v175 = *((_DWORD *)Object + 50) >> 10;
          break;
        case TokenUIAccess:
          v175 = *((_DWORD *)Object + 50) >> 12;
          break;
        case TokenIsRestricted:
          LOBYTE(v9) = (*((_DWORD *)Object + 50) & 0x18) != 0;
          goto LABEL_286;
        case TokenPrivateNameSpace:
          LOWORD(v175) = *((_WORD *)Object + 101);
          break;
        case TokenIsSandboxed:
          LODWORD(v9) = SepIsSandboxedToken(Object, PreviousMode);
          goto LABEL_286;
        case TokenIsAppSilo:
          LODWORD(v9) = SepSidInTokenSidHash((__int64)Object + 808, 0LL, (unsigned __int8 *)SeAppSiloSid, 0, 1, 0);
          goto LABEL_286;
        default:
          v175 = *((_DWORD *)Object + 50) >> 14;
          break;
      }
      LODWORD(v9) = v175 & 1;
LABEL_286:
      *(_DWORD *)TokenInformation = v9;
LABEL_74:
      ObfDereferenceObjectWithTag(v46, 0x74726853u);
      return 0;
    case 25:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v187 = KeGetCurrentThread();
      --v187->KernelApcDisable;
      v15 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      SepCopyTokenIntegrity((__int64)v15, (__int64)&Src);
      v188 = (unsigned __int8 *)Src.Sid;
      v189 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
      *v12 = v189;
      if ( TokenInformationLength < v189 )
        goto LABEL_9;
      RtlCopySidAndAttributesArray(
        1u,
        &Src,
        4 * v188[1] + 8,
        (PSID_AND_ATTRIBUTES)TokenInformation,
        (char *)TokenInformation + 16,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_15;
    case 27:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      MandatoryPolicyToken = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
      SecurityAttributesToken = MandatoryPolicyToken;
      ObfDereferenceObjectWithTag(v191, 0x74726853u);
      return MandatoryPolicyToken;
    case 28:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v192 = KeGetCurrentThread();
      --v192->KernelApcDisable;
      v15 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v193 = 0LL;
      v194 = *((_DWORD *)v15 + 31);
      if ( !v194 )
        goto LABEL_320;
      v195 = *((_QWORD *)v15 + 19);
      while ( (*(_DWORD *)(v195 + 16LL * (unsigned int)v193 + 8) & 0xC0000000) != 0xC0000000 )
      {
        v193 = (unsigned int)(v193 + 1);
        if ( (unsigned int)v193 >= v194 )
          goto LABEL_320;
      }
      v9 = *(_QWORD *)(v195 + 16LL * (unsigned int)v193);
LABEL_320:
      if ( !v9 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v15 + 6));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return -1073741275;
      }
      v196 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v15 + 19) + 16LL * (unsigned int)v193) + 1LL) + 32;
      *v12 = v196;
      if ( TokenInformationLength < v196 )
        goto LABEL_9;
      *(_DWORD *)TokenInformation = 1;
      RtlCopySidAndAttributesArray(
        1u,
        (PSID_AND_ATTRIBUTES)(*((_QWORD *)v15 + 19) + 16 * v193),
        4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v15 + 19) + 16 * v193) + 1LL) + 8,
        (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
        (char *)TokenInformation + 24,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_15;
    case 30:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v182 = KeGetCurrentThread();
      --v182->KernelApcDisable;
      v21 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v183 = *((_DWORD *)v21 + 200);
      v184 = 16 * v183 + 8;
      if ( v183 )
      {
        v185 = v21[99];
        v186 = v183;
        do
        {
          v184 += 4 * *(unsigned __int8 *)(*(_QWORD *)v185 + 1LL) + 8;
          v185 += 16LL;
          --v186;
        }
        while ( v186 );
      }
      *v12 = v184;
      if ( TokenInformationLength < v184 )
        goto LABEL_24;
      *(_DWORD *)TokenInformation = *((_DWORD *)v21 + 200);
      RtlCopySidAndAttributesArray(
        *((_DWORD *)v21 + 200),
        (PSID_AND_ATTRIBUTES)v21[99],
        v184,
        (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
        (char *)TokenInformation + (unsigned int)(16 * *((_DWORD *)v21 + 200)) + 8,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_26;
    case 31:
      v179 = 8;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v180 = KeGetCurrentThread();
      --v180->KernelApcDisable;
      v21 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v181 = (unsigned __int8 *)v21[98];
      if ( v181 )
        v179 = 4 * v181[1] + 16;
      *v12 = v179;
      if ( TokenInformationLength < v179 )
        goto LABEL_24;
      if ( v181 )
        v181 = (unsigned __int8 *)TokenInformation + 8;
      *(_QWORD *)TokenInformation = v181;
      if ( v181 )
        RtlCopySid(v179 - 8, v181, (PSID)v21[98]);
      goto LABEL_26;
    case 32:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      *v12 = 4;
      if ( TokenInformationLength < 4 )
        goto LABEL_11;
      v176 = KeGetCurrentThread();
      --v176->KernelApcDisable;
      v177 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v178 = *((_QWORD *)v177 + 135);
      if ( v178 )
        LODWORD(v9) = *(_DWORD *)(v178 + 40);
      ExReleaseResourceLite(*((PERESOURCE *)v177 + 6));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      *(_DWORD *)TokenInformation = v9;
      goto LABEL_17;
    case 33:
    case 34:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v197 = KeGetCurrentThread();
      --v197->KernelApcDisable;
      v198 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v199 = *((_QWORD *)v198 + 137);
      if ( v199
        && ((v200 = *(__int128 **)(v199 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
        && ((v201 = *(__int128 **)(v199 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
      {
        if ( TokenInformationClass == TokenUserClaimAttributes )
          v201 = v200;
        AuthzBasepQueryClaimAttributesToken(v201, 0LL, 0, &v228);
        v202 = v228;
      }
      else
      {
        v202 = 16;
        *(_QWORD *)&v247 = (char *)&v246 + 8;
        *((_QWORD *)&v246 + 1) = (char *)&v246 + 8;
        DWORD2(v247) = 0;
        *((_QWORD *)&v248 + 1) = &v248;
        *(_QWORD *)&v248 = &v248;
        v201 = &v246;
      }
      *v12 = v202;
      if ( TokenInformationLength < v202 )
      {
        v17 = (struct _ERESOURCE *)*((_QWORD *)v198 + 6);
        goto LABEL_10;
      }
      SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(
                                  v201,
                                  TokenInformation,
                                  TokenInformationLength,
                                  &v228);
      v203 = (struct _ERESOURCE *)*((_QWORD *)v198 + 6);
LABEL_337:
      ExReleaseResourceLite(v203);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_338:
      ObfDereferenceObjectWithTag(Object, 0x74726853u);
      return SecurityAttributesToken;
    case 37:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v204 = KeGetCurrentThread();
      --v204->KernelApcDisable;
      v21 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v205 = v21[137];
      if ( v205 && (v206 = *(_DWORD *)v205) != 0 )
      {
        v207 = 16 * v206 + 8;
      }
      else
      {
        v206 = 0;
        v207 = 24;
      }
      if ( v206 )
      {
        v208 = *(_QWORD *)(v205 + 8);
        v209 = v206;
        do
        {
          v207 += 4 * *(unsigned __int8 *)(*(_QWORD *)v208 + 1LL) + 8;
          v208 += 16LL;
          --v209;
        }
        while ( v209 );
      }
      *v12 = v207;
      if ( TokenInformationLength < v207 )
        goto LABEL_24;
      *(_OWORD *)TokenInformation = 0LL;
      *((_QWORD *)TokenInformation + 2) = 0LL;
      *(_DWORD *)TokenInformation = v206;
      if ( v206 )
        RtlCopySidAndAttributesArray(
          v206,
          *(PSID_AND_ATTRIBUTES *)(v21[137] + 8LL),
          v207,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v206 + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
      goto LABEL_26;
    case 39:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v210 = KeGetCurrentThread();
      --v210->KernelApcDisable;
      v21 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v211 = (unsigned int *)v21[97];
      if ( v211 )
      {
        AuthzBasepQuerySecurityAttributesToken(v211, 0LL, 0, 0LL, 0, &v228);
        v212 = v228;
      }
      else
      {
        v212 = 16;
      }
      *v12 = v212;
      if ( TokenInformationLength < v212 )
        goto LABEL_24;
      SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                  (unsigned int *)v21[97],
                                  0LL,
                                  0,
                                  TokenInformation,
                                  TokenInformationLength,
                                  &v228);
      v203 = (struct _ERESOURCE *)v21[6];
      goto LABEL_337;
    case 41:
      v213 = 8;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v214 = KeGetCurrentThread();
      --v214->KernelApcDisable;
      v21 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v215 = v225;
      v216 = (void *)v227;
      v217 = (unsigned __int8 *)v227;
      if ( !(_BYTE)v225 )
        v217 = (unsigned __int8 *)v21[138];
      if ( v217 )
        v213 = 4 * v217[1] + 16;
      *v12 = v213;
      if ( TokenInformationLength < v213 )
      {
LABEL_24:
        v17 = (struct _ERESOURCE *)v21[6];
        goto LABEL_10;
      }
      if ( v217 )
        v217 = (unsigned __int8 *)TokenInformation + 8;
      *(_QWORD *)TokenInformation = v217;
      if ( v217 )
      {
        if ( !v215 )
          v216 = (void *)v21[138];
        RtlCopySid(v213 - 8, v217, v216);
      }
      goto LABEL_369;
    case 43:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v218 = KeGetCurrentThread();
      --v218->KernelApcDisable;
      v219 = (PERESOURCE *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      LODWORD(RemainingSidAreaSize) = TokenInformationLength;
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                  (__int64)v219,
                                  v220,
                                  0LL,
                                  0,
                                  1,
                                  TokenInformation,
                                  (size_t)RemainingSidAreaSize,
                                  v12);
      ExReleaseResourceLite(v219[6]);
      KeLeaveCriticalRegionThread();
      goto LABEL_338;
    case 44:
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, TokenInformationLength, &Object, &v225, &v227);
      if ( result < 0 )
        return result;
      v221 = KeGetCurrentThread();
      --v221->KernelApcDisable;
      v21 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v222 = 16;
      v223 = v21[144];
      if ( v223 )
        v222 = *(unsigned __int16 *)(v223 + 42) + 16;
      *v12 = v222;
      if ( TokenInformationLength < v222 )
      {
        ExReleaseResourceLite((PERESOURCE)v21[6]);
        KeLeaveCriticalRegionThread();
        goto LABEL_11;
      }
      if ( v21[144] )
      {
        *((_BYTE *)TokenInformation + 8) = 1;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
        memmove(
          (char *)TokenInformation + 16,
          *(const void **)(v21[144] + 48LL),
          *(unsigned __int16 *)(v21[144] + 42LL));
      }
      else
      {
        *((_BYTE *)TokenInformation + 8) = 0;
        *(_QWORD *)TokenInformation = 0LL;
      }
LABEL_369:
      ExReleaseResourceLite((PERESOURCE)v21[6]);
      KeLeaveCriticalRegionThread();
      goto LABEL_17;
    default:
      return -1073741821;
  }
}
