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

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  __int64 v2; // rcx
  void *UniqueThread; // rdx
  __int64 v5; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&FastPebLock);
  RtlLockProcessHeapOnProcessTerminate();
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockProcessHeapOnProcessTerminate(0LL);
    RtlLeaveCriticalSection(&FastPebLock);
    LdrpReleaseLoaderLock(v5, 18, 0);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    LOBYTE(v2) = 1;
    RtlUnlockProcessHeapOnProcessTerminate(v2);
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801D47B8 = 0LL;
    qword_1801D47B0 = (__int64)UniqueThread;
    dword_1801D47A8 = -2;
    dword_1801D47AC = 1;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
