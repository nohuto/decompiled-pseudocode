/*
 * XREFs of MiSendParkedCoreUpdateToAllChildPartitions @ 0x140471E10
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiIterateOverPartitions @ 0x140484754 (MiIterateOverPartitions.c)
 */

__int64 MiSendParkedCoreUpdateToAllChildPartitions()
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v1; // rdi
  bool v2; // zf
  KIRQL v3; // al

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    v1 = (char *)KeAbPreAcquire((__int64)&qword_140E30088, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E30088, 0, v1, (__int64)&qword_140E30088);
    if ( v1 )
      v1[10] = 1;
    MiIterateOverPartitions(MiMoveBackgroundZeroThreads, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E30088);
    KeAbPostRelease((ULONG_PTR)&qword_140E30088);
    v2 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v2 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v3 = ExAcquireSpinLockExclusive(&dword_140E2ED80);
    if ( stru_140E2EE90.Parameter == (void *)1 )
      break;
    stru_140E2EE90.Parameter = (void *)1;
    MiReleaseSpinLockExclusive(&dword_140E2ED80, v3);
  }
  stru_140E2EE90.Parameter = 0LL;
  return MiReleaseSpinLockExclusive(&dword_140E2ED80, v3);
}
