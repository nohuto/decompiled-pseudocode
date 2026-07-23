/*
 * XREFs of RtlExitUserProcess @ 0x180008E40
 * Callers:
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800950E0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlReportSilentProcessExit @ 0x1800CF190 (RtlReportSilentProcessExit.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800FCA50 (EtwpShutdownPrivateLoggers.c)
 *     LdrShutdownProcess @ 0x1800FDE80 (LdrShutdownProcess.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18011008C (RtlLockProcessHeapOnProcessTerminate.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
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
