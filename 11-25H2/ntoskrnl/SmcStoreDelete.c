/*
 * XREFs of SmcStoreDelete @ 0x14078E684
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x14078A274 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x14078A3E0 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SmStoreDelete @ 0x140789700 (SmStoreDelete.c)
 *     SmcCacheDereference @ 0x14078DD18 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14078DF68 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x14078E834 (SmcStoreEntryFind.c)
 */

__int64 __fastcall SmcStoreDelete(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v5; // r12
  struct _PRIVILEGE_SET *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // edi
  unsigned __int64 *v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v13; // rax
  __int64 *v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // r14
  struct _KTHREAD *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rdi

  v5 = a2;
  v7 = 0LL;
  v8 = SmcCacheReference(a1, a2);
  v9 = v8;
  if ( v8 )
  {
    v11 = (unsigned __int64 *)(v8 + 160);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire((__int64)v11, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    v15 = (_DWORD *)SmcStoreEntryFind(v9, a3, a4);
    v16 = v15;
    if ( v15 )
    {
      v15[1] |= 4u;
      *v15 = -1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v16 + 2);
      _InterlockedExchange64((volatile __int64 *)v16 + 2, 1LL);
      SmStoreDelete(a1 - 2288, a4, a3);
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      v18 = KeAbPreAcquire((__int64)v11, 0LL);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v18, (__int64)v11);
      if ( v19 )
        *((_BYTE *)v19 + 10) = 1;
      v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)v16 + 1);
      *((_QWORD *)v16 + 1) = 0LL;
      v16[1] &= ~4u;
      v10 = 0;
    }
    else
    {
      v10 = -1073741672;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
    SmcCacheDereference(a1, v5);
    if ( v7 )
      CmSiFreeMemory(v7);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return v10;
}
