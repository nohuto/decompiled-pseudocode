/*
 * XREFs of PopUserPresenceHostStateChange @ 0x140A86AB0
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409651E8 (PopEvaluateGlobalUserStatus.c)
 */

void __fastcall PopUserPresenceHostStateChange(int a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  if ( PopHostGlobalUserPresenceState != a1 )
  {
    PopHostGlobalUserPresenceState = a1;
    PopEvaluateGlobalUserStatus();
  }
  PopReleaseAdaptiveLock();
}
