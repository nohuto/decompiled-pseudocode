/*
 * XREFs of MmCheckProcessShadow @ 0x1404877A0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402BAB40 (MiCheckProcessShadow.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 */

__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  __int64 p_Blink; // rsi
  __int64 *v3; // rbx
  unsigned __int8 v4; // bl
  __int64 v5; // rbp
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v3 = KeAbPreAcquire((__int64)&qword_140E2EB30, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2EB30, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2EB30, 0, v3, (unsigned __int64)&qword_140E2EB30);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = MiLockWorkingSetShared(p_Blink);
  v5 = MiCheckProcessShadow(p_Blink, 0x1Du);
  MiUnlockWorkingSetShared(p_Blink, v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2EB30, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E2EB30);
  KeAbPostRelease((ULONG_PTR)&qword_140E2EB30);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
