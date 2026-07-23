/*
 * XREFs of PopThermalEventTransitionDisableDeepSleep @ 0x1404D7BC4
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140A9AFB4 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 */

void __fastcall PopThermalEventTransitionDisableDeepSleep(unsigned int a1)
{
  KIRQL v2; // di

  if ( a1 <= 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    if ( byte_140F0A5E8 || a1 < dword_140F0A5EC )
    {
      PopDeepSleepSetDisengageReason(0xAu);
      dword_140F0A5EC = a1;
      byte_140F0A5E8 = 0;
      KeSetTimer2((__int64)&unk_140F0A5F0, (LARGE_INTEGER)(a1 != 0 ? -50000000LL : -600000000LL), 0LL, 0LL);
      byte_140F0A678 = 1;
    }
    KeReleaseSpinLock(&PopThermalEventTransitionContext, v2);
  }
}
