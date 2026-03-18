/*
 * XREFs of _wcsicmp @ 0x1404FE3B0
 * Callers:
 *     VfUpdateWhitelist @ 0x1403F14E8 (VfUpdateWhitelist.c)
 *     VfAssignRuleClassIdToClassDriver @ 0x1403F1574 (VfAssignRuleClassIdToClassDriver.c)
 *     LdrpResSearchResourceMappedFile @ 0x14044E290 (LdrpResSearchResourceMappedFile.c)
 *     LdrRscIsTypeExist @ 0x14044F1B4 (LdrRscIsTypeExist.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14049B6CC (PopFxIsDevicePotentialDripsConstraint.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14049C0F4 (PiDevCfgGetMigrationDeviceIdScore.c)
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x1405A6C08 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x1405E7D14 (LdrpVerifyAlternateResourceModuleEx.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1406A2170 (RtlpMuiRegAddAlternateCodePage.c)
 *     BiIsValidDiskDevice @ 0x1406F9AF4 (BiIsValidDiskDevice.c)
 *     ArbShareDriverExclusive @ 0x14070641C (ArbShareDriverExclusive.c)
 *     PnpCheckDriverDependencies @ 0x140722F44 (PnpCheckDriverDependencies.c)
 *     IopIsPciRootBus @ 0x140725AE0 (IopIsPciRootBus.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140727980 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140727BD0 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x14072B580 (PiDevCfgResetDeviceKeyCallback.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140735AF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDrvDbOverlayNodeHive @ 0x140737740 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407388B0 (PiDrvDbRegisterNodeCallback.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407389B0 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbSetupNodeHive @ 0x140739634 (PiDrvDbSetupNodeHive.c)
 *     RtlpLangNameInMultiSzString @ 0x140784298 (RtlpLangNameInMultiSzString.c)
 *     SLQueryLicenseValueInternal @ 0x1407B99EC (SLQueryLicenseValueInternal.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140801460 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x140801804 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14080332C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpGetVelocityState @ 0x140804D88 (SdbpGetVelocityState.c)
 *     SdbpMatchDeviceString @ 0x1408053C4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTagHelper @ 0x140805968 (SdbpFindNextNamedTagHelper.c)
 *     AslpFileGetVersionBlock @ 0x14080E580 (AslpFileGetVersionBlock.c)
 *     BiGetNtPartitionPath @ 0x140813BA8 (BiGetNtPartitionPath.c)
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140816B50 (SiIsValidDiskDevice.c)
 *     SiIsValidWindowsBootEntry @ 0x140816BFC (SiIsValidWindowsBootEntry.c)
 *     _CmGetDeclarativeFilterList @ 0x14081E55C (_CmGetDeclarativeFilterList.c)
 *     _PnpMultiSzFind @ 0x140820B1C (_PnpMultiSzFind.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1408226F4 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140822F28 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSuspendDatabase @ 0x1408238F0 (DrvDbSuspendDatabase.c)
 *     VhdVerifyBootDisk @ 0x140829D1C (VhdVerifyBootDisk.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082BBA8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14082CB10 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14082CD70 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 *     PiSwUpdateArrayProperties @ 0x1408B2070 (PiSwUpdateArrayProperties.c)
 *     PipCheckForDenyExecute @ 0x1408B2A00 (PipCheckForDenyExecute.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1408B41E4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B4A8C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ConstraintEval @ 0x1408B4EA0 (ConstraintEval.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1408BB17C (PiSwDeviceFindInterfaceEntry.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408D0AE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1408D2310 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqQueryApplyObjectEvent @ 0x1408D327C (PiDqQueryApplyObjectEvent.c)
 *     PiDqPropertyCallback @ 0x1408D4890 (PiDqPropertyCallback.c)
 *     PropertyEval @ 0x1408D4F30 (PropertyEval.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140922D68 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     AslpFileVerQueryBlock @ 0x14095B7DC (AslpFileVerQueryBlock.c)
 *     _CmUpdateDevicePanel @ 0x14098EE00 (_CmUpdateDevicePanel.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140990834 (PiDcUpdateDeviceContainerMembership.c)
 *     RtlLookupAtomInAtomTable @ 0x140992D40 (RtlLookupAtomInAtomTable.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14099A1E0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     RtlpHashStringToAtom @ 0x14099CFC0 (RtlpHashStringToAtom.c)
 *     PiDmCompareObjects @ 0x14099F010 (PiDmCompareObjects.c)
 *     _CmFindFilterListInflectionPoint @ 0x1409B396C (_CmFindFilterListInflectionPoint.c)
 *     _CmMergeFilterLists @ 0x1409B3A24 (_CmMergeFilterLists.c)
 *     _PnpMultiSzDeleteString @ 0x1409B43BC (_PnpMultiSzDeleteString.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409B7148 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F8A64 (PiSwIrpStartCreateWorker.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1409FB5CC (PiSwDeviceMakeCompatibleIds.c)
 *     PiPnpRtlObjectEventCompareObjects @ 0x1409FF8B0 (PiPnpRtlObjectEventCompareObjects.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409FF930 (DrvDbGetObjectSubKeyCallback.c)
 *     LdrpSearchResourceSection_U @ 0x140A0253C (LdrpSearchResourceSection_U.c)
 *     PiSwStopDestroy @ 0x140A102F4 (PiSwStopDestroy.c)
 *     StringListContains @ 0x140A16E84 (StringListContains.c)
 *     GetPropertyFromPropArray @ 0x140A439F0 (GetPropertyFromPropArray.c)
 *     IopErrorLogThread @ 0x140A48EE0 (IopErrorLogThread.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A499C4 (PiDqActionDataGetChangedProperties.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140A49ED0 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140A50330 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiSwDeviceCompareObjects @ 0x140A66FA0 (PiSwDeviceCompareObjects.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A68158 (PiBuildDeviceNodeInstancePath.c)
 *     PiDevCfgResolveVariable @ 0x140A6A668 (PiDevCfgResolveVariable.c)
 *     PiHotSwapGetDefaultBusRemovalPolicy @ 0x140A6ED94 (PiHotSwapGetDefaultBusRemovalPolicy.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A72F18 (PiDevCfgEnforceDevicePolicy.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A73D70 (_CmMatchLastKnownParentCallback.c)
 *     _CmIsLocalMachineContainer @ 0x140A76C64 (_CmIsLocalMachineContainer.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A77CC0 (PiDevCfgConfigureDeviceInterfaces.c)
 *     SdbpFindMatchingName @ 0x140A79168 (SdbpFindMatchingName.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140A88D94 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140A96698 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140ABBFC4 (SdbpFindFirstNamedTagHelper.c)
 *     VfIsPCIBus @ 0x140B87284 (VfIsPCIBus.c)
 *     BgpFoGetFontHandle @ 0x140BB52B0 (BgpFoGetFontHandle.c)
 *     PipMigrateResetDeviceCallback @ 0x140C21B20 (PipMigrateResetDeviceCallback.c)
 *     PipPendingServicesFilter @ 0x140C25CB0 (PipPendingServicesFilter.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C48474 (CmSelectQualifiedInstallLanguage.c)
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
