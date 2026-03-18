/*
 * XREFs of _PnpCtxRegSetValue @ 0x140993B14
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14071A708 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140737D20 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407389B0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1408192D4 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x14081C610 (_CmAddPanelDeviceWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14081F61C (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedProperty @ 0x14081F7C4 (_CmSetInstallerClassMappedProperty.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14081FD28 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140822F28 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14082348C (DrvDbSetRegValueMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x140990F90 (_CmSetDeviceRegPropWorker.c)
 *     _PnpSetPropertyWorker @ 0x14099197C (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140995494 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140995624 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140A96FC0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140C215B4 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlSetValue @ 0x140993B48 (_RegRtlSetValue.c)
 */

__int64 __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, ULONG a6)
{
  return RegRtlSetValue(a2, a6);
}
