/*
 * XREFs of WheaCrashDumpInitializationComplete @ 0x1407C878C
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     WheapReportDeferredLiveDumps @ 0x1407C87F0 (WheapReportDeferredLiveDumps.c)
 */

__int64 WheaCrashDumpInitializationComplete()
{
  unsigned int v0; // edi
  bool v1; // bl

  v0 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  WheapCrashDumpInitialized = 1;
  v1 = WheapDispatchPtr.DeviceQueue.Lock != (_QWORD)&WheapDispatchPtr.DeviceQueue.Lock;
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters);
  if ( v1 )
    return (unsigned int)WheapReportDeferredLiveDumps();
  return v0;
}
