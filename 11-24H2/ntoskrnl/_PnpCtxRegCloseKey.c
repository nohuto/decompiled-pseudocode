/*
 * XREFs of _PnpCtxRegCloseKey @ 0x140A1004C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14069D1E0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C222B0 (PipCheckSystemFirmwareUpdated.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140C23C80 (PipMigrateServiceCallback.c)
 *     PipResetDevices @ 0x140C23FB0 (PipResetDevices.c)
 *     PipResetMatchingFilteredDevices @ 0x140C24080 (PipResetMatchingFilteredDevices.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C27790 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C279A0 (PipCommitPendingService.c)
 *     PipProcessPendingOsExtensionResources @ 0x140C27F94 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140C2803C (PipProcessPendingServices.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
