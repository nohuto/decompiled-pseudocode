/*
 * XREFs of PopAdaptiveGetBootIsUnattended @ 0x140A113E4
 * Callers:
 *     PopUpdateSystemIdleContext @ 0x140A1112C (PopUpdateSystemIdleContext.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 */

bool PopAdaptiveGetBootIsUnattended()
{
  struct _KTHREAD *CurrentThread; // rax
  bool v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  v1 = 0;
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( PopAdaptiveBootContext )
    v1 = (qword_140FD7240 & 8) != 0;
  PopReleaseAdaptiveLock();
  return v1;
}
