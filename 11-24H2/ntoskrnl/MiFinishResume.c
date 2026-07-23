/*
 * XREFs of MiFinishResume @ 0x1404ADDD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiIterateOverPartitions @ 0x140484754 (MiIterateOverPartitions.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v3; // rdi
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&qword_140E30088, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E30088, 0, v3, (__int64)&qword_140E30088);
  if ( v3 )
    v3[10] = 1;
  MiIterateOverPartitions((__int64)MiMirrorPurgePartitionPages, a1);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E30088);
  KeAbPostRelease((ULONG_PTR)&qword_140E30088);
  v4 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v4 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  _InterlockedDecrement(&dword_140E37650);
  stru_140E301A8.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140E30190, 0, 0);
}
