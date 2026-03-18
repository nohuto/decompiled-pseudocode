/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x140993F58
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407389B0 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14081A14C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14081A760 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x14081DB50 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14081DE84 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081E810 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1408215CC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140821A40 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     PiCMEnumerateSubKeys @ 0x14099245C (PiCMEnumerateSubKeys.c)
 *     PipMigrateCleanService @ 0x140C21454 (PipMigrateCleanService.c)
 *     PipResetMatchingFilteredDevices @ 0x140C22040 (PipResetMatchingFilteredDevices.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x140993F98 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
