/*
 * XREFs of IopGetRegistryValue @ 0x1409B5F9C
 * Callers:
 *     PnpGetRegistryDword @ 0x1404AFC44 (PnpGetRegistryDword.c)
 *     IopAllowRemoteDASD @ 0x1404C4890 (IopAllowRemoteDASD.c)
 *     IopInitializeOfflineCrashDump @ 0x140591AF4 (IopInitializeOfflineCrashDump.c)
 *     IopIsBitlockerOn @ 0x140591D0C (IopIsBitlockerOn.c)
 *     IopReadDumpRegistry @ 0x140591DB0 (IopReadDumpRegistry.c)
 *     IoInitializeLiveDump @ 0x1405949C8 (IoInitializeLiveDump.c)
 *     IopGetRegistryULongValue @ 0x140594D58 (IopGetRegistryULongValue.c)
 *     SecureDump_ReadRegistry @ 0x14059F5A8 (SecureDump_ReadRegistry.c)
 *     PnpBootDeviceWait @ 0x1405A0CA8 (PnpBootDeviceWait.c)
 *     PiDevCfgQueryResolveValue @ 0x1405A3EAC (PiDevCfgQueryResolveValue.c)
 *     PnpReadDeviceConfiguration @ 0x1406F78F4 (PnpReadDeviceConfiguration.c)
 *     IopInitializeDumpPolicySettings @ 0x14070ECB4 (IopInitializeDumpPolicySettings.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     PipUpdateAsyncOptionsCallback @ 0x140717E50 (PipUpdateAsyncOptionsCallback.c)
 *     PipUpdateSetupInProgress @ 0x140717F08 (PipUpdateSetupInProgress.c)
 *     PipGetDriverKsrGuidRegistryValue @ 0x1407198D0 (PipGetDriverKsrGuidRegistryValue.c)
 *     IopIsReportedAlready @ 0x14071B37C (IopIsReportedAlready.c)
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     PipApplyFunctionToServiceInstances @ 0x140720650 (PipApplyFunctionToServiceInstances.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140720860 (PipServiceInstanceToDeviceInstance.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140721F44 (PnpCheckPossibleBootStartDriver.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407250E8 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407281D8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x140728400 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryMinWhcpVersion @ 0x140728EB4 (PiDevCfgQueryMinWhcpVersion.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140728F98 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140729008 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x140729690 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140729760 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140729D80 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140729E60 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072A040 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     PipCheckForDenyExecute @ 0x1408B02F4 (PipCheckForDenyExecute.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1409792B8 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiGetServiceNameInfo @ 0x1409B595C (PiGetServiceNameInfo.c)
 *     IoOpenDriverRegistryKey @ 0x1409B5A60 (IoOpenDriverRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     PiFindDevInstMatch @ 0x1409B6CA8 (PiFindDevInstMatch.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x1409B78C8 (IopBuildFullDriverPath.c)
 *     PnpPrepareDriverLoading @ 0x1409B8F8C (PnpPrepareDriverLoading.c)
 *     PiDevCfgVerifyService @ 0x1409C8528 (PiDevCfgVerifyService.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     IopGetRegistryValues @ 0x1409CED70 (IopGetRegistryValues.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1409CF204 (PiDevCfgResolveMultiSzValue.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A56300 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgBuildIndirectString @ 0x140A5E534 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     PiRearrangeDeviceInstances @ 0x140A69D5C (PiRearrangeDeviceInstances.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8B600 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8DDE0 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A97D54 (PiDevCfgResolveVariableKeyHandle.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 *     IopQuerySecureDeviceClassState @ 0x140A9FB70 (IopQuerySecureDeviceClassState.c)
 *     IopSafebootDriverLoad @ 0x140AB4A18 (IopSafebootDriverLoad.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140AB78A0 (PnpGetDeviceInstanceRegistryValue.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140C21F0C (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C222B0 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140C22830 (PipGetDriverTagPriority.c)
 *     PipHardwareConfigInit @ 0x140C22B44 (PipHardwareConfigInit.c)
 *     CompositefsBootIsEnabled @ 0x140C60AC4 (CompositefsBootIsEnabled.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x140C698C0 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140C69E6C (PipCheckDependencies.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    Pool2 = (void *)ExAllocatePool2(0x100uLL, Length, 0x654B6F49u);
    if ( !Pool2 )
      return -1073741670;
    v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, Pool2, Length, &ResultLength);
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
      if ( v13 != -2147483643 && v13 != -1073741789 )
        return v13;
      v14 = (void *)ExAllocatePool2(0x100uLL, ResultLength, 0x654B6F49u);
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
