/*
 * XREFs of PpDevNodeLockTree @ 0x140A060F0
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
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
 *     PnpDiagRundownRegisterCallback @ 0x140A3E170 (PnpDiagRundownRegisterCallback.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140301360 (ExIsResourceAcquiredSharedLite.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG v8; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
LABEL_2:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
    goto LABEL_2;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
      v8 = IsResourceAcquiredSharedLite;
      if ( IsResourceAcquiredSharedLite )
      {
        do
        {
          ExReleaseResourceLite(&IopDeviceTreeLock);
          --v8;
        }
        while ( v8 );
        do
        {
          ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
          --IsResourceAcquiredSharedLite;
        }
        while ( IsResourceAcquiredSharedLite );
      }
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
  }
  return v2;
}
