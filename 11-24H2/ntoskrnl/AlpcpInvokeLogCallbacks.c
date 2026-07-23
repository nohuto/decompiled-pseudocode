/*
 * XREFs of AlpcpInvokeLogCallbacks @ 0x140AA4A24
 * Callers:
 *     AlpcpLogClosePort @ 0x1407406B8 (AlpcpLogClosePort.c)
 *     AlpcpLogConnectFail @ 0x140740728 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x14074079C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x14074080C (AlpcpLogConnectSuccess.c)
 *     AlpcpLogUnwait @ 0x140740878 (AlpcpLogUnwait.c)
 *     AlpcpLogWaitForNewMessage @ 0x1407408E4 (AlpcpLogWaitForNewMessage.c)
 *     AlpcpLogWaitForReply @ 0x1407409E0 (AlpcpLogWaitForReply.c)
 *     AlpcpLogReceiveMessage @ 0x14089BECC (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140AA49B4 (AlpcpLogSendMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall AlpcpInvokeLogCallbacks(__int64 a1, unsigned int a2)
{
  char *v4; // rbx
  PVOID *i; // rbx

  v4 = (char *)KeAbPreAcquire((__int64)&AlpcpLogLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&AlpcpLogLock, 0, v4, (__int64)&AlpcpLogLock);
  if ( v4 )
    v4[10] = 1;
  for ( i = (PVOID *)AlpcpLogCallbackListHead; i != &AlpcpLogCallbackListHead; i = (PVOID *)*i )
    guard_dispatch_icall_no_overrides(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&AlpcpLogLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&AlpcpLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
}
