/*
 * XREFs of KiStartSavingSupervisorState @ 0x140B57290
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiUpdateSavedSupervisorState @ 0x140B57330 (KiUpdateSavedSupervisorState.c)
 */

__int64 KiStartSavingSupervisorState()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  unsigned int updated; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&KiSupervisorXStateFeaturesLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&KiSupervisorXStateFeaturesLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(
      &KiSupervisorXStateFeaturesLock,
      (__int64)v1,
      (__int64)&KiSupervisorXStateFeaturesLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  updated = KiUpdateSavedSupervisorState();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiSupervisorXStateFeaturesLock);
  KeAbPostRelease((ULONG_PTR)&KiSupervisorXStateFeaturesLock);
  KeLeaveCriticalRegion();
  return updated;
}
