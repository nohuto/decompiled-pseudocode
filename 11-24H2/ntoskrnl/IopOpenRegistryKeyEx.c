/*
 * XREFs of IopOpenRegistryKeyEx @ 0x140A43B04
 * Callers:
 *     PnpBootDeviceWait @ 0x1405A3D68 (PnpBootDeviceWait.c)
 *     IoSetSystemPartition @ 0x140714BC0 (IoSetSystemPartition.c)
 *     PipCallbackHasDeviceOverrides @ 0x140719D54 (PipCallbackHasDeviceOverrides.c)
 *     PipCheckComputerSupported @ 0x140719E30 (PipCheckComputerSupported.c)
 *     PipGetDriverKsrGuid @ 0x14071BC80 (PipGetDriverKsrGuid.c)
 *     PiGetDeviceRegistryProperty @ 0x14071EC28 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140722CD0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140723584 (PnpOpenFirstMatchingSubKey.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140727390 (PipDmgGetDeviceDmarRegistryValue.c)
 *     PipDmgInitReadGroupPolicy @ 0x140727558 (PipDmgInitReadGroupPolicy.c)
 *     PiDcInitUpdateProperties @ 0x1407276DC (PiDcInitUpdateProperties.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14072A8A4 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072B158 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResetDeviceKeys @ 0x14072B5E4 (PiDevCfgResetDeviceKeys.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072C4F4 (PpDevCfgProcessDeviceClass.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072D40C (PnpProfileUpdateHardwareProfile.c)
 *     NtEnableLastKnownGood @ 0x14082A820 (NtEnableLastKnownGood.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140964374 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x140964944 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgQueryDriverNode @ 0x140996564 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14099A1E0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgInitMigrationContext @ 0x14099AB2C (PiDevCfgInitMigrationContext.c)
 *     IopUpdateSecureDeviceClassState @ 0x1409A1648 (IopUpdateSecureDeviceClassState.c)
 *     IopCreateSecureDeviceClassSettings @ 0x1409A1A38 (IopCreateSecureDeviceClassSettings.c)
 *     PiQueryRemovableDeviceOverride @ 0x140A32AF8 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x140A32D18 (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A72F18 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A912F4 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1D550 (IopStoreSystemPartitionInformation.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140C1FECC (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C20270 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140C207F0 (PipGetDriverTagPriority.c)
 *     PipInitDeviceOverrideCache @ 0x140C210A8 (PipInitDeviceOverrideCache.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5D04C (VhdAutoAttachVirtualDisks.c)
 *     CompositefsBootIsEnabled @ 0x140C5E974 (CompositefsBootIsEnabled.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C6351C (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C636C8 (PipInitializeEarlyLaunchDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKeyEx(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_QWORD *)&v5.Length = 48LL;
  *(_QWORD *)&v5.Attributes = 576LL;
  *a1 = 0LL;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return ZwOpenKey(a1, a4, &v5);
}
