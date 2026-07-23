/*
 * XREFs of RtlAppendUnicodeToString @ 0x140403FC0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140403F10 (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x1405C7DDC (KsepEvntLogShimsApplied.c)
 *     LdrpGetResourceFileName @ 0x1405E4F08 (LdrpGetResourceFileName.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065930C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069810C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x14069A4D4 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x14069AA84 (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 *     pIoQueryDeviceDescription @ 0x1407138CC (pIoQueryDeviceDescription.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x14071B2E4 (IopGetRootDeviceId.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140733A20 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbCreateNode @ 0x1407347DC (PiDrvDbCreateNode.c)
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140762F44 (PopBcdGetApplicationPathFromResumeObject.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407813F0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140783008 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1407A3E60 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x1407C9E00 (ApiSetpConstructPathToExtension.c)
 *     CmpBuildMachineHiveMountPoint @ 0x1407CA410 (CmpBuildMachineHiveMountPoint.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpFlushBackupHive @ 0x1407DC808 (CmpFlushBackupHive.c)
 *     MiFormDllRegistryPath @ 0x1407E7A18 (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x140806D04 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildMachinePath @ 0x140808F7C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140809060 (AslRegistryBuildUserPath.c)
 *     AslpProcessMatchRegNode @ 0x14080BDB8 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140811508 (AdtpBuildSidListString.c)
 *     AdtpBuildReplacementString @ 0x14081194C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408119E8 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x140812B7C (BiResolveLocateDevice.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140869650 (RtlFormatCurrentUserKeyPath.c)
 *     IopSymlinkRememberJunction @ 0x1408ACA10 (IopSymlinkRememberJunction.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1408B2F30 (IopBuildGlobalSymbolicLinkString.c)
 *     CmpGetVirtualizationID @ 0x1408E1674 (CmpGetVirtualizationID.c)
 *     CmRealKCBToVirtualPath @ 0x1408E1EE8 (CmRealKCBToVirtualPath.c)
 *     VrpTranslatePath @ 0x140929830 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x14092ADC0 (VrpBuildKeyPath.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14092D83C (CmpQueryHiveRedirectionFileList.c)
 *     CmpGetCompleteFileName @ 0x140932664 (CmpGetCompleteFileName.c)
 *     RtlpGetRegistryHandle @ 0x1409B52DC (RtlpGetRegistryHandle.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     pIoQueryBusDescription @ 0x1409CE954 (pIoQueryBusDescription.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A5AC58 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 *     PnpBuildCmResourceList @ 0x140A8FE84 (PnpBuildCmResourceList.c)
 *     PnpLogVetoInformation @ 0x140A9A584 (PnpLogVetoInformation.c)
 *     IopSafebootDriverLoad @ 0x140AB4A18 (IopSafebootDriverLoad.c)
 *     CmpMachineHiveListInitialize @ 0x140AB6E50 (CmpMachineHiveListInitialize.c)
 *     PiDrvDbMountNode @ 0x140AB7184 (PiDrvDbMountNode.c)
 *     AdtpBuildStringListString @ 0x140AB7404 (AdtpBuildStringListString.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C257A0 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140C49330 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140C496B0 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140C4CE04 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C6534C (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
