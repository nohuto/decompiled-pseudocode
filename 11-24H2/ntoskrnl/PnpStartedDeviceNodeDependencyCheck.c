/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1409906E4
 * Callers:
 *     PnpCancelRemoveLockedDeviceNode @ 0x140723B44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x140736668 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PipAttemptDependentsStart @ 0x14098EA5C (PipAttemptDependentsStart.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  ExAcquireResourceSharedLite(&PiDependencyRelationsLock, 1u);
  PipAttemptDependentsStart(a1);
  return PnpReleaseDependencyRelationsLock(v4, v3, v5);
}
