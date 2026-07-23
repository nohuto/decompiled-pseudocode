/*
 * XREFs of SepVariableInitialization @ 0x140C39A60
 * Callers:
 *     SepInitializationPhase0 @ 0x140C3BE1C (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140463B10 (RtlDeriveCapabilitySidsFromName.c)
 *     Feature_AgenticAppContainerBfsSupport__private_IsEnabledDeviceUsageNoInline @ 0x14060550C (Feature_AgenticAppContainerBfsSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SepInitializeSharedSidMap @ 0x140794DC8 (SepInitializeSharedSidMap.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     SepInitSystemDacls @ 0x140C39108 (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  bool v1; // cl
  ULONG v2; // ebx
  _DWORD *Pool2; // rdi
  _DWORD *v4; // r12
  _DWORD *v5; // r13
  _DWORD *v6; // r15
  _DWORD *v7; // r14
  _DWORD *v8; // rsi
  ULONG v9; // eax
  ULONG v10; // esi
  ULONG v11; // edi
  ULONG v12; // ebx
  ULONG v13; // ebx
  _DWORD *v14; // r12
  _DWORD *v15; // r13
  _DWORD *v16; // r15
  _DWORD *v17; // rsi
  _DWORD *v18; // rdi
  PSID v19; // r14
  _DWORD *v20; // rbx
  _DWORD *v21; // r8
  _DWORD *v22; // r9
  _DWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  _DWORD *v27; // rbx
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _DWORD *v35; // rax
  PSID v36; // r8
  PSID v37; // rdx
  char *v38; // rcx
  __int64 v39; // rax
  _DWORD *Sid; // [rsp+20h] [rbp-E0h]
  _DWORD *Sida; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+28h] [rbp-D8h] BYREF
  __int64 IdentifierAuthority; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  PSID v47; // [rsp+48h] [rbp-B8h]
  PSID v48; // [rsp+50h] [rbp-B0h]
  PSID v49; // [rsp+58h] [rbp-A8h]
  PSID v50; // [rsp+60h] [rbp-A0h]
  PSID v51; // [rsp+68h] [rbp-98h]
  PSID v52; // [rsp+70h] [rbp-90h]
  PSID v53; // [rsp+78h] [rbp-88h]
  PSID v54; // [rsp+80h] [rbp-80h]
  PSID v55; // [rsp+88h] [rbp-78h]
  PSID v56; // [rsp+90h] [rbp-70h]
  PSID v57; // [rsp+98h] [rbp-68h]
  PSID v58; // [rsp+A0h] [rbp-60h]
  PSID v59; // [rsp+A8h] [rbp-58h]
  PSID v60; // [rsp+B0h] [rbp-50h]
  PSID v61; // [rsp+B8h] [rbp-48h]
  PSID v62; // [rsp+C0h] [rbp-40h]
  PSID v63; // [rsp+C8h] [rbp-38h]
  PSID v64; // [rsp+D0h] [rbp-30h]
  PSID v65; // [rsp+D8h] [rbp-28h]
  PSID v66; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v67; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v68; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v69; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v70; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v71; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v72; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v73; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v75; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v76; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v77; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v78; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v79; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v80; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v81; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v82; // [rsp+1D8h] [rbp+D8h] BYREF
  UNICODE_STRING v83; // [rsp+1E8h] [rbp+E8h] BYREF
  UNICODE_STRING v84; // [rsp+1F8h] [rbp+F8h] BYREF
  UNICODE_STRING v85; // [rsp+208h] [rbp+108h] BYREF
  UNICODE_STRING v86; // [rsp+218h] [rbp+118h] BYREF
  UNICODE_STRING v87; // [rsp+228h] [rbp+128h] BYREF
  UNICODE_STRING v88; // [rsp+238h] [rbp+138h] BYREF
  UNICODE_STRING v89; // [rsp+248h] [rbp+148h] BYREF
  UNICODE_STRING v90; // [rsp+258h] [rbp+158h] BYREF
  UNICODE_STRING v91; // [rsp+268h] [rbp+168h] BYREF
  UNICODE_STRING v92; // [rsp+278h] [rbp+178h] BYREF
  PSID v93; // [rsp+288h] [rbp+188h]
  size_t Size; // [rsp+290h] [rbp+190h]
  PSID v95; // [rsp+298h] [rbp+198h]
  PSID v96; // [rsp+2A0h] [rbp+1A0h]
  PSID v97; // [rsp+2A8h] [rbp+1A8h]
  PSID v98; // [rsp+2B0h] [rbp+1B0h]
  PSID v99; // [rsp+2B8h] [rbp+1B8h]
  PSID v100; // [rsp+2C0h] [rbp+1C0h]
  PSID v101; // [rsp+2C8h] [rbp+1C8h]
  PSID CapabilityGroupSid; // [rsp+2D0h] [rbp+1D0h]
  PSID v103; // [rsp+2D8h] [rbp+1D8h]
  __int64 v104; // [rsp+330h] [rbp+230h] BYREF
  __int64 v105; // [rsp+338h] [rbp+238h] BYREF
  __int64 v106; // [rsp+340h] [rbp+240h] BYREF
  __int64 v107; // [rsp+348h] [rbp+248h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2359330LL;
  UnicodeString.Buffer = L"lpacAppExperience";
  *(_QWORD *)&v75.Length = 1048590LL;
  v75.Buffer = L"lpacCom";
  v73.Buffer = L"lpacCryptoServices";
  v76.Buffer = L"lpacIdentityServices";
  v77.Buffer = L"lpacInstrumentation";
  v78.Buffer = L"lpacEnterprisePolicyChangeNotifications";
  v79.Buffer = L"lpacMedia";
  v80.Buffer = L"lpacPnpNotifications";
  v81.Buffer = L"registryRead";
  v82.Buffer = L"lpacServicesManagement";
  v83.Buffer = L"lpacSessionManagement";
  v84.Buffer = L"lpacPrinting";
  v85.Buffer = L"lpacWebPlatform";
  v86.Buffer = L"lpacPayments";
  v87.Buffer = L"lpacClipboard";
  v88.Buffer = L"lpacIME";
  v89.Buffer = L"lpacPackageManagerOperation";
  v90.Buffer = L"lpacDeviceAccess";
  v69.Buffer = L"learningModeLogging";
  v70.Buffer = L"permissiveLearningMode";
  v72.Buffer = L"sessionImpersonation";
  v71.Buffer = L"constrainedImpersonation";
  v91.Buffer = L"isolatedWin32-volumeRootMinimal";
  v92.Buffer = L"isolatedWin32-profilesRootMinimal";
  v67.Buffer = L"isolatedWin32-promptForAccess";
  v68.Buffer = L"isolatedWin32-accessToPublisherDirectory";
  LODWORD(IdentifierAuthority) = 0;
  *(_QWORD *)&v73.Length = 2490404LL;
  *(_QWORD *)&v76.Length = 2752552LL;
  *(_QWORD *)&v77.Length = 2621478LL;
  *(_QWORD *)&v78.Length = 5242958LL;
  *(_QWORD *)&v79.Length = 1310738LL;
  *(_QWORD *)&v80.Length = 2752552LL;
  *(_QWORD *)&v81.Length = 1703960LL;
  *(_QWORD *)&v82.Length = 3014700LL;
  *(_QWORD *)&v83.Length = 2883626LL;
  *(_QWORD *)&v84.Length = 1703960LL;
  *(_QWORD *)&v85.Length = 2097182LL;
  *(_QWORD *)&v86.Length = 1703960LL;
  *(_QWORD *)&v87.Length = 1835034LL;
  *(_QWORD *)&v88.Length = 1048590LL;
  *(_QWORD *)&v89.Length = 3670070LL;
  *(_QWORD *)&v90.Length = 2228256LL;
  *(_QWORD *)&v69.Length = 2621478LL;
  *(_QWORD *)&v70.Length = 3014700LL;
  *(_QWORD *)&v72.Length = 2752552LL;
  *(_QWORD *)&v71.Length = 3276848LL;
  *(_QWORD *)&v91.Length = 4194366LL;
  *(_QWORD *)&v92.Length = 4456514LL;
  *(_QWORD *)&v67.Length = 3932218LL;
  *(_QWORD *)&v68.Length = 5374032LL;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v45) = 0;
  WORD2(v45) = 256;
  LODWORD(v46) = 0;
  WORD2(v46) = 512;
  LODWORD(v106) = 0;
  WORD2(v106) = 768;
  LODWORD(v104) = 0;
  WORD2(v104) = 1280;
  LODWORD(v107) = 0;
  WORD2(v107) = 4096;
  LODWORD(v43) = 0;
  WORD2(v43) = 3840;
  LODWORD(v105) = 0;
  WORD2(v105) = 4864;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL);
  v1 = (v0 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF78000000310] <= 0x83400uLL;
  SepTokenSidSharingEnabled = v1;
  SepTokenCapabilitySidSharingEnabled = v1;
  SepOsLoaderTpmDriverLoaded = (v0 & 0x80) != 0;
  v2 = RtlLengthRequiredSid(1u);
  SeNullSid = (PSID)ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  SeCreatorOwnerSid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeCreatorGroupSid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeCreatorOwnerServerSid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeCreatorGroupServerSid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeWorldSid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeLocalSid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  Pool2 = (_DWORD *)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeOwnerRightsSid = Pool2;
  v61 = SeNullSid;
  if ( !SeNullSid )
    return 0;
  Sid = SeWorldSid;
  if ( !SeWorldSid )
    return 0;
  v4 = SeLocalSid;
  if ( !SeLocalSid )
    return 0;
  v5 = SeCreatorOwnerSid;
  if ( !SeCreatorOwnerSid )
    return 0;
  v6 = SeCreatorGroupSid;
  if ( !SeCreatorGroupSid )
    return 0;
  v7 = SeCreatorOwnerServerSid;
  if ( !SeCreatorOwnerServerSid )
    return 0;
  if ( !Pool2 )
    return 0;
  v8 = SeCreatorGroupServerSid;
  if ( !SeCreatorGroupServerSid )
    return 0;
  RtlInitializeSid(SeNullSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v45, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v8, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  *((_DWORD *)v61 + 2) = 0;
  Sid[2] = 0;
  v4[2] = 0;
  v5[2] = 0;
  v6[2] = 1;
  v7[2] = 2;
  v8[2] = 3;
  Pool2[2] = 4;
  v9 = RtlLengthRequiredSid(0);
  SeNtAuthoritySid = (PSID)ExAllocatePool2(0x120uLL, v9, 0x69536553uLL);
  SeDialupSid = ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  SeNetworkSid = ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeBatchSid = ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeInteractiveSid = (void *)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SePrincipalSelfSid = (void *)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeServiceSid = (PSID)ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  SeLocalSystemSid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeAuthenticatedUsersSid = ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  SeRestrictedSid = (PSID)ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  SeAnonymousLogonSid = (PSID)ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  SeLocalServiceSid = (PSID)ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  SeNetworkServiceSid = (PSID)ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  SeIUserSid = (PSID)ExAllocatePool2(0x120uLL, v2, 0x69536553uLL);
  v10 = RtlLengthRequiredSid(2u);
  SeAliasAdminsSid = (PSID)ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeAliasUsersSid = (PSID)ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeAliasGuestsSid = ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeAliasPowerUsersSid = ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeAliasAccountOpsSid = ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeAliasSystemOpsSid = (PSID)ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeAliasPrintOpsSid = (PSID)ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeAliasBackupOpsSid = (PSID)ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeUntrustedMandatorySid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeLowMandatorySid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeMediumMandatorySid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeHighMandatorySid = (PSID)ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeSystemMandatorySid = ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SePackagePrefixSid = ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeCapabilityPrefixSid = ExAllocatePool2(0x60uLL, v2, 0x69536553uLL);
  SeAllAppPackagesSid = (PSID)ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeAllRestrictedAppPackagesSid = (PSID)ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  v11 = RtlLengthRequiredSid(0xAu);
  SeLpacAppExperienceCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacComCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacCryptoServicesCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacIdentityServicesCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacInstrumentationCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacEnterprisePolicyChangeNotificationsCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacMediaCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacPnpNotificationsCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeRegistryReadCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacServicesManagementCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacSessionManagementCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacPrintingCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacWebPlatformCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacPaymentsCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacClipboardCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacImeCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacPackageManagerOperationCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLpacDeviceAccessCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  v12 = RtlLengthRequiredSid(6u);
  Size = v12;
  SeUserModeDriversSid = (PSID)ExAllocatePool2(0x60uLL, v12, 0x69536553uLL);
  SeTrustedInstallerSid = ExAllocatePool2(0x60uLL, v12, 0x69536553uLL);
  SeProcTrustWinTcbSid = (PSID)ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeProcTrustWinSid = ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeProcTrustAuthenticodeSid = ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeProcTrustLiteAntimalwareSid = ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeProcTrustLiteWinTcbSid = ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeProcTrustLiteWinSid = ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeProcTrustLiteAppSid = ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeProcTrustNoneSid = ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeDefaultAccountAliasSid = (PSID)ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeLearningModeLoggingCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SePermissiveLearningModeCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  v13 = RtlLengthRequiredSid(9u);
  SeConstrainedImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(0x120uLL, v13, 0x69536553uLL);
  SeConstrainedImpersonationCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeSessionImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(0x120uLL, v13, 0x69536553uLL);
  SeSessionImpersonationCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAppSiloSid = (PSID)ExAllocatePool2(0x60uLL, v10, 0x69536553uLL);
  SeAppSiloVolumeRootMinimalCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAppSiloProfilesRootMinimalCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAppSiloPromptForAccessCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAppSiloAccessToPublisherDirectoryCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  if ( !SeNtAuthoritySid )
    return 0;
  v106 = SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  Sida = (_DWORD *)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v60 = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v59 = SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v58 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v57 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v56 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v55 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v54 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v53 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v52 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v51 = SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v50 = SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  v49 = SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v48 = SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  v47 = (PSID)SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v46 = SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v45 = SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v14 = SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v15 = SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v16 = SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  IdentifierAuthority = (__int64)SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v62 = SeLowMandatorySid;
  if ( !SeLowMandatorySid )
    return 0;
  v63 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v64 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v65 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v66 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v61 = (PSID)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v17 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v18 = SeAllRestrictedAppPackagesSid;
  if ( !SeAllRestrictedAppPackagesSid )
    return 0;
  if ( !SeLpacAppExperienceCapabilitySid )
    return 0;
  if ( !SeLpacComCapabilitySid )
    return 0;
  if ( !SeLpacCryptoServicesCapabilitySid )
    return 0;
  if ( !SeLpacIdentityServicesCapabilitySid )
    return 0;
  if ( !SeLpacInstrumentationCapabilitySid )
    return 0;
  if ( !SeLpacEnterprisePolicyChangeNotificationsCapabilitySid )
    return 0;
  if ( !SeLpacMediaCapabilitySid )
    return 0;
  if ( !SeLpacPnpNotificationsCapabilitySid )
    return 0;
  if ( !SeRegistryReadCapabilitySid )
    return 0;
  if ( !SeLpacServicesManagementCapabilitySid )
    return 0;
  if ( !SeLpacSessionManagementCapabilitySid )
    return 0;
  if ( !SeLpacPrintingCapabilitySid )
    return 0;
  if ( !SeLpacWebPlatformCapabilitySid )
    return 0;
  if ( !SeLpacPaymentsCapabilitySid )
    return 0;
  if ( !SeLpacClipboardCapabilitySid )
    return 0;
  if ( !SeLpacImeCapabilitySid )
    return 0;
  if ( !SeLpacPackageManagerOperationCapabilitySid )
    return 0;
  if ( !SeLpacDeviceAccessCapabilitySid )
    return 0;
  v19 = SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v96 = SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v97 = (PSID)SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v98 = (PSID)SeProcTrustAuthenticodeSid;
  if ( !SeProcTrustAuthenticodeSid )
    return 0;
  v100 = (PSID)SeProcTrustLiteAntimalwareSid;
  if ( !SeProcTrustLiteAntimalwareSid )
    return 0;
  v103 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v99 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v101 = (PSID)SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v95 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v93 = (PSID)SeTrustedInstallerSid;
  if ( !SeTrustedInstallerSid )
    return 0;
  if ( !SeDefaultAccountAliasSid )
    return 0;
  if ( !SeLearningModeLoggingCapabilitySid )
    return 0;
  if ( !SePermissiveLearningModeCapabilitySid )
    return 0;
  if ( !SeConstrainedImpersonationCapabilitySid )
    return 0;
  CapabilityGroupSid = SeConstrainedImpersonationCapabilityGroupSid;
  if ( !SeConstrainedImpersonationCapabilityGroupSid )
    return 0;
  if ( !SeSessionImpersonationCapabilitySid )
    return 0;
  if ( !SeSessionImpersonationCapabilityGroupSid )
    return 0;
  v20 = SeAppSiloSid;
  if ( !SeAppSiloSid )
    return 0;
  if ( !SeAppSiloProfilesRootMinimalCapabilitySid )
    return 0;
  if ( !SeAppSiloVolumeRootMinimalCapabilitySid )
    return 0;
  if ( !SeAppSiloPromptForAccessCapabilitySid )
    return 0;
  if ( !SeAppSiloAccessToPublisherDirectoryCapabilitySid )
    return 0;
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v104, 0);
  RtlInitializeSid((PSID)v106, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(Sida, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v104, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v47, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid((PSID)v45, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v93, (PSID_IDENTIFIER_AUTHORITY)&v104, 6u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v66, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v17, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  RtlInitializeSid(v18, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  memset_0(v19, 0, Size);
  RtlInitializeSid(v19, (PSID_IDENTIFIER_AUTHORITY)&v104, 6u);
  RtlInitializeSid(v95, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v96, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v97, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v98, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v100, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v103, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v99, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v101, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v20, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  v21 = v48;
  v22 = v49;
  v23 = v47;
  *(_DWORD *)(v106 + 8) = 1;
  v24 = v46;
  Sida[2] = 2;
  *((_DWORD *)v60 + 2) = 3;
  *((_DWORD *)v59 + 2) = 4;
  *((_DWORD *)v58 + 2) = 6;
  *((_DWORD *)v57 + 2) = 10;
  *((_DWORD *)v56 + 2) = 18;
  *((_DWORD *)v55 + 2) = 11;
  *((_DWORD *)v54 + 2) = 12;
  *((_DWORD *)v53 + 2) = 7;
  *((_DWORD *)v52 + 2) = 19;
  *((_DWORD *)v51 + 2) = 20;
  *((_DWORD *)v50 + 2) = 17;
  v25 = v45;
  v22[2] = 32;
  v21[2] = 32;
  v23[2] = 32;
  *(_DWORD *)(v24 + 8) = 32;
  *(_DWORD *)(v25 + 8) = 32;
  v14[2] = 32;
  v15[2] = 32;
  v16[2] = 32;
  v22[3] = 544;
  v21[3] = 545;
  v23[3] = 546;
  *(_DWORD *)(v24 + 12) = 547;
  *(_DWORD *)(v25 + 12) = 548;
  v26 = IdentifierAuthority;
  v14[3] = 549;
  v15[3] = 550;
  v16[3] = 551;
  *(_DWORD *)(v26 + 8) = 0;
  *((_DWORD *)v62 + 2) = 4096;
  *((_DWORD *)v63 + 2) = 0x2000;
  *((_DWORD *)v64 + 2) = 12288;
  *((_DWORD *)v65 + 2) = 0x4000;
  *((_DWORD *)v66 + 2) = 2;
  *((_DWORD *)v61 + 2) = 3;
  v17[2] = 2;
  v17[3] = 1;
  v18[2] = 2;
  v18[3] = 2;
  v20[2] = 3;
  v20[3] = 0x10000;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, SeLpacAppExperienceCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v75, SeConstrainedImpersonationCapabilityGroupSid, SeLpacComCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v73,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacCryptoServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v76,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacIdentityServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v77,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacInstrumentationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v78,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacEnterprisePolicyChangeNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v79, SeConstrainedImpersonationCapabilityGroupSid, SeLpacMediaCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v80,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPnpNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v81, SeConstrainedImpersonationCapabilityGroupSid, SeRegistryReadCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v82,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacServicesManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v83,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacSessionManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v84, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPrintingCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v85,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacWebPlatformCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v86, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPaymentsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v87, SeConstrainedImpersonationCapabilityGroupSid, SeLpacClipboardCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v88, SeConstrainedImpersonationCapabilityGroupSid, SeLpacImeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v89,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPackageManagerOperationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v90,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacDeviceAccessCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v91,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloVolumeRootMinimalCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v92,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloProfilesRootMinimalCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v67,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloPromptForAccessCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v68,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloAccessToPublisherDirectoryCapabilitySid) < 0 )
    return 0;
  v27 = SeDefaultAccountAliasSid;
  *((_DWORD *)SeUserModeDriversSid + 2) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v28 = SeProcTrustWinTcbSid;
  *((_DWORD *)SeProcTrustWinTcbSid + 2) = 1024;
  v28[3] = 0x2000;
  v29 = SeProcTrustWinSid;
  *(_DWORD *)(SeProcTrustWinSid + 8) = 1024;
  *(_DWORD *)(v29 + 12) = 4096;
  v30 = SeProcTrustAuthenticodeSid;
  *(_DWORD *)(SeProcTrustAuthenticodeSid + 8) = 1024;
  *(_DWORD *)(v30 + 12) = 1024;
  v31 = SeProcTrustLiteAntimalwareSid;
  *(_DWORD *)(SeProcTrustLiteAntimalwareSid + 8) = 512;
  *(_DWORD *)(v31 + 12) = 1536;
  v32 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v32 + 12) = 0x2000;
  v33 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v33 + 12) = 4096;
  v34 = SeProcTrustLiteAppSid;
  *(_DWORD *)(SeProcTrustLiteAppSid + 8) = 512;
  *(_DWORD *)(v34 + 12) = 2048;
  v35 = (_DWORD *)SeTrustedInstallerSid;
  *(_DWORD *)(SeTrustedInstallerSid + 8) = 80;
  v35[3] = 956008885;
  v35[4] = -876444647;
  v35[5] = 1831038044;
  v35[6] = 1853292631;
  v35[7] = -2023488832;
  RtlInitializeSid(v27, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  v36 = SeLearningModeLoggingCapabilitySid;
  v37 = SeConstrainedImpersonationCapabilityGroupSid;
  v27[2] = 32;
  v27[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v69, v37, v36) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v70,
         SeConstrainedImpersonationCapabilityGroupSid,
         SePermissiveLearningModeCapabilitySid) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v71,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeConstrainedImpersonationCapabilitySid) < 0
    || RtlDeriveCapabilitySidsFromName(
         &v72,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
  {
    return 0;
  }
  SepInitSystemDacls();
  v105 = 3LL;
  SeCreateTokenPrivilege = (LUID)2LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  v106 = 4LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  v107 = 5LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v46 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v45 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v43 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v47 = (PSID)10;
  SeLoadDriverPrivilege = (LUID)10LL;
  v48 = (PSID)15;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v49 = (PSID)14;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v50 = (PSID)11;
  SeSystemProfilePrivilege = (LUID)11LL;
  v51 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v52 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v53 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v54 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v55 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v56 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v57 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v104 = 2LL;
  v58 = (PSID)21;
  v59 = (PSID)22;
  v60 = (PSID)23;
  SeAuditPrivilege = 21LL;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_140FDA198 = (__int64)SeNullSid;
  qword_140FDA1A0 = (__int64)SeWorldSid;
  qword_140FDA1A8 = (__int64)SeLocalSid;
  qword_140FDA1B0 = (__int64)SeCreatorOwnerSid;
  qword_140FDA1B8 = (__int64)SeCreatorGroupSid;
  qword_140FDA2E0 = (__int64)SeOwnerRightsSid;
  qword_140FDA1C0 = (__int64)SeNtAuthoritySid;
  qword_140FDA1C8 = SeDialupSid;
  qword_140FDA1D0 = SeNetworkSid;
  qword_140FDA1D8 = SeBatchSid;
  qword_140FDA1E0 = (__int64)SeInteractiveSid;
  qword_140FDA1E8 = (__int64)SeLocalSystemSid;
  qword_140FDA230 = SeAuthenticatedUsersSid;
  qword_140FDA238 = (__int64)SeRestrictedSid;
  qword_140FDA240 = (__int64)SeAnonymousLogonSid;
  qword_140FDA260 = (__int64)SeLocalServiceSid;
  qword_140FDA268 = (__int64)SeNetworkServiceSid;
  qword_140FDA2B0 = (__int64)SeIUserSid;
  qword_140FDA1F0 = (__int64)SeAliasAdminsSid;
  qword_140FDA1F8 = (__int64)SeAliasUsersSid;
  qword_140FDA200 = SeAliasGuestsSid;
  qword_140FDA208 = SeAliasPowerUsersSid;
  qword_140FDA210 = SeAliasAccountOpsSid;
  qword_140FDA218 = (__int64)SeAliasSystemOpsSid;
  qword_140FDA220 = (__int64)SeAliasPrintOpsSid;
  qword_140FDA228 = (__int64)SeAliasBackupOpsSid;
  qword_140FDA2B8 = (__int64)SeUntrustedMandatorySid;
  qword_140FDA2C0 = (__int64)SeLowMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = 32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_140FDA2C8 = (__int64)SeMediumMandatorySid;
  qword_140FDA2D0 = (__int64)SeHighMandatorySid;
  qword_140FDA2D8 = SeSystemMandatorySid;
  qword_140FDA2E8 = (__int64)SeAllAppPackagesSid;
  qword_140FDA2F0 = (__int64)SeUserModeDriversSid;
  qword_140FDA2F8 = (__int64)SeProcTrustWinTcbSid;
  qword_140FDA300 = SeTrustedInstallerSid;
  qword_140FDA310 = (__int64)SeAppSiloSid;
  dword_140FDA0E4 = 0;
  dword_140FDA0EC = 0;
  dword_140FDA0F4 = 0;
  dword_140FDA0FC = 0;
  dword_140FDA104 = 0;
  dword_140FDA10C = 0;
  dword_140FDA114 = 0;
  dword_140FDA11C = 0;
  dword_140FDA124 = 0;
  dword_140FDA12C = 0;
  dword_140FDA134 = 0;
  dword_140FDA13C = 0;
  dword_140FDA144 = 0;
  dword_140FDA14C = 0;
  dword_140FDA154 = 0;
  dword_140FDA15C = 0;
  SepExports = 2;
  dword_140FDA0E8 = 3;
  dword_140FDA0F0 = 4;
  dword_140FDA0F8 = 5;
  dword_140FDA100 = 6;
  dword_140FDA108 = 7;
  dword_140FDA110 = 8;
  dword_140FDA118 = 9;
  dword_140FDA120 = 10;
  dword_140FDA128 = 15;
  dword_140FDA130 = 14;
  dword_140FDA138 = 11;
  dword_140FDA140 = 12;
  dword_140FDA148 = 13;
  dword_140FDA150 = 16;
  dword_140FDA158 = 17;
  dword_140FDA160 = 18;
  dword_140FDA164 = 0;
  dword_140FDA16C = 0;
  dword_140FDA174 = 0;
  dword_140FDA17C = 0;
  dword_140FDA184 = 0;
  dword_140FDA30C = 0;
  qword_140FDA318 = (__int64)SeAppSiloVolumeRootMinimalCapabilitySid;
  qword_140FDA320 = (__int64)SeAppSiloProfilesRootMinimalCapabilitySid;
  qword_140FDA328 = (__int64)SeAppSiloPromptForAccessCapabilitySid;
  qword_140FDA330 = (__int64)SeAppSiloAccessToPublisherDirectoryCapabilitySid;
  dword_140FDA168 = 19;
  dword_140FDA170 = 20;
  dword_140FDA178 = 21;
  dword_140FDA180 = 22;
  dword_140FDA188 = 23;
  dword_140FDA18C = 0;
  dword_140FDA190 = 24;
  dword_140FDA194 = 0;
  dword_140FDA248 = 25;
  dword_140FDA24C = 0;
  dword_140FDA250 = 26;
  dword_140FDA254 = 0;
  dword_140FDA258 = 27;
  dword_140FDA25C = 0;
  dword_140FDA270 = 28;
  dword_140FDA274 = 0;
  dword_140FDA278 = 29;
  dword_140FDA27C = 0;
  dword_140FDA280 = 30;
  dword_140FDA284 = 0;
  dword_140FDA288 = 31;
  dword_140FDA28C = 0;
  dword_140FDA290 = 32;
  dword_140FDA294 = 0;
  dword_140FDA298 = 33;
  dword_140FDA29C = 0;
  dword_140FDA2A0 = 34;
  dword_140FDA2A4 = 0;
  dword_140FDA2A8 = 35;
  dword_140FDA2AC = 0;
  dword_140FDA308 = 36;
  if ( (unsigned int)Feature_AgenticAppContainerBfsSupport__private_IsEnabledDeviceUsageNoInline() )
    qword_140FDA338 = (__int64)SeAllRestrictedAppPackagesSid;
  SeExports = (PSE_EXPORTS)&SepExports;
  v38 = (char *)&unk_140F0F358;
  v39 = 5LL;
  do
  {
    v38[8] = 0;
    *(_QWORD *)v38 = 0LL;
    *((_QWORD *)v38 - 3) = 0LL;
    v38 += 40;
    --v39;
  }
  while ( v39 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
