/*
 * XREFs of PopSetDisplayStatus @ 0x140A22500
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     PopReleaseAdaptiveLock @ 0x1409635F4 (PopReleaseAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x140A229B4 (PopSetSessionDisplayStatus.c)
 */

void __fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int SessionId; // ebx
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v4; // r8

  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  LOBYTE(v4) = 1;
  PopAdpmLockThread = (__int64)KeGetCurrentThread();
  PopAdaptiveContext = 0;
  PopSetSessionDisplayStatus(SessionId, a1, v4);
  PopReleaseAdaptiveLock();
}
