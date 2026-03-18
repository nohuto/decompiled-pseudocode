/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140A9C8DC
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140490CC8 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140741AEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB2BEC (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 */

void __fastcall IoLockUnlockPnpDeviceTree(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  }
  else
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    KeLeaveCriticalRegion();
  }
}
