/*
 * XREFs of PopAdaptiveGetSessionState @ 0x1409BB2A4
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409BB45C (PopAdaptiveGetSessionStateUnsafe.c)
 */

void __fastcall PopAdaptiveGetSessionState(unsigned int a1, __int64 a2, __int64 a3)
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
