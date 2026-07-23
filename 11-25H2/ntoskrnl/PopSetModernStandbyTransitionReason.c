/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x1404B66AC
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

void __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rsi
  KIRQL v5; // al
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( byte_140E0B688 != a1 )
  {
    byte_140E0B688 = a1;
    if ( a1 )
    {
      dword_140E0B68C = a2;
    }
    else
    {
      dword_140E0B690 = a2;
      qword_140E0B698 = InterruptTimePrecise.QuadPart;
    }
  }
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v5);
}
