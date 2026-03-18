/*
 * XREFs of MiSendParkedCoreUpdateToAllChildPartitions @ 0x140475D70
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiIterateOverPartitions @ 0x140489A44 (MiIterateOverPartitions.c)
 */

__int64 MiSendParkedCoreUpdateToAllChildPartitions()
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // zf
  KIRQL v5; // al

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    v1 = KeAbPreAcquire((__int64)&qword_140E2FF48, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2FF48, 0, v1, (__int64)&qword_140E2FF48);
    if ( v1 )
      *((_BYTE *)v1 + 10) = 1;
    MiIterateOverPartitions(MiMoveBackgroundZeroThreads, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E2FF48);
    KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v3, v2);
    v5 = ExAcquireSpinLockExclusive(&SpinLock);
    if ( stru_140E2ED50.Parameter == (void *)1 )
      break;
    stru_140E2ED50.Parameter = (void *)1;
    MiReleaseSpinLockExclusive(&SpinLock, v5);
  }
  stru_140E2ED50.Parameter = 0LL;
  return MiReleaseSpinLockExclusive(&SpinLock, v5);
}
