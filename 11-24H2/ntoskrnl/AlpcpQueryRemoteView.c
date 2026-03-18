/*
 * XREFs of AlpcpQueryRemoteView @ 0x14088A6E4
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x14088A87C (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ObReferenceObjectSafe @ 0x14041D310 (ObReferenceObjectSafe.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140890590 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpLocateView @ 0x1408930E8 (AlpcpLocateView.c)
 */

__int64 __fastcall AlpcpQueryRemoteView(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  volatile signed __int64 *v6; // rbx
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  void *v9; // rsi
  ULONG_PTR v10; // rbx
  __int64 View; // rax

  v3 = *(_QWORD **)(a1 + 16);
  v6 = v3 - 2;
  v7 = KeAbPreAcquire((__int64)(v3 - 2), 0LL);
  if ( _InterlockedCompareExchange64(v3 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3 - 2, 0, v7, (__int64)(v3 - 2));
  v8 = 0;
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
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
    View = AlpcpLocateView(v10, v9);
    if ( View )
    {
      *(_DWORD *)a3 = 24;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(View + 40);
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(View + 48);
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
