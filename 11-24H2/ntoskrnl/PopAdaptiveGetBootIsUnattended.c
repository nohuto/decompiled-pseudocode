/*
 * XREFs of PopAdaptiveGetBootIsUnattended @ 0x1409A04C0
 * Callers:
 *     PopUpdateSystemIdleContext @ 0x1409A0024 (PopUpdateSystemIdleContext.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409A183C (PopReleaseAdaptiveLock.c)
 */

bool PopAdaptiveGetBootIsUnattended()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  v5 = 0;
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( PopAdaptiveBootContext )
    v5 = (qword_140FD81F0 & 8) != 0;
  PopReleaseAdaptiveLock(v2, v1, v3, v4, 0LL);
  return v5;
}
