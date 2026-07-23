/*
 * XREFs of AlpcpDoPortCleanup @ 0x14088E7E4
 * Callers:
 *     AlpcpClosePort @ 0x14088E770 (AlpcpClosePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     AlpcpFlushResourcesPort @ 0x14088ECFC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x14088EE5C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14088F628 (AlpcpDisconnectPort.c)
 *     AlpcpFreeCompletionList @ 0x140A077BC (AlpcpFreeCompletionList.c)
 */

__int64 __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  char *v3; // rax
  char *v4; // rbx
  void *v5; // rcx
  __int64 v6; // rax
  char *v7; // rax
  char *v8; // rbp
  volatile signed __int32 **v9; // r14
  unsigned __int64 *v10; // rsi
  char *v11; // rax
  __int64 v12; // r9
  char *v13; // rbp
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 **v17; // rax

  AlpcpDisconnectPort(a1, 0LL);
  v2 = (volatile signed __int64 *)(a1 + 352);
  v3 = (char *)KeAbPreAcquire(a1 + 352, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v3, a1 + 352);
  if ( v4 )
    v4[10] = 1;
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v5 = *(void **)(a1 + 24);
  v6 = 0LL;
  if ( ((unsigned __int8)v5 & 1) == 0 )
    v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    ObfDereferenceObjectWithTag(v5, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpFlushMessagesPort(a1);
  AlpcpFlushResourcesPort(a1);
  v7 = (char *)KeAbPreAcquire(a1 + 352, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v7, a1 + 352);
  if ( v8 )
    v8[10] = 1;
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v9 = (volatile signed __int32 **)(a1 + 232);
    if ( *v9 != (volatile signed __int32 *)v9 )
    {
      v10 = (unsigned __int64 *)(a1 + 224);
      v11 = (char *)KeAbPreAcquire((__int64)v10, 0LL);
      v13 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
      if ( v13 )
        v13[10] = 1;
      while ( 1 )
      {
        v15 = *v9;
        if ( *v9 == (volatile signed __int32 *)v9 )
          break;
        *((_QWORD *)v15 - 1) = 0LL;
        v16 = *(_QWORD *)v15;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v15 + 8LL) != v15
          || (v17 = (volatile signed __int32 **)*((_QWORD *)v15 + 1), *v17 != v15) )
        {
          __fastfail(3u);
        }
        *v17 = (volatile signed __int32 *)v16;
        *(_QWORD *)(v16 + 8) = v17;
        *(_QWORD *)v15 = 0LL;
        KeReleaseSemaphoreEx(v15 - 44, 1LL, 1, v12, 0, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10);
      KeAbPostRelease((ULONG_PTR)v10);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
