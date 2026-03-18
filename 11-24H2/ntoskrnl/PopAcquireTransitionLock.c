/*
 * XREFs of PopAcquireTransitionLock @ 0x140A928AC
 * Callers:
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 *     PopWnfHibernatePolicyCallback @ 0x140753280 (PopWnfHibernatePolicyCallback.c)
 *     PopNotifyPolicyDevice @ 0x14075A6B0 (PopNotifyPolicyDevice.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140B67AF4 (PopAcquireTransitionLockAfterSleep.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
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
