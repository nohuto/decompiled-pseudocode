/*
 * XREFs of PopFxPlatformStateAvailable @ 0x1403A5E38
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x1403A6EB0 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1403A5504 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1403A57D0 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1403A5F7C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140497BEC (PopIdleWakeNotifyDevicesActive.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(unsigned int a1, char a2)
{
  __int64 v2; // rdi
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // rdx
  KIRQL v7; // bl
  __int64 result; // rax
  __int64 v9; // rcx

  v2 = a1;
  v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  LOBYTE(v5) = a2;
  LOBYTE(v6) = 1;
  v7 = v4;
  PpmIdleCsVetoAccountingUpdateBlock(448 * v2 + PpmPlatformStates + 80, v6, v5);
  KeReleaseSpinLock(&PpmIdleVetoLock, v7);
  result = PpmPlatformStates;
  if ( (_DWORD)v2 == *(_DWORD *)PpmPlatformStates - 1 )
  {
    if ( a2 )
    {
      PopFxSetDripsBlockedByDeviceActivity(0);
      PopIdleWakeNotifyDevicesActive(0LL);
      PopUpdateNonAttributedCpuTimeReference(0);
      return PopDeepSleepClearDisengageReason(6u);
    }
    else
    {
      PopFxSetDripsBlockedByDeviceActivity(1);
      LOBYTE(v9) = 1;
      PopIdleWakeNotifyDevicesActive(v9);
      PopUpdateNonAttributedCpuTimeReference(1);
      return PopDeepSleepSetDisengageReason(6u);
    }
  }
  return result;
}
