/*
 * XREFs of PopThermalEventTransitionEnableDeepSleep @ 0x1404F7764
 * Callers:
 *     NtInitiatePowerAction @ 0x140748B20 (NtInitiatePowerAction.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 */

void __fastcall PopThermalEventTransitionEnableDeepSleep(int a1)
{
  KIRQL v1; // bl
  __int64 v2; // r8
  __int64 v3; // r9

  if ( (unsigned int)(a1 - 3) <= 3 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
    KeCancelTimer2((__int64)&unk_140F0A5F0, 0LL, v2, v3);
    byte_140F0A678 = 0;
    PopDeepSleepClearDisengageReason(0xAu);
    KeReleaseSpinLock(&PopThermalEventTransitionContext, v1);
  }
}
