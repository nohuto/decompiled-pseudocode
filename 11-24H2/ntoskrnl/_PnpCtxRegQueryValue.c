/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1408BC774
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14069C160 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigGetIndex @ 0x14071A138 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14071A708 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopGetOriginalServiceName @ 0x14071D6C8 (IopGetOriginalServiceName.c)
 *     PnpCheckDriverDependencies @ 0x140722F44 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140724908 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140737740 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x140737B8C (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140737D20 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B020 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmAddPanelDeviceWorker @ 0x14081C610 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140822214 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x1408225CC (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140822F28 (DrvDbSetDriverPackageMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B6960 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1408BC098 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C6550 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092430C (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmIsDeviceInContainer @ 0x14098FEA4 (_CmIsDeviceInContainer.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1409920EC (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409B6034 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409B7148 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1409B75AC (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PipHardwareConfigGetLastUseTime @ 0x1409C4FF0 (PipHardwareConfigGetLastUseTime.c)
 *     PnpGetServiceStartType @ 0x1409C6184 (PnpGetServiceStartType.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A547D0 (_CmAddDeviceToContainerWorker.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PipHardwareConfigExists @ 0x140C209C4 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140C21454 (PipMigrateCleanService.c)
 *     PipMigratePnpState @ 0x140C215B4 (PipMigratePnpState.c)
 *     PipResetDevices @ 0x140C21F70 (PipResetDevices.c)
 *     PpDevCfgInit @ 0x140C24F94 (PpDevCfgInit.c)
 *     PipProcessPendingObjects @ 0x140C25CE0 (PipProcessPendingObjects.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  void *v7; // rsi
  NTSTATUS inited; // ebx
  ULONG Length; // ebx
  __int64 Pool2; // rax
  char *v12; // rdi
  NTSTATUS v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char v19; // [rsp+48h] [rbp-D0h] BYREF

  v7 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( inited >= 0 )
  {
    if ( a5 && *a6 > 0x80 )
    {
      if ( *a6 + 12 < 0xC )
        return (unsigned int)-1073741675;
      Length = *a6 + 12;
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v12 = (char *)Pool2;
    }
    else
    {
      v12 = &v19;
      Length = 140;
    }
    v13 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, v12, Length, &ResultLength);
    inited = v13;
    if ( !v13 || v13 == -2147483643 )
    {
      v14 = *a6;
      v15 = *((_DWORD *)v12 + 2);
      *a6 = v15;
      if ( v14 < v15 )
        inited = -1073741789;
      else
        memmove(a5, v12 + 12, *((unsigned int *)v12 + 2));
      if ( a4 )
        *a4 = *((_DWORD *)v12 + 1);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)inited;
}
