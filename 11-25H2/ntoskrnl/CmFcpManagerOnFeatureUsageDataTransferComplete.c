/*
 * XREFs of CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x1406EAF98
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A8F960 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmFcpManagerOnFeatureUsageDataTransferComplete(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  int v3; // ebp
  __int64 *v4; // rax
  __int64 *v5; // rsi
  void **v6; // rsi
  void ***i; // rcx
  void **v8; // r14
  void **v9; // rax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (unsigned __int64 *)(a1 + 1400);
  v3 = 0;
  v4 = KeAbPreAcquire(a1 + 1400, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = (void **)(a1 + 1360);
  for ( i = *(void ****)(a1 + 1360); i != (void ***)v6; i = (void ***)v8 )
  {
    if ( ((_DWORD)i[3] & 7) == 1 )
    {
      if ( i == *v6 )
        goto LABEL_16;
      break;
    }
    v8 = *i;
    v3 = (*((_DWORD *)i + 6) >> 3) & 0x1FFFFFFE;
    if ( (*i)[1] != i || (v9 = i[1], *v9 != i) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    ExFreePoolWithTag(i, 0);
  }
  if ( *(_DWORD *)(a1 + 1748) != v3 )
  {
    *(_DWORD *)(a1 + 1748) = v3;
    _InterlockedOr(v11, 0);
    if ( *(_QWORD *)(a1 + 1392) )
      ExfUnblockPushLock(a1 + 1392, 0LL);
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
