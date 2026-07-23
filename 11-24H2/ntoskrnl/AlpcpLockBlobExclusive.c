/*
 * XREFs of AlpcpLockBlobExclusive @ 0x14089EB0C
 * Callers:
 *     NtAlpcRevokeSecurityContext @ 0x14073FA50 (NtAlpcRevokeSecurityContext.c)
 *     AlpcpCreateClientPort @ 0x140868FD0 (AlpcpCreateClientPort.c)
 *     AlpcpDeletePort @ 0x14088E9A0 (AlpcpDeletePort.c)
 *     AlpcpDisconnectPort @ 0x14088F628 (AlpcpDisconnectPort.c)
 *     AlpcpWalkConnectionList @ 0x14088F994 (AlpcpWalkConnectionList.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14089F010 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x140A13BA0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall AlpcpLockBlobExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  char *result; // rax
  char *v3; // rbx

  v1 = (unsigned __int64 *)(a1 - 16);
  result = (char *)KeAbPreAcquire(a1 - 16, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    v3[10] = 1;
  return result;
}
