/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x140A82DE8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcpInsertResourcePort @ 0x1408B4A38 (AlpcpInsertResourcePort.c)
 *     AlpcpRemoveResourcePort @ 0x1409EC66C (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  signed __int64 *v4; // rbx
  __int64 *v7; // rsi
  __int64 v8; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v4 = a1 + 44;
  v7 = KeAbPreAcquire((__int64)(a1 + 44), 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v7, (unsigned __int64)v4);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v3 + 16));
  v8 = *(_QWORD *)(v3 + 24);
  if ( a1 != (signed __int64 *)v8 )
  {
    AlpcpRemoveResourcePort(v8, v3);
    ObfDereferenceObject(*(PVOID *)(v3 + 24));
    PsReferenceSiloContext(a1);
    *(_QWORD *)(v3 + 24) = a1;
    AlpcpInsertResourcePort((__int64)a1, v3);
  }
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)a3 = 24;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v3 + 40);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(v3 + 48);
  AlpcpUnlockBlob(*(_QWORD *)(v3 + 16));
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 0LL;
}
