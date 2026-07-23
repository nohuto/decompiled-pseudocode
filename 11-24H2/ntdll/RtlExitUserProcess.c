/*
 * XREFs of RtlExitUserProcess @ 0x1800AAE10
 * Callers:
 *     RtlExitUserThread @ 0x1800AADB0 (RtlExitUserThread.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180031810 (LdrpReleaseLoaderLock.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x180049720 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x1800AB850 (RtlLockProcessHeapOnProcessTerminate.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800AB8A4 (EtwpShutdownPrivateLoggers.c)
 *     RtlReportSilentProcessExit @ 0x1800AB9C0 (RtlReportSilentProcessExit.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800ACAD4 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     ZwTerminateProcess @ 0x1801605D0 (ZwTerminateProcess.c)
 */

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  __int64 v2; // rcx
  void *UniqueThread; // rdx
  __int64 v4; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&FastPebLock);
  RtlLockProcessHeapOnProcessTerminate();
  if ( ZwTerminateProcess(0LL, ExitStatus) >= 0 )
  {
    LOBYTE(v2) = 1;
    RtlUnlockProcessHeapOnProcessTerminate(v2);
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockSemaphore = 0LL;
    FastPebLock.OwningThread = UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
    LdrShutdownProcess();
  }
  RtlUnlockProcessHeapOnProcessTerminate(0LL);
  RtlLeaveCriticalSection(&FastPebLock);
  LdrpReleaseLoaderLock(v4, 18, 0);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}
