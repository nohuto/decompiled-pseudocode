/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x14040BBA0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14040B494 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14040BA30 (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x1405CA6B4 (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065ABEC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069708C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x140699454 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x140699A04 (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069A6B0 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IopValidateJunctionTarget @ 0x140713438 (IopValidateJunctionTarget.c)
 *     pIoQueryDeviceDescription @ 0x140715D3C (pIoQueryDeviceDescription.c)
 *     IopGetRootDeviceId @ 0x14071D754 (IopGetRootDeviceId.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140723D70 (PnpQueryRemoveLockedDeviceNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140737FA4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407392C4 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x140739634 (PiDrvDbSetupNodeHive.c)
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     PopValidateWinresume @ 0x140752EA8 (PopValidateWinresume.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407732F8 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1407830D8 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E639C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6620 (CmpDeleteCorruptedLogfile.c)
 *     MiFormDllRegistryPath @ 0x1407E7448 (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x1408065C4 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildMachinePath @ 0x14080883C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140808920 (AslRegistryBuildUserPath.c)
 *     AdtpBuildSidListString @ 0x140810DC8 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x140811000 (AdtpAppendString.c)
 *     AdtpBuildReplacementString @ 0x14081120C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408112A8 (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082AF14 (ObGetSiloRootDirectoryPath.c)
 *     CmRealKCBToVirtualPath @ 0x14090A7C8 (CmRealKCBToVirtualPath.c)
 *     VrpTranslatePath @ 0x1409276F0 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x140928C80 (VrpBuildKeyPath.c)
 *     CmpNameFromAttributes @ 0x14092D668 (CmpNameFromAttributes.c)
 *     CmpGetCompleteFileName @ 0x140930524 (CmpGetCompleteFileName.c)
 *     CmpQueryNameString @ 0x1409839B4 (CmpQueryNameString.c)
 *     IoQueryDeviceDescription @ 0x14099B730 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14099C1E4 (pIoQueryBusDescription.c)
 *     IopSymlinkRememberJunction @ 0x14099D708 (IopSymlinkRememberJunction.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409C8568 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x1409C8E18 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409CA314 (IopGetDriverNameFromKeyNode.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiCreateSectionForDriver @ 0x140A1882C (MiCreateSectionForDriver.c)
 *     CmVirtualKCBToRealPath @ 0x140A5F3C0 (CmVirtualKCBToRealPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A62C5C (RtlpGetPolicyValueForSystemCapability.c)
 *     AdtpBuildAccessesString @ 0x140A729FC (AdtpBuildAccessesString.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     IopBootLog @ 0x140A785F8 (IopBootLog.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8BE6C (_SysCtxRegOpenCurrentUserKey.c)
 *     SepAddTokenOriginClaim @ 0x140A97DE0 (SepAddTokenOriginClaim.c)
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 *     IopSafebootDriverLoad @ 0x140AB9958 (IopSafebootDriverLoad.c)
 *     PiDrvDbMountNode @ 0x140ABC164 (PiDrvDbMountNode.c)
 *     AdtpBuildStringListString @ 0x140ABC3E4 (AdtpBuildStringListString.c)
 *     MiGenerateSystemImageNames @ 0x140ABF64C (MiGenerateSystemImageNames.c)
 *     CmpInitCmRM @ 0x140AE4D94 (CmpInitCmRM.c)
 *     CmpStartCLFSLog @ 0x140AE5E28 (CmpStartCLFSLog.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C23770 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140C471E0 (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140C4AC68 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C631D0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeStringToString(PUNICODE_STRING Destination, PCUNICODE_STRING Source)
{
  unsigned int Length; // esi
  wchar_t *v4; // r14

  Length = Source->Length;
  if ( !(_WORD)Length )
    return 0;
  if ( Destination->Length + Length <= Destination->MaximumLength )
  {
    v4 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
    memmove(v4, Source->Buffer, Source->Length);
    Destination->Length += Length;
    if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
      v4[(unsigned __int64)Length >> 1] = 0;
    return 0;
  }
  return -1073741789;
}
