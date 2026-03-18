/*
 * XREFs of PopIncrementPowerSettingPendingUpdates @ 0x140354CB8
 * Callers:
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140965E50 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PopIncrementPowerSettingPendingUpdates(char a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerSettingUpdateLock);
  _InterlockedIncrement(&PopPendingPowerSettingUpdates);
  if ( a1 )
    ++PopPendingPowerSettingUpdatesQueued;
  if ( PopPendingPowerSettingUpdates == 1 )
  {
    PopPendingPowerSettingUpdateTime = MEMORY[0xFFFFF78000000008];
    PopDeepSleepSetDisengageReason(3LL);
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
