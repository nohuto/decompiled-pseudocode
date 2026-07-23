/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x14088E594
 * Callers:
 *     AlpcpDisconnectPort @ 0x14088F628 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 */

void __fastcall AlpcpSignalPortAndUnlock(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // r9
  volatile signed __int32 *v4; // rcx
  _QWORD **v5; // rsi
  unsigned __int64 *v6; // rdi
  char *v7; // rax
  char *v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  if ( *(_QWORD *)(a1 + 32) )
  {
    AlpcpQueueIoCompletionPort((_QWORD *)a1, 0, 1, 0, 0);
    return;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v2 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v2);
    v4 = *(volatile signed __int32 **)(a1 + 248);
LABEL_8:
    KeReleaseSemaphoreEx(v4, 1LL, 1, v3, 0, 0LL);
    return;
  }
  v5 = (_QWORD **)(a1 + 232);
  if ( *v5 != v5 )
  {
    v6 = (unsigned __int64 *)(a1 + 224);
    v7 = (char *)KeAbPreAcquire(a1 + 224, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v8 )
      v8[10] = 1;
    v9 = *v5;
    if ( *v5 == v5 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = v9 - 185;
      *(v9 - 1) = 0LL;
      v11 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v12 = (_QWORD *)v9[1], (_QWORD *)*v12 != v9) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v9 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v10 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      v4 = (volatile signed __int32 *)(v10 + 163);
      goto LABEL_8;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
}
