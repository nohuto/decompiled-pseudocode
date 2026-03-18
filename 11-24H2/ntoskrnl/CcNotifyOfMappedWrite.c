/*
 * XREFs of CcNotifyOfMappedWrite @ 0x14036BCAC
 * Callers:
 *     MiGatherMappedPages @ 0x140369B20 (MiGatherMappedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1402A7488 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1402A7D3C (CcAllocateWorkQueueEntry.c)
 *     CcIncrementOpenCount @ 0x1402AAADC (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1402CD530 (CcGetPrivateVolumeCacheMap.c)
 *     CcCanIWriteStreamEx @ 0x1402CE730 (CcCanIWriteStreamEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 *     CcGetNodeForLazyWrite @ 0x1404DB008 (CcGetNodeForLazyWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404DC470 (CcAcquireByteRangeForWrite.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 PrivateVolumeCacheMap; // r15
  _BYTE *v8; // r12
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // r8
  signed __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  KSPIN_LOCK *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // r15d
  __int64 v23; // [rsp+50h] [rbp-29h] BYREF
  ULONG_PTR v24; // [rsp+58h] [rbp-21h] BYREF
  __int64 v25; // [rsp+60h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+68h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v28; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v29; // [rsp+F0h] [rbp+77h]
  ULONG_PTR v30; // [rsp+F8h] [rbp+7Fh] BYREF

  v29 = a3;
  v23 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  memset(&v26, 0, sizeof(v26));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 || (*(_DWORD *)(v6 + 152) & 0x100) != 0 )
  {
    v12 = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_23;
  }
  v5 = *(_QWORD *)(v6 + 536);
  PrivateVolumeCacheMap = CcGetPrivateVolumeCacheMap(*(_QWORD *)(a1 + 8));
  v8 = (_BYTE *)(PrivateVolumeCacheMap + 1172);
  v9 = CcGetNodeForLazyWrite();
  if ( !CcEnablePerVolumeLazyWriter )
    v8 = (_BYTE *)(v5 + 1292);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v26);
  CcIncrementOpenCount(v6, v10, 1);
  KeReleaseInStackQueuedSpinLock(&v26);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v26);
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
          PrivateVolumeCacheMap,
          *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL,
          0x1000000u,
          0,
          8,
          0LL) )
  {
    v14 = *(_QWORD *)(v6 + 40);
    if ( a2 <= v14 || *(_QWORD *)(v6 + 48) <= v14 )
      goto LABEL_8;
    v15 = *(_DWORD *)(v6 + 112);
    *(_DWORD *)(v6 + 200) = v15;
    *(_DWORD *)(v5 + 976) += v15;
    *(_DWORD *)(v5 + 1072) += *(_DWORD *)(v6 + 200);
    *(_DWORD *)(v6 + 152) |= 0x20u;
    ++*(_DWORD *)(v6 + 112);
    KeReleaseInStackQueuedSpinLock(&v26);
    v16 = CcAllocateWorkQueueEntry(v5, PrivateVolumeCacheMap, v9, &v23);
    v17 = (KSPIN_LOCK *)(v5 + 768);
    if ( v16 < 0 )
    {
      KeAcquireInStackQueuedSpinLock(v17, &v26);
      *(_DWORD *)(v6 + 152) &= ~0x20u;
      --*(_DWORD *)(v6 + 112);
      goto LABEL_8;
    }
    v18 = v23;
    *(_DWORD *)(v23 + 128) = 2;
    *(_QWORD *)(v18 + 16) = v6;
    KeAcquireInStackQueuedSpinLock(v17, &v26);
    --*(_DWORD *)(v6 + 112);
    if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
    {
      v19 = v9 + 72;
      *(_QWORD *)(v6 + 504) = v18 | 1;
    }
    else
    {
      *(_QWORD *)(v6 + 504) = v18;
      v19 = v9 + 104;
    }
    CcPostWorkQueue(v18, v19);
LABEL_20:
    v12 = 0;
    goto LABEL_23;
  }
  if ( *v8 )
  {
    LOBYTE(v13) = 1;
    CcScheduleLazyWriteScan(v5, PrivateVolumeCacheMap, v13);
  }
LABEL_23:
  if ( v29 || v12 != 2 )
  {
    if ( v12 >= 2 )
    {
      *(_DWORD *)(v6 + 152) |= 0x400400u;
      CcIncrementOpenCount(v6, v11, 1);
      ++*(_DWORD *)(v6 + 524);
      KeReleaseInStackQueuedSpinLock(&v26);
      v21 = v29;
      v24 = a2;
      v28 = v29;
      if ( v29 )
      {
        v22 = v29;
        do
        {
          if ( !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
            break;
          if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                                   v6,
                                   (unsigned int)&v24,
                                   v21,
                                   0,
                                   (__int64)&v30,
                                   (__int64)&v28,
                                   (__int64)&v25,
                                   0,
                                   0LL) )
            break;
          v30 += v28;
          v21 = v22 + a2 - v30;
          v24 = v30;
          v28 = v21;
        }
        while ( v21 );
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v26);
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
    KeReleaseInStackQueuedSpinLock(&v26);
  return v12;
}
