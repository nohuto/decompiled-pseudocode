/*
 * XREFs of IopOpenRegistryKeyEx @ 0x140A39394
 * Callers:
 *     PnpBootDeviceWait @ 0x1405A0CA8 (PnpBootDeviceWait.c)
 *     IoSetSystemPartition @ 0x140712750 (IoSetSystemPartition.c)
 *     PipCallbackHasDeviceOverrides @ 0x1407178E4 (PipCallbackHasDeviceOverrides.c)
 *     PipCheckComputerSupported @ 0x1407179C0 (PipCheckComputerSupported.c)
 *     PipGetDriverKsrGuid @ 0x140719810 (PipGetDriverKsrGuid.c)
 *     PiGetDeviceRegistryProperty @ 0x14071C7B8 (PiGetDeviceRegistryProperty.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140720860 (PipServiceInstanceToDeviceInstance.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140721114 (PnpOpenFirstMatchingSubKey.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140724F20 (PipDmgGetDeviceDmarRegistryValue.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407250E8 (PipDmgInitReadGroupPolicy.c)
 *     PiDcInitUpdateProperties @ 0x14072526C (PiDcInitUpdateProperties.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x1407284F4 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PiDevCfgQueryMinWhcpVersion @ 0x140728EB4 (PiDevCfgQueryMinWhcpVersion.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140729008 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgReadDriverPolicy @ 0x1407292E8 (PiDevCfgReadDriverPolicy.c)
 *     PiDevCfgResetDeviceKeys @ 0x1407295D4 (PiDevCfgResetDeviceKeys.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072A508 (PpDevCfgProcessDeviceClass.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14072B41C (PnpProfileUpdateHardwareProfile.c)
 *     NtEnableLastKnownGood @ 0x14082B050 (NtEnableLastKnownGood.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14094C14C (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgInitResolveContext @ 0x14094C71C (PiDevCfgInitResolveContext.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1409CC950 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgInitMigrationContext @ 0x1409CD29C (PiDevCfgInitMigrationContext.c)
 *     PiQueryRemovableDeviceOverride @ 0x140A26B08 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x140A26D28 (PipFindDeviceOverrideEntry.c)
 *     IopCreateSecureDeviceClassSettings @ 0x140A6063C (IopCreateSecureDeviceClassSettings.c)
 *     IopUpdateSecureDeviceClassState @ 0x140A60830 (IopUpdateSecureDeviceClassState.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A6C2F8 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A7F31C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140A8DA98 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A97D54 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1F590 (IopStoreSystemPartitionInformation.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PiInitCacheGroupInformation @ 0x140C21F0C (PiInitCacheGroupInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C222B0 (PipCheckSystemFirmwareUpdated.c)
 *     PipGetDriverTagPriority @ 0x140C22830 (PipGetDriverTagPriority.c)
 *     PipInitDeviceOverrideCache @ 0x140C230E8 (PipInitDeviceOverrideCache.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C5F1A4 (VhdAutoAttachVirtualDisks.c)
 *     CompositefsBootIsEnabled @ 0x140C60AC4 (CompositefsBootIsEnabled.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C65844 (PipInitializeEarlyLaunchDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
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
