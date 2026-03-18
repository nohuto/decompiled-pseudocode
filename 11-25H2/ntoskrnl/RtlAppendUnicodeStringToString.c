/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140404430
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403D20 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1404042BC (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x1405C6094 (KsepEvntLogShimsApplied.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14064EC64 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14068BD3C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x14068E104 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14068E6B4 (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14068F360 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IopValidateJunctionTarget @ 0x140707338 (IopValidateJunctionTarget.c)
 *     pIoQueryDeviceDescription @ 0x140709C3C (pIoQueryDeviceDescription.c)
 *     IopGetRootDeviceId @ 0x140711654 (IopGetRootDeviceId.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140717C70 (PnpQueryRemoveLockedDeviceNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140729860 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14072BD14 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14072D034 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14072D3A4 (PiDrvDbSetupNodeHive.c)
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140763928 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140773E28 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407D6518 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407D679C (CmpDeleteCorruptedLogfile.c)
 *     MiFormDllRegistryPath @ 0x1407D7590 (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x1407F6A54 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildMachinePath @ 0x1407F8CCC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407F8DB0 (AslRegistryBuildUserPath.c)
 *     AdtpBuildSidListString @ 0x140801258 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x140801490 (AdtpAppendString.c)
 *     AdtpBuildReplacementString @ 0x14080169C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140801738 (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     CmRealKCBToVirtualPath @ 0x14083EA38 (CmRealKCBToVirtualPath.c)
 *     IopSymlinkRememberJunction @ 0x1408625D4 (IopSymlinkRememberJunction.c)
 *     CmpGetCompleteFileName @ 0x14090FF8C (CmpGetCompleteFileName.c)
 *     CmpNameFromAttributes @ 0x140914048 (CmpNameFromAttributes.c)
 *     VrpTranslatePath @ 0x140947B60 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1409490E8 (VrpBuildKeyPath.c)
 *     IoQueryDeviceDescription @ 0x14094C530 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14094CFE4 (pIoQueryBusDescription.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14095AF24 (_SysCtxRegOpenCurrentUserKey.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B01F8 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x1409B0AA8 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B1F94 (IopGetDriverNameFromKeyNode.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 *     CmpQueryNameString @ 0x1409FA3D4 (CmpQueryNameString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A09F38 (RtlpGetPolicyValueForSystemCapability.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     MiCreateSectionForDriver @ 0x140A1340C (MiCreateSectionForDriver.c)
 *     CmVirtualKCBToRealPath @ 0x140A5D600 (CmVirtualKCBToRealPath.c)
 *     AdtpBuildAccessesString @ 0x140A70050 (AdtpBuildAccessesString.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 *     SepAddTokenOriginClaim @ 0x140A93A94 (SepAddTokenOriginClaim.c)
 *     PnpLogVetoInformation @ 0x140A99FDC (PnpLogVetoInformation.c)
 *     IopSafebootDriverLoad @ 0x140AB556C (IopSafebootDriverLoad.c)
 *     PiDrvDbMountNode @ 0x140AB7FE4 (PiDrvDbMountNode.c)
 *     AdtpBuildStringListString @ 0x140AB8264 (AdtpBuildStringListString.c)
 *     MiGenerateSystemImageNames @ 0x140ABB4B0 (MiGenerateSystemImageNames.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 *     CmpStartCLFSLog @ 0x140AD5500 (CmpStartCLFSLog.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C126E0 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140C35F30 (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140C3996C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C51EBC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
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
