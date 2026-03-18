/*
 * XREFs of CcNotifyOfMappedWrite @ 0x14040ECD8
 * Callers:
 *     MiGatherMappedPages @ 0x14040CB20 (MiGatherMappedPages.c)
 * Callees:
 *     CcIncrementOpenCount @ 0x1402C5A9C (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1403A5480 (CcGetPrivateVolumeCacheMap.c)
 *     CcCanIWriteStreamEx @ 0x1403A62E0 (CcCanIWriteStreamEx.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x1403ABCB8 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1403AC58C (CcAllocateWorkQueueEntry.c)
 *     CcGetNodeForLazyWrite @ 0x1404DB918 (CcGetNodeForLazyWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DCD80 (CcAcquireByteRangeForWrite.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  _SLIST_ENTRY *PrivateVolumeCacheMap; // r15
  _BYTE *v8; // r12
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // edi
  signed __int64 v13; // rax
  int v14; // eax
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  __int64 v22; // [rsp+50h] [rbp-29h] BYREF
  ULONG_PTR v23; // [rsp+58h] [rbp-21h] BYREF
  __int64 v24; // [rsp+60h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+68h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v27; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v28; // [rsp+F0h] [rbp+77h]
  ULONG_PTR v29; // [rsp+F8h] [rbp+7Fh] BYREF

  v28 = a3;
  v22 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  memset(&v25, 0, sizeof(v25));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 || (*(_DWORD *)(v6 + 152) & 0x100) != 0 )
  {
    v12 = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_23;
  }
  v5 = *(_QWORD *)(v6 + 536);
  PrivateVolumeCacheMap = (_SLIST_ENTRY *)CcGetPrivateVolumeCacheMap(*(_QWORD *)(a1 + 8));
  v8 = (char *)&PrivateVolumeCacheMap[73].Next + 4;
  v9 = CcGetNodeForLazyWrite();
  if ( !CcEnablePerVolumeLazyWriter )
    v8 = (_BYTE *)(v5 + 1292);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v25);
  CcIncrementOpenCount(v6, v10, 1);
  KeReleaseInStackQueuedSpinLock(&v25);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v25);
  CcDecrementOpenCount(v6);
  if ( (*(_DWORD *)(v6 + 152) & 0x20) != 0 )
    goto LABEL_20;
  v12 = 0;
  if ( *(_DWORD *)(v6 + 524) )
    goto LABEL_20;
  if ( !*(_DWORD *)(v6 + 112) )
  {
LABEL_8:
    v12 = 2;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)((*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) != 0
    || !CcCanIWriteStreamEx(
          (KSPIN_LOCK *)v5,
          (__int64)PrivateVolumeCacheMap,
          *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL,
          0x1000000u,
          0,
          8,
          0LL) )
  {
    v13 = *(_QWORD *)(v6 + 40);
    if ( a2 <= v13 || *(_QWORD *)(v6 + 48) <= v13 )
      goto LABEL_8;
    v14 = *(_DWORD *)(v6 + 112);
    *(_DWORD *)(v6 + 200) = v14;
    *(_DWORD *)(v5 + 976) += v14;
    *(_DWORD *)(v5 + 1072) += *(_DWORD *)(v6 + 200);
    *(_DWORD *)(v6 + 152) |= 0x20u;
    ++*(_DWORD *)(v6 + 112);
    KeReleaseInStackQueuedSpinLock(&v25);
    WorkQueueEntry = CcAllocateWorkQueueEntry(v5, PrivateVolumeCacheMap, v9, (PSLIST_ENTRY *)&v22);
    v16 = (KSPIN_LOCK *)(v5 + 768);
    if ( WorkQueueEntry < 0 )
    {
      KeAcquireInStackQueuedSpinLock(v16, &v25);
      *(_DWORD *)(v6 + 152) &= ~0x20u;
      --*(_DWORD *)(v6 + 112);
      goto LABEL_8;
    }
    v17 = v22;
    *(_DWORD *)(v22 + 128) = 2;
    *(_QWORD *)(v17 + 16) = v6;
    KeAcquireInStackQueuedSpinLock(v16, &v25);
    --*(_DWORD *)(v6 + 112);
    if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
    {
      v18 = v9 + 72;
      *(_QWORD *)(v6 + 504) = v17 | 1;
    }
    else
    {
      *(_QWORD *)(v6 + 504) = v17;
      v18 = v9 + 104;
    }
    CcPostWorkQueue(v17, v18);
LABEL_20:
    v12 = 0;
    goto LABEL_23;
  }
  if ( *v8 )
    CcScheduleLazyWriteScan((_BYTE *)v5, PrivateVolumeCacheMap, 1, 0);
LABEL_23:
  if ( v28 || v12 != 2 )
  {
    if ( v12 >= 2 )
    {
      *(_DWORD *)(v6 + 152) |= 0x400400u;
      CcIncrementOpenCount(v6, v11, 1);
      ++*(_DWORD *)(v6 + 524);
      KeReleaseInStackQueuedSpinLock(&v25);
      v20 = v28;
      v23 = a2;
      v27 = v28;
      if ( v28 )
      {
        v21 = v28;
        do
        {
          if ( !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
            break;
          if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                                   v6,
                                   (unsigned int)&v23,
                                   v20,
                                   0,
                                   (__int64)&v29,
                                   (__int64)&v27,
                                   (__int64)&v24,
                                   0,
                                   0LL) )
            break;
          v29 += v27;
          v20 = v21 + a2 - v29;
          v23 = v29;
          v27 = v20;
        }
        while ( v20 );
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v25);
      if ( !*(_DWORD *)(v6 + 4) )
        KeBugCheckEx(0x34u, 0x1471uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      *(_DWORD *)(v6 + 152) &= ~0x400000u;
      goto LABEL_27;
    }
  }
  else
  {
    v12 = 1;
  }
  if ( v5 )
LABEL_27:
    KeReleaseInStackQueuedSpinLock(&v25);
  return v12;
}
