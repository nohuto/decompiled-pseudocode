/*
 * XREFs of PnpCheckForActiveDependencies @ 0x140A0F7A4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x1408BB868 (PiProcessQueryDeviceState.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6B60 (PipIsDevNodeDNStarted.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140A0F844 (PipCheckForUnsatisfiedDependencies.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  if ( (unsigned int)PipIsDevNodeDNStarted(a1) )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  v6 = PipCheckForUnsatisfiedDependencies(a1, a2);
  PnpReleaseDependencyRelationsLock(v8, v7, v9);
  return v6;
}
