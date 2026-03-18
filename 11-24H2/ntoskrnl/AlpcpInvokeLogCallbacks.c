/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x140AA9974
 * Callers:
 *     AlpcpLogClosePort @ 0x140742788 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1407427F8 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14074286C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407428DC (AlpcpLogConnectSuccess.c)
 *     AlpcpLogUnwait @ 0x140742948 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1407429B4 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x140742AB0 (AlpcpLogWaitForReply.c)
 *     AlpcpLogReceiveMessage @ 0x1408928A0 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140AA9904 (AlpcpLogSendMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID *i; // rbx

  v4 = KeAbPreAcquire((__int64)&AlpcpLogLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&AlpcpLogLock, 0, v4, (__int64)&AlpcpLogLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    guard_dispatch_icall_no_overrides(a1, a2, v5, v6);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
