/*
 * XREFs of ExpWnfNotifySubscription @ 0x1409F4E98
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140A13B0C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1408E5F10 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x1409F4F8C (ExpWnfStartKernelDispatcher.c)
 */

int __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rbp
  __int64 v10; // rax
  struct _KEVENT *v11; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v9, (unsigned __int64)v4);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( *(_QWORD *)(a2 + 48) && (unsigned int)ExpWnfInsertSubscriptionInPendingQueue(a2, a3) )
    v8 = *(_QWORD *)(a2 + 40);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  LODWORD(v10) = KeAbPostRelease((ULONG_PTR)v4);
  if ( v8 )
  {
    if ( PsInitialSystemProcess == (PEPROCESS)v8 )
    {
      LODWORD(v10) = ExpWnfStartKernelDispatcher(a4);
    }
    else
    {
      v10 = *(_QWORD *)(v8 + 1512);
      v11 = *(struct _KEVENT **)(v10 + 128);
      if ( v11 )
        LODWORD(v10) = KeSetEvent(v11, 1, 0);
    }
  }
  return v10;
}
