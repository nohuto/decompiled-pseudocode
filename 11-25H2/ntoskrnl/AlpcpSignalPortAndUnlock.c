/*
 * XREFs of AlpcpSignalPortAndUnlock @ 0x14098B14C
 * Callers:
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpSignalPortAndUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // r9
  volatile signed __int32 *v6; // rcx
  _QWORD **v7; // rsi
  unsigned __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rcx

  if ( *(_QWORD *)(a1 + 32) )
  {
    LOBYTE(a3) = 1;
    AlpcpQueueIoCompletionPort(a1, 0, a3, 0LL, 0);
    return;
  }
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    v4 = a1 + 352;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
    KeAbPostRelease(v4);
    v6 = *(volatile signed __int32 **)(a1 + 248);
LABEL_8:
    KeReleaseSemaphoreEx(v6, 1, 1, v5, 0, 0LL);
    return;
  }
  v7 = (_QWORD **)(a1 + 232);
  if ( *v7 != v7 )
  {
    v8 = (unsigned __int64 *)(a1 + 224);
    v9 = KeAbPreAcquire(a1 + 224, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    v11 = *v7;
    if ( *v7 == v7 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = v11 - 185;
      *(v11 - 1) = 0LL;
      v13 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v14 = (_QWORD *)v11[1], (_QWORD *)*v14 != v11) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v11 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    if ( v12 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
      KeAbPostRelease(a1 + 352);
      v6 = (volatile signed __int32 *)(v12 + 163);
      goto LABEL_8;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
}
