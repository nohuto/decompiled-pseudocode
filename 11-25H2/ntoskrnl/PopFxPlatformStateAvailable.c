/*
 * XREFs of PopFxPlatformStateAvailable @ 0x140355F24
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x1403578B4 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x14026A140 (PopUpdateNonAttributedCpuTimeReference.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140354AE8 (PopIdleWakeNotifyDevicesActive.c)
 *     PopDeepSleepSetDisengageReason @ 0x140354D44 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140354F38 (PopDeepSleepClearDisengageReason.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1403559B0 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140356068 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(unsigned int a1, char a2)
{
  __int64 v2; // rdi
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // rdx
  KIRQL v7; // bl
  __int64 result; // rax

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
      PopIdleWakeNotifyDevicesActive(0);
      PopUpdateNonAttributedCpuTimeReference(0);
      return PopDeepSleepClearDisengageReason(6u);
    }
    else
    {
      PopFxSetDripsBlockedByDeviceActivity(1);
      PopIdleWakeNotifyDevicesActive(1u);
      PopUpdateNonAttributedCpuTimeReference(1);
      return PopDeepSleepSetDisengageReason(6u);
    }
  }
  return result;
}
