/*
 * XREFs of CmFcpManagerProcessUsageDataProviders @ 0x140A8D7AC
 * Callers:
 *     CmFcpManagerFlushFeatureUsageDataWorker @ 0x1407D5040 (CmFcpManagerFlushFeatureUsageDataWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExBlockOnAddressPushLock @ 0x14036E7C0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     CmpWorkItemQueueWork @ 0x1403B8E30 (CmpWorkItemQueueWork.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x140A8D96C (CmFcpManagerPublishFeatureUsageData.c)
 */

__int64 __fastcall CmFcpManagerProcessUsageDataProviders(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v2; // rdi
  char v4; // bp
  __int64 *v5; // rsi
  signed __int32 v6; // eax
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // r14
  __int64 *i; // rsi
  int v10; // eax
  bool v11; // zf
  volatile signed __int32 j; // eax
  signed __int32 v14[8]; // [rsp+0h] [rbp-68h] BYREF
  volatile signed __int32 v15; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 968);
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a1 + 968, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (unsigned __int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  _m_prefetchw((const void *)(a1 + 1744));
  do
  {
    v6 = *(_DWORD *)(a1 + 1744);
    v7 = v6;
    if ( (v6 & 0x10) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 1744) & 6 | ((*(_DWORD *)(a1 + 1744) & 0xFFFFFFE0) + 32);
      v4 = 0;
    }
    else if ( (v6 & 8) != 0 )
    {
      v7 = v6 & 0xFFFFFFF7;
      v4 = 1;
    }
  }
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1744), v7, v6) );
  if ( v4 || (v7 & 0x20) != 0 )
  {
    v8 = (volatile signed __int32 *)(a1 + 1788);
    *(_DWORD *)(a1 + 1788) = 0;
    for ( i = *(__int64 **)(a1 + 1344); i != (__int64 *)(a1 + 1344); i = (__int64 *)*i )
    {
      v10 = *((_DWORD *)i + 25);
      if ( v4 )
        v11 = (v10 & 2) == 0;
      else
        v11 = (v10 & 1) == 0;
      if ( !v11 )
      {
        _InterlockedIncrement(v8);
        CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 2));
      }
    }
    if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegion();
    for ( j = *(_DWORD *)(a1 + 1788); ; j = *v8 )
    {
      v15 = j;
      if ( !j )
        break;
      ExBlockOnAddressPushLock((signed __int64 *)(a1 + 1376), (_BYTE *)(a1 + 1788), &v15, 4LL, 0LL);
    }
    if ( !v4 )
      _InterlockedAdd((volatile signed __int32 *)(a1 + 1744), 0x20u);
    _InterlockedOr(v14, 0);
    if ( *(_QWORD *)(a1 + 1384) )
      ExfUnblockPushLock(a1 + 1384, 0LL);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegion();
  }
  return CmFcpManagerPublishFeatureUsageData(a1, 0LL);
}
