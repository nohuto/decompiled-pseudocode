/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1408BA0C4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14069D1E0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipHardwareConfigGetIndex @ 0x140717CC8 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopGetOriginalServiceName @ 0x14071B258 (IopGetOriginalServiceName.c)
 *     PnpCheckDriverDependencies @ 0x140720AD4 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140722498 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140735670 (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQueryHiveFileName @ 0x140735ABC (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140735C50 (PiDrvDbQuerySyncNodesUpdated.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmAddPanelDeviceWorker @ 0x14081CD50 (_CmAddPanelDeviceWorker.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140822954 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x140822D0C (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1408B42D0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1408B99E8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmIsDeviceInContainer @ 0x14097AEDC (_CmIsDeviceInContainer.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14097D12C (_PnpGetGenericStorePropertyKeys.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140981FCC (PipHardwareConfigGetLastUseTime.c)
 *     PnpGetServiceStartType @ 0x140983428 (PnpGetServiceStartType.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409AD3C4 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1409AE4D8 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1409AE93C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmAddDeviceToContainerWorker @ 0x140A4C720 (_CmAddDeviceToContainerWorker.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     PipHardwareConfigExists @ 0x140C22A04 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140C23494 (PipMigrateCleanService.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 *     PipResetDevices @ 0x140C23FB0 (PipResetDevices.c)
 *     PpDevCfgInit @ 0x140C26FC4 (PpDevCfgInit.c)
 *     PipProcessPendingObjects @ 0x140C27D30 (PipProcessPendingObjects.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  void *v7; // rsi
  NTSTATUS inited; // ebx
  unsigned int v10; // eax
  ULONG Length; // ebx
  __int64 Pool2; // rax
  char *v13; // rdi
  NTSTATUS v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  char v20; // [rsp+48h] [rbp-D0h] BYREF

  v7 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( inited >= 0 )
  {
    if ( a5 && *a6 > 0x80 )
    {
      v10 = *a6 + 12;
      if ( v10 < 0xC )
        return (unsigned int)-1073741675;
      Length = *a6 + 12;
      Pool2 = ExAllocatePool2(0x100uLL, v10, 0x4C474552u);
      v7 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v13 = (char *)Pool2;
    }
    else
    {
      v13 = &v20;
      Length = 140;
    }
    v14 = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, v13, Length, &ResultLength);
    inited = v14;
    if ( !v14 || v14 == -2147483643 )
    {
      v15 = *a6;
      v16 = *((_DWORD *)v13 + 2);
      *a6 = v16;
      if ( v15 < v16 )
        inited = -1073741789;
      else
        memmove(a5, v13 + 12, *((unsigned int *)v13 + 2));
      if ( a4 )
        *a4 = *((_DWORD *)v13 + 1);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  return (unsigned int)inited;
}
