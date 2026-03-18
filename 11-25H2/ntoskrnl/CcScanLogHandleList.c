/*
 * XREFs of CcScanLogHandleList @ 0x1403A4C00
 * Callers:
 *     CcLazyWriteScanVolume @ 0x1404B5AC0 (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404BE770 (CcLazyWriteScan.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1403A53D0 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1403A59C0 (KeRcuReadLock.c)
 *     CcCalculatePagesToWrite @ 0x1403A66B0 (CcCalculatePagesToWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, __int64 *a4)
{
  __int64 *v8; // rdi
  __int64 *v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v18; // [rsp+88h] [rbp+10h] BYREF

  v18 = 0;
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
    v10 = v9[6];
    if ( v10 )
      guard_dispatch_icall_no_overrides(v10, &v18);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    if ( v9[6] )
    {
      v11 = (unsigned __int64 *)(v9 + 9);
      v12 = v9[9];
      if ( v12 >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v18 = 0;
        v12 = *v11;
      }
      else
      {
        *((_DWORD *)v9 + 30) = v12;
        if ( v18 )
        {
          *((_DWORD *)v9 + 30) = 100 * v12;
          v13 = 100 * (int)v12 / (unsigned int)v18;
LABEL_11:
          v9[14] = v13;
          v9[13] = v13;
          v9[12] = v13;
          *((_DWORD *)v9 + 30) = (3 * v13) >> 2;
          v14 = CcCalculatePagesToWrite(a1, a3, (_DWORD)v11, (int)v9 + 96, 1);
          v9[10] = v12;
          if ( v14 > v12 >> 3 )
          {
            *a2 += v14;
            ++CcDbgAdditionalPagesQueuedCount;
            *((_DWORD *)v9 + 38) = v14;
          }
          else
          {
            *((_DWORD *)v9 + 38) = 0;
            v14 = 0;
          }
          *((_DWORD *)v9 + 22) = v14;
          if ( v9[5] )
          {
            v15 = v9[23];
            if ( v15 < *a4 )
              *a4 = v15;
          }
          goto LABEL_7;
        }
      }
      v13 = *((_DWORD *)v9 + 39);
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
