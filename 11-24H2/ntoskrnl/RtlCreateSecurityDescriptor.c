/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x1409E16D0
 * Callers:
 *     RtlCheckTokenCapability @ 0x1403B5260 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x1403B5770 (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403EB390 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404C9800 (SepBuildCapeSecurityDescriptor.c)
 *     SepMandatorySubProcessToken @ 0x1404EC31C (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1404EC6F0 (SepVerifyDesktopAppxImage.c)
 *     SepInitProcessAuditSd @ 0x140605560 (SepInitProcessAuditSd.c)
 *     WdipAccessCheck @ 0x14064A634 (WdipAccessCheck.c)
 *     ExpPlRunOnceInit @ 0x140653940 (ExpPlRunOnceInit.c)
 *     DbgkpCreateNotificationEvent @ 0x140704940 (DbgkpCreateNotificationEvent.c)
 *     PiAuCheckTokenMembership @ 0x140725A78 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140725C20 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140725E68 (PiAuGetStateDirectorySecurityObject.c)
 *     ObCreateKernelObjectsSD @ 0x140740DF8 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14074190C (ObpGetDosDevicesProtection.c)
 *     PfpCreateEventInternal @ 0x140746AD0 (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407505BC (PopCreateHiberFileSecurityDescriptor.c)
 *     PspSessionObjectCreate @ 0x14077BC7C (PspSessionObjectCreate.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140783D34 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x140783EA8 (RtlpSysVolTakeOwnership.c)
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14079B2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407C1270 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DC538 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DD50C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MiCreateMemoryEventSD @ 0x140800380 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x140820DEC (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14082452C (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140824610 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14082B8D0 (ObpGetSilosRootDirectory.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1408ABD7C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1409CEE40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A40460 (ObpVerifyAccessToBoundaryEntry.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140A66A24 (_CmGetRegKeySecurityDescriptor.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140B85708 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140C1E628 (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140C201A8 (IopApplySystemPartitionProt.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140C26390 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140C26530 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C26D0C (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PopUmpoInitializeChannel @ 0x140C34578 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140C375B0 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140C38078 (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140C39108 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140C3BF64 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140C3C1E8 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140C3C448 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140C3EEC0 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140C459EC (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  result = 0;
  *(_OWORD *)SecurityDescriptor = 0LL;
  *((_OWORD *)SecurityDescriptor + 1) = 0LL;
  *((_QWORD *)SecurityDescriptor + 4) = 0LL;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
