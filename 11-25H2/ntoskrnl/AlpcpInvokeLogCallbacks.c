/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x140AA4914
 * Callers:
 *     AlpcpLogClosePort @ 0x140736768 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x1407367D8 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14073684C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407368BC (AlpcpLogConnectSuccess.c)
 *     AlpcpLogUnwait @ 0x140736928 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x140736994 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x140736A90 (AlpcpLogWaitForReply.c)
 *     AlpcpLogReceiveMessage @ 0x1408AAF48 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140AA48A4 (AlpcpLogSendMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall AlpcpInvokeLogCallbacks(__int64 a1)
{
  __int64 *v2; // rbx
  PVOID *i; // rbx

  v2 = KeAbPreAcquire((__int64)&AlpcpLogLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&AlpcpLogLock, 0, v2, (unsigned __int64)&AlpcpLogLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    guard_dispatch_icall_no_overrides(a1);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
