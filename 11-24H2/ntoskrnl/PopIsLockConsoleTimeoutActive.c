/*
 * XREFs of PopIsLockConsoleTimeoutActive @ 0x1409BA32C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 */

char PopIsLockConsoleTimeoutActive()
{
  char v0; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  v0 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( !byte_140F07341 || byte_140F07342 || dword_140F07358 == -1 )
    v0 = 0;
  PopReleaseAdaptiveLock(v3, v2, v4, v5, 0LL);
  return v0;
}
