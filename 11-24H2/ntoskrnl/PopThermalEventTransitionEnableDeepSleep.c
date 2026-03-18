/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x1404F9EE4
 * Callers:
 *     NtInitiatePowerAction @ 0x140754BF0 (NtInitiatePowerAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 */

void __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  KIRQL v1; // bl
  __int64 v2; // r8
  __int64 v3; // r9

  if ( (unsigned int)(a1 - 3) <= 3 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    KeCancelTimer2((__int64)&unk_140F0AB90, 0LL, v2, v3);
    byte_140F0AC18 = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KeReleaseSpinLock(&PopThermalEventTransitionContext, v1);
  }
}
