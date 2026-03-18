/*
 * XREFs of RtlAppendUnicodeToString @ 0x140404370
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403D20 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1404042BC (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x1405C6094 (KsepEvntLogShimsApplied.c)
 *     LdrpGetResourceFileName @ 0x1405DB868 (LdrpGetResourceFileName.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14064EC64 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14068BD3C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x14068E104 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14068E6B4 (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14068F360 (BgpFwDisplayBugCheckScreenModernized.c)
 *     pIoQueryDeviceDescription @ 0x140709C3C (pIoQueryDeviceDescription.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x140711654 (IopGetRootDeviceId.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140729860 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbCreateNode @ 0x14072A61C (PiDrvDbCreateNode.c)
 *     PiDrvDbSetupNodeHive @ 0x14072D3A4 (PiDrvDbSetupNodeHive.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140753AC0 (PopBcdGetApplicationPathFromResumeObject.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140773E28 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x140794980 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x1407BA170 (ApiSetpConstructPathToExtension.c)
 *     CmpBuildMachineHiveMountPoint @ 0x1407BA720 (CmpBuildMachineHiveMountPoint.c)
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveVolatile @ 0x1407BEDF8 (CmpLoadHiveVolatile.c)
 *     CmpFlushBackupHive @ 0x1407CCAF8 (CmpFlushBackupHive.c)
 *     MiFormDllRegistryPath @ 0x1407D7590 (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x1407F6A54 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildMachinePath @ 0x1407F8CCC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407F8DB0 (AslRegistryBuildUserPath.c)
 *     AslpProcessMatchRegNode @ 0x1407FBB08 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140801258 (AdtpBuildSidListString.c)
 *     AdtpBuildReplacementString @ 0x14080169C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140801738 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x1408028C4 (BiResolveLocateDevice.c)
 *     CmpGetVirtualizationID @ 0x14083E1C4 (CmpGetVirtualizationID.c)
 *     CmRealKCBToVirtualPath @ 0x14083EA38 (CmRealKCBToVirtualPath.c)
 *     IopSymlinkRememberJunction @ 0x1408625D4 (IopSymlinkRememberJunction.c)
 *     CmpGetCompleteFileName @ 0x14090FF8C (CmpGetCompleteFileName.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14091175C (CmpQueryHiveRedirectionFileList.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140916F10 (RtlFormatCurrentUserKeyPath.c)
 *     VrpTranslatePath @ 0x140947B60 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1409490E8 (VrpBuildKeyPath.c)
 *     pIoQueryBusDescription @ 0x14094CFE4 (pIoQueryBusDescription.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409690E0 (IopBuildGlobalSymbolicLinkString.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B1F94 (IopGetDriverNameFromKeyNode.c)
 *     RtlpGetRegistryHandle @ 0x1409B44DC (RtlpGetRegistryHandle.c)
 *     MiCreateSectionForDriver @ 0x140A1340C (MiCreateSectionForDriver.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A61294 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildAccessesString @ 0x140A70050 (AdtpBuildAccessesString.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 *     PnpBuildCmResourceList @ 0x140A8EBE4 (PnpBuildCmResourceList.c)
 *     PnpLogVetoInformation @ 0x140A99FDC (PnpLogVetoInformation.c)
 *     IopSafebootDriverLoad @ 0x140AB556C (IopSafebootDriverLoad.c)
 *     CmpMachineHiveListInitialize @ 0x140AB7CF0 (CmpMachineHiveListInitialize.c)
 *     PiDrvDbMountNode @ 0x140AB7FE4 (PiDrvDbMountNode.c)
 *     AdtpBuildStringListString @ 0x140AB8264 (AdtpBuildStringListString.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C126E0 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140C35F30 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140C362B0 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140C3996C (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C51EBC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  size_t v4; // rax
  unsigned int v5; // ebp
  wchar_t *v6; // r14

  if ( !Source )
    return 0;
  v4 = wcslen(Source);
  if ( v4 <= 0x7FFE )
  {
    v5 = (unsigned __int16)(2 * v4);
    if ( Destination->Length + v5 <= Destination->MaximumLength )
    {
      v6 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v6, Source, (unsigned __int16)(2 * v4));
      Destination->Length += v5;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v6[(unsigned __int64)v5 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
