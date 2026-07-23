/*
 * XREFs of _wcsicmp @ 0x1404FBC70
 * Callers:
 *     LdrRscIsTypeExist @ 0x1402DC264 (LdrRscIsTypeExist.c)
 *     VfUpdateWhitelist @ 0x1403E5208 (VfUpdateWhitelist.c)
 *     VfAssignRuleClassIdToClassDriver @ 0x1403E5294 (VfAssignRuleClassIdToClassDriver.c)
 *     LdrpResSearchResourceMappedFile @ 0x14044EAD4 (LdrpResSearchResourceMappedFile.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1404961FC (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x140496D24 (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405A3BF8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1405E5304 (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1406A31C0 (RtlpMuiRegAddAlternateCodePage.c)
 *     BiIsValidDiskDevice @ 0x1406F7734 (BiIsValidDiskDevice.c)
 *     ArbShareDriverExclusive @ 0x140703FDC (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x140720AD4 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140723670 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140725510 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140725760 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x140729570 (PiDevCfgResetDeviceKeyCallback.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140733A20 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbOverlayNodeHive @ 0x140735670 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407367E0 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 *     RtlpLangNameInMultiSzString @ 0x1407841C8 (RtlpLangNameInMultiSzString.c)
 *     SLQueryLicenseValueInternal @ 0x1407B9E3C (SLQueryLicenseValueInternal.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801BA0 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140801F44 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140803A6C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpGetVelocityState @ 0x1408054C8 (SdbpGetVelocityState.c)
 *     SdbpMatchDeviceString @ 0x140805B04 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408060A8 (SdbpFindNextNamedTagHelper.c)
 *     AslpFileGetVersionBlock @ 0x14080ECC0 (AslpFileGetVersionBlock.c)
 *     BiGetNtPartitionPath @ 0x1408142E8 (BiGetNtPartitionPath.c)
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140817290 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x14081733C (SiIsValidWindowsBootEntry.c)
 *     _CmGetDeclarativeFilterList @ 0x14081EC9C (_CmGetDeclarativeFilterList.c)
 *     _PnpMultiSzFind @ 0x14082125C (_PnpMultiSzFind.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140822E34 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSuspendDatabase @ 0x140824030 (DrvDbSuspendDatabase.c)
 *     VhdVerifyBootDisk @ 0x14082A54C (VhdVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082C3D8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14082D340 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14082D5A0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     PiSwUpdateArrayProperties @ 0x1408AF964 (PiSwUpdateArrayProperties.c)
 *     PipCheckForDenyExecute @ 0x1408B02F4 (PipCheckForDenyExecute.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B1AD4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x1408B2790 (ConstraintEval.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1408B8B2C (PiSwDeviceFindInterfaceEntry.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE4D0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408CFD00 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D0C6C (PiDqQueryApplyObjectEvent.c)
 *     PiDqPropertyCallback @ 0x1408D2280 (PiDqPropertyCallback.c)
 *     PropertyEval @ 0x1408D2920 (PropertyEval.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140924EA0 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     AslpFileVerQueryBlock @ 0x14094329C (AslpFileVerQueryBlock.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14097B874 (PiDcUpdateDeviceContainerMembership.c)
 *     RtlLookupAtomInAtomTable @ 0x14097DD80 (RtlLookupAtomInAtomTable.c)
 *     RtlpHashStringToAtom @ 0x140986FF0 (RtlpHashStringToAtom.c)
 *     PiDmCompareObjects @ 0x140987790 (PiDmCompareObjects.c)
 *     _CmFindFilterListInflectionPoint @ 0x1409AACFC (_CmFindFilterListInflectionPoint.c)
 *     _CmMergeFilterLists @ 0x1409AADB4 (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x1409AB74C (_PnpMultiSzDeleteString.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409AE4D8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 *     LdrpSearchResourceSection_U @ 0x1409B999C (LdrpSearchResourceSection_U.c)
 *     PiSwStopDestroy @ 0x1409BE704 (PiSwStopDestroy.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1409CC950 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     EtwpStartLogger @ 0x1409D017C (EtwpStartLogger.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EC964 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1409F3F3C (PiSwDeviceMakeCompatibleIds.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409F8800 (PiPnpRtlObjectEventCompareObjects.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409F8880 (DrvDbGetObjectSubKeyCallback.c)
 *     StringListContains @ 0x140A10064 (StringListContains.c)
 *     GetPropertyFromPropArray @ 0x140A39280 (GetPropertyFromPropArray.c)
 *     IopErrorLogThread @ 0x140A3FC00 (IopErrorLogThread.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A406E4 (PiDqActionDataGetChangedProperties.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A40BF0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A470E0 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiSwDeviceCompareObjects @ 0x140A5FD80 (PiSwDeviceCompareObjects.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A61658 (PiBuildDeviceNodeInstancePath.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140A68218 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A6C2F8 (PiDevCfgEnforceDevicePolicy.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A6D6D0 (_CmMatchLastKnownParentCallback.c)
 *     _CmIsLocalMachineContainer @ 0x140A70D84 (_CmIsLocalMachineContainer.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A71FC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     SdbpFindMatchingName @ 0x140A73468 (SdbpFindMatchingName.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A85194 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140A92EC8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A97D54 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB6FE4 (SdbpFindFirstNamedTagHelper.c)
 *     VfIsPCIBus @ 0x140B89284 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140BB72B0 (BgpFoGetFontHandle.c)
 *     PipMigrateResetDeviceCallback @ 0x140C23B60 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140C27D00 (PipPendingServicesFilter.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C4A598 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsicmp(const wchar_t *Str1, const wchar_t *Str2)
{
  const wchar_t *v2; // r10
  signed __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8

  v2 = Str2;
  v3 = (char *)Str1 - (char *)Str2;
  do
  {
    v4 = *(const wchar_t *)((char *)v2 + v3);
    v5 = *v2++;
    v6 = v4 + 32;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = v4;
    v7 = v5 + 32;
    if ( (unsigned __int16)(v5 - 65) > 0x19u )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return v6 - v7;
}
