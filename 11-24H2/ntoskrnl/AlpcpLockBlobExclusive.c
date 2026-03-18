/*
 * XREFs of AlpcpLockBlobExclusive @ 0x14089666C
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x140741B20 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpCreateClientPort @ 0x1408649C0 (AlpcpCreateClientPort.c)
 *     AlpcpDeletePort @ 0x14088B9B0 (AlpcpDeletePort.c)
 *     AlpcpDisconnectPort @ 0x14088C638 (AlpcpDisconnectPort.c)
 *     AlpcpWalkConnectionList @ 0x14088C9A4 (AlpcpWalkConnectionList.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140896970 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x140A1EAA0 (AlpcConnectionDestroyProcedure.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall AlpcpLockBlobExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 - 16);
  result = (__int64)KeAbPreAcquire(a1 - 16, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
