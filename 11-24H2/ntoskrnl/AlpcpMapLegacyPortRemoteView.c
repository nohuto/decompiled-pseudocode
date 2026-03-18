/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x140A874FC
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1409F4F00 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpInsertResourcePort @ 0x140893BB8 (AlpcpInsertResourcePort.c)
 *     AlpcpRemoveResourcePort @ 0x1409E65DC (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  signed __int64 *v4; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v4 = a1 + 44;
  v7 = KeAbPreAcquire((__int64)(a1 + 44), 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v7, (__int64)v4);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v3 + 16));
  v11 = *(_QWORD *)(v3 + 24);
  if ( a1 != (signed __int64 *)v11 )
  {
    AlpcpRemoveResourcePort(v11, v3);
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
  AlpcpUnlockBlob(*(_QWORD *)(v3 + 16), v8, v9, v10);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 0LL;
}
