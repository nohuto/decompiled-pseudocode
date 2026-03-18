/*
 * XREFs of IopOpenRegistryKeyEx @ 0x140A3E608
 * Callers:
 *     PnpBootDeviceWait @ 0x1405A05F8 (PnpBootDeviceWait.c)
 *     IoSetSystemPartition @ 0x140708AC0 (IoSetSystemPartition.c)
 *     PipCallbackHasDeviceOverrides @ 0x14070DC54 (PipCallbackHasDeviceOverrides.c)
 *     PipCheckComputerSupported @ 0x14070DD30 (PipCheckComputerSupported.c)
 *     PipGetDriverKsrGuid @ 0x14070FB80 (PipGetDriverKsrGuid.c)
 *     PiGetDeviceRegistryProperty @ 0x140712B28 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140716BD0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140717484 (PnpOpenFirstMatchingSubKey.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x14071B410 (PipDmgGetDeviceDmarRegistryValue.c)
 *     PipDmgInitReadGroupPolicy @ 0x14071B5D8 (PipDmgInitReadGroupPolicy.c)
 *     PiDcInitUpdateProperties @ 0x14071B75C (PiDcInitUpdateProperties.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x14071E924 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14071F1D8 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResetDeviceKeys @ 0x14071F664 (PiDevCfgResetDeviceKeys.c)
 *     PpDevCfgProcessDeviceClass @ 0x140720574 (PpDevCfgProcessDeviceClass.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072148C (PnpProfileUpdateHardwareProfile.c)
 *     NtEnableLastKnownGood @ 0x14081AAE0 (NtEnableLastKnownGood.c)
 *     PiQueryRemovableDeviceOverride @ 0x14082E4B8 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x14082E6D8 (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgQueryDriverNode @ 0x140892318 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x14094C400 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgInitMigrationContext @ 0x14094E0B8 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14095F65C (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x14095FC2C (PiDevCfgInitResolveContext.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     IopUpdateSecureDeviceClassState @ 0x14099C75C (IopUpdateSecureDeviceClassState.c)
 *     IopCreateSecureDeviceClassSettings @ 0x14099CB48 (IopCreateSecureDeviceClassSettings.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A7056C (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8C1F4 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 *     IopStoreSystemPartitionInformation @ 0x140C0C380 (IopStoreSystemPartitionInformation.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140C0ED64 (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C0F108 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140C0F690 (PipGetDriverTagPriority.c)
 *     PipInitDeviceOverrideCache @ 0x140C0FF48 (PipInitDeviceOverrideCache.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C4BCCC (VhdAutoAttachVirtualDisks.c)
 *     CompositefsBootIsEnabled @ 0x140C4D5F4 (CompositefsBootIsEnabled.c)
 *     IopInitializeSystemDrivers @ 0x140C51698 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C52208 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C523B4 (PipInitializeEarlyLaunchDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
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
