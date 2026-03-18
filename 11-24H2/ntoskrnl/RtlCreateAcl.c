/*
 * XREFs of RtlCreateAcl @ 0x14085CAA0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140363E20 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140364418 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14040B494 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlCheckTokenMembershipEx @ 0x140471840 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048DC70 (RtlCheckTokenCapability.c)
 *     SepInitProcessAuditSd @ 0x140607F04 (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x14064C074 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140655240 (ExpPlRunOnceInit.c)
 *     DbgkpCreateNotificationEvent @ 0x140706D80 (DbgkpCreateNotificationEvent.c)
 *     PiAuCheckTokenMembership @ 0x140727EE8 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140728090 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407282D8 (PiAuGetStateDirectorySecurityObject.c)
 *     ObCreateKernelObjectsSD @ 0x140742EC8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407439DC (ObpGetDosDevicesProtection.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14074435C (ObpCreateDefaultObjectTypeSD.c)
 *     PfpCreateEventInternal @ 0x1407487E0 (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075229C (PopCreateHiberFileSecurityDescriptor.c)
 *     PspSessionObjectCreate @ 0x14077BDCC (PspSessionObjectCreate.c)
 *     RtlpComputeMergedAcl2 @ 0x1407811B4 (RtlpComputeMergedAcl2.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140783E04 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B1BC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C0E20 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C187C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DBFE8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DCFBC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MiCreateMemoryEventSD @ 0x1407FFC40 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408206AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x140823DEC (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140823ED0 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14082B0A0 (ObpGetSilosRootDirectory.c)
 *     RtlpCreateServerAcl @ 0x14085A9B8 (RtlpCreateServerAcl.c)
 *     PiUEventInitClientRegistrationContext @ 0x14085C5EC (PiUEventInitClientRegistrationContext.c)
 *     BiCreateKeySecurityDescriptor @ 0x14085C904 (BiCreateKeySecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14099C6D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1409A3AF0 (IopCreateSecurityDescriptorPerType.c)
 *     PopCreateNotificationName @ 0x1409BA188 (PopCreateNotificationName.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A49740 (ObpVerifyAccessToBoundaryEntry.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6D364 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A79378 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140B83708 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140C1C5E8 (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C24360 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C24500 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C24CDC (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PopUmpoInitializeChannel @ 0x140C32438 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140C34404 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C35470 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C35F38 (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140C36FC8 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140C39E0C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C3A090 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C3A2F0 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140C3CD70 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140C43A94 (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

NTSTATUS __stdcall RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  __int16 v3; // bx
  UCHAR v4; // si
  NTSTATUS result; // eax

  v3 = AclLength;
  v4 = AclRevision;
  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  memset_0(Acl, 0, AclLength);
  Acl->AclRevision = v4;
  result = 0;
  Acl->Sbz1 = 0;
  *(_DWORD *)&Acl->AceCount = 0;
  Acl->AclSize = v3 & 0xFFFC;
  return result;
}
