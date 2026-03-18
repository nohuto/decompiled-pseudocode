/*
 * XREFs of AlpcpUnlockBlobUncachedExclusive @ 0x14098BD4C
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
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpUnlockBlobUncachedExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 - 16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
  return KeAbPostRelease(v1);
}
