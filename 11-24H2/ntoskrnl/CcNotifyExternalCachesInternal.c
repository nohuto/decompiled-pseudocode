/*
 * XREFs of CcNotifyExternalCachesInternal @ 0x14043C550
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x14043C240 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcQueueLazyWriteScanThread @ 0x14057A5C0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcCalculatePagesToWrite @ 0x1402CEB00 (CcCalculatePagesToWrite.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     CcNotifyEnhancedExternalCaches @ 0x14043CDF4 (CcNotifyEnhancedExternalCaches.c)
 *     CcCalculatePagesToWriteForVolume @ 0x140470DDC (CcCalculatePagesToWriteForVolume.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CcNotifyExternalCachesInternal(unsigned int a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // r15
  unsigned __int64 *v7; // r14
  __int64 *v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 *i; // rbx
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 && (*(_DWORD *)(a3 + 1616) & 0x10) != 0 )
  {
    CcNotifyEnhancedExternalCaches();
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 768), &LockHandle);
    if ( CcEnablePerVolumeLazyWriter )
    {
      v7 = (unsigned __int64 *)(a3 + 992);
      v8 = (__int64 *)(a3 + 1248);
      v9 = CcCalculatePagesToWriteForVolume(a3, a1);
    }
    else
    {
      v7 = (unsigned __int64 *)(a2 + 1056);
      v8 = &CcExternalCacheList;
      v9 = CcCalculatePagesToWrite(a2, a1, a2 + 1056, (unsigned __int64 *)(a2 + 1080), 0);
    }
    if ( v9 == 0xFFFFFFFFLL )
    {
      LODWORD(v11) = 100;
    }
    else
    {
      v12 = *v7;
      if ( *v7 )
      {
        v10 = 100 * (unsigned __int64)v9 % v12;
        v11 = 100 * (unsigned __int64)v9 / v12;
      }
      else
      {
        LODWORD(v11) = 0;
      }
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v10);
    if ( (_DWORD)v11 )
    {
      for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
      {
        v14 = *(i - 3);
        if ( v14 )
          guard_dispatch_icall_no_overrides(
            i - 4,
            v14 * (unsigned __int64)(unsigned int)v11 / 0x64,
            a1,
            (unsigned __int64)(v14 * (unsigned int)v11
                             - ((v14 * (unsigned __int64)(unsigned int)v11 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
      }
    }
    KeReleaseSpinLock(&CcExternalCacheListLock, v6);
  }
}
