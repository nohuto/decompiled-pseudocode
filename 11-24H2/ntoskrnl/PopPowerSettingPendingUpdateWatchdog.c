/*
 * XREFs of PopPowerSettingPendingUpdateWatchdog @ 0x1405D0808
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x140765DA8 (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

bool __fastcall PopPowerSettingPendingUpdateWatchdog(unsigned __int64 a1)
{
  bool v2; // bl
  KIRQL v3; // al

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  if ( PopPendingPowerSettingUpdateTime )
    v2 = MEMORY[0xFFFFF78000000008] - PopPendingPowerSettingUpdateTime >= a1;
  KeReleaseSpinLock(&PopPendingPowerSettingUpdateLock, v3);
  return v2;
}
