/*
 * XREFs of PpDevNodeLockTree @ 0x140A05140
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1404937D8 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1405A1EA0 (IoTranslateBusAddress.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x1407204F0 (PiPagePathSetState.c)
 *     PpSystemHiveLimitCallback @ 0x140720A20 (PpSystemHiveLimitCallback.c)
 *     PnpRestartDeviceNode @ 0x140721454 (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140721780 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140721A24 (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x140722288 (PipSetDevNodeStateFlags.c)
 *     PpDevCfgProcessDevices @ 0x14072B0A4 (PpDevCfgProcessDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14072B3D0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMDeleteDeviceWorker @ 0x14072F100 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     PnpIommuBlockUnblockDevice @ 0x1407340E8 (PnpIommuBlockUnblockDevice.c)
 *     IopWarmEjectDevice @ 0x1407342CC (IopWarmEjectDevice.c)
 *     PnpDiagRundownRegisterCallback @ 0x140A38EF0 (PnpDiagRundownRegisterCallback.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14022A090 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
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
