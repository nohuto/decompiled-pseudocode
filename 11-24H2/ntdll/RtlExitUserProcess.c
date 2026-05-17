/*
 * XREFs of RtlExitUserProcess @ 0x180004320
 * Callers:
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 * Callees:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x180002F20 (RtlReportSilentProcessExit.c)
 *     EtwpShutdownPrivateLoggers @ 0x180003118 (EtwpShutdownPrivateLoggers.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18000322C (RtlLockProcessHeapOnProcessTerminate.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800416F0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
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
    LdrpReleaseLoaderLock(v5, 18LL);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    LOBYTE(v2) = 1;
    RtlUnlockProcessHeapOnProcessTerminate(v2);
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_1801D2758 = 0LL;
    qword_1801D2750 = (__int64)UniqueThread;
    dword_1801D2748 = -2;
    dword_1801D274C = 1;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
