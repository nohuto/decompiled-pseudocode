/*
 * XREFs of CcScanLogHandleList @ 0x1402CCCB4
 * Callers:
 *     CcLazyWriteScan @ 0x14043BAE8 (CcLazyWriteScan.c)
 *     CcLazyWriteScanVolume @ 0x1404B5560 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402CD480 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 *     CcCalculatePagesToWrite @ 0x1402CEB00 (CcCalculatePagesToWrite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, __int64 *a4)
{
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0;
  *a2 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  LockHandle.LockQueue = 0LL;
  KeRcuReadLock();
  v8 = (__int64 *)CcVolumeCacheMapList;
  while ( v8 != &CcVolumeCacheMapList )
  {
    v9 = v8 - 3;
    if ( _InterlockedIncrement64(v8 - 2) <= 1 )
      __fastfail(0xEu);
    KeRcuReadUnlock();
    v12 = v9[6];
    if ( v12 )
      guard_dispatch_icall_no_overrides(v12, &v20, v10, v11);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    if ( v9[6] )
    {
      v13 = (unsigned __int64 *)(v9 + 9);
      v14 = v9[9];
      if ( v14 >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v20 = 0;
        v14 = *v13;
      }
      else
      {
        *((_DWORD *)v9 + 30) = v14;
        if ( v20 )
        {
          *((_DWORD *)v9 + 30) = 100 * v14;
          v15 = 100 * (int)v14 / (unsigned int)v20;
LABEL_11:
          v9[14] = v15;
          v9[13] = v15;
          v9[12] = v15;
          *((_DWORD *)v9 + 30) = (3 * v15) >> 2;
          v16 = CcCalculatePagesToWrite(a1, a3, (_DWORD)v13, (int)v9 + 96, 1);
          v9[10] = v14;
          if ( v16 > v14 >> 3 )
          {
            *a2 += v16;
            ++CcDbgAdditionalPagesQueuedCount;
            *((_DWORD *)v9 + 38) = v16;
          }
          else
          {
            *((_DWORD *)v9 + 38) = 0;
            v16 = 0;
          }
          *((_DWORD *)v9 + 22) = v16;
          if ( v9[5] )
          {
            v17 = v9[23];
            if ( v17 < *a4 )
              *a4 = v17;
          }
          goto LABEL_7;
        }
      }
      v15 = *((_DWORD *)v9 + 39);
      goto LABEL_11;
    }
LABEL_7:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeRcuReadLock();
    v8 = (__int64 *)*v8;
    CcDecrementVolumeUseCountWithDelete(v9);
  }
  return KeRcuReadUnlock();
}
