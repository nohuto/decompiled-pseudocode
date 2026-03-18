/*
 * XREFs of _PnpCtxRegCloseKey @ 0x140A16E6C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14069C160 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C20270 (PipCheckSystemFirmwareUpdated.c)
 *     PipMigratePnpState @ 0x140C215B4 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140C21C40 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140C21F70 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140C22040 (PipResetMatchingFilteredDevices.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C25740 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C25950 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C25F44 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C25FEC (PipProcessPendingServices.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
