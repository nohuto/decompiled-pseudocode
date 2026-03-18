/*
 * XREFs of HalpTimerWatchdogPreResetInterrupt @ 0x14055EF40
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerWatchdogResetCountdown @ 0x14033A1F0 (HalpTimerWatchdogResetCountdown.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerWatchdogPreResetInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG_PTR v4; // rbx
  ULONG_PTR InterruptTimePrecise; // rax
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
  guard_dispatch_icall_no_overrides(InternalData, v1, v2, v3);
  if ( (unsigned __int64)HalpTimerWatchdogResetCount <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset < (unsigned __int64)HalpTimerWatchdogResetCount >> 1 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v7);
      KeBugCheckEx(
        0x101u,
        v4,
        (unsigned __int64)HalpTimerWatchdogResetCount >> 1,
        InterruptTimePrecise,
        (unsigned int)KiClockTimerOwner);
    }
    HalpTimerWatchdogResetCountdown();
  }
  return 1;
}
