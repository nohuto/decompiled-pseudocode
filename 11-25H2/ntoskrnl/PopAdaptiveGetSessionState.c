/*
 * XREFs of PopAdaptiveGetSessionState @ 0x140A1C024
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409636AC (PopAdaptiveGetSessionStateUnsafe.c)
 */

void __fastcall PopAdaptiveGetSessionState(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  PopAdaptiveGetSessionStateUnsafe(a1, a2, a3);
  PopReleaseAdaptiveLock();
}
