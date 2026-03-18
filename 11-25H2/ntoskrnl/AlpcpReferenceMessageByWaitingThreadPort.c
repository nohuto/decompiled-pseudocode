/*
 * XREFs of AlpcpReferenceMessageByWaitingThreadPort @ 0x140A353EC
 * Callers:
 *     AlpcpReferenceMessageByWaitingThread @ 0x140A3526C (AlpcpReferenceMessageByWaitingThread.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140A35620 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThreadPort(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbp
  __int64 *v5; // rbx
  volatile signed __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // rax
  __int64 *v13; // rsi

  v2 = (signed __int64 *)(a2 + 352);
  v5 = KeAbPreAcquire(a2 + 352, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (unsigned __int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( (*(_DWORD *)(a2 + 416) & 0x41) != 1 )
  {
    v9 = 0LL;
    goto LABEL_29;
  }
  v6 = (volatile signed __int64 *)(a2 + 136);
  v7 = KeAbPreAcquire(a2 + 136, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 136), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 136), v7, a2 + 136);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 144);
  if ( v9 )
    goto LABEL_26;
  v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 160);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 136));
  KeAbPostRelease(a2 + 136);
  if ( !v9 )
  {
    v10 = KeAbPreAcquire(a2 + 176, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 176), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 176), v10, a2 + 176);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v9 = AlpcpReferenceMessageByWaitingThreadPortQueue(a1, a2 + 184);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 176));
    KeAbPostRelease(a2 + 176);
    if ( !v9 )
    {
      v6 = (volatile signed __int64 *)(a2 + 200);
      v12 = KeAbPreAcquire(a2 + 200, 0LL);
      v13 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v12, a2 + 200);
      if ( v13 )
        *((_BYTE *)v13 + 10) = 1;
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
