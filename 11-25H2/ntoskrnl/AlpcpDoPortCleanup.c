/*
 * XREFs of AlpcpDoPortCleanup @ 0x14098B834
 * Callers:
 *     AlpcpClosePort @ 0x14098B7C0 (AlpcpClosePort.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 *     AlpcpFlushResourcesPort @ 0x14098BDD4 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x14098BF34 (AlpcpFlushMessagesPort.c)
 *     AlpcpFreeCompletionList @ 0x140A08300 (AlpcpFreeCompletionList.c)
 */

__int64 __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 *v4; // rbx
  void *v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbp
  volatile signed __int32 **v9; // r14
  unsigned __int64 *v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // r9
  __int64 *v13; // rbp
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rdx
  volatile signed __int32 **v17; // rax

  AlpcpDisconnectPort((char *)a1, 0);
  v2 = (volatile signed __int64 *)(a1 + 352);
  v3 = KeAbPreAcquire(a1 + 352, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v3, a1 + 352);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
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
  v7 = KeAbPreAcquire(a1 + 352, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v7, a1 + 352);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
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
      v11 = KeAbPreAcquire((__int64)v10, 0LL);
      v13 = v11;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
      if ( v13 )
        *((_BYTE *)v13 + 10) = 1;
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
        KeReleaseSemaphoreEx(v15 - 44, 1, 1, v12, 0, 0LL);
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
