/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140A9D5CC
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x14048AB44 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074BEEC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB1B4C (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
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
