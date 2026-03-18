/*
 * XREFs of MiFinishResume @ 0x1404743C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiIterateOverPartitions @ 0x140474618 (MiIterateOverPartitions.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v3; // rdi
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140E2FD08, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FD08, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2FD08, 0, v3, (unsigned __int64)&qword_140E2FD08);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  MiIterateOverPartitions(MiMirrorPurgePartitionPages, a1);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FD08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E2FD08);
  KeAbPostRelease((ULONG_PTR)&qword_140E2FD08);
  v4 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v4 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  _InterlockedDecrement(&dword_140E372D0);
  stru_140E2FE28.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140E2FE10, 0, 0);
}
