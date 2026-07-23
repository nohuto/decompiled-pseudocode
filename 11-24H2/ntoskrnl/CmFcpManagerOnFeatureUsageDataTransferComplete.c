/*
 * XREFs of CmFcpManagerOnFeatureUsageDataTransferComplete @ 0x1406F47FC
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A7ABB4 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmFcpManagerOnFeatureUsageDataTransferComplete(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  int v3; // ebp
  char *v4; // rax
  char *v5; // rsi
  void **v6; // rsi
  void ***i; // rcx
  void **v8; // r14
  void **v9; // rax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (unsigned __int64 *)(a1 + 1472);
  v3 = 0;
  v4 = (char *)KeAbPreAcquire(a1 + 1472, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
  if ( v5 )
    v5[10] = 1;
  v6 = (void **)(a1 + 1432);
  for ( i = *(void ****)(a1 + 1432); i != (void ***)v6; i = (void ***)v8 )
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
  if ( *(_DWORD *)(a1 + 1820) != v3 )
  {
    *(_DWORD *)(a1 + 1820) = v3;
    _InterlockedOr(v11, 0);
    if ( *(_QWORD *)(a1 + 1464) )
      ExfUnblockPushLock(a1 + 1464, 0LL);
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
