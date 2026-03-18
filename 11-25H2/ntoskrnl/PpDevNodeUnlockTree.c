/*
 * XREFs of PpDevNodeUnlockTree @ 0x140A0AA84
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x140499000 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140499094 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1405A17F0 (IoTranslateBusAddress.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x140716860 (PiPagePathSetState.c)
 *     PpSystemHiveLimitCallback @ 0x140716D90 (PpSystemHiveLimitCallback.c)
 *     PnpRestartDeviceNode @ 0x1407177C4 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140717AF0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140717D94 (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x1407185F8 (PipSetDevNodeStateFlags.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140721440 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x140729F28 (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x14072A10C (IopWarmEjectDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A3E170 (PnpDiagRundownRegisterCallback.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x140280040 (ExConvertExclusiveToSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
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
