/*
 * XREFs of MiFinishResume @ 0x1404B3560
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiIterateOverPartitions @ 0x140489A44 (MiIterateOverPartitions.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140E2FF48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2FF48, 0, v3, (__int64)&qword_140E2FF48);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  MiIterateOverPartitions((__int64)MiMirrorPurgePartitionPages, a1);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E2FF48);
  KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5, v4);
  _InterlockedDecrement(&dword_140E37510);
  stru_140E30068.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140E30050, 0, 0);
}
