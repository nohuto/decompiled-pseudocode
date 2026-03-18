/*
 * XREFs of PopAcquireTransitionLock @ 0x140A8DB1C
 * Callers:
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140747190 (PopWnfHibernatePolicyCallback.c)
 *     PopNotifyPolicyDevice @ 0x14074E0E0 (PopNotifyPolicyDevice.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140B57CC4 (PopAcquireTransitionLockAfterSleep.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140A667C0 (PopDirectedDripsNotify.c)
 */

int __fastcall PopAcquireTransitionLock(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 != 7 )
    PopDirectedDripsNotify(8, 0LL);
  LODWORD(CurrentThread) = KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopTransitionLockAcquireReason = a1;
  if ( a1 != 1 )
  {
    CurrentThread = KeGetCurrentThread();
    PopTransitionLockOwnerThread = (__int64)CurrentThread;
  }
  return (int)CurrentThread;
}
