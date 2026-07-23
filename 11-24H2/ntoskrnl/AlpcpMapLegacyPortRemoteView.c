/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x140A839EC
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpInsertResourcePort @ 0x1408966E0 (AlpcpInsertResourcePort.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRemoveResourcePort @ 0x1409E0E6C (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  signed __int64 *v4; // rbx
  char *v7; // rsi
  __int64 v8; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v4 = a1 + 44;
  v7 = (char *)KeAbPreAcquire((__int64)(a1 + 44), 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v7, (__int64)v4);
  if ( v7 )
    v7[10] = 1;
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
