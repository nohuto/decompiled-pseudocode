/*
 * XREFs of PopSetModernStandbyTransitionReason @ 0x1404B615C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 */

void __fastcall PopSetModernStandbyTransitionReason(char a1, int a2)
{
  __int64 InterruptTimePrecise; // rsi
  KIRQL v5; // al
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v6);
  v5 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( byte_140E0B7E8 != a1 )
  {
    byte_140E0B7E8 = a1;
    if ( a1 )
    {
      dword_140E0B7EC = a2;
    }
    else
    {
      dword_140E0B7F0 = a2;
      qword_140E0B7F8 = InterruptTimePrecise;
    }
  }
  KeReleaseSpinLock(&PopModernStandbyTransitionInfo, v5);
}
