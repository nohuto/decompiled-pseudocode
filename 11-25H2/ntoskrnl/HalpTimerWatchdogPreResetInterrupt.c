/*
 * XREFs of HalpTimerWatchdogPreResetInterrupt @ 0x14055C640
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerWatchdogResetCountdown @ 0x140278F80 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerWatchdogPreResetInterrupt()
{
  __int64 InternalData; // rax
  ULONG_PTR v1; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+18h] BYREF

  InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
  guard_dispatch_icall_no_overrides(InternalData);
  if ( (unsigned __int64)HalpTimerWatchdogResetCount <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v1 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset < (unsigned __int64)HalpTimerWatchdogResetCount >> 1 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      KeBugCheckEx(
        0x101u,
        v1,
        (unsigned __int64)HalpTimerWatchdogResetCount >> 1,
        InterruptTimePrecise.QuadPart,
        (unsigned int)KiClockTimerOwner);
    }
    HalpTimerWatchdogResetCountdown();
  }
  return 1;
}
