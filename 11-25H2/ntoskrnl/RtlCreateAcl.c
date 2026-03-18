/*
 * XREFs of RtlCreateAcl @ 0x140968260
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14036B568 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403D20 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlCheckTokenMembershipEx @ 0x140472DB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14048E220 (RtlCheckTokenCapability.c)
 *     SepInitProcessAuditSd @ 0x1405FBBC4 (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x1406400B4 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140649340 (ExpPlRunOnceInit.c)
 *     DbgkpCreateNotificationEvent @ 0x1406FAEA0 (DbgkpCreateNotificationEvent.c)
 *     PiAuCheckTokenMembership @ 0x14071BF68 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14071C110 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14071C358 (PiAuGetStateDirectorySecurityObject.c)
 *     ObCreateKernelObjectsSD @ 0x140736EA8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407379BC (ObpGetDosDevicesProtection.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14073833C (ObpCreateDefaultObjectTypeSD.c)
 *     PfpCreateEventInternal @ 0x14073C7D0 (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407461D8 (PopCreateHiberFileSecurityDescriptor.c)
 *     PspSessionObjectCreate @ 0x14076C22C (PspSessionObjectCreate.c)
 *     RtlpComputeMergedAcl2 @ 0x140771F64 (RtlpComputeMergedAcl2.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140774B54 (RtlpSysVolCreateSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14078BDF4 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407B1650 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407B3370 (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407CC828 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407CD7FC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407CDA54 (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     MiCreateMemoryEventSD @ 0x1407EFD80 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408107AC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x140813FC4 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408140A8 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14081B360 (ObpGetSilosRootDirectory.c)
 *     RtlpCreateServerAcl @ 0x14091B940 (RtlpCreateServerAcl.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14094D4D0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x140967DB0 (PiUEventInitClientRegistrationContext.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409680C8 (BiCreateKeySecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140969360 (PspAllocateAndQueryNotificationChannel.c)
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140999270 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14099EC00 (IopCreateSecurityDescriptorPerType.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A6AB54 (_CmGetRegKeySecurityDescriptor.c)
 *     PopCreateNotificationName @ 0x140A73BA8 (PopCreateNotificationName.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140A77500 (_PnpGetPropertiesSecurityDescriptor.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140B73728 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140C0B414 (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C132D0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C13470 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C13C4C (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C241A4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C24C6C (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140C25CF8 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140C28B3C (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C28DC0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C29020 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140C2BA90 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140C326DC (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
