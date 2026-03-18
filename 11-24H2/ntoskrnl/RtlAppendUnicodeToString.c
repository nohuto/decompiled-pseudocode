/*
 * XREFs of RtlAppendUnicodeToString @ 0x14040BAE0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14040B494 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14040BA30 (AdtpFormatPrefix.c)
 *     KsepEvntLogShimsApplied @ 0x1405CA6B4 (KsepEvntLogShimsApplied.c)
 *     LdrpGetResourceFileName @ 0x1405E7918 (LdrpGetResourceFileName.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14065ABEC (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14069708C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BcpDisplayErrorInformationModernized @ 0x140699454 (BcpDisplayErrorInformationModernized.c)
 *     BcpDisplayProgressModernized @ 0x140699A04 (BcpDisplayProgressModernized.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069A6B0 (BgpFwDisplayBugCheckScreenModernized.c)
 *     pIoQueryDeviceDescription @ 0x140715D3C (pIoQueryDeviceDescription.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     IopGetRootDeviceId @ 0x14071D754 (IopGetRootDeviceId.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbCreateNode @ 0x1407368AC (PiDrvDbCreateNode.c)
 *     PiDrvDbSetupNodeHive @ 0x140739634 (PiDrvDbSetupNodeHive.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140763580 (PopBcdGetApplicationPathFromResumeObject.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1407830D8 (RtlpConstructCrossVmObjectPath.c)
 *     IoWMISuggestInstanceName @ 0x1407A3D50 (IoWMISuggestInstanceName.c)
 *     ApiSetpConstructPathToExtension @ 0x1407C9910 (ApiSetpConstructPathToExtension.c)
 *     CmpBuildMachineHiveMountPoint @ 0x1407C9F20 (CmpBuildMachineHiveMountPoint.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveVolatile @ 0x1407CE610 (CmpLoadHiveVolatile.c)
 *     CmpFlushBackupHive @ 0x1407DC2B8 (CmpFlushBackupHive.c)
 *     MiFormDllRegistryPath @ 0x1407E7448 (MiFormDllRegistryPath.c)
 *     SdbResolveDatabaseEx @ 0x1408065C4 (SdbResolveDatabaseEx.c)
 *     AslRegistryBuildMachinePath @ 0x14080883C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140808920 (AslRegistryBuildUserPath.c)
 *     AslpProcessMatchRegNode @ 0x14080B678 (AslpProcessMatchRegNode.c)
 *     AdtpBuildSidListString @ 0x140810DC8 (AdtpBuildSidListString.c)
 *     AdtpBuildReplacementString @ 0x14081120C (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408112A8 (AdtpBuildUserAccountControlString.c)
 *     BiResolveLocateDevice @ 0x14081243C (BiResolveLocateDevice.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140865040 (RtlFormatCurrentUserKeyPath.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1408B5640 (IopBuildGlobalSymbolicLinkString.c)
 *     CmpGetVirtualizationID @ 0x140909F58 (CmpGetVirtualizationID.c)
 *     CmRealKCBToVirtualPath @ 0x14090A7C8 (CmRealKCBToVirtualPath.c)
 *     VrpTranslatePath @ 0x1409276F0 (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x140928C80 (VrpBuildKeyPath.c)
 *     CmpQueryHiveRedirectionFileList @ 0x14092B6FC (CmpQueryHiveRedirectionFileList.c)
 *     CmpGetCompleteFileName @ 0x140930524 (CmpGetCompleteFileName.c)
 *     pIoQueryBusDescription @ 0x14099C1E4 (pIoQueryBusDescription.c)
 *     IopSymlinkRememberJunction @ 0x14099D708 (IopSymlinkRememberJunction.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409CA314 (IopGetDriverNameFromKeyNode.c)
 *     RtlpGetRegistryHandle @ 0x1409CC85C (RtlpGetRegistryHandle.c)
 *     MiCreateSectionForDriver @ 0x140A1882C (MiCreateSectionForDriver.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A62358 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildAccessesString @ 0x140A729FC (AdtpBuildAccessesString.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     PnpBuildCmResourceList @ 0x140A936D4 (PnpBuildCmResourceList.c)
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 *     IopSafebootDriverLoad @ 0x140AB9958 (IopSafebootDriverLoad.c)
 *     CmpMachineHiveListInitialize @ 0x140ABBE30 (CmpMachineHiveListInitialize.c)
 *     PiDrvDbMountNode @ 0x140ABC164 (PiDrvDbMountNode.c)
 *     AdtpBuildStringListString @ 0x140ABC3E4 (AdtpBuildStringListString.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C23770 (PiLastGoodRevertLastKnownDirectory.c)
 *     CmpInitializeDriverStores @ 0x140C471E0 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x140C47560 (CmpInitializePreloadedHive.c)
 *     CmpAddDriverToList @ 0x140C4AC68 (CmpAddDriverToList.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140C631D0 (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     wcslen @ 0x1404FFED0 (wcslen.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
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
