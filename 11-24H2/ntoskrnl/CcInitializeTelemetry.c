/*
 * XREFs of CcInitializeTelemetry @ 0x140BDE6B0
 * Callers:
 *     CcInitializeCacheManager @ 0x140C15A88 (CcInitializeCacheManager.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140AC25B4 (CcSetTelemetryPeriodicTimer.c)
 */

char __fastcall CcInitializeTelemetry(int a1)
{
  char result; // al

  if ( a1 == 1 )
  {
    memset_0(&CcTelemetryGlobalData, 0, 0x210uLL);
    KeQueryPerformanceCounter(&stru_140F8E4C8);
    qword_140F8E4D8 = MEMORY[0xFFFFF78000000014];
    qword_140F8E4D0 = MEMORY[0xFFFFF78000000014];
    qword_140F8E4F0 = 864000000000LL;
    result = 0;
    *(__m128i *)&DueTime.LowPart = _mm_load_si128((const __m128i *)&_xmm);
    if ( (unsigned int)CcDisableTelemetryRegKeyAtInit <= 1 )
      byte_140F8E501 = CcDisableTelemetryRegKeyAtInit != 0;
    *(_QWORD *)&Timer.Header.Lock = 8LL;
    stru_140F8E6B0.WorkerRoutine = (void (__fastcall *)(void *))CcTelemetryPeriodicTimerCallback;
    stru_140F8E6B0.Parameter = &stru_140F8E6B0;
    Timer.Header.WaitListHead.Blink = &Timer.Header.WaitListHead;
    Timer.Header.WaitListHead.Flink = &Timer.Header.WaitListHead;
    stru_140F8E630.DeferredRoutine = (PKDEFERRED_ROUTINE)CcTelemetryPeriodicTimerDpc;
    stru_140F8E6B0.List.Flink = 0LL;
    Timer.DueTime.QuadPart = 0LL;
    Timer.Period = 0;
    Timer.Processor = 0;
    stru_140F8E630.TargetInfoAsUlong = 275;
    stru_140F8E630.DeferredContext = 0LL;
    stru_140F8E630.DpcData = 0LL;
    stru_140F8E630.ProcessorHistory = 0LL;
  }
  else
  {
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06BF8, 0LL, 0LL);
    result = 0;
    CcTelemetryGlobalData = 1;
    if ( !byte_140F8E501 )
      return CcSetTelemetryPeriodicTimer((LARGE_INTEGER)-9000000000LL);
  }
  return result;
}
