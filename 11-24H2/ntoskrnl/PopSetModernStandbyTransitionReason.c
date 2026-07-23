/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x1404B0A1C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rsi
  KIRQL v5; // al
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( byte_140E0B868 != a1 )
  {
    byte_140E0B868 = a1;
    if ( a1 )
    {
      dword_140E0B86C = a2;
    }
    else
    {
      dword_140E0B870 = a2;
      qword_140E0B878 = InterruptTimePrecise.QuadPart;
    }
  }
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v5);
}
