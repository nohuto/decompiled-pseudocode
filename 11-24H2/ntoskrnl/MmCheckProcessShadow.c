/*
 * XREFs of MmCheckProcessShadow @ 0x140482160
 * Callers:
 *     <none>
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140242C50 (MiCheckProcessShadow.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  __int64 p_Blink; // rsi
  __int64 v3; // rdx
  char *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // bl
  __int64 v8; // rbp
  bool v9; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v4 = (char *)KeAbPreAcquire((__int64)&qword_140E2EEB0, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2EEB0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2EEB0, 0, v4, (__int64)&qword_140E2EEB0);
  if ( v4 )
    v4[10] = 1;
  v7 = MiLockWorkingSetShared(p_Blink, v3, v5, v6);
  v8 = MiCheckProcessShadow(p_Blink, 0x1DuLL);
  MiUnlockWorkingSetShared(p_Blink, v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2EEB0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E2EEB0);
  KeAbPostRelease((ULONG_PTR)&qword_140E2EEB0);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v8;
}
