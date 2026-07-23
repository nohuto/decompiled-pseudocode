/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x14097EF98
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14081A88C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081AEA0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081E290 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14081E5C4 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140821D0C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140822180 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 *     PipMigrateCleanService @ 0x140C23494 (PipMigrateCleanService.c)
 *     PipResetMatchingFilteredDevices @ 0x140C24080 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
