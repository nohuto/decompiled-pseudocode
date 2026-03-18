/*
 * XREFs of SeQueryInformationToken @ 0x14090D870
 * Callers:
 *     RtlpQueryLowBoxId @ 0x1404322A0 (RtlpQueryLowBoxId.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x14070BA40 (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     RtlpIsAppContainer @ 0x140781AFC (RtlpIsAppContainer.c)
 *     CmpCreateRegistryProcessToken @ 0x1407D8038 (CmpCreateRegistryProcessToken.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DCFBC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PsIsProcessAppContainer @ 0x14085D560 (PsIsProcessAppContainer.c)
 *     PiDqOpenUserObjectRegKey @ 0x14090A064 (PiDqOpenUserObjectRegKey.c)
 *     ObpParseSymbolicLinkEx @ 0x14090BD40 (ObpParseSymbolicLinkEx.c)
 *     RtlIsSandboxedToken @ 0x14090C230 (RtlIsSandboxedToken.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 *     NtDuplicateToken @ 0x14090F090 (NtDuplicateToken.c)
 *     SeTokenCanImpersonate @ 0x140910A30 (SeTokenCanImpersonate.c)
 *     EtwTiLogImpersonateClient @ 0x140910DC8 (EtwTiLogImpersonateClient.c)
 *     EtwpBuildProcessEvent @ 0x14094B5C0 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x14094D000 (EtwpPsProvTraceProcess.c)
 *     CmpBuildAdminInformation @ 0x1409A773C (CmpBuildAdminInformation.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A09994 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140A09D98 (ObpCaptureBoundaryDescriptor.c)
 *     SeTokenIsElevated @ 0x140A15590 (SeTokenIsElevated.c)
 *     AlpcpCheckConnectionSecurity @ 0x140A167F4 (AlpcpCheckConnectionSecurity.c)
 *     SeQuerySigningPolicyWorker @ 0x140A1C1B8 (SeQuerySigningPolicyWorker.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     SeCompareTokens @ 0x140A235A8 (SeCompareTokens.c)
 *     ObpGetIntegrityLevel @ 0x140A2A0A0 (ObpGetIntegrityLevel.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140A6CE48 (EtwpAcquireTokenAccessInformation.c)
 *     EtwpTiQueryTokenIdentity @ 0x140A70AB4 (EtwpTiQueryTokenIdentity.c)
 *     SepCheckCapabilities @ 0x140A8CD3C (SepCheckCapabilities.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1403440B0 (SepCanTokenMatchAllPackageSid.c)
 *     SepSidInTokenSidHash @ 0x1403DF2C0 (SepSidInTokenSidHash.c)
 *     SepCopyTokenIntegrity @ 0x1404194A0 (SepCopyTokenIntegrity.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x140424630 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepTokenPrivilegeCount @ 0x140428B80 (SepTokenPrivilegeCount.c)
 *     SepGetTokenElevation @ 0x1404478C8 (SepGetTokenElevation.c)
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     SepIsSandboxedToken @ 0x140451CC8 (SepIsSandboxedToken.c)
 *     SepConvertTokenPrivileges @ 0x14045AC48 (SepConvertTokenPrivileges.c)
 *     RtlSubAuthorityCountSid @ 0x1404600D0 (RtlSubAuthorityCountSid.c)
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x1404609F0 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 *     SepGetTokenElevationType @ 0x14046F484 (SepGetTokenElevationType.c)
 *     Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline @ 0x14060833C (Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlCopySid @ 0x140910120 (RtlCopySid.c)
 *     RtlCopySidAndAttributesArray @ 0x1409A7A90 (RtlCopySidAndAttributesArray.c)
 *     SepCopyTokenAccessInformation @ 0x1409E2D6C (SepCopyTokenAccessInformation.c)
 *     SeQuerySessionIdToken @ 0x1409FBF70 (SeQuerySessionIdToken.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A07290 (AuthzBasepQueryClaimAttributesToken.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  ULONG v3; // ebx
  PVOID *v4; // r12
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // esi
  __int64 Pool2; // rax
  _QWORD *v10; // rbx
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS result; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rax
  unsigned int v20; // ecx
  int v21; // ebx
  __int64 v22; // r8
  __int64 *v23; // rdx
  __int64 v24; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KTHREAD *v30; // rax
  _DWORD *v31; // rax
  struct _KTHREAD *v32; // rax
  int v33; // esi
  int v34; // r14d
  int v35; // eax
  unsigned int v36; // r9d
  int v37; // r15d
  __int64 *v38; // r11
  __int64 *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned int v42; // r13d
  __int64 v43; // r10
  __int64 v44; // rax
  int v45; // r9d
  unsigned int v46; // r15d
  _DWORD *v47; // rsi
  unsigned int v48; // r11d
  int v49; // r10d
  int v50; // r13d
  __int64 *v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // r8
  unsigned int v54; // esi
  __int64 v55; // r14
  __int64 v56; // rax
  bool v57; // cf
  _QWORD *v58; // rax
  int v59; // r14d
  unsigned int v60; // r13d
  _DWORD *v61; // rax
  char *v62; // rdx
  _DWORD *v63; // r9
  char *v64; // rax
  unsigned int v65; // r8d
  __int64 v66; // r11
  __int64 v67; // rcx
  unsigned int v68; // r15d
  unsigned int v69; // ecx
  __int64 v70; // r10
  _DWORD *v71; // rsi
  char *v72; // r12
  unsigned int v73; // edi
  unsigned int v74; // r14d
  unsigned __int8 *v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // rcx
  unsigned int v78; // r13d
  ULONG v79; // eax
  char *v80; // r15
  __int64 v81; // r8
  _DWORD *v82; // rsi
  ULONG v83; // r12d
  unsigned int v84; // r14d
  unsigned __int8 *v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  struct _KTHREAD *v90; // rax
  __int64 v91; // r8
  __int64 v92; // rcx
  int v93; // r14d
  __int64 v94; // rdx
  int v95; // eax
  unsigned int v96; // r10d
  int v97; // eax
  int v98; // ecx
  int v99; // r11d
  unsigned int *v100; // rdx
  int v101; // esi
  int v102; // eax
  int v103; // ecx
  __int64 *v104; // r15
  __int64 *v105; // rdx
  unsigned int v106; // eax
  __int64 v107; // r8
  unsigned int v108; // r13d
  __int64 v109; // r9
  __int64 v110; // rax
  int v111; // eax
  int v112; // r9d
  unsigned int v113; // r11d
  int v114; // r10d
  unsigned int v115; // ecx
  __int64 *v116; // r15
  __int64 *v117; // rdx
  unsigned int v118; // eax
  __int64 v119; // r8
  unsigned int v120; // r13d
  __int64 v121; // rsi
  __int64 v122; // rax
  int v123; // r13d
  int v124; // eax
  unsigned int v125; // r9d
  int v126; // r11d
  int v127; // esi
  __int64 *v128; // r15
  __int64 *v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r10
  __int64 v132; // rax
  int v133; // r13d
  __int64 v134; // rax
  __int64 v135; // rax
  unsigned int *v136; // rcx
  unsigned __int64 v137; // rax
  unsigned int v138; // eax
  __int64 v139; // rsi
  unsigned int *i; // r15
  unsigned int v141; // ecx
  int v142; // r15d
  __int64 v143; // rax
  _DWORD *v144; // rsi
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  struct _KTHREAD *v148; // rax
  struct _ERESOURCE **v149; // rsi
  int v150; // r14d
  int v151; // r15d
  unsigned int v152; // r9d
  int v153; // r11d
  __int64 *v154; // r13
  __int64 *v155; // rdx
  unsigned int v156; // eax
  __int64 v157; // r8
  unsigned int v158; // esi
  __int64 v159; // r10
  __int64 v160; // rax
  __int64 v161; // rax
  unsigned int v162; // r14d
  _DWORD *v163; // r13
  __int64 v164; // rax
  int v165; // eax
  PSID v166; // rsi
  int v167; // ecx
  ULONG v168; // eax
  char *v169; // r15
  __int64 v170; // r9
  _DWORD *v171; // rsi
  unsigned int v172; // edx
  unsigned int v173; // r8d
  unsigned int v174; // r14d
  unsigned __int8 *v175; // rcx
  unsigned int v176; // eax
  char *v177; // r14
  __int64 v178; // rsi
  char *v179; // r9
  char *v180; // r9
  int v181; // edx
  unsigned int v182; // r13d
  char *v183; // r15
  ULONG v184; // eax
  _DWORD *v185; // rsi
  __int64 v186; // r12
  ULONG v187; // edi
  unsigned int v188; // r14d
  unsigned __int8 *v189; // rdx
  unsigned int v190; // eax
  struct _KTHREAD *v191; // rax
  int v192; // esi
  _QWORD *v193; // rax
  struct _KTHREAD *v194; // rax
  __int64 v195; // rbx
  int v196; // esi
  __int64 v197; // rax
  _QWORD *v198; // r14
  __int64 v199; // rdx
  __int64 v200; // r8
  __int64 v201; // r9
  struct _KTHREAD *v202; // rax
  PSID v203; // rsi
  int v204; // ecx
  __int64 v205; // rdx
  __int64 v206; // r8
  __int64 v207; // r9
  struct _KTHREAD *v208; // rax
  int v209; // esi
  _QWORD *v210; // rax
  struct _KTHREAD *v211; // rax
  __int64 v212; // rax
  void *v213; // rcx
  _OWORD *v214; // rax
  _DWORD *v215; // rax
  int TokenElevationType; // eax
  _DWORD *v217; // rdx
  _DWORD *v218; // rsi
  struct _KTHREAD *v219; // rcx
  int TokenElevation; // ebx
  __int64 v221; // rdx
  __int64 v222; // r8
  __int64 v223; // r9
  _DWORD *v224; // rax
  __int64 v225; // rax
  struct _KTHREAD *v226; // rax
  __int64 v227; // rax
  int v228; // edx
  bool IsSandboxedToken; // al
  bool *v230; // r8
  struct _KTHREAD *v231; // rax
  __int64 v232; // rax
  __int64 v233; // rdx
  __int64 v234; // r8
  __int64 v235; // r9
  struct _KTHREAD *v236; // rax
  unsigned int v237; // ecx
  int v238; // ebx
  __int64 *v239; // rdx
  __int64 v240; // r8
  __int64 v241; // rax
  _DWORD *v242; // rax
  PERESOURCE *v243; // r14
  struct _KTHREAD *v244; // rax
  __int64 v245; // rax
  __int128 *v246; // rdi
  unsigned int v247; // esi
  __int64 v248; // rax
  void *v249; // rbx
  NTSTATUS v250; // edi
  __int64 v251; // rdx
  __int64 v252; // r8
  __int64 v253; // r9
  struct _KTHREAD *v254; // rax
  int **v255; // r15
  int *v256; // rdx
  unsigned int v257; // esi
  int v258; // ebx
  __int64 *v259; // rdx
  __int64 v260; // r8
  __int64 v261; // rax
  __int64 v262; // rdi
  __int64 v263; // rdx
  __int64 v264; // r8
  __int64 v265; // r9
  struct _KTHREAD *v266; // rax
  int v267; // esi
  __int64 v268; // rax
  struct _KTHREAD *v269; // rax
  unsigned int v270; // [rsp+80h] [rbp-59h]
  int v271; // [rsp+80h] [rbp-59h]
  int v272; // [rsp+80h] [rbp-59h]
  int v273; // [rsp+84h] [rbp-55h]
  int v274; // [rsp+84h] [rbp-55h]
  unsigned int v275; // [rsp+84h] [rbp-55h]
  unsigned int v276; // [rsp+88h] [rbp-51h]
  unsigned int v277; // [rsp+88h] [rbp-51h]
  unsigned int v278; // [rsp+88h] [rbp-51h]
  PSID Sid[2]; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v280; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v281; // [rsp+A8h] [rbp-31h]
  _DWORD *v282; // [rsp+B0h] [rbp-29h]
  __int128 v283; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v284; // [rsp+C8h] [rbp-11h]
  _OWORD v285[5]; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v286; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v287; // [rsp+148h] [rbp+6Fh] BYREF
  PVOID *v288; // [rsp+150h] [rbp+77h]
  __int64 v289; // [rsp+158h] [rbp+7Fh]

  v288 = TokenInformation;
  v286 = (__int64)Token;
  v3 = 0;
  v4 = TokenInformation;
  v287 = 0;
  v6 = (__int64)Token;
  v283 = 0LL;
  v284 = 0LL;
  v285[0] = 0LL;
  switch ( TokenInformationClass )
  {
    case TokenUser:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v8 = 4 * *(unsigned __int8 *)(**(_QWORD **)(v6 + 152) + 1LL) + 24;
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (_QWORD *)Pool2;
      if ( !Pool2 )
        goto LABEL_3;
      RtlCopySidAndAttributesArray(
        1,
        *(_QWORD *)(v6 + 152),
        v8,
        Pool2,
        (void *)(Pool2 + 16),
        (__int64)&v286,
        (__int64)&v286);
      goto LABEL_7;
    case TokenGroups:
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v20 = *(_DWORD *)(v6 + 124);
      v21 = 16 * v20 - 8;
      if ( v20 > 1 )
      {
        v22 = v20 - 1;
        v23 = (__int64 *)(*(_QWORD *)(v6 + 152) + 16LL);
        do
        {
          v24 = *v23;
          v23 += 2;
          v21 += 4 * *(unsigned __int8 *)(v24 + 1) + 8;
          --v22;
        }
        while ( v22 );
      }
      v25 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v26 = v25;
      if ( !v25 )
        goto LABEL_3;
      *v25 = *(_DWORD *)(v6 + 124) - 1;
      RtlCopySidAndAttributesArray(
        *(_DWORD *)(v6 + 124) - 1,
        *(_DWORD *)(v6 + 152) + 16,
        v21,
        (_DWORD)v25 + 8,
        (char *)v25 + (unsigned int)(16 * *(_DWORD *)(v6 + 124) - 32) + 24,
        (__int64)&v286,
        (__int64)&v286);
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
      result = 0;
      *v4 = v26;
      return result;
    case TokenPrivileges:
      v30 = KeGetCurrentThread();
      --v30->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      SepTokenPrivilegeCount(v6);
      v31 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v10 = v31;
      if ( !v31 )
        goto LABEL_3;
      SepConvertTokenPrivileges((_QWORD *)v6, v31);
      goto LABEL_7;
    case TokenOwner:
      v191 = KeGetCurrentThread();
      --v191->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v192 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v6 + 152) + 16LL * *(unsigned int *)(v6 + 144)) + 1LL)
           + 16;
      v193 = (_QWORD *)ExAllocatePool2(0x100uLL);
      v10 = v193;
      if ( !v193 )
        goto LABEL_3;
      *v193 = v193 + 1;
      RtlCopySid(v192 - 8, v193 + 1, *(PSID *)(*(_QWORD *)(v6 + 152) + 16LL * *(unsigned int *)(v6 + 144)));
      goto LABEL_7;
    case TokenPrimaryGroup:
      v208 = KeGetCurrentThread();
      --v208->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v209 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v6 + 168) + 1LL) + 16;
      v210 = (_QWORD *)ExAllocatePool2(0x100uLL);
      v10 = v210;
      if ( !v210 )
        goto LABEL_3;
      *v210 = v210 + 1;
      RtlCopySid(v209 - 8, v210 + 1, *(PSID *)(v6 + 168));
      goto LABEL_7;
    case TokenDefaultDacl:
      v211 = KeGetCurrentThread();
      --v211->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v212 = ExAllocatePool2(0x100uLL);
      v144 = (_DWORD *)v212;
      if ( !v212 )
        goto LABEL_3;
      v213 = (void *)(v212 + 8);
      if ( !*(_QWORD *)(v6 + 184) )
        goto LABEL_227;
      *(_QWORD *)v212 = v213;
      memmove(v213, *(const void **)(v6 + 184), *(unsigned __int16 *)(*(_QWORD *)(v6 + 184) + 2LL));
      goto LABEL_97;
    case TokenSource:
      v214 = (_OWORD *)ExAllocatePool2(0x100uLL);
      if ( !v214 )
        return -1073741670;
      *v214 = *(_OWORD *)v6;
      *v4 = v214;
      return 0;
    case TokenType:
      v215 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !v215 )
        return -1073741670;
      *v215 = *(_DWORD *)(v6 + 192);
      *v4 = v215;
      return 0;
    case TokenImpersonationLevel:
      if ( *((_DWORD *)Token + 48) != 2 )
        return -1073741821;
      v224 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !v224 )
        return -1073741670;
      *v224 = *(_DWORD *)(v6 + 196);
      *v4 = v224;
      return 0;
    case TokenStatistics:
      v225 = ExAllocatePool2(0x100uLL);
      v10 = (_QWORD *)v225;
      if ( !v225 )
        return -1073741670;
      *(_QWORD *)v225 = *(_QWORD *)(v6 + 16);
      *(_QWORD *)(v225 + 8) = *(_QWORD *)(v6 + 24);
      *(_DWORD *)(v225 + 24) = *(_DWORD *)(v6 + 192);
      *(_DWORD *)(v225 + 28) = *(_DWORD *)(v6 + 196);
      *(_QWORD *)(v225 + 16) = *(_QWORD *)(v6 + 40);
      v226 = KeGetCurrentThread();
      --v226->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
      *((_DWORD *)v10 + 8) = *(_DWORD *)(v6 + 136);
      v227 = *(_QWORD *)(v6 + 184);
      v228 = *(_DWORD *)(v6 + 136) - 4 * *(unsigned __int8 *)(*(_QWORD *)(v6 + 168) + 1LL) - 8;
      if ( v227 )
        v228 -= *(unsigned __int16 *)(v227 + 2);
      *((_DWORD *)v10 + 9) = v228;
      *((_DWORD *)v10 + 9) = *(_DWORD *)(v6 + 140);
      *((_DWORD *)v10 + 10) = *(_DWORD *)(v6 + 124) - 1;
      *((_DWORD *)v10 + 11) = SepTokenPrivilegeCount(v6);
      v10[6] = *(_QWORD *)(v6 + 56);
      goto LABEL_7;
    case TokenSessionId:
      SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
      return 0;
    case TokenGroupsAndPrivileges:
      v32 = KeGetCurrentThread();
      v33 = 0;
      v34 = 0;
      --v32->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v35 = SepTokenPrivilegeCount(v6);
      v36 = *(_DWORD *)(v6 + 124);
      v273 = v35;
      LODWORD(v289) = 12 * v35;
      v287 = 16 * v36;
      v37 = 16 * v36;
      if ( v36 < 2 )
      {
        if ( !v36 )
          goto LABEL_23;
        v38 = *(__int64 **)(v6 + 152);
        v43 = 0LL;
      }
      else
      {
        v38 = *(__int64 **)(v6 + 152);
        v39 = v38;
        v40 = ((v36 - 2) >> 1) + 1;
        v41 = v40;
        v42 = 2 * v40;
        v43 = 2LL * v40;
        do
        {
          v44 = *v39;
          v39 += 4;
          v33 += (4 * *(unsigned __int8 *)(v44 + 1) + 15) & 0xFFFFFFF8;
          v34 += (4 * *(unsigned __int8 *)(*(v39 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v41;
        }
        while ( v41 );
        if ( v42 >= v36 )
        {
LABEL_23:
          v45 = 0;
          v46 = v33 + v34 + v37;
          v47 = (_DWORD *)(v6 + 128);
          v48 = *(_DWORD *)(v6 + 128);
          v49 = 0;
          v270 = 16 * v48;
          v50 = 16 * v48;
          if ( v48 < 2 )
          {
            if ( !v48 )
              goto LABEL_31;
            v58 = *(_QWORD **)(v6 + 160);
            v55 = 0LL;
          }
          else
          {
            Sid[0] = *(PSID *)(v6 + 160);
            v51 = (__int64 *)Sid[0];
            v52 = ((v48 - 2) >> 1) + 1;
            v53 = v52;
            v54 = 2 * v52;
            v55 = 2LL * v52;
            do
            {
              v56 = *v51;
              v51 += 4;
              v45 += (4 * *(unsigned __int8 *)(v56 + 1) + 15) & 0xFFFFFFF8;
              v49 += (4 * *(unsigned __int8 *)(*(v51 - 2) + 1) + 15) & 0xFFFFFFF8;
              --v53;
            }
            while ( v53 );
            v57 = v54 < v48;
            v47 = (_DWORD *)(v6 + 128);
            if ( !v57 )
            {
LABEL_31:
              v59 = v289;
              v60 = v45 + v49 + v50;
              v61 = (_DWORD *)ExAllocatePool2(0x100uLL);
              Sid[0] = v61;
              v62 = (char *)v61;
              if ( v61 )
              {
                v63 = v61 + 14;
                *((_QWORD *)v61 + 6) = *(_QWORD *)(v6 + 24);
                v61[1] = v46;
                *v61 = *(_DWORD *)(v6 + 124);
                *((_QWORD *)v61 + 1) = v61 + 14;
                v61[5] = v60;
                v61[4] = *v47;
                if ( *v47 )
                  v64 = (char *)v63 + ((v46 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v64 = 0LL;
                *((_QWORD *)v62 + 3) = v64;
                v65 = 0;
                v66 = v287;
                *((_DWORD *)v62 + 8) = v273;
                v67 = v46;
                v68 = v46 - v66;
                *((_DWORD *)v62 + 9) = v59;
                LODWORD(v289) = 0;
                *((_QWORD *)v62 + 5) = (char *)v63 + v60 + v67;
                v69 = *(_DWORD *)(v6 + 124);
                if ( v69 )
                {
                  v70 = *(_QWORD *)(v6 + 152) - (_QWORD)v63;
                  v71 = v62 + 64;
                  v281 = v70;
                  v72 = (char *)v63 + v66;
                  v73 = v69;
                  do
                  {
                    v74 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v71 + v70 - 8) + 1LL) + 8;
                    if ( v74 > v68 )
                      break;
                    *((_QWORD *)v71 - 1) = v72;
                    v68 -= v74;
                    *v71 = *(_DWORD *)((char *)v71 + v70);
                    v75 = *(unsigned __int8 **)((char *)v71 + v70 - 8);
                    v76 = 4 * v75[1] + 8;
                    if ( v76 <= v74 )
                    {
                      memmove(v72, v75, v76);
                      v65 = v289;
                      v70 = v281;
                    }
                    ++v65;
                    v72 += v74;
                    LODWORD(v289) = v65;
                    v71 += 4;
                  }
                  while ( v65 < v73 );
                  v6 = v286;
                  v4 = v288;
                  v62 = (char *)Sid[0];
                }
                if ( *((_DWORD *)v62 + 4) )
                {
                  v77 = *((_QWORD *)v62 + 3);
                  v78 = v60 - v270;
                  v79 = *(_DWORD *)(v6 + 128);
                  v80 = (char *)(v77 + v270);
                  if ( v79 )
                  {
                    v81 = *(_QWORD *)(v6 + 160) - v77;
                    v82 = (_DWORD *)(v77 + 8);
                    v286 = v81;
                    v83 = v79;
                    do
                    {
                      v84 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v82 + v81 - 8) + 1LL) + 8;
                      if ( v84 > v78 )
                        break;
                      *((_QWORD *)v82 - 1) = v80;
                      v78 -= v84;
                      *v82 = *(_DWORD *)((char *)v82 + v81);
                      v85 = *(unsigned __int8 **)((char *)v82 + v81 - 8);
                      v86 = 4 * v85[1] + 8;
                      if ( v86 <= v84 )
                      {
                        memmove(v80, v85, v86);
                        v81 = v286;
                      }
                      ++v3;
                      v80 += v84;
                      v82 += 4;
                    }
                    while ( v3 < v83 );
                    v4 = v288;
                    v62 = (char *)Sid[0];
                  }
                }
                SepConvertTokenPrivilegesToLuidAndAttributes((_QWORD *)v6, *((_QWORD *)v62 + 5));
                ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v87, v88, v89);
                *v4 = Sid[0];
                return 0;
              }
              goto LABEL_3;
            }
            v58 = Sid[0];
          }
          v50 = v270 + ((4 * *(unsigned __int8 *)(v58[2 * v55] + 1LL) + 15) & 0xFFFFFFF8);
          goto LABEL_31;
        }
      }
      v37 = v287 + ((4 * *(unsigned __int8 *)(v38[2 * v43] + 1) + 15) & 0xFFFFFFF8);
      goto LABEL_23;
    case TokenElevationType:
      if ( !ExAllocatePool2(0x100uLL) )
        return -1073741670;
      TokenElevationType = SepGetTokenElevationType(v6);
      *v217 = TokenElevationType;
      result = 0;
      *v4 = v217;
      return result;
    case TokenElevation:
      v218 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !v218 )
        return -1073741670;
      v219 = KeGetCurrentThread();
      --v219->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 48), 1u);
      TokenElevation = SepGetTokenElevation(v6);
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v221, v222, v223);
      *v218 = TokenElevation;
      result = 0;
      *v4 = v218;
      return result;
    case TokenHasRestrictions:
    case TokenVirtualizationAllowed:
    case TokenVirtualizationEnabled:
    case TokenUIAccess:
    case TokenIsAppContainer:
    case TokenPrivateNameSpace:
    case MaxTokenInfoClass:
    case TokenAppContainerNumber|TokenAuditPolicy:
    case TokenDeviceClaimAttributes|TokenAuditPolicy:
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
        case TokenAppContainerNumber|TokenAuditPolicy:
          *(_DWORD *)TokenInformation = SepSidInTokenSidHash(
                                          (__int64)Token + 808,
                                          0LL,
                                          (unsigned __int8 *)SeAppSiloSid,
                                          0,
                                          1,
                                          0);
          return 0;
        case MaxTokenInfoClass:
          IsSandboxedToken = SepIsSandboxedToken(Token, KeGetCurrentThread()->PreviousMode);
          *v230 = IsSandboxedToken;
          return 0;
        default:
          if ( (unsigned int)Feature_LearningModeSupport__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)v4 = (*(_DWORD *)(v6 + 200) & 0x3000000u) >> 24;
            return 0;
          }
          else
          {
            return -1073741821;
          }
      }
    case TokenAccessInformation:
      v90 = KeGetCurrentThread();
      --v90->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v91 = *(_QWORD *)(v6 + 64);
      v92 = 1LL;
      v287 = 0;
      v93 = 0;
      v94 = 37LL;
      do
      {
        v95 = v93 + 1;
        if ( (v92 & v91) == 0 )
          v95 = v93;
        v92 = __ROL8__(v92, 1);
        v93 = v95;
        --v94;
      }
      while ( v94 );
      v96 = *(_DWORD *)(v6 + 124);
      v97 = 12 * v95 + 16;
      v98 = v97 - 12;
      v99 = 0;
      if ( !v93 )
        v98 = v97;
      v100 = (unsigned int *)(v6 + 128);
      v101 = 0;
      v271 = 16 * *(_DWORD *)(v6 + 128);
      v102 = *(_DWORD *)(v6 + 800);
      LODWORD(Sid[0]) = v98;
      v103 = 16 * v96;
      v274 = 16 * v96;
      LODWORD(v281) = 16 * v102;
      LODWORD(v289) = 16 * v96;
      if ( v96 < 2 )
      {
        if ( !v96 )
          goto LABEL_65;
        v104 = *(__int64 **)(v6 + 152);
        v109 = 0LL;
      }
      else
      {
        v104 = *(__int64 **)(v6 + 152);
        v105 = v104;
        v106 = ((v96 - 2) >> 1) + 1;
        v107 = v106;
        v108 = 2 * v106;
        v109 = 2LL * v106;
        do
        {
          v110 = *v105;
          v105 += 4;
          v99 += (4 * *(unsigned __int8 *)(v110 + 1) + 15) & 0xFFFFFFF8;
          v101 += (4 * *(unsigned __int8 *)(*(v105 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v107;
        }
        while ( v107 );
        v100 = (unsigned int *)(v6 + 128);
        if ( v108 >= v96 )
        {
          v103 = v289;
          goto LABEL_65;
        }
      }
      v103 = v274 + ((4 * *(unsigned __int8 *)(v104[2 * v109] + 1) + 15) & 0xFFFFFFF8);
LABEL_65:
      v111 = v99 + v101;
      v112 = 0;
      v113 = *v100;
      LODWORD(v289) = v111 + v103;
      v114 = 0;
      v115 = v271;
      LODWORD(v286) = v271;
      if ( v113 < 2 )
      {
        if ( !v113 )
          goto LABEL_73;
        v116 = *(__int64 **)(v6 + 160);
        v121 = 0LL;
      }
      else
      {
        v116 = *(__int64 **)(v6 + 160);
        v117 = v116;
        v118 = ((v113 - 2) >> 1) + 1;
        v119 = v118;
        v120 = 2 * v118;
        v121 = 2LL * v118;
        do
        {
          v122 = *v117;
          v117 += 4;
          v112 += (4 * *(unsigned __int8 *)(v122 + 1) + 15) & 0xFFFFFFF8;
          v114 += (4 * *(unsigned __int8 *)(*(v117 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v119;
        }
        while ( v119 );
        if ( v120 >= v113 )
        {
          v115 = v286;
          goto LABEL_73;
        }
      }
      v115 = v271 + ((4 * *(unsigned __int8 *)(v116[2 * v121] + 1) + 15) & 0xFFFFFFF8);
LABEL_73:
      v123 = v281;
      v124 = v112 + v114;
      v125 = *(_DWORD *)(v6 + 800);
      LODWORD(v286) = v124 + v115;
      v126 = 0;
      v127 = 0;
      if ( v125 < 2 )
      {
        if ( !v125 )
          goto LABEL_81;
        v128 = *(__int64 **)(v6 + 792);
        v131 = 0LL;
        goto LABEL_80;
      }
      v128 = *(__int64 **)(v6 + 792);
      v129 = v128;
      v130 = ((v125 - 2) >> 1) + 1;
      v276 = 2 * v130;
      v131 = 2 * v130;
      do
      {
        v132 = *v129;
        v129 += 4;
        v126 += (4 * *(unsigned __int8 *)(v132 + 1) + 15) & 0xFFFFFFF8;
        v127 += (4 * *(unsigned __int8 *)(*(v129 - 2) + 1) + 15) & 0xFFFFFFF8;
        --v130;
      }
      while ( v130 );
      if ( v276 < v125 )
LABEL_80:
        v123 = v281 + ((4 * *(unsigned __int8 *)(v128[2 * v131] + 1) + 15) & 0xFFFFFFF8);
LABEL_81:
      v277 = 0;
      v133 = v126 + v127 + v123;
      v134 = *(_QWORD *)(v6 + 784);
      if ( v134 )
        v277 = (4 * *(unsigned __int8 *)(v134 + 1) + 15) & 0xFFFFFFF8;
      v135 = *(_QWORD *)(v6 + 1104);
      LODWORD(v282) = 0;
      if ( v135 )
        LODWORD(v282) = (4 * *(unsigned __int8 *)(v135 + 1) + 15) & 0xFFFFFFF8;
      v136 = *(unsigned int **)(v6 + 776);
      if ( !v136 || (v137 = 112LL * *v136, v287 = 0, v137 > 0xFFFFFFFF) || (v138 = v137 + 48, v138 < 0x30) )
      {
LABEL_94:
        v138 = 0;
        goto LABEL_95;
      }
      v139 = *((_QWORD *)v136 + 1);
      for ( i = v136 + 2; (unsigned int *)v139 != i; v138 = v280 )
      {
        v141 = (v138 + 1) & 0xFFFFFFFE;
        if ( v141 < v138 )
          goto LABEL_94;
        if ( v141 + *(unsigned __int16 *)(v139 + 32) < v141 )
          goto LABEL_94;
        v280 = v141 + *(unsigned __int16 *)(v139 + 32);
        if ( (int)AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(v139, &v280) < 0 )
          goto LABEL_94;
        v139 = *(_QWORD *)v139;
      }
      v287 = v138;
LABEL_95:
      v142 = v286 + v277 + v133 + (_DWORD)v282 + LODWORD(Sid[0]) + v138 + v289 + 904;
      v143 = ExAllocatePool2(0x100uLL);
      v144 = (_DWORD *)v143;
      if ( !v143 )
      {
LABEL_3:
        v11 = *(struct _ERESOURCE **)(v6 + 48);
        goto LABEL_4;
      }
      SepCopyTokenAccessInformation(
        v6,
        v143,
        v142,
        v93,
        v289,
        v274,
        v286,
        v271,
        v277,
        v133,
        v281,
        (_DWORD)v282,
        v287,
        0,
        0LL);
LABEL_97:
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v145, v146, v147);
      result = 0;
      *v4 = v144;
      return result;
    case TokenIntegrityLevel:
      v202 = KeGetCurrentThread();
      *(_OWORD *)Sid = 0LL;
      --v202->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      SepCopyTokenIntegrity(v6, (__int64)Sid);
      v203 = Sid[0];
      v204 = *RtlSubAuthorityCountSid(Sid[0]);
      if ( (_BYTE)v204 )
        v3 = *RtlSubAuthoritySid(v203, v204 - 1);
      *(_DWORD *)v4 = v3;
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v205, v206, v207);
      return 0;
    case TokenCapabilities:
      v236 = KeGetCurrentThread();
      --v236->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v237 = *(_DWORD *)(v6 + 800);
      v238 = 16 * v237 + 24;
      if ( v237 )
      {
        v239 = *(__int64 **)(v6 + 792);
        v240 = v237;
        do
        {
          v241 = *v239;
          v239 += 2;
          v238 += 4 * *(unsigned __int8 *)(v241 + 1) + 8;
          --v240;
        }
        while ( v240 );
      }
      v242 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v144 = v242;
      if ( !v242 )
        goto LABEL_3;
      *v242 = *(_DWORD *)(v6 + 800);
      RtlCopySidAndAttributesArray(
        *(_DWORD *)(v6 + 800),
        *(_QWORD *)(v6 + 792),
        v238,
        (_DWORD)v242 + 8,
        (char *)v242 + (unsigned int)(16 * *(_DWORD *)(v6 + 800)) + 24,
        (__int64)&v286,
        (__int64)&v286);
      goto LABEL_97;
    case TokenAppContainerSid:
      v194 = KeGetCurrentThread();
      --v194->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v195 = *(_QWORD *)(v6 + 784);
      if ( v195 )
        v196 = 4 * *(unsigned __int8 *)(v195 + 1) + 16;
      else
        v196 = 8;
      v197 = ExAllocatePool2(0x100uLL);
      v198 = (_QWORD *)v197;
      if ( !v197 )
        goto LABEL_3;
      if ( v195 )
      {
        v195 = v197 + 8;
        RtlCopySid(v196 - 8, (PSID)(v197 + 8), *(PSID *)(v6 + 784));
      }
      goto LABEL_139;
    case TokenAppContainerNumber:
      v231 = KeGetCurrentThread();
      --v231->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v232 = *(_QWORD *)(v6 + 1080);
      if ( v232 )
        v3 = *(_DWORD *)(v232 + 40);
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v233, v234, v235);
      result = 0;
      *(_DWORD *)v4 = v3;
      return result;
    case TokenUserClaimAttributes:
    case TokenDeviceClaimAttributes:
      *TokenInformation = 0LL;
      v243 = (PERESOURCE *)((char *)Token + 48);
      v244 = KeGetCurrentThread();
      --v244->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v245 = *(_QWORD *)(v6 + 1096);
      if ( !v245 )
        goto LABEL_199;
      if ( *(_QWORD *)(v245 + 576) )
        goto LABEL_194;
      if ( TokenInformationClass == TokenUserClaimAttributes )
        goto LABEL_199;
      v243 = (PERESOURCE *)(v6 + 48);
LABEL_194:
      v246 = *(__int128 **)(v245 + 584);
      if ( !v246 && TokenInformationClass == TokenDeviceClaimAttributes )
      {
LABEL_199:
        DWORD2(v284) = 0;
        *(_QWORD *)&v284 = (char *)&v283 + 8;
        v246 = &v283;
        v247 = 16;
        *((_QWORD *)&v283 + 1) = (char *)&v283 + 8;
        *((_QWORD *)&v285[0] + 1) = v285;
        *(_QWORD *)&v285[0] = v285;
      }
      else
      {
        if ( TokenInformationClass == TokenUserClaimAttributes )
          v246 = *(__int128 **)(v245 + 576);
        AuthzBasepQueryClaimAttributesToken(v246, 0LL, 0LL, &v287);
        v247 = v287;
      }
      v248 = ExAllocatePool2(0x100uLL);
      v249 = (void *)v248;
      if ( !v248 )
      {
LABEL_201:
        v11 = *v243;
        goto LABEL_4;
      }
      v250 = AuthzBasepQueryClaimAttributesToken(v246, v248, v247, &v287);
      ExReleaseResourceLite(*v243);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v251, v252, v253);
      if ( v250 >= 0 )
        *v4 = v249;
      else
        ExFreePoolWithTag(v249, 0);
      return v250;
    case TokenDeviceGroups:
      v254 = KeGetCurrentThread();
      v243 = (PERESOURCE *)((char *)Token + 48);
      --v254->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v255 = (int **)(v6 + 1096);
      v256 = *(int **)(v6 + 1096);
      if ( v256 && (v257 = *v256) != 0 )
      {
        v258 = 16 * v257 + 8;
        v259 = (__int64 *)*((_QWORD *)v256 + 1);
        v260 = v257;
        do
        {
          v261 = *v259;
          v259 += 2;
          v258 += 4 * *(unsigned __int8 *)(v261 + 1) + 8;
          --v260;
        }
        while ( v260 );
        v243 = (PERESOURCE *)(v6 + 48);
        v255 = (int **)(v6 + 1096);
      }
      else
      {
        v257 = 0;
        v258 = 24;
      }
      v262 = ExAllocatePool2(0x100uLL);
      if ( !v262 )
        goto LABEL_201;
      *(_OWORD *)v262 = 0LL;
      *(_QWORD *)(v262 + 16) = 0LL;
      *(_DWORD *)v262 = v257;
      if ( v257 )
        RtlCopySidAndAttributesArray(
          **v255,
          *((_QWORD *)*v255 + 1),
          v258,
          v262 + 8,
          (void *)(v262 + 16 * v257 - 16 + 24LL),
          (__int64)&v286,
          (__int64)&v286);
      ExReleaseResourceLite(*v243);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v263, v264, v265);
      result = 0;
      *v4 = (PVOID)v262;
      return result;
    case TokenProcessTrustLevel:
      v266 = KeGetCurrentThread();
      --v266->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v195 = *(_QWORD *)(v6 + 1104);
      if ( v195 )
        v267 = 4 * *(unsigned __int8 *)(v195 + 1) + 16;
      else
        v267 = 8;
      v268 = ExAllocatePool2(0x100uLL);
      v198 = (_QWORD *)v268;
      if ( !v268 )
        goto LABEL_3;
      if ( v195 )
      {
        v195 = v268 + 8;
        RtlCopySid(v267 - 8, (PSID)(v268 + 8), *(PSID *)(v6 + 1104));
      }
LABEL_139:
      *v198 = v195;
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v199, v200, v201);
      result = 0;
      *v4 = v198;
      return result;
    case TokenBnoIsolation:
      v269 = KeGetCurrentThread();
      --v269->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v212 = ExAllocatePool2(0x100uLL);
      v144 = (_DWORD *)v212;
      if ( !v212 )
        goto LABEL_3;
      if ( *(_QWORD *)(v6 + 1152) )
      {
        *(_BYTE *)(v212 + 8) = 1;
        *(_QWORD *)v212 = v212 + 16;
        memmove(
          (void *)(v212 + 16),
          *(const void **)(*(_QWORD *)(v6 + 1152) + 48LL),
          *(unsigned __int16 *)(*(_QWORD *)(v6 + 1152) + 42LL));
      }
      else
      {
        *(_BYTE *)(v212 + 8) = 0;
LABEL_227:
        *(_QWORD *)v212 = 0LL;
      }
      goto LABEL_97;
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
    case TokenUserClaimAttributes|TokenAuditPolicy:
      v148 = KeGetCurrentThread();
      v149 = (struct _ERESOURCE **)((char *)Token + 48);
      v150 = 0;
      v151 = 0;
      --v148->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v152 = *(_DWORD *)(v6 + 124);
      v275 = 16 * v152;
      v153 = 16 * v152;
      if ( v152 < 2 )
      {
        if ( !v152 )
          goto LABEL_106;
        v154 = *(__int64 **)(v6 + 152);
        v159 = 0LL;
      }
      else
      {
        v154 = *(__int64 **)(v6 + 152);
        v155 = v154;
        v156 = ((v152 - 2) >> 1) + 1;
        v157 = v156;
        v158 = 2 * v156;
        v159 = 2LL * v156;
        do
        {
          v160 = *v155;
          v155 += 4;
          v150 += (4 * *(unsigned __int8 *)(v160 + 1) + 15) & 0xFFFFFFF8;
          v151 += (4 * *(unsigned __int8 *)(*(v155 - 2) + 1) + 15) & 0xFFFFFFF8;
          --v157;
        }
        while ( v157 );
        v57 = v158 < v152;
        v149 = (struct _ERESOURCE **)(v6 + 48);
        if ( !v57 )
        {
LABEL_106:
          LODWORD(v289) = 0;
          v161 = *(_QWORD *)(v6 + 1104);
          v272 = v150 + v151 + v153;
          if ( v161 )
            LODWORD(v289) = (4 * *(unsigned __int8 *)(v161 + 1) + 15) & 0xFFFFFFF8;
          v162 = (4 * *(unsigned __int8 *)(**(_QWORD **)(v6 + 152) + 1LL) + 15) & 0xFFFFFFF8;
          v278 = v162;
          v282 = (_DWORD *)ExAllocatePool2(0x100uLL);
          v163 = v282;
          if ( !v282 )
          {
            v11 = *v149;
LABEL_4:
            ExReleaseResourceLite(v11);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
            return -1073741670;
          }
          *v282 = *(_DWORD *)(v6 + 192);
          *(_OWORD *)Sid = 0LL;
          v163[1] = SepGetTokenElevation(v6);
          v163[2] = SepGetTokenElevationType(v6);
          v163[3] = *(_DWORD *)(v6 + 196);
          *((_QWORD *)v163 + 7) = *(_QWORD *)(v6 + 24);
          v163[12] = *(_DWORD *)(v6 + 120);
          v164 = *(_QWORD *)(v6 + 1080);
          if ( v164 )
            v165 = *(_DWORD *)(v164 + 40);
          else
            v165 = 0;
          v163[13] = v165;
          SepCopyTokenIntegrity(v6, (__int64)Sid);
          v166 = Sid[0];
          v167 = *RtlSubAuthorityCountSid(Sid[0]);
          if ( (_BYTE)v167 )
            v168 = *RtlSubAuthoritySid(v166, v167 - 1);
          else
            v168 = 0;
          v163[4] = v168;
          v169 = (char *)(v163 + 20);
          v170 = *(_QWORD *)(v6 + 152) - (_QWORD)(v163 + 6);
          v287 = 0;
          v281 = v170;
          v171 = v163 + 8;
          v172 = 0;
          v173 = v162;
          do
          {
            v174 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v171 + v170 - 8) + 1LL) + 8;
            if ( v174 > v173 )
              break;
            *((_QWORD *)v171 - 1) = v169;
            v173 -= v174;
            *v171 = *(_DWORD *)((char *)v171 + v170);
            v175 = *(unsigned __int8 **)((char *)v171 + v170 - 8);
            LODWORD(Sid[0]) = v173;
            v176 = 4 * v175[1] + 8;
            if ( v176 <= v174 )
            {
              memmove(v169, v175, v176);
              v172 = v287;
              v173 = (unsigned int)Sid[0];
              v170 = v281;
            }
            ++v172;
            v169 += v174;
            v287 = v172;
            v171 += 4;
          }
          while ( !v172 );
          v177 = 0LL;
          v178 = (unsigned int)v289;
          v179 = (char *)v163 + v278 + 80;
          if ( (_DWORD)v289 )
          {
            v177 = (char *)v163 + v278 + 80;
            memmove(v177, *(const void **)(v6 + 1104), 4LL * *(unsigned __int8 *)(*(_QWORD *)(v6 + 1104) + 1LL) + 8);
            v179 = v177;
          }
          v180 = &v179[v178];
          v181 = v272;
          *((_QWORD *)v163 + 5) = v177;
          v182 = v272 - v275;
          v289 = *(_QWORD *)(v6 + 152);
          v183 = &v180[v275];
          v184 = *(_DWORD *)(v6 + 124);
          Sid[0] = v180;
          if ( v184 )
          {
            v185 = v180 + 8;
            v186 = v289 - (_QWORD)v180;
            v187 = v184;
            do
            {
              v188 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)v185 + v186 - 8) + 1LL) + 8;
              if ( v188 > v182 )
                break;
              *((_QWORD *)v185 - 1) = v183;
              v182 -= v188;
              *v185 = *(_DWORD *)((char *)v185 + v186);
              v189 = *(unsigned __int8 **)((char *)v185 + v186 - 8);
              v190 = 4 * v189[1] + 8;
              if ( v190 <= v188 )
                memmove(v183, v189, v190);
              ++v3;
              v183 += v188;
              v185 += 4;
            }
            while ( v3 < v187 );
            v6 = v286;
            v4 = v288;
            v180 = (char *)Sid[0];
            v181 = v272;
          }
          v10 = v282;
          v282[16] = *(_DWORD *)(v6 + 124);
          *((_DWORD *)v10 + 17) = v181;
          v10[9] = v180;
LABEL_7:
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 48));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
          result = 0;
          *v4 = v10;
          return result;
        }
      }
      v153 = v275 + ((4 * *(unsigned __int8 *)(v154[2 * v159] + 1) + 15) & 0xFFFFFFF8);
      goto LABEL_106;
    default:
      return -1073741821;
  }
}
