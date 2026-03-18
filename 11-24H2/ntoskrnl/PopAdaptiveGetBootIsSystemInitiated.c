/*
 * XREFs of PopAdaptiveGetBootIsSystemInitiated @ 0x1409BB16C
 * Callers:
 *     NtSetThreadExecutionState @ 0x140AC6F10 (NtSetThreadExecutionState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 */

bool PopAdaptiveGetBootIsSystemInitiated()
{
  struct _KTHREAD *CurrentThread; // rax
  bool v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  v1 = PopAdaptiveBootContext != 0;
  PopAdaptiveContext = 0;
  PopReleaseAdaptiveLock(v3, v2, v4, v5, 0LL);
  return v1;
}
