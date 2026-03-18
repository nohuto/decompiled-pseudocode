/*
 * XREFs of PopFxPlatformStateAvailable @ 0x1403CAA54
 * Callers:
 *     PopPepUpdateIdleStateRefCount @ 0x140315390 (PopPepUpdateIdleStateRefCount.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1403CA934 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1403CAB98 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1403CAC3C (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x1403CBB1C (PopIdleWakeNotifyDevicesActive.c)
 */

__int64 __fastcall PopFxPlatformStateAvailable(unsigned int a1, char a2)
{
  __int64 v2; // rdi
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // rdx
  KIRQL v7; // bl
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx

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
      PopFxSetDripsBlockedByDeviceActivity(0LL);
      PopIdleWakeNotifyDevicesActive(0LL);
      PopUpdateNonAttributedCpuTimeReference(0);
      return PopDeepSleepClearDisengageReason(6LL);
    }
    else
    {
      LOBYTE(v8) = 1;
      PopFxSetDripsBlockedByDeviceActivity(v8);
      LOBYTE(v10) = 1;
      PopIdleWakeNotifyDevicesActive(v10);
      PopUpdateNonAttributedCpuTimeReference(1);
      return PopDeepSleepSetDisengageReason(6LL);
    }
  }
  return result;
}
