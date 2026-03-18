/*
 * XREFs of PopReleaseTransitionLock @ 0x140AA0354
 * Callers:
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140747190 (PopWnfHibernatePolicyCallback.c)
 *     PopNotifyPolicyDevice @ 0x14074E0E0 (PopNotifyPolicyDevice.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140A3BF88 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PopDirectedDripsNotify @ 0x140A667C0 (PopDirectedDripsNotify.c)
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
