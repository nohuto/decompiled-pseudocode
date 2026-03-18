/*
 * XREFs of _PnpCtxRegEnumKey @ 0x140992734
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1405A36C0 (PipUpdateDeviceProducts.c)
 *     PnpRegCopyKeySecurityTree @ 0x14072375C (PnpRegCopyKeySecurityTree.c)
 *     PiDrvDbOverlayCopyKeys @ 0x1407371AC (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x140737740 (PiDrvDbOverlayNodeHive.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140819D68 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     PiCMEnumerateSubKeys @ 0x14099245C (PiCMEnumerateSubKeys.c)
 *     PiCMDeleteDeviceKey @ 0x140ABCF28 (PiCMDeleteDeviceKey.c)
 *     PipHardwareConfigExists @ 0x140C209C4 (PipHardwareConfigExists.c)
 *     PipMigrateCleanService @ 0x140C21454 (PipMigrateCleanService.c)
 *     PipCommitPendingOsExtensionResource @ 0x140C25740 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140C25950 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140C25CE0 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x140992974 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
