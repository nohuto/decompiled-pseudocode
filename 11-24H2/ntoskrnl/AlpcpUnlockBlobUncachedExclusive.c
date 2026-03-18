/*
 * XREFs of AlpcpUnlockBlobUncachedExclusive @ 0x1408963A0
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
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 */

__int64 __fastcall AlpcpUnlockBlobUncachedExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  return KeAbPostRelease(v1);
}
