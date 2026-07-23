/*
 * XREFs of CcNotifyExternalCachesInternal @ 0x140265F30
 * Callers:
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140265C20 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcQueueLazyWriteScanThread @ 0x140577A50 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcNotifyEnhancedExternalCaches @ 0x1402660D4 (CcNotifyEnhancedExternalCaches.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     CcCalculatePagesToWrite @ 0x14040C870 (CcCalculatePagesToWrite.c)
 *     CcCalculatePagesToWriteForVolume @ 0x14046B688 (CcCalculatePagesToWriteForVolume.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall CcNotifyExternalCachesInternal(unsigned int a1, __int64 a2, __int64 a3)
{
  KIRQL v6; // r15
  _QWORD *v7; // r14
  __int64 *v8; // rdi
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  __int64 *i; // rbx
  __int64 v12; // rax
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
      v7 = (_QWORD *)(a3 + 992);
      v8 = (__int64 *)(a3 + 1248);
      v9 = CcCalculatePagesToWriteForVolume(a3, a1);
    }
    else
    {
      v7 = (_QWORD *)(a2 + 1056);
      v8 = &CcExternalCacheList;
      v9 = CcCalculatePagesToWrite(a2, a1, (int)a2 + 1056, (int)a2 + 1080, 0);
    }
    if ( v9 == 0xFFFFFFFFLL )
    {
      LODWORD(v10) = 100;
    }
    else if ( *v7 )
    {
      v10 = 100 * (unsigned __int64)v9 / *v7;
    }
    else
    {
      LODWORD(v10) = 0;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    if ( (_DWORD)v10 )
    {
      for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
      {
        v12 = *(i - 3);
        if ( v12 )
          guard_dispatch_icall_no_overrides(
            i - 4,
            v12 * (unsigned __int64)(unsigned int)v10 / 0x64,
            a1,
            (unsigned __int64)(v12 * (unsigned int)v10
                             - ((v12 * (unsigned __int64)(unsigned int)v10 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
      }
    }
    KeReleaseSpinLock(&CcExternalCacheListLock, v6);
  }
}
