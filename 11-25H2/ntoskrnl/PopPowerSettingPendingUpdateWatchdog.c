/*
 * XREFs of PopPowerSettingPendingUpdateWatchdog @ 0x1405CE808
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x1407563C8 (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
