/*
 * XREFs of AlpcpQueryRemoteView @ 0x140A320FC
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x140AC1D10 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140411C00 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpLocateView @ 0x14089C718 (AlpcpLocateView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpQueryRemoteView(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  volatile signed __int64 *v6; // rbx
  char *v7; // rsi
  unsigned int v8; // edi
  void *v9; // rsi
  ULONG_PTR v10; // rbx
  _QWORD *View; // rax

  v3 = *(_QWORD **)(a1 + 16);
  v6 = v3 - 2;
  v7 = (char *)KeAbPreAcquire((__int64)(v3 - 2), 0LL);
  if ( _InterlockedCompareExchange64(v3 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3 - 2, 0, v7, (__int64)(v3 - 2));
  v8 = 0;
  if ( v7 )
    v7[10] = 1;
  if ( !*v3 )
    goto LABEL_15;
  v9 = (void *)v3[1];
  if ( !v9 )
    goto LABEL_15;
  if ( (*(_DWORD *)(*v3 + 416LL) & 0x1000) == 0 )
    v9 = (void *)*v3;
  if ( ObReferenceObjectSafe((__int64)v9) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3 - 2);
    KeAbPostRelease((ULONG_PTR)(v3 - 2));
    v10 = *(_QWORD *)(a2 + 16);
    AlpcpLockForCachedReferenceBlob(v10);
    View = AlpcpLocateView(v10, (__int64)v9);
    if ( View )
    {
      *(_DWORD *)a3 = 24;
      *(_QWORD *)(a3 + 16) = View[5];
      *(_QWORD *)(a3 + 8) = View[6];
    }
    else
    {
      v8 = -1073741670;
    }
    AlpcpUnlockBlob(v10);
    ObfDereferenceObject(v9);
    return v8;
  }
  else
  {
LABEL_15:
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v3 - 2);
    KeAbPostRelease((ULONG_PTR)(v3 - 2));
    return 3221225527LL;
  }
}
