/*
 * XREFs of CcScanLogHandleList @ 0x14040BD34
 * Callers:
 *     CcLazyWriteScan @ 0x1402654C8 (CcLazyWriteScan.c)
 *     CcLazyWriteScanVolume @ 0x1404AFE00 (CcLazyWriteScanVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x1402E6180 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     CcCalculatePagesToWrite @ 0x14040C870 (CcCalculatePagesToWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, _QWORD *a4)
{
  __int64 *v8; // rdi
  __int64 v9; // rbx
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
    v9 = (__int64)(v8 - 3);
    if ( _InterlockedIncrement64(v8 - 2) <= 1 )
      __fastfail(0xEu);
    KeRcuReadUnlock();
    v10 = *(_QWORD *)(v9 + 48);
    if ( v10 )
      guard_dispatch_icall_no_overrides(v10, &v18);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    if ( *(_QWORD *)(v9 + 48) )
    {
      v11 = (unsigned __int64 *)(v9 + 72);
      v12 = *(_QWORD *)(v9 + 72);
      if ( v12 >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v18 = 0;
        v12 = *v11;
      }
      else
      {
        *(_DWORD *)(v9 + 120) = v12;
        if ( v18 )
        {
          *(_DWORD *)(v9 + 120) = 100 * v12;
          v13 = 100 * (int)v12 / (unsigned int)v18;
LABEL_11:
          *(_QWORD *)(v9 + 112) = v13;
          *(_QWORD *)(v9 + 104) = v13;
          *(_QWORD *)(v9 + 96) = v13;
          *(_DWORD *)(v9 + 120) = (3 * v13) >> 2;
          v14 = CcCalculatePagesToWrite(a1, a3, (_DWORD)v11, (int)v9 + 96, 1);
          *(_QWORD *)(v9 + 80) = v12;
          if ( v14 > v12 >> 3 )
          {
            *a2 += v14;
            ++CcDbgAdditionalPagesQueuedCount;
            *(_DWORD *)(v9 + 152) = v14;
          }
          else
          {
            *(_DWORD *)(v9 + 152) = 0;
            v14 = 0;
          }
          *(_DWORD *)(v9 + 88) = v14;
          if ( *(_QWORD *)(v9 + 40) )
          {
            v15 = *(_QWORD *)(v9 + 184);
            if ( v15 < *a4 )
              *a4 = v15;
          }
          goto LABEL_7;
        }
      }
      v13 = *(_DWORD *)(v9 + 156);
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
