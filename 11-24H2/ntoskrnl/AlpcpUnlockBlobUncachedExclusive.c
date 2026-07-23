/*
 * XREFs of AlpcpUnlockBlobUncachedExclusive @ 0x14089E840
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
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall AlpcpUnlockBlobUncachedExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  return KeAbPostRelease(v1);
}
