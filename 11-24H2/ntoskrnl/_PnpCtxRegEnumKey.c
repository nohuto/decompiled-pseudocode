/*
 * XREFs of _PnpCtxRegEnumKey @ 0x14097D774
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A0600 (PipUpdateDeviceProducts.c)
 *     PnpRegCopyKeySecurityTree @ 0x1407212EC (PnpRegCopyKeySecurityTree.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407350DC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140735670 (PiDrvDbOverlayNodeHive.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14081A4A8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigExists @ 0x140C22A04 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140C23494 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C27790 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C279A0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140C27D30 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14097D9B4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
