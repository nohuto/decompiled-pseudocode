/*
 * XREFs of IoLockUnlockPnpDeviceTree @ 0x140AA223C
 * Callers:
 *     PopFxBuildDripsBlockingDeviceList @ 0x140490504 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14074DBBC (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x140AB7798 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
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
