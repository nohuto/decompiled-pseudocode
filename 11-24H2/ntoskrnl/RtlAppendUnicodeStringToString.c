/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x140404080
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140403F10 (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x1405C7DDC (KsepEvntLogShimsApplied.c)
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065930C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069810C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x14069A4D4 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14069AA84 (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 *     pIoQueryDeviceDescription @ 0x1407138CC (pIoQueryDeviceDescription.c)
 *     IopGetRootDeviceId @ 0x14071B2E4 (IopGetRootDeviceId.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140721900 (PnpQueryRemoveLockedDeviceNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140733A20 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140735ED4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1407371F4 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140773518 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140783008 (RtlpConstructCrossVmObjectPath.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E696C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6BF0 (CmpDeleteCorruptedLogfile.c)
 *     MiFormDllRegistryPath @ 0x1407E7A18 (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x140806D04 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildMachinePath @ 0x140808F7C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140809060 (AslRegistryBuildUserPath.c)
 *     AdtpBuildSidListString @ 0x140811508 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x140811740 (AdtpAppendString.c)
 *     AdtpBuildReplacementString @ 0x14081194C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408119E8 (AdtpBuildUserAccountControlString.c)
 *     ObGetSiloRootDirectoryPath @ 0x14082B744 (ObGetSiloRootDirectoryPath.c)
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 *     CmRealKCBToVirtualPath @ 0x1408E1EE8 (CmRealKCBToVirtualPath.c)
 *     VrpTranslatePath @ 0x140929830 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x14092ADC0 (VrpBuildKeyPath.c)
 *     CmpNameFromAttributes @ 0x14092F7A8 (CmpNameFromAttributes.c)
 *     CmpGetCompleteFileName @ 0x140932664 (CmpGetCompleteFileName.c)
 *     CmpQueryNameString @ 0x14096C1C4 (CmpQueryNameString.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     IopBuildFullDriverPath @ 0x1409B78C8 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B81B0 (IopQueryRegistryKeySystemPath.c)
 *     IoQueryDeviceDescription @ 0x1409CDEA0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     CmVirtualKCBToRealPath @ 0x140A57538 (CmVirtualKCBToRealPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A5B55C (RtlpGetPolicyValueForSystemCapability.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 *     IopBootLog @ 0x140A728F8 (IopBootLog.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A8835C (_SysCtxRegOpenCurrentUserKey.c)
 *     SepAddTokenOriginClaim @ 0x140A94630 (SepAddTokenOriginClaim.c)
 *     PnpLogVetoInformation @ 0x140A9A584 (PnpLogVetoInformation.c)
 *     IopSafebootDriverLoad @ 0x140AB4A18 (IopSafebootDriverLoad.c)
 *     PiDrvDbMountNode @ 0x140AB7184 (PiDrvDbMountNode.c)
 *     AdtpBuildStringListString @ 0x140AB7404 (AdtpBuildStringListString.c)
 *     MiGenerateSystemImageNames @ 0x140ABA72C (MiGenerateSystemImageNames.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpStartCLFSLog @ 0x140AE7708 (CmpStartCLFSLog.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C257A0 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140C49330 (CmpInitializeDriverStores.c)
 *     CmpAddDriverToList @ 0x140C4CE04 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C6534C (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
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
