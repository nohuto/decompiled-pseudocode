/*
 * XREFs of PoFxSystemLatencyNotify @ 0x1402057A8
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140203AF8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall PoFxSystemLatencyNotify(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // di
  __int64 v4; // rbx
  ULONG_PTR i; // rbx
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(&PopFxPluginLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopFxPluginLock, 0LL, v4, &PopFxPluginLock);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  for ( i = PopFxPluginList; (ULONG_PTR *)i != &PopFxPluginList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 96) )
    {
      v7 = a1;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(16LL, &v7) )
      {
        if ( !v3 )
          v3 = *(_DWORD *)(i + 24) >= 0;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  KeLeaveCriticalRegion();
  return v3;
}
