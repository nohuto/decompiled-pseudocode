/*
 * XREFs of SeQueryInformationToken @ 0x1408E4F90
 * Callers:
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     RtlpQueryLowBoxId @ 0x1404247E0 (RtlpQueryLowBoxId.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x1407095D4 (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     RtlpIsAppContainer @ 0x140781A2C (RtlpIsAppContainer.c)
 *     CmpCreateRegistryProcessToken @ 0x1407D858C (CmpCreateRegistryProcessToken.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DD50C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140858A1C (PspAllocateAndQueryNotificationChannel.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     PiDqOpenUserObjectRegKey @ 0x1408E1780 (PiDqOpenUserObjectRegKey.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     CmpBuildAdminInformation @ 0x140990B8C (CmpBuildAdminInformation.c)
 *     SeQuerySigningPolicyWorker @ 0x1409FA8F8 (SeQuerySigningPolicyWorker.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A05EC4 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A062C8 (ObpCaptureBoundaryDescriptor.c)
 *     SeTokenIsElevated @ 0x140A0E3B0 (SeTokenIsElevated.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A0F9D4 (AlpcpCheckConnectionSecurity.c)
 *     SeCompareTokens @ 0x140A179B8 (SeCompareTokens.c)
 *     ObpGetIntegrityLevel @ 0x140A1EA60 (ObpGetIntegrityLevel.c)
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 *     EtwpTiQueryTokenIdentity @ 0x140A69F44 (EtwpTiQueryTokenIdentity.c)
 *     SepCheckCapabilities @ 0x140A8926C (SepCheckCapabilities.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140323590 (SepCanTokenMatchAllPackageSid.c)
 *     SepSidInTokenSidHash @ 0x1403BEFB0 (SepSidInTokenSidHash.c)
 *     SepCopyTokenIntegrity @ 0x140409240 (SepCopyTokenIntegrity.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1404184E0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x14041CCD0 (SepTokenPrivilegeCount.c)
 *     SepGetTokenElevation @ 0x14043FFE8 (SepGetTokenElevation.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     SepIsSandboxedToken @ 0x140446D78 (SepIsSandboxedToken.c)
 *     SepConvertTokenPrivileges @ 0x140450078 (SepConvertTokenPrivileges.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x140455E80 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 *     SepGetTokenElevationType @ 0x140469B94 (SepGetTokenElevationType.c)
 *     Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x140605A40 (Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     RtlCopySidAndAttributesArray @ 0x140990EE0 (RtlCopySidAndAttributesArray.c)
 *     SepCopyTokenAccessInformation @ 0x1409DD7CC (SepCopyTokenAccessInformation.c)
 *     SeQuerySessionIdToken @ 0x1409F4CB0 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A037C0 (AuthzBasepQueryClaimAttributesToken.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  ULONG v3; // ebx
  PVOID *v4; // r14
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG v8; // esi
  _SID_AND_ATTRIBUTES *Pool2; // rax
  _QWORD *p_Sid; // rbx
  struct _ERESOURCE *v11; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *v13; // rax
  unsigned int v14; // ecx
  ULONG v15; // ebx
  ULONG v16; // eax
  __int64 v17; // r8
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rsi
  struct _KTHREAD *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // esi
  _DWORD *v25; // rax
  struct _KTHREAD *v26; // rax
  int v27; // esi
  int v28; // r15d
  int v29; // eax
  unsigned int v30; // r9d
  int v31; // r12d
  __int64 *v32; // r11
  __int64 *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // r13d
  __int64 v37; // r10
  __int64 v38; // rax
  int v39; // r9d
  unsigned int v40; // r12d
  _DWORD *v41; // rsi
  unsigned int v42; // r11d
  int v43; // r10d
  int v44; // r13d
  __int64 *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // r8
  unsigned int v48; // esi
  __int64 v49; // r15
  __int64 v50; // rax
  bool v51; // cf
  _QWORD *v52; // rax
  int v53; // r15d
  unsigned int v54; // r13d
  _DWORD *v55; // rax
  char *v56; // rdx
  _DWORD *v57; // r9
  char *v58; // rax
  unsigned int v59; // r8d
  __int64 v60; // r11
  __int64 v61; // rcx
  unsigned int v62; // r12d
  unsigned int v63; // ecx
  __int64 v64; // r10
  _DWORD *v65; // rsi
  char *v66; // r14
  unsigned int v67; // edi
  unsigned int v68; // r15d
  unsigned __int8 *v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned int v72; // r13d
  ULONG v73; // eax
  char *v74; // r12
  PSID v75; // r8
  _DWORD *v76; // rsi
  ULONG v77; // r14d
  unsigned int v78; // r15d
  unsigned __int8 *v79; // rdx
  unsigned int v80; // eax
  struct _KTHREAD *v81; // rax
  __int64 v82; // r8
  __int64 v83; // rcx
  int v84; // r15d
  __int64 v85; // rdx
  int v86; // eax
  unsigned int v87; // r10d
  int v88; // eax
  int v89; // ecx
  int v90; // r11d
  unsigned int *v91; // rdx
  int v92; // esi
  int v93; // eax
  int v94; // ecx
  __int64 *v95; // r12
  __int64 *v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // r8
  unsigned int v99; // r13d
  __int64 v100; // r9
  __int64 v101; // rax
  int v102; // eax
  int v103; // r9d
  unsigned int v104; // r11d
  int v105; // r10d
  int v106; // ecx
  __int64 *v107; // r12
  __int64 *v108; // rdx
  unsigned int v109; // eax
  __int64 v110; // r8
  unsigned int v111; // r13d
  __int64 v112; // rsi
  __int64 v113; // rax
  int v114; // r13d
  int v115; // eax
  unsigned int v116; // r9d
  int v117; // r11d
  int v118; // esi
  __int64 *v119; // r12
  __int64 *v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r10
  __int64 v123; // rax
  int v124; // r13d
  __int64 v125; // rax
  __int64 v126; // rax
  unsigned int *v127; // rcx
  unsigned __int64 v128; // rax
  unsigned int v129; // eax
  __int64 v130; // rsi
  unsigned int *i; // r12
  unsigned int v132; // ecx
  unsigned int v133; // r12d
  __int64 v134; // rax
  void *v135; // rsi
  struct _KTHREAD *v136; // rax
  struct _ERESOURCE **v137; // rsi
  int v138; // r15d
  int v139; // r12d
  unsigned int v140; // r9d
  int v141; // r11d
  __int64 *v142; // r13
  __int64 *v143; // rdx
  unsigned int v144; // eax
  __int64 v145; // r8
  unsigned int v146; // esi
  __int64 v147; // r10
  __int64 v148; // rax
  int v149; // r11d
  unsigned int v150; // edx
  __int64 v151; // rax
  unsigned int v152; // r15d
  _DWORD *v153; // r13
  __int64 v154; // rax
  int v155; // eax
  PSID v156; // rsi
  int v157; // ecx
  ULONG v158; // eax
  char *v159; // r12
  __int64 v160; // r9
  _DWORD *v161; // rsi
  unsigned int v162; // edx
  unsigned int v163; // r8d
  unsigned int v164; // r15d
  unsigned __int8 *v165; // rcx
  unsigned int v166; // eax
  char *v167; // r15
  __int64 v168; // rsi
  char *v169; // r9
  char *v170; // r9
  int v171; // edx
  unsigned int v172; // r13d
  char *v173; // r12
  ULONG v174; // eax
  _DWORD *v175; // rsi
  __int64 v176; // r14
  ULONG v177; // edi
  unsigned int v178; // r15d
  unsigned __int8 *v179; // rdx
  unsigned int v180; // eax
  struct _KTHREAD *v181; // rax
  unsigned int v182; // esi
  _QWORD *v183; // rax
  struct _KTHREAD *v184; // rax
  __int64 v185; // rbx
  unsigned int v186; // esi
  __int64 v187; // rax
  _QWORD *v188; // r15
  struct _KTHREAD *v189; // rax
  PSID v190; // rsi
  int v191; // ecx
  struct _KTHREAD *v192; // rax
  unsigned int v193; // esi
  _QWORD *v194; // rax
  struct _KTHREAD *v195; // rax
  __int64 v196; // rax
  ULONG_PTR v197; // rsi
  __int64 v198; // rax
  void *v199; // rcx
  _OWORD *v200; // rax
  _DWORD *v201; // rax
  int TokenElevationType; // eax
  _DWORD *v203; // rdx
  _DWORD *v204; // rsi
  struct _KTHREAD *v205; // rcx
  int TokenElevation; // ebx
  _DWORD *v207; // rax
  __int64 v208; // rax
  struct _KTHREAD *v209; // rax
  __int64 v210; // rax
  int v211; // edx
  bool IsSandboxedToken; // al
  bool *v213; // r8
  struct _KTHREAD *v214; // rax
  __int64 v215; // rax
  struct _KTHREAD *v216; // rax
  unsigned int v217; // ecx
  ULONG v218; // ebx
  ULONG v219; // eax
  __int64 *v220; // rdx
  __int64 v221; // r8
  __int64 v222; // rax
  __int64 v223; // rax
  PERESOURCE *v224; // r15
  struct _KTHREAD *v225; // rax
  __int64 v226; // rax
  __int128 *v227; // rdi
  unsigned int v228; // esi
  __int64 v229; // rax
  void *v230; // rbx
  NTSTATUS v231; // edi
  struct _KTHREAD *v232; // rax
  ULONG **v233; // r12
  int *v234; // rdx
  unsigned int v235; // esi
  ULONG v236; // ebx
  __int64 *v237; // rdx
  __int64 v238; // r8
  __int64 v239; // rax
  __int64 v240; // rdi
  struct _KTHREAD *v241; // rax
  unsigned int v242; // esi
  __int64 v243; // rax
  struct _KTHREAD *v244; // rax
  __int64 v245; // rax
  ULONG_PTR v246; // rsi
  unsigned int v247; // [rsp+80h] [rbp-59h]
  int v248; // [rsp+80h] [rbp-59h]
  int v249; // [rsp+80h] [rbp-59h]
  int v250; // [rsp+84h] [rbp-55h]
  int v251; // [rsp+84h] [rbp-55h]
  unsigned int v252; // [rsp+84h] [rbp-55h]
  unsigned int v253; // [rsp+88h] [rbp-51h]
  unsigned int v254; // [rsp+88h] [rbp-51h]
  unsigned int v255; // [rsp+88h] [rbp-51h]
  PSID Sid[2]; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v257; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v258; // [rsp+A8h] [rbp-31h]
  _DWORD *v259; // [rsp+B0h] [rbp-29h]
  __int128 v260; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v261; // [rsp+C8h] [rbp-11h]
  _OWORD v262[5]; // [rsp+D8h] [rbp-1h] BYREF
  PSID RemainingSidArea; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v264; // [rsp+148h] [rbp+6Fh] BYREF
  PVOID *v265; // [rsp+150h] [rbp+77h]
  __int64 v266; // [rsp+158h] [rbp+7Fh]

  v265 = TokenInformation;
  RemainingSidArea = Token;
  v3 = 0;
  v4 = TokenInformation;
  v264 = 0;
  v6 = Token;
  v260 = 0LL;
  v261 = 0LL;
  v262[0] = 0LL;
  switch ( TokenInformationClass )
  {
    case TokenUser:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v8 = 4 * *(unsigned __int8 *)(*(_QWORD *)v6[19] + 1LL) + 24;
      Pool2 = (_SID_AND_ATTRIBUTES *)ExAllocatePool2(0x100uLL, v8, 0x20206553u);
      p_Sid = &Pool2->Sid;
      if ( !Pool2 )
        goto LABEL_3;
      RtlCopySidAndAttributesArray(
        1u,
        (PSID_AND_ATTRIBUTES)v6[19],
        v8,
        Pool2,
        &Pool2[1],
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_7;
    case TokenGroups:
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v14 = *((_DWORD *)v6 + 31);
      v15 = 16 * v14 - 8;
      v16 = v15;
      if ( v14 > 1 )
      {
        v17 = v14 - 1;
        v18 = (__int64 *)(v6[19] + 16LL);
        do
        {
          v19 = *v18;
          v18 += 2;
          v15 += 4 * *(unsigned __int8 *)(v19 + 1) + 8;
          v16 = v15;
          --v17;
        }
        while ( v17 );
      }
      v20 = ExAllocatePool2(0x100uLL, v16, 0x20206553u);
      v21 = (void *)v20;
      if ( !v20 )
        goto LABEL_3;
      *(_DWORD *)v20 = *((_DWORD *)v6 + 31) - 1;
      RtlCopySidAndAttributesArray(
        *((_DWORD *)v6 + 31) - 1,
        (PSID_AND_ATTRIBUTES)(v6[19] + 16LL),
        v15,
        (PSID_AND_ATTRIBUTES)(v20 + 8),
        (PSID)(v20 + (unsigned int)(16 * *((_DWORD *)v6 + 31) - 32) + 24LL),
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      ExReleaseResourceLite((PERESOURCE)v6[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      result = 0;
      *v4 = v21;
      return result;
    case TokenPrivileges:
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v23 = SepTokenPrivilegeCount((__int64)v6);
      if ( v23 <= 1 )
        v24 = 16;
      else
        v24 = 12 * v23 + 4;
      v25 = (_DWORD *)ExAllocatePool2(0x100uLL, v24, 0x20206553u);
      p_Sid = v25;
      if ( !v25 )
        goto LABEL_3;
      SepConvertTokenPrivileges(v6, v25);
      goto LABEL_7;
    case TokenOwner:
      v181 = KeGetCurrentThread();
      --v181->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v182 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v6[19] + 16LL * *((unsigned int *)v6 + 36)) + 1LL) + 16;
      v183 = (_QWORD *)ExAllocatePool2(0x100uLL, v182, 0x20206553u);
      p_Sid = v183;
      if ( !v183 )
        goto LABEL_3;
      *v183 = v183 + 1;
      RtlCopySid(v182 - 8, v183 + 1, *(PSID *)(v6[19] + 16LL * *((unsigned int *)v6 + 36)));
      goto LABEL_7;
    case TokenPrimaryGroup:
      v192 = KeGetCurrentThread();
      --v192->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v193 = 4 * *(unsigned __int8 *)(v6[21] + 1LL) + 16;
      v194 = (_QWORD *)ExAllocatePool2(0x100uLL, v193, 0x20206553u);
      p_Sid = v194;
      if ( !v194 )
        goto LABEL_3;
      *v194 = v194 + 1;
      RtlCopySid(v193 - 8, v194 + 1, (PSID)v6[21]);
      goto LABEL_7;
    case TokenDefaultDacl:
      v195 = KeGetCurrentThread();
      --v195->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v196 = v6[23];
      v197 = 8LL;
      if ( v196 )
        v197 = *(unsigned __int16 *)(v196 + 2) + 8LL;
      v198 = ExAllocatePool2(0x100uLL, v197, 0x20206553u);
      v135 = (void *)v198;
      if ( !v198 )
        goto LABEL_3;
      v199 = (void *)(v198 + 8);
      if ( !v6[23] )
        goto LABEL_239;
      *(_QWORD *)v198 = v199;
      memmove(v199, (const void *)v6[23], *(unsigned __int16 *)(v6[23] + 2LL));
      goto LABEL_100;
    case TokenSource:
      v200 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x20206553u);
      if ( !v200 )
        return -1073741670;
      *v200 = *(_OWORD *)v6;
      *v4 = v200;
      return 0;
    case TokenType:
      v201 = (_DWORD *)ExAllocatePool2(0x100uLL, 4uLL, 0x20206553u);
      if ( !v201 )
        return -1073741670;
      *v201 = *((_DWORD *)v6 + 48);
      *v4 = v201;
      return 0;
    case TokenImpersonationLevel:
      if ( *((_DWORD *)Token + 48) != 2 )
        return -1073741821;
      v207 = (_DWORD *)ExAllocatePool2(0x100uLL, 4uLL, 0x20206553u);
      if ( !v207 )
        return -1073741670;
      *v207 = *((_DWORD *)v6 + 49);
      *v4 = v207;
      return 0;
    case TokenStatistics:
      v208 = ExAllocatePool2(0x100uLL, 0x38uLL, 0x20206553u);
      p_Sid = (_QWORD *)v208;
      if ( !v208 )
        return -1073741670;
      *(_QWORD *)v208 = v6[2];
      *(_QWORD *)(v208 + 8) = v6[3];
      *(_DWORD *)(v208 + 24) = *((_DWORD *)v6 + 48);
      *(_DWORD *)(v208 + 28) = *((_DWORD *)v6 + 49);
      *(_QWORD *)(v208 + 16) = v6[5];
      v209 = KeGetCurrentThread();
      --v209->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)v6[6], 1u);
      *((_DWORD *)p_Sid + 8) = *((_DWORD *)v6 + 34);
      v210 = v6[23];
      v211 = *((_DWORD *)v6 + 34) - 4 * *(unsigned __int8 *)(v6[21] + 1LL) - 8;
      if ( v210 )
        v211 -= *(unsigned __int16 *)(v210 + 2);
      *((_DWORD *)p_Sid + 9) = v211;
      *((_DWORD *)p_Sid + 9) = *((_DWORD *)v6 + 35);
      *((_DWORD *)p_Sid + 10) = *((_DWORD *)v6 + 31) - 1;
      *((_DWORD *)p_Sid + 11) = SepTokenPrivilegeCount((__int64)v6);
      p_Sid[6] = v6[7];
      goto LABEL_7;
    case TokenSessionId:
      SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
      return 0;
    case TokenGroupsAndPrivileges:
      v26 = KeGetCurrentThread();
      v27 = 0;
      v28 = 0;
      --v26->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v29 = SepTokenPrivilegeCount((__int64)v6);
      v30 = *((_DWORD *)v6 + 31);
      v250 = v29;
      LODWORD(v266) = 12 * v29;
      v264 = 16 * v30;
      v31 = 16 * v30;
      if ( v30 < 2 )
      {
        if ( !v30 )
          goto LABEL_26;
        v32 = (__int64 *)v6[19];
        v37 = 0LL;
      }
      else
      {
        v32 = (__int64 *)v6[19];
        v33 = v32;
        v34 = ((v30 - 2) >> 1) + 1;
        v35 = v34;
        v36 = 2 * v34;
        v37 = 2LL * v34;
        do
        {
          v38 = *v33;
          v33 += 4;
          v27 += (4 * *(unsigned __int8 *)(v38 + 1) + 15) & 0xFFFFFFF8;
          v28 += (4 * *(unsigned __int8 *)(*(v33 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v35;
        }
        while ( v35 );
        if ( v36 >= v30 )
        {
LABEL_26:
          v39 = 0;
          v40 = v27 + v28 + v31;
          v41 = v6 + 16;
          v42 = *((_DWORD *)v6 + 32);
          v43 = 0;
          v247 = 16 * v42;
          v44 = 16 * v42;
          if ( v42 < 2 )
          {
            if ( !v42 )
              goto LABEL_34;
            v52 = (_QWORD *)v6[20];
            v49 = 0LL;
          }
          else
          {
            Sid[0] = *((PSID *)v6 + 20);
            v45 = (__int64 *)Sid[0];
            v46 = ((v42 - 2) >> 1) + 1;
            v47 = v46;
            v48 = 2 * v46;
            v49 = 2LL * v46;
            do
            {
              v50 = *v45;
              v45 += 4;
              v39 += (4 * *(unsigned __int8 *)(v50 + 1) + 15) & 0xFFFFFFF8;
              v43 += (4 * *(unsigned __int8 *)(*(v45 - 2) + 1) + 15) & 0xFFFFFFF8;
              --v47;
            }
            while ( v47 );
            v51 = v48 < v42;
            v41 = v6 + 16;
            if ( !v51 )
            {
LABEL_34:
              v53 = v266;
              v54 = v39 + v43 + v44;
              v55 = (_DWORD *)ExAllocatePool2(0x100uLL, v40 + v54 + (_DWORD)v266 + 56, 0x20206553u);
              Sid[0] = v55;
              v56 = (char *)v55;
              if ( v55 )
              {
                v57 = v55 + 14;
                *((_QWORD *)v55 + 6) = v6[3];
                v55[1] = v40;
                *v55 = *((_DWORD *)v6 + 31);
                *((_QWORD *)v55 + 1) = v55 + 14;
                v55[5] = v54;
                v55[4] = *v41;
                if ( *v41 )
                  v58 = (char *)v57 + ((v40 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v58 = 0LL;
                *((_QWORD *)v56 + 3) = v58;
                v59 = 0;
                v60 = v264;
                *((_DWORD *)v56 + 8) = v250;
                v61 = v40;
                v62 = v40 - v60;
                *((_DWORD *)v56 + 9) = v53;
                LODWORD(v266) = 0;
                *((_QWORD *)v56 + 5) = (char *)v57 + v54 + v61;
                v63 = *((_DWORD *)v6 + 31);
                if ( v63 )
                {
                  v64 = v6[19] - (_QWORD)v57;
                  v65 = v56 + 64;
                  v258 = v64;
                  v66 = (char *)v57 + v60;
                  v67 = v63;
                  do
                  {
                    v68 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v65 + v64 - 8) + 1LL) + 8;
                    if ( v68 > v62 )
                      break;
                    *((_QWORD *)v65 - 1) = v66;
                    v62 -= v68;
                    *v65 = *(_DWORD *)((char *)v65 + v64);
                    v69 = *(unsigned __int8 **)((char *)v65 + v64 - 8);
                    v70 = 4 * v69[1] + 8;
                    if ( v70 <= v68 )
                    {
                      memmove(v66, v69, v70);
                      v59 = v266;
                      v64 = v258;
                    }
                    ++v59;
                    v66 += v68;
                    LODWORD(v266) = v59;
                    v65 += 4;
                  }
                  while ( v59 < v67 );
                  v6 = RemainingSidArea;
                  v4 = v265;
                  v56 = (char *)Sid[0];
                }
                if ( *((_DWORD *)v56 + 4) )
                {
                  v71 = *((_QWORD *)v56 + 3);
                  v72 = v54 - v247;
                  v73 = *((_DWORD *)v6 + 32);
                  v74 = (char *)(v71 + v247);
                  if ( v73 )
                  {
                    v75 = (PSID)(v6[20] - v71);
                    v76 = (_DWORD *)(v71 + 8);
                    RemainingSidArea = v75;
                    v77 = v73;
                    do
                    {
                      v78 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v76 + (_QWORD)v75 - 8) + 1LL) + 8;
                      if ( v78 > v72 )
                        break;
                      *((_QWORD *)v76 - 1) = v74;
                      v72 -= v78;
                      *v76 = *(_DWORD *)((char *)v76 + (_QWORD)v75);
                      v79 = *(unsigned __int8 **)((char *)v76 + (_QWORD)v75 - 8);
                      v80 = 4 * v79[1] + 8;
                      if ( v80 <= v78 )
                      {
                        memmove(v74, v79, v80);
                        v75 = RemainingSidArea;
                      }
                      ++v3;
                      v74 += v78;
                      v76 += 4;
                    }
                    while ( v3 < v77 );
                    v4 = v265;
                    v56 = (char *)Sid[0];
                  }
                }
                SepConvertTokenPrivilegesToLuidAndAttributes(v6, *((_QWORD *)v56 + 5));
                ExReleaseResourceLite((PERESOURCE)v6[6]);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                *v4 = Sid[0];
                return 0;
              }
              goto LABEL_3;
            }
            v52 = Sid[0];
          }
          v44 = v247 + ((4 * *(unsigned __int8 *)(v52[2 * v49] + 1LL) + 15) & 0xFFFFFFF8);
          goto LABEL_34;
        }
      }
      v31 = v264 + ((4 * *(unsigned __int8 *)(v32[2 * v37] + 1) + 15) & 0xFFFFFFF8);
      goto LABEL_26;
    case TokenElevationType:
      if ( !ExAllocatePool2(0x100uLL, 4uLL, 0x20206553u) )
        return -1073741670;
      TokenElevationType = SepGetTokenElevationType((__int64)v6);
      *v203 = TokenElevationType;
      result = 0;
      *v4 = v203;
      return result;
    case TokenElevation:
      v204 = (_DWORD *)ExAllocatePool2(0x100uLL, 4uLL, 0x20206553u);
      if ( !v204 )
        return -1073741670;
      v205 = KeGetCurrentThread();
      --v205->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)v6[6], 1u);
      TokenElevation = SepGetTokenElevation((__int64)v6);
      ExReleaseResourceLite((PERESOURCE)v6[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      *v204 = TokenElevation;
      result = 0;
      *v4 = v204;
      return result;
    case TokenHasRestrictions:
    case TokenVirtualizationAllowed:
    case TokenVirtualizationEnabled:
    case TokenUIAccess:
    case TokenIsAppContainer:
    case TokenPrivateNameSpace:
    case TokenIsSandboxed:
    case TokenIsAppSilo:
    case TokenIsAppSilo|TokenGroups:
    case MaxTokenInfoClass|TokenGroups:
    case TokenIsAppSilo|TokenOwner:
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationAllowed:
          *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) >> 9) & 1;
          return 0;
        case TokenVirtualizationEnabled:
          *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) >> 10) & 1;
          return 0;
        case TokenUIAccess:
          *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) >> 12) & 1;
          return 0;
        case TokenIsAppContainer:
          *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) >> 14) & 1;
          return 0;
        case TokenHasRestrictions:
          *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
          return 0;
        case TokenPrivateNameSpace:
          *(_DWORD *)TokenInformation = *((_WORD *)Token + 101) & 1;
          return 0;
        case TokenIsAppSilo:
          *(_DWORD *)TokenInformation = SepSidInTokenSidHash(
                                          (__int64)Token + 808,
                                          0LL,
                                          (unsigned __int8 *)SeAppSiloSid,
                                          0,
                                          1,
                                          0);
          return 0;
        case TokenIsSandboxed:
          IsSandboxedToken = SepIsSandboxedToken(Token, KeGetCurrentThread()->PreviousMode);
          *v213 = IsSandboxedToken;
          return 0;
        case MaxTokenInfoClass|TokenGroups:
          if ( (unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_BYTE *)v4 = (v6[25] & 0x8000000) != 0;
            return 0;
          }
          break;
        case TokenIsAppSilo|TokenOwner:
          if ( (unsigned int)Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_BYTE *)v4 = v6[146] & 1;
            return 0;
          }
          break;
        default:
          *(_DWORD *)TokenInformation = (*((_DWORD *)Token + 50) & 0x3000000u) >> 24;
          return 0;
      }
      return -1073741821;
    case TokenAccessInformation:
      v81 = KeGetCurrentThread();
      --v81->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v82 = v6[8];
      v83 = 1LL;
      v264 = 0;
      v84 = 0;
      v85 = 37LL;
      do
      {
        v86 = v84 + 1;
        if ( (v83 & v82) == 0 )
          v86 = v84;
        v83 = __ROL8__(v83, 1);
        v84 = v86;
        --v85;
      }
      while ( v85 );
      v87 = *((_DWORD *)v6 + 31);
      v88 = 12 * v86 + 16;
      v89 = v88 - 12;
      v90 = 0;
      if ( !v84 )
        v89 = v88;
      v91 = (unsigned int *)(v6 + 16);
      v92 = 0;
      v248 = 16 * *((_DWORD *)v6 + 32);
      v93 = *((_DWORD *)v6 + 200);
      LODWORD(Sid[0]) = v89;
      v94 = 16 * v87;
      v251 = 16 * v87;
      LODWORD(v258) = 16 * v93;
      LODWORD(v266) = 16 * v87;
      if ( v87 < 2 )
      {
        if ( !v87 )
          goto LABEL_68;
        v95 = (__int64 *)v6[19];
        v100 = 0LL;
      }
      else
      {
        v95 = (__int64 *)v6[19];
        v96 = v95;
        v97 = ((v87 - 2) >> 1) + 1;
        v98 = v97;
        v99 = 2 * v97;
        v100 = 2LL * v97;
        do
        {
          v101 = *v96;
          v96 += 4;
          v90 += (4 * *(unsigned __int8 *)(v101 + 1) + 15) & 0xFFFFFFF8;
          v92 += (4 * *(unsigned __int8 *)(*(v96 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v98;
        }
        while ( v98 );
        v91 = (unsigned int *)(v6 + 16);
        if ( v99 >= v87 )
        {
          v94 = v266;
          goto LABEL_68;
        }
      }
      v94 = v251 + ((4 * *(unsigned __int8 *)(v95[2 * v100] + 1) + 15) & 0xFFFFFFF8);
LABEL_68:
      v102 = v90 + v92;
      v103 = 0;
      v104 = *v91;
      LODWORD(v266) = v102 + v94;
      v105 = 0;
      v106 = v248;
      LODWORD(RemainingSidArea) = v248;
      if ( v104 < 2 )
      {
        if ( !v104 )
          goto LABEL_76;
        v107 = (__int64 *)v6[20];
        v112 = 0LL;
      }
      else
      {
        v107 = (__int64 *)v6[20];
        v108 = v107;
        v109 = ((v104 - 2) >> 1) + 1;
        v110 = v109;
        v111 = 2 * v109;
        v112 = 2LL * v109;
        do
        {
          v113 = *v108;
          v108 += 4;
          v103 += (4 * *(unsigned __int8 *)(v113 + 1) + 15) & 0xFFFFFFF8;
          v105 += (4 * *(unsigned __int8 *)(*(v108 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v110;
        }
        while ( v110 );
        if ( v111 >= v104 )
        {
          v106 = (int)RemainingSidArea;
          goto LABEL_76;
        }
      }
      v106 = v248 + ((4 * *(unsigned __int8 *)(v107[2 * v112] + 1) + 15) & 0xFFFFFFF8);
LABEL_76:
      v114 = v258;
      v115 = v103 + v105;
      v116 = *((_DWORD *)v6 + 200);
      LODWORD(RemainingSidArea) = v115 + v106;
      v117 = 0;
      v118 = 0;
      if ( v116 < 2 )
      {
        if ( !v116 )
          goto LABEL_84;
        v119 = (__int64 *)v6[99];
        v122 = 0LL;
        goto LABEL_83;
      }
      v119 = (__int64 *)v6[99];
      v120 = v119;
      v121 = ((v116 - 2) >> 1) + 1;
      v253 = 2 * v121;
      v122 = 2 * v121;
      do
      {
        v123 = *v120;
        v120 += 4;
        v117 += (4 * *(unsigned __int8 *)(v123 + 1) + 15) & 0xFFFFFFF8;
        v118 += (4 * *(unsigned __int8 *)(*(v120 - 2) + 1) + 15) & 0xFFFFFFF8;
        --v121;
      }
      while ( v121 );
      if ( v253 < v116 )
LABEL_83:
        v114 = v258 + ((4 * *(unsigned __int8 *)(v119[2 * v122] + 1) + 15) & 0xFFFFFFF8);
LABEL_84:
      v254 = 0;
      v124 = v117 + v118 + v114;
      v125 = v6[98];
      if ( v125 )
        v254 = (4 * *(unsigned __int8 *)(v125 + 1) + 15) & 0xFFFFFFF8;
      v126 = v6[138];
      LODWORD(v259) = 0;
      if ( v126 )
        LODWORD(v259) = (4 * *(unsigned __int8 *)(v126 + 1) + 15) & 0xFFFFFFF8;
      v127 = (unsigned int *)v6[97];
      if ( !v127 || (v128 = 112LL * *v127, v264 = 0, v128 > 0xFFFFFFFF) || (v129 = v128 + 48, v129 < 0x30) )
      {
LABEL_97:
        v129 = 0;
        goto LABEL_98;
      }
      v130 = *((_QWORD *)v127 + 1);
      for ( i = v127 + 2; (unsigned int *)v130 != i; v129 = v257 )
      {
        v132 = (v129 + 1) & 0xFFFFFFFE;
        if ( v132 < v129 )
          goto LABEL_97;
        if ( v132 + *(unsigned __int16 *)(v130 + 32) < v132 )
          goto LABEL_97;
        v257 = v132 + *(unsigned __int16 *)(v130 + 32);
        if ( (int)AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(v130, &v257) < 0 )
          goto LABEL_97;
        v130 = *(_QWORD *)v130;
      }
      v264 = v129;
LABEL_98:
      v133 = (_DWORD)RemainingSidArea + v254 + v124 + (_DWORD)v259 + LODWORD(Sid[0]) + v129 + v266 + 904;
      v134 = ExAllocatePool2(0x100uLL, v133, 0x20206553u);
      v135 = (void *)v134;
      if ( !v134 )
      {
LABEL_3:
        v11 = (struct _ERESOURCE *)v6[6];
        goto LABEL_4;
      }
      SepCopyTokenAccessInformation(
        (_DWORD)v6,
        v134,
        v133,
        v84,
        v266,
        v251,
        (_DWORD)RemainingSidArea,
        v248,
        v254,
        v124,
        v258,
        (_DWORD)v259,
        v264,
        0,
        0LL);
LABEL_100:
      ExReleaseResourceLite((PERESOURCE)v6[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      result = 0;
      *v4 = v135;
      return result;
    case TokenIntegrityLevel:
      v189 = KeGetCurrentThread();
      *(_OWORD *)Sid = 0LL;
      --v189->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      SepCopyTokenIntegrity((__int64)v6, (__int64)Sid);
      v190 = Sid[0];
      v191 = *RtlSubAuthorityCountSid(Sid[0]);
      if ( (_BYTE)v191 )
        v3 = *RtlSubAuthoritySid(v190, v191 - 1);
      *(_DWORD *)v4 = v3;
      ExReleaseResourceLite((PERESOURCE)v6[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 0;
    case TokenCapabilities:
      v216 = KeGetCurrentThread();
      --v216->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v217 = *((_DWORD *)v6 + 200);
      v218 = 16 * v217 + 24;
      v219 = v218;
      if ( v217 )
      {
        v220 = (__int64 *)v6[99];
        v221 = v217;
        do
        {
          v222 = *v220;
          v220 += 2;
          v218 += 4 * *(unsigned __int8 *)(v222 + 1) + 8;
          v219 = v218;
          --v221;
        }
        while ( v221 );
      }
      v223 = ExAllocatePool2(0x100uLL, v219, 0x20206553u);
      v135 = (void *)v223;
      if ( !v223 )
        goto LABEL_3;
      *(_DWORD *)v223 = *((_DWORD *)v6 + 200);
      RtlCopySidAndAttributesArray(
        *((_DWORD *)v6 + 200),
        (PSID_AND_ATTRIBUTES)v6[99],
        v218,
        (PSID_AND_ATTRIBUTES)(v223 + 8),
        (PSID)(v223 + (unsigned int)(16 * *((_DWORD *)v6 + 200)) + 24LL),
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_100;
    case TokenAppContainerSid:
      v184 = KeGetCurrentThread();
      --v184->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v185 = v6[98];
      if ( v185 )
        v186 = 4 * *(unsigned __int8 *)(v185 + 1) + 16;
      else
        v186 = 8;
      v187 = ExAllocatePool2(0x100uLL, v186, 0x20206553u);
      v188 = (_QWORD *)v187;
      if ( !v187 )
        goto LABEL_3;
      if ( v185 )
      {
        v185 = v187 + 8;
        RtlCopySid(v186 - 8, (PSID)(v187 + 8), (PSID)v6[98]);
      }
      goto LABEL_142;
    case TokenAppContainerNumber:
      v214 = KeGetCurrentThread();
      --v214->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v215 = v6[135];
      if ( v215 )
        v3 = *(_DWORD *)(v215 + 40);
      ExReleaseResourceLite((PERESOURCE)v6[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      result = 0;
      *(_DWORD *)v4 = v3;
      return result;
    case TokenUserClaimAttributes:
    case TokenDeviceClaimAttributes:
      *TokenInformation = 0LL;
      v224 = (PERESOURCE *)((char *)Token + 48);
      v225 = KeGetCurrentThread();
      --v225->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v226 = v6[137];
      if ( !v226 )
        goto LABEL_209;
      if ( *(_QWORD *)(v226 + 576) )
        goto LABEL_204;
      if ( TokenInformationClass == TokenUserClaimAttributes )
        goto LABEL_209;
      v224 = (PERESOURCE *)(v6 + 6);
LABEL_204:
      v227 = *(__int128 **)(v226 + 584);
      if ( !v227 && TokenInformationClass == TokenDeviceClaimAttributes )
      {
LABEL_209:
        DWORD2(v261) = 0;
        *(_QWORD *)&v261 = (char *)&v260 + 8;
        v227 = &v260;
        v228 = 16;
        *((_QWORD *)&v260 + 1) = (char *)&v260 + 8;
        *((_QWORD *)&v262[0] + 1) = v262;
        *(_QWORD *)&v262[0] = v262;
      }
      else
      {
        if ( TokenInformationClass == TokenUserClaimAttributes )
          v227 = *(__int128 **)(v226 + 576);
        AuthzBasepQueryClaimAttributesToken(v227, 0LL, 0LL, &v264);
        v228 = v264;
      }
      v229 = ExAllocatePool2(0x100uLL, v228, 0x20206553u);
      v230 = (void *)v229;
      if ( !v229 )
      {
LABEL_211:
        v11 = *v224;
        goto LABEL_4;
      }
      v231 = AuthzBasepQueryClaimAttributesToken(v227, v229, v228, &v264);
      ExReleaseResourceLite(*v224);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v231 >= 0 )
        *v4 = v230;
      else
        ExFreePoolWithTag(v230, 0);
      return v231;
    case TokenDeviceGroups:
      v232 = KeGetCurrentThread();
      v224 = (PERESOURCE *)((char *)Token + 48);
      --v232->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v233 = (ULONG **)(v6 + 137);
      v234 = (int *)v6[137];
      if ( v234 && (v235 = *v234) != 0 )
      {
        v236 = 16 * v235 + 8;
        v237 = (__int64 *)*((_QWORD *)v234 + 1);
        v238 = v235;
        do
        {
          v239 = *v237;
          v237 += 2;
          v236 += 4 * *(unsigned __int8 *)(v239 + 1) + 8;
          --v238;
        }
        while ( v238 );
        v224 = (PERESOURCE *)(v6 + 6);
        v233 = (ULONG **)(v6 + 137);
      }
      else
      {
        v235 = 0;
        v236 = 24;
      }
      v240 = ExAllocatePool2(0x100uLL, v236, 0x20206553u);
      if ( !v240 )
        goto LABEL_211;
      *(_OWORD *)v240 = 0LL;
      *(_QWORD *)(v240 + 16) = 0LL;
      *(_DWORD *)v240 = v235;
      if ( v235 )
        RtlCopySidAndAttributesArray(
          **v233,
          *((PSID_AND_ATTRIBUTES *)*v233 + 1),
          v236,
          (PSID_AND_ATTRIBUTES)(v240 + 8),
          (PSID)(v240 + 16 * v235 - 16 + 24LL),
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
      ExReleaseResourceLite(*v224);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      result = 0;
      *v4 = (PVOID)v240;
      return result;
    case TokenProcessTrustLevel:
      v241 = KeGetCurrentThread();
      --v241->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v185 = v6[138];
      if ( v185 )
        v242 = 4 * *(unsigned __int8 *)(v185 + 1) + 16;
      else
        v242 = 8;
      v243 = ExAllocatePool2(0x100uLL, v242, 0x20206553u);
      v188 = (_QWORD *)v243;
      if ( !v243 )
        goto LABEL_3;
      if ( v185 )
      {
        v185 = v243 + 8;
        RtlCopySid(v242 - 8, (PSID)(v243 + 8), (PSID)v6[138]);
      }
LABEL_142:
      *v188 = v185;
      ExReleaseResourceLite((PERESOURCE)v6[6]);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      result = 0;
      *v4 = v188;
      return result;
    case TokenBnoIsolation:
      v244 = KeGetCurrentThread();
      --v244->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v245 = v6[144];
      v246 = 16LL;
      if ( v245 )
        v246 = *(unsigned __int16 *)(v245 + 42) + 16LL;
      v198 = ExAllocatePool2(0x100uLL, v246, 0x20206553u);
      v135 = (void *)v198;
      if ( !v198 )
        goto LABEL_3;
      if ( v6[144] )
      {
        *(_BYTE *)(v198 + 8) = 1;
        *(_QWORD *)v198 = v198 + 16;
        memmove((void *)(v198 + 16), *(const void **)(v6[144] + 48LL), *(unsigned __int16 *)(v6[144] + 42LL));
      }
      else
      {
        *(_BYTE *)(v198 + 8) = 0;
LABEL_239:
        *(_QWORD *)v198 = 0LL;
      }
      goto LABEL_100;
    case TokenIsLessPrivilegedAppContainer:
      if ( (*((_DWORD *)Token + 50) & 0x4000) == 0
        || SepCanTokenMatchAllPackageSid((__int64)Token, 0x140000000LL, (unsigned __int64)TokenInformation) )
      {
        *(_DWORD *)v4 = 0;
        return 0;
      }
      else
      {
        result = 0;
        *(_DWORD *)v4 = 1;
      }
      return result;
    case MaxTokenInfoClass:
      v136 = KeGetCurrentThread();
      v137 = (struct _ERESOURCE **)((char *)Token + 48);
      v138 = 0;
      v139 = 0;
      --v136->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v140 = *((_DWORD *)v6 + 31);
      v252 = 16 * v140;
      v141 = 16 * v140;
      if ( v140 < 2 )
      {
        if ( !v140 )
          goto LABEL_109;
        v142 = (__int64 *)v6[19];
        v147 = 0LL;
      }
      else
      {
        v142 = (__int64 *)v6[19];
        v143 = v142;
        v144 = ((v140 - 2) >> 1) + 1;
        v145 = v144;
        v146 = 2 * v144;
        v147 = 2LL * v144;
        do
        {
          v148 = *v143;
          v143 += 4;
          v138 += (4 * *(unsigned __int8 *)(v148 + 1) + 15) & 0xFFFFFFF8;
          v139 += (4 * *(unsigned __int8 *)(*(v143 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v145;
        }
        while ( v145 );
        v51 = v146 < v140;
        v137 = (struct _ERESOURCE **)(v6 + 6);
        if ( !v51 )
        {
LABEL_109:
          LODWORD(v266) = 0;
          v149 = v138 + v139 + v141;
          v150 = 0;
          v151 = v6[138];
          v249 = v149;
          if ( v151 )
          {
            v150 = (4 * *(unsigned __int8 *)(v151 + 1) + 15) & 0xFFFFFFF8;
            LODWORD(v266) = v150;
          }
          v152 = (4 * *(unsigned __int8 *)(*(_QWORD *)v6[19] + 1LL) + 15) & 0xFFFFFFF8;
          v255 = v152;
          v259 = (_DWORD *)ExAllocatePool2(0x100uLL, v149 + v152 + v150 + 80, 0x20206553u);
          v153 = v259;
          if ( !v259 )
          {
            v11 = *v137;
LABEL_4:
            ExReleaseResourceLite(v11);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            return -1073741670;
          }
          *v259 = *((_DWORD *)v6 + 48);
          *(_OWORD *)Sid = 0LL;
          v153[1] = SepGetTokenElevation((__int64)v6);
          v153[2] = SepGetTokenElevationType((__int64)v6);
          v153[3] = *((_DWORD *)v6 + 49);
          *((_QWORD *)v153 + 7) = v6[3];
          v153[12] = *((_DWORD *)v6 + 30);
          v154 = v6[135];
          if ( v154 )
            v155 = *(_DWORD *)(v154 + 40);
          else
            v155 = 0;
          v153[13] = v155;
          SepCopyTokenIntegrity((__int64)v6, (__int64)Sid);
          v156 = Sid[0];
          v157 = *RtlSubAuthorityCountSid(Sid[0]);
          if ( (_BYTE)v157 )
            v158 = *RtlSubAuthoritySid(v156, v157 - 1);
          else
            v158 = 0;
          v153[4] = v158;
          v159 = (char *)(v153 + 20);
          v160 = v6[19] - (_QWORD)(v153 + 6);
          v264 = 0;
          v258 = v160;
          v161 = v153 + 8;
          v162 = 0;
          v163 = v152;
          do
          {
            v164 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v161 + v160 - 8) + 1LL) + 8;
            if ( v164 > v163 )
              break;
            *((_QWORD *)v161 - 1) = v159;
            v163 -= v164;
            *v161 = *(_DWORD *)((char *)v161 + v160);
            v165 = *(unsigned __int8 **)((char *)v161 + v160 - 8);
            LODWORD(Sid[0]) = v163;
            v166 = 4 * v165[1] + 8;
            if ( v166 <= v164 )
            {
              memmove(v159, v165, v166);
              v162 = v264;
              v163 = (unsigned int)Sid[0];
              v160 = v258;
            }
            ++v162;
            v159 += v164;
            v264 = v162;
            v161 += 4;
          }
          while ( !v162 );
          v167 = 0LL;
          v168 = (unsigned int)v266;
          v169 = (char *)v153 + v255 + 80;
          if ( (_DWORD)v266 )
          {
            v167 = (char *)v153 + v255 + 80;
            memmove(v167, (const void *)v6[138], 4LL * *(unsigned __int8 *)(v6[138] + 1LL) + 8);
            v169 = v167;
          }
          v170 = &v169[v168];
          v171 = v249;
          *((_QWORD *)v153 + 5) = v167;
          v172 = v249 - v252;
          v266 = v6[19];
          v173 = &v170[v252];
          v174 = *((_DWORD *)v6 + 31);
          Sid[0] = v170;
          if ( v174 )
          {
            v175 = v170 + 8;
            v176 = v266 - (_QWORD)v170;
            v177 = v174;
            do
            {
              v178 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v175 + v176 - 8) + 1LL) + 8;
              if ( v178 > v172 )
                break;
              *((_QWORD *)v175 - 1) = v173;
              v172 -= v178;
              *v175 = *(_DWORD *)((char *)v175 + v176);
              v179 = *(unsigned __int8 **)((char *)v175 + v176 - 8);
              v180 = 4 * v179[1] + 8;
              if ( v180 <= v178 )
                memmove(v173, v179, v180);
              ++v3;
              v173 += v178;
              v175 += 4;
            }
            while ( v3 < v177 );
            v6 = RemainingSidArea;
            v4 = v265;
            v170 = (char *)Sid[0];
            v171 = v249;
          }
          p_Sid = v259;
          v259[16] = *((_DWORD *)v6 + 31);
          *((_DWORD *)p_Sid + 17) = v171;
          p_Sid[9] = v170;
LABEL_7:
          ExReleaseResourceLite((PERESOURCE)v6[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          result = 0;
          *v4 = p_Sid;
          return result;
        }
      }
      v141 = v252 + ((4 * *(unsigned __int8 *)(v142[2 * v147] + 1) + 15) & 0xFFFFFFF8);
      goto LABEL_109;
    default:
      return -1073741821;
  }
}
