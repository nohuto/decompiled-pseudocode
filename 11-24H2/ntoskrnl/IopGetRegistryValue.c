/*
 * XREFs of IopGetRegistryValue @ 0x1409CAD5C
 * Callers:
 *     PnpGetRegistryDword @ 0x1404B53A4 (PnpGetRegistryDword.c)
 *     IopAllowRemoteDASD @ 0x1404CB370 (IopAllowRemoteDASD.c)
 *     IopInitializeOfflineCrashDump @ 0x140594AD0 (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x140594CE8 (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x140594D8C (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x140597A4C (IoInitializeLiveDump.c)
 *     IopGetRegistryULongValue @ 0x140597DDC (IopGetRegistryULongValue.c)
 *     SecureDump_ReadRegistry @ 0x1405A2668 (SecureDump_ReadRegistry.c)
 *     PnpBootDeviceWait @ 0x1405A3D68 (PnpBootDeviceWait.c)
 *     PiDevCfgQueryResolveValue @ 0x1405A6EBC (PiDevCfgQueryResolveValue.c)
 *     PnpReadDeviceConfiguration @ 0x1406F9CB4 (PnpReadDeviceConfiguration.c)
 *     IopInitializeDumpPolicySettings @ 0x140711124 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14071A2C0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x14071A378 (PipUpdateSetupInProgress.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14071BD40 (PipGetDriverKsrGuidRegistryValue.c)
 *     IopIsReportedAlready @ 0x14071D7EC (IopIsReportedAlready.c)
 *     PiGetDeviceRegistryProperty @ 0x14071EC28 (PiGetDeviceRegistryProperty.c)
 *     PipApplyFunctionToServiceInstances @ 0x140722AC0 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140722CD0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407243B4 (PnpCheckPossibleBootStartDriver.c)
 *     PipDmgInitReadGroupPolicy @ 0x140727558 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072A588 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14072A7B0 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14072B0E8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072B158 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14072B6A0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072B770 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14072BD90 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14072BE70 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072C050 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407389B0 (PiDrvDbResolveFilePathKeyValues.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     PipCheckForDenyExecute @ 0x1408B2A00 (PipCheckForDenyExecute.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14098E280 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     IopGetRegistryValues @ 0x14099C600 (IopGetRegistryValues.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14099CA94 (PiDevCfgResolveMultiSzValue.c)
 *     PnpPrepareDriverLoading @ 0x1409C7848 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x1409C8E18 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     PiFindDevInstMatch @ 0x1409C9A9C (PiFindDevInstMatch.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409CA314 (IopGetDriverNameFromKeyNode.c)
 *     PiGetServiceNameInfo @ 0x1409CA714 (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x1409CA820 (IoOpenDriverRegistryKey.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A5DEE0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgBuildIndirectString @ 0x140A65E4C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x140A6A668 (PiDevCfgResolveVariable.c)
 *     PiRearrangeDeviceInstances @ 0x140A708CC (PiRearrangeDeviceInstances.c)
 *     PiDevCfgVerifyService @ 0x140A7E540 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A91630 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     IopQuerySecureDeviceClassState @ 0x140AA47E0 (IopQuerySecureDeviceClassState.c)
 *     IopSafebootDriverLoad @ 0x140AB9958 (IopSafebootDriverLoad.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140ABC880 (PnpGetDeviceInstanceRegistryValue.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140C1FECC (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C20270 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140C207F0 (PipGetDriverTagPriority.c)
 *     PipHardwareConfigInit @ 0x140C20B04 (PipHardwareConfigInit.c)
 *     CompositefsBootIsEnabled @ 0x140C5E974 (CompositefsBootIsEnabled.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140C67744 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140C67CF0 (PipCheckDependencies.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, int a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rbx
  int v10; // ebx
  ULONG Length; // ebx
  void *Pool2; // rdi
  NTSTATUS v13; // ebx
  void *v14; // rbx
  NTSTATUS v15; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-30h] BYREF

  ValueName = 0LL;
  ResultLength = 0;
  result = RtlInitUnicodeStringEx(&ValueName, a2);
  if ( result >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a2[v9] );
    v10 = (2 * v9 + 31) & 0xFFFFFFF8;
    if ( a3 )
      Length = (a3 + v10 + 7) & 0xFFFFFFF8;
    else
      Length = v10 + 4;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return -1073741670;
    v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool2, Length, &ResultLength);
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v14 )
        return -1073741670;
      v15 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, v14, ResultLength, &ResultLength);
      if ( v15 < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        return v15;
      }
      *a4 = v14;
    }
    else
    {
      *a4 = Pool2;
    }
    return 0;
  }
  return result;
}
