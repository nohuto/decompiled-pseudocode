/*
 * XREFs of MmCheckProcessShadow @ 0x1404870F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402E1370 (MiCheckProcessShadow.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

unsigned __int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  __int64 p_Blink; // rsi
  _QWORD *v3; // rbx
  unsigned __int8 v4; // bl
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v3 = KeAbPreAcquire((__int64)&qword_140E2ED70, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2ED70, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2ED70, 0, v3, (__int64)&qword_140E2ED70);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = MiLockWorkingSetShared(p_Blink);
  v5 = MiCheckProcessShadow(p_Blink, 29);
  MiUnlockWorkingSetShared(p_Blink, v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2ED70, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E2ED70);
  KeAbPostRelease((ULONG_PTR)&qword_140E2ED70);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v7, v6);
  return v5;
}
