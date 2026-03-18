/*
 * XREFs of PopThermalEventTransitionDisableDeepSleep @ 0x1404D69F4
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140AA0D74 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 */

void __fastcall PopThermalEventTransitionDisableDeepSleep(unsigned int a1)
{
  KIRQL v2; // di

  if ( a1 <= 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    if ( byte_140F0AB88 || a1 < dword_140F0AB8C )
    {
      PopDeepSleepSetDisengageReason(0xAu);
      dword_140F0AB8C = a1;
      byte_140F0AB88 = 0;
      KeSetTimer2((__int64)&unk_140F0AB90, a1 != 0 ? -50000000LL : -600000000LL, 0LL, 0LL);
      byte_140F0AC18 = 1;
    }
    KeReleaseSpinLock(&PopThermalEventTransitionContext, v2);
  }
}
