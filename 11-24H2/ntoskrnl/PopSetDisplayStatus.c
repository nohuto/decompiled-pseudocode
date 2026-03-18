/*
 * XREFs of PopSetDisplayStatus @ 0x1409BA3E8
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     PopSetSessionDisplayStatus @ 0x1409BA88C (PopSetSessionDisplayStatus.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int SessionId; // ebx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  PopSetSessionDisplayStatus(SessionId, a1);
  return PopReleaseAdaptiveLock(v5, v4, v6, v7, 0LL);
}
