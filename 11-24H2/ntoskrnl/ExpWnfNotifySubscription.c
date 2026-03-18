/*
 * XREFs of ExpWnfNotifySubscription @ 0x1409F4780
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140A1946C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x1408AE0F0 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfStartKernelDispatcher @ 0x1409F4874 (ExpWnfStartKernelDispatcher.c)
 */

int __fastcall ExpWnfNotifySubscription(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  signed __int64 *v4; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rbp
  __int64 v10; // rax
  struct _KEVENT *v11; // rcx

  v4 = (signed __int64 *)(a1 + 112);
  v8 = 0LL;
  v9 = KeAbPreAcquire(a1 + 112, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v9, (__int64)v4);
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
