/*
 * XREFs of PopFxRegisterDeviceWithPep @ 0x1404BEBF8
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopPluginRegisterDevice @ 0x1404BED60 (PopPluginRegisterDevice.c)
 *     PopPepRegisterDevice @ 0x140A934A0 (PopPepRegisterDevice.c)
 */

__int64 __fastcall PopFxRegisterDeviceWithPep(ULONG_PTR a1, int a2, __int64 a3, int a4)
{
  ULONG_PTR v7; // rbp
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rdi
  ULONG_PTR *i; // rdi
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0LL;
  v7 = a1;
  if ( a1 )
  {
    v8 = PopPluginRegisterDevice(a1, v13, (__int64)&v14);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0;
    --CurrentThread->KernelApcDisable;
    v10 = (char *)KeAbPreAcquire((__int64)&PopFxPluginLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&PopFxPluginLock, 0, v10, (__int64)&PopFxPluginLock);
    if ( v10 )
      v10[10] = 1;
    for ( i = (ULONG_PTR *)PopFxPluginList; i != &PopFxPluginList; i = (ULONG_PTR *)*i )
    {
      v7 = (ULONG_PTR)i;
      v8 = PopPluginRegisterDevice((ULONG_PTR)i, v13, (__int64)&v14);
      if ( v8 )
        break;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    KeLeaveCriticalRegion();
  }
  if ( v8 )
  {
    v8 = 2;
    *(_QWORD *)(a3 + 72) = v14;
    *(_QWORD *)(a3 + 64) = v7;
  }
  return PopPepRegisterDevice(a2, a3, a4, v8, a3 + 56);
}
