/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14097B724
 * Callers:
 *     PnpCancelRemoveLockedDeviceNode @ 0x1407216D4 (PnpCancelRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x140734598 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PipAttemptDependentsStart @ 0x140979A94 (PipAttemptDependentsStart.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
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
