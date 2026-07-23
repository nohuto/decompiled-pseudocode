/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x140A2F828
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x140A2F6A8 (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140A2FA3C (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbp
  char *v5; // rbx
  volatile signed __int64 *v6; // rdi
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rsi
  char *v10; // rax
  char *v11; // rsi
  char *v12; // rax
  char *v13; // rsi

  v2 = (signed __int64 *)(a2 + 352);
  v5 = (char *)KeAbPreAcquire(a2 + 352, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (__int64)v2);
  if ( v5 )
    v5[10] = 1;
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v9 = 0LL;
    goto LABEL_29;
  }
  v6 = (volatile signed __int64 *)(a2 + 136);
  v7 = (char *)KeAbPreAcquire(a2 + 136, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 136), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 136), v7, a2 + 136);
  if ( v8 )
    v8[10] = 1;
  v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v9 )
    goto LABEL_26;
  v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 136));
  KeAbPostRelease(a2 + 136);
  if ( !v9 )
  {
    v10 = (char *)KeAbPreAcquire(a2 + 176, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 176), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 176), v10, a2 + 176);
    if ( v11 )
      v11[10] = 1;
    v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 176));
    KeAbPostRelease(a2 + 176);
    if ( !v9 )
    {
      v6 = (volatile signed __int64 *)(a2 + 200);
      v12 = (char *)KeAbPreAcquire(a2 + 200, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v12, a2 + 200);
      if ( v13 )
        v13[10] = 1;
      v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 208);
LABEL_26:
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
    }
  }
LABEL_29:
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v9;
}
