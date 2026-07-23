/*
 * XREFs of PopThermalEventTransitionDisableDeepSleep @ 0x1404CFE44
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140A9C104 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 */

void __fastcall PopThermalEventTransitionDisableDeepSleep(unsigned int a1)
{
  KIRQL v2; // di

  if ( a1 <= 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    if ( byte_140F0AE88 || a1 < dword_140F0AE8C )
    {
      PopDeepSleepSetDisengageReason(0xAu);
      dword_140F0AE8C = a1;
      byte_140F0AE88 = 0;
      KeSetTimer2((__int64)&unk_140F0AE90, (LARGE_INTEGER)(a1 != 0 ? -50000000LL : -600000000LL), 0LL, 0LL);
      byte_140F0AF18 = 1;
    }
    KeReleaseSpinLock(&PopThermalEventTransitionContext, v2);
  }
}
