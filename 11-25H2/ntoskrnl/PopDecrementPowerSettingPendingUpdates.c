/*
 * XREFs of PopDecrementPowerSettingPendingUpdates @ 0x140354EA8
 * Callers:
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140965E50 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PopDecrementPowerSettingPendingUpdates(char a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  if ( a1 )
  {
    _InterlockedAdd(&PopPendingPowerSettingUpdates, -PopPendingPowerSettingUpdatesQueued);
    PopPendingPowerSettingUpdatesQueued = 0;
  }
  else
  {
    _InterlockedDecrement(&PopPendingPowerSettingUpdates);
  }
  if ( !PopPendingPowerSettingUpdates )
  {
    PopPendingPowerSettingUpdateTime = 0LL;
    PopDeepSleepClearDisengageReason(3LL);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopPendingPowerSettingUpdateLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v2;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(v2);
  return result;
}
