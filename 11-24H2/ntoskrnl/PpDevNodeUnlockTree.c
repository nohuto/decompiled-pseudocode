/*
 * XREFs of PpDevNodeUnlockTree @ 0x140A145FC
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046CD70 (PnpDeviceActionWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x140498E64 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140498EF8 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1405A4F60 (IoTranslateBusAddress.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x140722960 (PiPagePathSetState.c)
 *     PpSystemHiveLimitCallback @ 0x140722E90 (PpSystemHiveLimitCallback.c)
 *     PnpRestartDeviceNode @ 0x1407238C4 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140723E94 (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x1407246F8 (PipSetDevNodeStateFlags.c)
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14072D3C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x1407361B8 (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x14073639C (IopWarmEjectDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A43660 (PnpDiagRundownRegisterCallback.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1403D7950 (ExConvertExclusiveToSharedLite.c)
 */

void __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v2 = a1 - 1;
  if ( !v2 || (v3 = v2 - 1) == 0 || (v4 = v3 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v4 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
LABEL_4:
  KeLeaveCriticalRegion();
}
