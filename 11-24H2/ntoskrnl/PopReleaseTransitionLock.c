/*
 * XREFs of PopReleaseTransitionLock @ 0x140AA0760
 * Callers:
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x1407515A0 (PopWnfHibernatePolicyCallback.c)
 *     PopNotifyPolicyDevice @ 0x140758DA0 (PopNotifyPolicyDevice.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140A36088 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 *     PopUnlockAfterSleepWorker @ 0x140B69CD0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140A627B0 (PopDirectedDripsNotify.c)
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
