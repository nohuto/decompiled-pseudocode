/*
 * XREFs of AlpcpLockBlobExclusive @ 0x14098BD84
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x140735B00 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x14098B330 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 *     AlpcpDeletePort @ 0x14098B9F0 (AlpcpDeletePort.c)
 *     AlpcpWalkConnectionList @ 0x14098C700 (AlpcpWalkConnectionList.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall AlpcpLockBlobExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 *result; // rax
  __int64 *v3; // rbx

  v1 = (unsigned __int64 *)(a1 - 16);
  result = KeAbPreAcquire(a1 - 16, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
