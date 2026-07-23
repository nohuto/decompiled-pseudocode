/*
 * XREFs of SepVariableInitialization @ 0x140C26650
 * Callers:
 *     SepInitializationPhase0 @ 0x140C289F4 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x14046C970 (RtlDeriveCapabilitySidsFromName.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepInitializeSharedSidMap @ 0x140785970 (SepInitializeSharedSidMap.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1409EAF40 (RtlInitializeSid.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     SepInitSystemDacls @ 0x140C25CF8 (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  __int64 v0; // rax
  int v1; // eax
  bool v2; // cl
  ULONG v3; // ebx
  _DWORD *Pool2; // rdi
  _DWORD *v5; // r12
  _DWORD *v6; // r13
  _DWORD *v7; // r15
  _DWORD *v8; // r14
  _DWORD *v9; // rsi
  ULONG v10; // eax
  ULONG v11; // esi
  ULONG v12; // edi
  ULONG v13; // ebx
  ULONG v14; // ebx
  _DWORD *v15; // r12
  _DWORD *v16; // r13
  _DWORD *v17; // r15
  _DWORD *v18; // rsi
  _DWORD *v19; // rdi
  PSID v20; // r14
  _DWORD *v21; // rbx
  _DWORD *v22; // r8
  _DWORD *v23; // r9
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // rbx
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // rax
  PSID v37; // r8
  PSID v38; // rdx
  char *v39; // rcx
  __int64 v40; // rax
  _DWORD *Sid; // [rsp+20h] [rbp-E0h]
  _DWORD *Sida; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+28h] [rbp-D8h] BYREF
  __int64 IdentifierAuthority; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  PSID v48; // [rsp+48h] [rbp-B8h]
  PSID v49; // [rsp+50h] [rbp-B0h]
  PSID v50; // [rsp+58h] [rbp-A8h]
  PSID v51; // [rsp+60h] [rbp-A0h]
  PSID v52; // [rsp+68h] [rbp-98h]
  PSID v53; // [rsp+70h] [rbp-90h]
  PSID v54; // [rsp+78h] [rbp-88h]
  PSID v55; // [rsp+80h] [rbp-80h]
  PSID v56; // [rsp+88h] [rbp-78h]
  PSID v57; // [rsp+90h] [rbp-70h]
  PSID v58; // [rsp+98h] [rbp-68h]
  PSID v59; // [rsp+A0h] [rbp-60h]
  PSID v60; // [rsp+A8h] [rbp-58h]
  PSID v61; // [rsp+B0h] [rbp-50h]
  PSID v62; // [rsp+B8h] [rbp-48h]
  PSID v63; // [rsp+C0h] [rbp-40h]
  PSID v64; // [rsp+C8h] [rbp-38h]
  PSID v65; // [rsp+D0h] [rbp-30h]
  PSID v66; // [rsp+D8h] [rbp-28h]
  PSID v67; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v68; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v69; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v70; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v71; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v72; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v73; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v74; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v76; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v77; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v78; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v79; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v80; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v81; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v82; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v83; // [rsp+1D8h] [rbp+D8h] BYREF
  UNICODE_STRING v84; // [rsp+1E8h] [rbp+E8h] BYREF
  UNICODE_STRING v85; // [rsp+1F8h] [rbp+F8h] BYREF
  UNICODE_STRING v86; // [rsp+208h] [rbp+108h] BYREF
  UNICODE_STRING v87; // [rsp+218h] [rbp+118h] BYREF
  UNICODE_STRING v88; // [rsp+228h] [rbp+128h] BYREF
  UNICODE_STRING v89; // [rsp+238h] [rbp+138h] BYREF
  UNICODE_STRING v90; // [rsp+248h] [rbp+148h] BYREF
  UNICODE_STRING v91; // [rsp+258h] [rbp+158h] BYREF
  UNICODE_STRING v92; // [rsp+268h] [rbp+168h] BYREF
  UNICODE_STRING v93; // [rsp+278h] [rbp+178h] BYREF
  PSID v94; // [rsp+288h] [rbp+188h]
  size_t Size; // [rsp+290h] [rbp+190h]
  PSID v96; // [rsp+298h] [rbp+198h]
  PSID v97; // [rsp+2A0h] [rbp+1A0h]
  PSID v98; // [rsp+2A8h] [rbp+1A8h]
  PSID v99; // [rsp+2B0h] [rbp+1B0h]
  PSID v100; // [rsp+2B8h] [rbp+1B8h]
  PSID v101; // [rsp+2C0h] [rbp+1C0h]
  PSID v102; // [rsp+2C8h] [rbp+1C8h]
  PSID CapabilityGroupSid; // [rsp+2D0h] [rbp+1D0h]
  PSID v104; // [rsp+2D8h] [rbp+1D8h]
  __int64 v105; // [rsp+330h] [rbp+230h] BYREF
  __int64 v106; // [rsp+338h] [rbp+238h] BYREF
  __int64 v107; // [rsp+340h] [rbp+240h] BYREF
  __int64 v108; // [rsp+348h] [rbp+248h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2359330LL;
  UnicodeString.Buffer = L"lpacAppExperience";
  *(_QWORD *)&v76.Length = 1048590LL;
  v76.Buffer = L"lpacCom";
  v74.Buffer = L"lpacCryptoServices";
  v77.Buffer = L"lpacIdentityServices";
  v78.Buffer = L"lpacInstrumentation";
  v79.Buffer = L"lpacEnterprisePolicyChangeNotifications";
  v80.Buffer = L"lpacMedia";
  v81.Buffer = L"lpacPnpNotifications";
  v82.Buffer = L"registryRead";
  v83.Buffer = L"lpacServicesManagement";
  v84.Buffer = L"lpacSessionManagement";
  v85.Buffer = L"lpacPrinting";
  v86.Buffer = L"lpacWebPlatform";
  v87.Buffer = L"lpacPayments";
  v88.Buffer = L"lpacClipboard";
  v89.Buffer = L"lpacIME";
  v90.Buffer = L"lpacPackageManagerOperation";
  v91.Buffer = L"lpacDeviceAccess";
  v70.Buffer = L"learningModeLogging";
  v71.Buffer = L"permissiveLearningMode";
  v73.Buffer = L"sessionImpersonation";
  v72.Buffer = L"constrainedImpersonation";
  v92.Buffer = L"isolatedWin32-volumeRootMinimal";
  v93.Buffer = L"isolatedWin32-profilesRootMinimal";
  v68.Buffer = L"isolatedWin32-promptForAccess";
  v69.Buffer = L"isolatedWin32-accessToPublisherDirectory";
  LODWORD(IdentifierAuthority) = 0;
  *(_QWORD *)&v74.Length = 2490404LL;
  *(_QWORD *)&v77.Length = 2752552LL;
  *(_QWORD *)&v78.Length = 2621478LL;
  *(_QWORD *)&v79.Length = 5242958LL;
  *(_QWORD *)&v80.Length = 1310738LL;
  *(_QWORD *)&v81.Length = 2752552LL;
  *(_QWORD *)&v82.Length = 1703960LL;
  *(_QWORD *)&v83.Length = 3014700LL;
  *(_QWORD *)&v84.Length = 2883626LL;
  *(_QWORD *)&v85.Length = 1703960LL;
  *(_QWORD *)&v86.Length = 2097182LL;
  *(_QWORD *)&v87.Length = 1703960LL;
  *(_QWORD *)&v88.Length = 1835034LL;
  *(_QWORD *)&v89.Length = 1048590LL;
  *(_QWORD *)&v90.Length = 3670070LL;
  *(_QWORD *)&v91.Length = 2228256LL;
  *(_QWORD *)&v70.Length = 2621478LL;
  *(_QWORD *)&v71.Length = 3014700LL;
  *(_QWORD *)&v73.Length = 2752552LL;
  *(_QWORD *)&v72.Length = 3276848LL;
  *(_QWORD *)&v92.Length = 4194366LL;
  *(_QWORD *)&v93.Length = 4456514LL;
  *(_QWORD *)&v68.Length = 3932218LL;
  *(_QWORD *)&v69.Length = 5374032LL;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v46) = 0;
  WORD2(v46) = 256;
  LODWORD(v47) = 0;
  WORD2(v47) = 512;
  LODWORD(v107) = 0;
  WORD2(v107) = 768;
  LODWORD(v105) = 0;
  WORD2(v105) = 1280;
  LODWORD(v108) = 0;
  WORD2(v108) = 4096;
  LODWORD(v44) = 0;
  WORD2(v44) = 3840;
  LODWORD(v106) = 0;
  WORD2(v106) = 4864;
  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v1 = *(_DWORD *)(*(_QWORD *)(v0 + 240) + 132LL);
  v2 = (v1 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF78000000310] <= 0x83400uLL;
  SepTokenSidSharingEnabled = v2;
  SepTokenCapabilitySidSharingEnabled = v2;
  SepOsLoaderTpmDriverLoaded = (v1 & 0x80) != 0;
  v3 = RtlLengthRequiredSid(1u);
  SeNullSid = (PSID)ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  SeCreatorOwnerSid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeCreatorGroupSid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeCreatorOwnerServerSid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeCreatorGroupServerSid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeWorldSid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeLocalSid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  Pool2 = (_DWORD *)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeOwnerRightsSid = Pool2;
  v62 = SeNullSid;
  if ( !SeNullSid )
    return 0;
  Sid = SeWorldSid;
  if ( !SeWorldSid )
    return 0;
  v5 = SeLocalSid;
  if ( !SeLocalSid )
    return 0;
  v6 = SeCreatorOwnerSid;
  if ( !SeCreatorOwnerSid )
    return 0;
  v7 = SeCreatorGroupSid;
  if ( !SeCreatorGroupSid )
    return 0;
  v8 = SeCreatorOwnerServerSid;
  if ( !SeCreatorOwnerServerSid )
    return 0;
  if ( !Pool2 )
    return 0;
  v9 = SeCreatorGroupServerSid;
  if ( !SeCreatorGroupServerSid )
    return 0;
  RtlInitializeSid(SeNullSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v47, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v8, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(v9, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&v107, 1u);
  *((_DWORD *)v62 + 2) = 0;
  Sid[2] = 0;
  v5[2] = 0;
  v6[2] = 0;
  v7[2] = 1;
  v8[2] = 2;
  v9[2] = 3;
  Pool2[2] = 4;
  v10 = RtlLengthRequiredSid(0);
  SeNtAuthoritySid = (PSID)ExAllocatePool2(0x120uLL, v10, 0x69536553uLL);
  SeDialupSid = ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  SeNetworkSid = ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeBatchSid = ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeInteractiveSid = (void *)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SePrincipalSelfSid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeServiceSid = (PSID)ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  SeLocalSystemSid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeAuthenticatedUsersSid = ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  SeRestrictedSid = (PSID)ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  SeAnonymousLogonSid = (PSID)ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  SeLocalServiceSid = (PSID)ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  SeNetworkServiceSid = (PSID)ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  SeIUserSid = (PSID)ExAllocatePool2(0x120uLL, v3, 0x69536553uLL);
  v11 = RtlLengthRequiredSid(2u);
  SeAliasAdminsSid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAliasUsersSid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAliasGuestsSid = ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAliasPowerUsersSid = ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAliasAccountOpsSid = ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAliasSystemOpsSid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAliasPrintOpsSid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeAliasBackupOpsSid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeUntrustedMandatorySid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeLowMandatorySid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeMediumMandatorySid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeHighMandatorySid = (PSID)ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeSystemMandatorySid = ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SePackagePrefixSid = ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeCapabilityPrefixSid = ExAllocatePool2(0x60uLL, v3, 0x69536553uLL);
  SeAllAppPackagesSid = (PSID)ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeAllRestrictedAppPackagesSid = (PSID)ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  v12 = RtlLengthRequiredSid(0xAu);
  SeLpacAppExperienceCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacComCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacCryptoServicesCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacIdentityServicesCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacInstrumentationCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacEnterprisePolicyChangeNotificationsCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacMediaCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacPnpNotificationsCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeRegistryReadCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacServicesManagementCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacSessionManagementCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacPrintingCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacWebPlatformCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacPaymentsCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacClipboardCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacImeCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacPackageManagerOperationCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeLpacDeviceAccessCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  v13 = RtlLengthRequiredSid(6u);
  Size = v13;
  SeUserModeDriversSid = (PSID)ExAllocatePool2(0x60uLL, v13, 0x69536553uLL);
  SeTrustedInstallerSid = ExAllocatePool2(0x60uLL, v13, 0x69536553uLL);
  SeProcTrustWinTcbSid = (PSID)ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeProcTrustWinSid = ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeProcTrustAuthenticodeSid = ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeProcTrustLiteAntimalwareSid = ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeProcTrustLiteWinTcbSid = ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeProcTrustLiteWinSid = ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeProcTrustLiteAppSid = ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeProcTrustNoneSid = ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeDefaultAccountAliasSid = (PSID)ExAllocatePool2(0x120uLL, v11, 0x69536553uLL);
  SeLearningModeLoggingCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SePermissiveLearningModeCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  v14 = RtlLengthRequiredSid(9u);
  SeConstrainedImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(0x120uLL, v14, 0x69536553uLL);
  SeConstrainedImpersonationCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeSessionImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(0x120uLL, v14, 0x69536553uLL);
  SeSessionImpersonationCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeAppSiloSid = (PSID)ExAllocatePool2(0x60uLL, v11, 0x69536553uLL);
  SeAppSiloVolumeRootMinimalCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeAppSiloProfilesRootMinimalCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeAppSiloPromptForAccessCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  SeAppSiloAccessToPublisherDirectoryCapabilitySid = (PSID)ExAllocatePool2(0x120uLL, v12, 0x69536553uLL);
  if ( !SeNtAuthoritySid )
    return 0;
  v107 = SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  Sida = (_DWORD *)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v61 = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v60 = SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v59 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v58 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v57 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v56 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v55 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v54 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v53 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v52 = SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v51 = SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  v50 = SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v49 = SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  v48 = (PSID)SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v47 = SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v46 = SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v15 = SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v16 = SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v17 = SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  IdentifierAuthority = (__int64)SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v63 = SeLowMandatorySid;
  if ( !SeLowMandatorySid )
    return 0;
  v64 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v65 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v66 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v67 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v62 = (PSID)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v18 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v19 = SeAllRestrictedAppPackagesSid;
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
  v20 = SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v97 = SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v98 = (PSID)SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v99 = (PSID)SeProcTrustAuthenticodeSid;
  if ( !SeProcTrustAuthenticodeSid )
    return 0;
  v101 = (PSID)SeProcTrustLiteAntimalwareSid;
  if ( !SeProcTrustLiteAntimalwareSid )
    return 0;
  v104 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v100 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v102 = (PSID)SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v96 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v94 = (PSID)SeTrustedInstallerSid;
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
  v21 = SeAppSiloSid;
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
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v105, 0);
  RtlInitializeSid((PSID)v107, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(Sida, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid((PSID)v47, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v17, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  RtlInitializeSid(v94, (PSID_IDENTIFIER_AUTHORITY)&v105, 6u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v108, 1u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v108, 1u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v108, 1u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v108, 1u);
  RtlInitializeSid(v66, (PSID_IDENTIFIER_AUTHORITY)&v108, 1u);
  RtlInitializeSid(v67, (PSID_IDENTIFIER_AUTHORITY)&v44, 1u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v44, 1u);
  RtlInitializeSid(v18, (PSID_IDENTIFIER_AUTHORITY)&v44, 2u);
  RtlInitializeSid(v19, (PSID_IDENTIFIER_AUTHORITY)&v44, 2u);
  memset_0(v20, 0, Size);
  RtlInitializeSid(v20, (PSID_IDENTIFIER_AUTHORITY)&v105, 6u);
  RtlInitializeSid(v96, (PSID_IDENTIFIER_AUTHORITY)&v106, 2u);
  RtlInitializeSid(v97, (PSID_IDENTIFIER_AUTHORITY)&v106, 2u);
  RtlInitializeSid(v98, (PSID_IDENTIFIER_AUTHORITY)&v106, 2u);
  RtlInitializeSid(v99, (PSID_IDENTIFIER_AUTHORITY)&v106, 2u);
  RtlInitializeSid(v101, (PSID_IDENTIFIER_AUTHORITY)&v106, 2u);
  RtlInitializeSid(v104, (PSID_IDENTIFIER_AUTHORITY)&v106, 2u);
  RtlInitializeSid(v100, (PSID_IDENTIFIER_AUTHORITY)&v106, 2u);
  RtlInitializeSid(v102, (PSID_IDENTIFIER_AUTHORITY)&v106, 2u);
  RtlInitializeSid(v21, (PSID_IDENTIFIER_AUTHORITY)&v44, 2u);
  v22 = v49;
  v23 = v50;
  v24 = v48;
  *(_DWORD *)(v107 + 8) = 1;
  v25 = v47;
  Sida[2] = 2;
  *((_DWORD *)v61 + 2) = 3;
  *((_DWORD *)v60 + 2) = 4;
  *((_DWORD *)v59 + 2) = 6;
  *((_DWORD *)v58 + 2) = 10;
  *((_DWORD *)v57 + 2) = 18;
  *((_DWORD *)v56 + 2) = 11;
  *((_DWORD *)v55 + 2) = 12;
  *((_DWORD *)v54 + 2) = 7;
  *((_DWORD *)v53 + 2) = 19;
  *((_DWORD *)v52 + 2) = 20;
  *((_DWORD *)v51 + 2) = 17;
  v26 = v46;
  v23[2] = 32;
  v22[2] = 32;
  v24[2] = 32;
  *(_DWORD *)(v25 + 8) = 32;
  *(_DWORD *)(v26 + 8) = 32;
  v15[2] = 32;
  v16[2] = 32;
  v17[2] = 32;
  v23[3] = 544;
  v22[3] = 545;
  v24[3] = 546;
  *(_DWORD *)(v25 + 12) = 547;
  *(_DWORD *)(v26 + 12) = 548;
  v27 = IdentifierAuthority;
  v15[3] = 549;
  v16[3] = 550;
  v17[3] = 551;
  *(_DWORD *)(v27 + 8) = 0;
  *((_DWORD *)v63 + 2) = 4096;
  *((_DWORD *)v64 + 2) = 0x2000;
  *((_DWORD *)v65 + 2) = 12288;
  *((_DWORD *)v66 + 2) = 0x4000;
  *((_DWORD *)v67 + 2) = 2;
  *((_DWORD *)v62 + 2) = 3;
  v18[2] = 2;
  v18[3] = 1;
  v19[2] = 2;
  v19[3] = 2;
  v21[2] = 3;
  v21[3] = 0x10000;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, SeLpacAppExperienceCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v76, SeConstrainedImpersonationCapabilityGroupSid, SeLpacComCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v74,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacCryptoServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v77,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacIdentityServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v78,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacInstrumentationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v79,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacEnterprisePolicyChangeNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v80, SeConstrainedImpersonationCapabilityGroupSid, SeLpacMediaCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v81,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPnpNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v82, SeConstrainedImpersonationCapabilityGroupSid, SeRegistryReadCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v83,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacServicesManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v84,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacSessionManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v85, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPrintingCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v86,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacWebPlatformCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v87, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPaymentsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v88, SeConstrainedImpersonationCapabilityGroupSid, SeLpacClipboardCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v89, SeConstrainedImpersonationCapabilityGroupSid, SeLpacImeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v90,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPackageManagerOperationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v91,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacDeviceAccessCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v92,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloVolumeRootMinimalCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v93,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloProfilesRootMinimalCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v68,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloPromptForAccessCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v69,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloAccessToPublisherDirectoryCapabilitySid) < 0 )
    return 0;
  v28 = SeDefaultAccountAliasSid;
  *((_DWORD *)SeUserModeDriversSid + 2) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v29 = SeProcTrustWinTcbSid;
  *((_DWORD *)SeProcTrustWinTcbSid + 2) = 1024;
  v29[3] = 0x2000;
  v30 = SeProcTrustWinSid;
  *(_DWORD *)(SeProcTrustWinSid + 8) = 1024;
  *(_DWORD *)(v30 + 12) = 4096;
  v31 = SeProcTrustAuthenticodeSid;
  *(_DWORD *)(SeProcTrustAuthenticodeSid + 8) = 1024;
  *(_DWORD *)(v31 + 12) = 1024;
  v32 = SeProcTrustLiteAntimalwareSid;
  *(_DWORD *)(SeProcTrustLiteAntimalwareSid + 8) = 512;
  *(_DWORD *)(v32 + 12) = 1536;
  v33 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v33 + 12) = 0x2000;
  v34 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v34 + 12) = 4096;
  v35 = SeProcTrustLiteAppSid;
  *(_DWORD *)(SeProcTrustLiteAppSid + 8) = 512;
  *(_DWORD *)(v35 + 12) = 2048;
  v36 = (_DWORD *)SeTrustedInstallerSid;
  *(_DWORD *)(SeTrustedInstallerSid + 8) = 80;
  v36[3] = 956008885;
  v36[4] = -876444647;
  v36[5] = 1831038044;
  v36[6] = 1853292631;
  v36[7] = -2023488832;
  RtlInitializeSid(v28, (PSID_IDENTIFIER_AUTHORITY)&v105, 2u);
  v37 = SeLearningModeLoggingCapabilitySid;
  v38 = SeConstrainedImpersonationCapabilityGroupSid;
  v28[2] = 32;
  v28[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v70, v38, v37) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v71,
         SeConstrainedImpersonationCapabilityGroupSid,
         SePermissiveLearningModeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v72,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeConstrainedImpersonationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v73,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
    return 0;
  SepInitSystemDacls();
  v106 = 3LL;
  SeCreateTokenPrivilege = (LUID)2LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  v107 = 4LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  v108 = 5LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v47 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v46 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v44 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v48 = (PSID)10;
  SeLoadDriverPrivilege = (LUID)10LL;
  v49 = (PSID)15;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v50 = (PSID)14;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v51 = (PSID)11;
  SeSystemProfilePrivilege = (LUID)11LL;
  v52 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v53 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v54 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v55 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v56 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v57 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v58 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v105 = 2LL;
  v59 = (PSID)21;
  v60 = (PSID)22;
  v61 = (PSID)23;
  SeAuditPrivilege = 21LL;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_140FD91B8 = (__int64)SeNullSid;
  qword_140FD91C0 = (__int64)SeWorldSid;
  qword_140FD91C8 = (__int64)SeLocalSid;
  qword_140FD91D0 = (__int64)SeCreatorOwnerSid;
  qword_140FD91D8 = (__int64)SeCreatorGroupSid;
  qword_140FD9300 = (__int64)SeOwnerRightsSid;
  qword_140FD91E0 = (__int64)SeNtAuthoritySid;
  qword_140FD91E8 = SeDialupSid;
  qword_140FD91F0 = SeNetworkSid;
  qword_140FD91F8 = SeBatchSid;
  qword_140FD9200 = (__int64)SeInteractiveSid;
  qword_140FD9208 = (__int64)SeLocalSystemSid;
  qword_140FD9250 = SeAuthenticatedUsersSid;
  qword_140FD9258 = (__int64)SeRestrictedSid;
  qword_140FD9260 = (__int64)SeAnonymousLogonSid;
  qword_140FD9280 = (__int64)SeLocalServiceSid;
  qword_140FD9288 = (__int64)SeNetworkServiceSid;
  qword_140FD92D0 = (__int64)SeIUserSid;
  qword_140FD9210 = (__int64)SeAliasAdminsSid;
  qword_140FD9218 = (__int64)SeAliasUsersSid;
  qword_140FD9220 = SeAliasGuestsSid;
  qword_140FD9228 = SeAliasPowerUsersSid;
  qword_140FD9230 = SeAliasAccountOpsSid;
  qword_140FD9238 = (__int64)SeAliasSystemOpsSid;
  qword_140FD9240 = (__int64)SeAliasPrintOpsSid;
  qword_140FD9248 = (__int64)SeAliasBackupOpsSid;
  qword_140FD92D8 = (__int64)SeUntrustedMandatorySid;
  qword_140FD92E0 = (__int64)SeLowMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = 32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_140FD92E8 = (__int64)SeMediumMandatorySid;
  qword_140FD92F0 = (__int64)SeHighMandatorySid;
  qword_140FD92F8 = SeSystemMandatorySid;
  qword_140FD9308 = (__int64)SeAllAppPackagesSid;
  qword_140FD9310 = (__int64)SeUserModeDriversSid;
  qword_140FD9318 = (__int64)SeProcTrustWinTcbSid;
  qword_140FD9320 = SeTrustedInstallerSid;
  qword_140FD9330 = (__int64)SeAppSiloSid;
  dword_140FD9104 = 0;
  dword_140FD910C = 0;
  dword_140FD9114 = 0;
  dword_140FD911C = 0;
  dword_140FD9124 = 0;
  dword_140FD912C = 0;
  dword_140FD9134 = 0;
  dword_140FD913C = 0;
  dword_140FD9144 = 0;
  dword_140FD914C = 0;
  dword_140FD9154 = 0;
  dword_140FD915C = 0;
  dword_140FD9164 = 0;
  dword_140FD916C = 0;
  dword_140FD9174 = 0;
  dword_140FD917C = 0;
  SepExports = 2;
  dword_140FD9108 = 3;
  dword_140FD9110 = 4;
  dword_140FD9118 = 5;
  dword_140FD9120 = 6;
  dword_140FD9128 = 7;
  dword_140FD9130 = 8;
  dword_140FD9138 = 9;
  dword_140FD9140 = 10;
  dword_140FD9148 = 15;
  dword_140FD9150 = 14;
  dword_140FD9158 = 11;
  dword_140FD9160 = 12;
  dword_140FD9168 = 13;
  dword_140FD9170 = 16;
  dword_140FD9178 = 17;
  dword_140FD9180 = 18;
  dword_140FD9184 = 0;
  dword_140FD918C = 0;
  dword_140FD932C = 0;
  dword_140FD9194 = 0;
  qword_140FD9338 = (__int64)SeAppSiloVolumeRootMinimalCapabilitySid;
  dword_140FD919C = 0;
  qword_140FD9340 = (__int64)SeAppSiloProfilesRootMinimalCapabilitySid;
  qword_140FD9348 = (__int64)SeAppSiloPromptForAccessCapabilitySid;
  dword_140FD91A4 = 0;
  qword_140FD9350 = (__int64)SeAppSiloAccessToPublisherDirectoryCapabilitySid;
  dword_140FD929C = 0;
  dword_140FD92CC = 0;
  v39 = (char *)&unk_140F0E998;
  SeExports = (PSE_EXPORTS)&SepExports;
  v40 = 5LL;
  dword_140FD91AC = 0;
  dword_140FD9188 = 19;
  dword_140FD9190 = 20;
  dword_140FD9198 = 21;
  dword_140FD91A0 = 22;
  dword_140FD91A8 = 23;
  dword_140FD91B0 = 24;
  dword_140FD91B4 = 0;
  dword_140FD9268 = 25;
  dword_140FD926C = 0;
  dword_140FD9270 = 26;
  dword_140FD9274 = 0;
  dword_140FD9278 = 27;
  dword_140FD927C = 0;
  dword_140FD9290 = 28;
  dword_140FD9294 = 0;
  dword_140FD9298 = 29;
  dword_140FD92A0 = 30;
  dword_140FD92A4 = 0;
  dword_140FD92A8 = 31;
  dword_140FD92AC = 0;
  dword_140FD92B0 = 32;
  dword_140FD92B4 = 0;
  dword_140FD92B8 = 33;
  dword_140FD92BC = 0;
  dword_140FD92C0 = 34;
  dword_140FD92C4 = 0;
  dword_140FD92C8 = 35;
  dword_140FD9328 = 36;
  do
  {
    v39[8] = 0;
    *(_QWORD *)v39 = 0LL;
    *((_QWORD *)v39 - 3) = 0LL;
    v39 += 40;
    --v40;
  }
  while ( v40 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
