/*
 * XREFs of MiSendParkedCoreUpdateToAllChildPartitions @ 0x140474500
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiIterateOverPartitions @ 0x140474618 (MiIterateOverPartitions.c)
 */

__int64 MiSendParkedCoreUpdateToAllChildPartitions()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v1; // rdi
  bool v2; // zf
  KIRQL v3; // al

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    v1 = KeAbPreAcquire((__int64)&qword_140E2FD08, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FD08, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2FD08, 0, v1, (unsigned __int64)&qword_140E2FD08);
    if ( v1 )
      *((_BYTE *)v1 + 10) = 1;
    MiIterateOverPartitions(MiMoveBackgroundZeroThreads, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FD08, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E2FD08);
    KeAbPostRelease((ULONG_PTR)&qword_140E2FD08);
    v2 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v2 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v3 = ExAcquireSpinLockExclusive(&dword_140E2EA00);
    if ( WorkItem.Parameter == (void *)1 )
      break;
    WorkItem.Parameter = (void *)1;
    MiReleaseSpinLockExclusive(&dword_140E2EA00, v3);
  }
  WorkItem.Parameter = 0LL;
  return MiReleaseSpinLockExclusive(&dword_140E2EA00, v3);
}
