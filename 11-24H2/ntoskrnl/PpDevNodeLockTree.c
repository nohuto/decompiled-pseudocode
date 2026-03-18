/*
 * XREFs of PpDevNodeLockTree @ 0x140A08C10
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046CD70 (PnpDeviceActionWorker.c)
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
 *     PnpDiagRundownRegisterCallback @ 0x140A43660 (PnpDiagRundownRegisterCallback.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140274B00 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
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
