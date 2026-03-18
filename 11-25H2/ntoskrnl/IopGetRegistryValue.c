/*
 * XREFs of IopGetRegistryValue @ 0x1409B29DC
 * Callers:
 *     PnpGetRegistryDword @ 0x1404B5904 (PnpGetRegistryDword.c)
 *     IopAllowRemoteDASD @ 0x1404CB634 (IopAllowRemoteDASD.c)
 *     IopInitializeOfflineCrashDump @ 0x1405912D0 (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x1405914E8 (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x14059158C (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x14059433C (IoInitializeLiveDump.c)
 *     IopGetRegistryULongValue @ 0x1405946CC (IopGetRegistryULongValue.c)
 *     SecureDump_ReadRegistry @ 0x14059EE88 (SecureDump_ReadRegistry.c)
 *     PnpBootDeviceWait @ 0x1405A05F8 (PnpBootDeviceWait.c)
 *     PiDevCfgQueryResolveValue @ 0x1405A36AC (PiDevCfgQueryResolveValue.c)
 *     PnpReadDeviceConfiguration @ 0x1406EDEF0 (PnpReadDeviceConfiguration.c)
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateAsyncOptionsCallback @ 0x14070E1C0 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x14070E278 (PipUpdateSetupInProgress.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x14070FC40 (PipGetDriverKsrGuidRegistryValue.c)
 *     IopIsReportedAlready @ 0x1407116EC (IopIsReportedAlready.c)
 *     PiGetDeviceRegistryProperty @ 0x140712B28 (PiGetDeviceRegistryProperty.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407169C0 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140716BD0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1407182B4 (PnpCheckPossibleBootStartDriver.c)
 *     PipDmgInitReadGroupPolicy @ 0x14071B5D8 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14071E608 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14071E830 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14071ECF8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14071F168 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14071F1D8 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14071F720 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14071F7F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14071FE10 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14071FEF0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407200D0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14072C720 (PiDrvDbResolveFilePathKeyValues.c)
 *     NtEnableLastKnownGood @ 0x14081AAE0 (NtEnableLastKnownGood.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1408317BC (PnpGetDeviceResourcesFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14094C0A4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     IopGetRegistryValues @ 0x14094D400 (IopGetRegistryValues.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 *     PipCheckForDenyExecute @ 0x14095D068 (PipCheckForDenyExecute.c)
 *     PiDevCfgBuildIndirectString @ 0x1409824B0 (PiDevCfgBuildIndirectString.c)
 *     PnpPrepareDriverLoading @ 0x1409AFA84 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x1409B0AA8 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     PiFindDevInstMatch @ 0x1409B1728 (PiFindDevInstMatch.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B1F94 (IopGetDriverNameFromKeyNode.c)
 *     PiGetServiceNameInfo @ 0x1409B2394 (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x1409B24A0 (IoOpenDriverRegistryKey.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A5C26C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgResolveVariable @ 0x140A67A58 (PiDevCfgResolveVariable.c)
 *     PiRearrangeDeviceInstances @ 0x140A6E6CC (PiRearrangeDeviceInstances.c)
 *     PiDevCfgVerifyService @ 0x140A7B0B8 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A89FC0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8C530 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9DAA0 (PiCreateDriverSwDeviceCallback.c)
 *     IopQuerySecureDeviceClassState @ 0x140A9EFB8 (IopQuerySecureDeviceClassState.c)
 *     IopSafebootDriverLoad @ 0x140AB556C (IopSafebootDriverLoad.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140AB8700 (PnpGetDeviceInstanceRegistryValue.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140C0ED64 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C0F108 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140C0F690 (PipGetDriverTagPriority.c)
 *     PipHardwareConfigInit @ 0x140C0F9A4 (PipHardwareConfigInit.c)
 *     CompositefsBootIsEnabled @ 0x140C4D5F4 (CompositefsBootIsEnabled.c)
 *     IopInitializeSystemDrivers @ 0x140C51698 (IopInitializeSystemDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140C55ABC (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140C56068 (PipCheckDependencies.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
