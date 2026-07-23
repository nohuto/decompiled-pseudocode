/*
 * XREFs of CcInitializeTelemetry @ 0x140BE06B0
 * Callers:
 *     CcInitializeCacheManager @ 0x140C17A88 (CcInitializeCacheManager.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABD89C (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcInitializeTelemetry(int a1)
{
  char result; // al

  if ( a1 == 1 )
  {
    memset_0(&CcTelemetryGlobalData, 0, 0x210uLL);
    KeQueryPerformanceCounter(&stru_140F8E6A8);
    qword_140F8E6B8 = MEMORY[0xFFFFF78000000014];
    qword_140F8E6B0 = MEMORY[0xFFFFF78000000014];
    qword_140F8E6D0 = 864000000000LL;
    result = 0;
    *(__m128i *)&DueTime.LowPart = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)CcDisableTelemetryRegKeyAtInit <= 1 )
      byte_140F8E6E1 = CcDisableTelemetryRegKeyAtInit != 0;
    *(_QWORD *)&Timer.Header.Lock = 8LL;
    stru_140F8E890.WorkerRoutine = (void (__fastcall *)(void *))CcTelemetryPeriodicTimerCallback;
    stru_140F8E890.Parameter = &stru_140F8E890;
    Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
    Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
    stru_140F8E810.DeferredRoutine = (PKDEFERRED_ROUTINE)CcTelemetryPeriodicTimerDpc;
    stru_140F8E890.List.Flink = 0LL;
    Timer.DueTime.QuadPart = 0LL;
    Timer.Period = 0;
    Timer.Processor = 0;
    stru_140F8E810.TargetInfoAsUlong = 275;
    stru_140F8E810.DeferredContext = 0LL;
    stru_140F8E810.DpcData = 0LL;
    stru_140F8E810.ProcessorHistory = 0LL;
  }
  else
  {
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06BF8, 0LL, 0LL);
    result = 0;
    CcTelemetryGlobalData = 1;
    if ( !byte_140F8E6E1 )
      return CcSetTelemetryPeriodicTimer((LARGE_INTEGER)-9000000000LL);
  }
  return result;
}
