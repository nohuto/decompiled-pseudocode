/*
 * XREFs of PopReleaseTransitionLock @ 0x140AA56F0
 * Callers:
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140753280 (PopWnfHibernatePolicyCallback.c)
 *     PopNotifyPolicyDevice @ 0x14075A6B0 (PopNotifyPolicyDevice.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140A407A8 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PopUnlockAfterSleepWorker @ 0x140B67B90 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
 */

LONG __fastcall PopReleaseTransitionLock(int a1)
{
  LONG result; // eax

  PopTransitionLockOwnerThread = 0LL;
  PopTransitionLockAcquireReason = 0;
  result = KeSetEvent(&PopTransitionLock, 0, 0);
  if ( a1 != 7 )
    return PopDirectedDripsNotify(9, 0LL);
  return result;
}
