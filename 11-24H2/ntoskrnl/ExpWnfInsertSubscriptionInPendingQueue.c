/*
 * XREFs of ExpWnfInsertSubscriptionInPendingQueue @ 0x140904350
 * Callers:
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x1409E8AE0 (ExpWnfNotifySubscription.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpWnfInsertSubscriptionInPendingQueue(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 v6; // r15
  char *v7; // rax
  char *v8; // r14
  int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  _QWORD *v12; // rdx
  _QWORD *v13; // rax

  result = *(_QWORD *)(a1 + 40);
  if ( !result )
    return result;
  v5 = 0;
  v6 = *(_QWORD *)(result + 1512);
  v7 = (char *)KeAbPreAcquire(v6 + 104, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 104), v7, v6 + 104);
  if ( v8 )
    v8[10] = 1;
  v9 = *(_DWORD *)(a1 + 100) & a2;
  if ( (v9 & 8) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    if ( v10 )
    {
      if ( *(_DWORD *)(v10 + 164) )
        v9 &= ~8u;
    }
  }
  if ( !v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 104));
    KeAbPostRelease(v6 + 104);
    return 0LL;
  }
  v11 = *(_DWORD *)(a1 + 120);
  if ( v11 )
  {
    if ( v11 != 3 )
      goto LABEL_21;
  }
  else
  {
    v12 = *(_QWORD **)(v6 + 120);
    v13 = (_QWORD *)(a1 + 104);
    if ( *v12 != v6 + 112 )
      __fastfail(3u);
    *v13 = v6 + 112;
    *(_QWORD *)(a1 + 112) = v12;
    *v12 = v13;
    *(_QWORD *)(v6 + 120) = v13;
  }
  v5 = 1;
  *(_DWORD *)(a1 + 120) = 1;
LABEL_21:
  if ( (*(_DWORD *)(a1 + 128) & 1) == 0 && (*(_DWORD *)(a1 + 124) & 1) == 0 && (v9 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 48) + 164LL));
    v9 &= ~8u;
  }
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 100) & (*(_DWORD *)(a1 + 124) | v9);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 104));
  KeAbPostRelease(v6 + 104);
  return v5;
}
