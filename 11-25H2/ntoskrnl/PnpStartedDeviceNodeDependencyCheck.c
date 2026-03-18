/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14083216C
 * Callers:
 *     PnpCancelRemoveLockedDeviceNode @ 0x140717A44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14072A3D8 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x140A80F40 (PipAttemptDependentsStart.c)
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
