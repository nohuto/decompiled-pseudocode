/*
 * XREFs of CcNotifyOfMappedWrite @ 0x1402EDA4C
 * Callers:
 *     MiGatherMappedPages @ 0x1402EB8C0 (MiGatherMappedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueue @ 0x14027AE6C (CcPostWorkQueue.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1402E6230 (CcGetPrivateVolumeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 *     CcGetNodeForLazyWrite @ 0x1404D4A28 (CcGetNodeForLazyWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1404D5E90 (CcAcquireByteRangeForWrite.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  _SLIST_ENTRY *PrivateVolumeCacheMap; // r15
  __int64 v8; // rcx
  _BYTE *v9; // r12
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned __int64 v14; // r8
  signed __int64 v15; // rax
  int v16; // eax
  int WorkQueueEntry; // eax
  KSPIN_LOCK *v18; // rcx
  unsigned __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned int v24; // ecx
  unsigned int v25; // r15d
  unsigned __int64 v26; // [rsp+50h] [rbp-29h] BYREF
  ULONG_PTR v27; // [rsp+58h] [rbp-21h] BYREF
  __int64 v28; // [rsp+60h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+68h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v31; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v32; // [rsp+F0h] [rbp+77h]
  ULONG_PTR v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v32 = a3;
  v26 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  memset(&v29, 0, sizeof(v29));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 || (*(_DWORD *)(v6 + 152) & 0x100) != 0 )
  {
    v13 = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_23;
  }
  v5 = *(_QWORD *)(v6 + 536);
  PrivateVolumeCacheMap = (_SLIST_ENTRY *)CcGetPrivateVolumeCacheMap(*(_QWORD *)(a1 + 8));
  v9 = (char *)&PrivateVolumeCacheMap[73].Next + 4;
  v10 = CcGetNodeForLazyWrite(v8);
  if ( !CcEnablePerVolumeLazyWriter )
    v9 = (_BYTE *)(v5 + 1292);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v29);
  CcIncrementOpenCount(v6, v11, 1);
  KeReleaseInStackQueuedSpinLock(&v29);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v29);
  CcDecrementOpenCount(v6);
  if ( (*(_DWORD *)(v6 + 152) & 0x20) != 0 )
    goto LABEL_20;
  v13 = 0;
  if ( *(_DWORD *)(v6 + 524) )
    goto LABEL_20;
  if ( !*(_DWORD *)(v6 + 112) )
  {
LABEL_8:
    v13 = 2;
    goto LABEL_23;
  }
  v14 = *(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (*(_DWORD *)(v14 + 0x50) & 0x8000) != 0
    || !(unsigned __int8)CcCanIWriteStreamEx(v5, (_DWORD)PrivateVolumeCacheMap, v14, 0x1000000, 0, 8, 0LL) )
  {
    v15 = *(_QWORD *)(v6 + 40);
    if ( a2 <= v15 || *(_QWORD *)(v6 + 48) <= v15 )
      goto LABEL_8;
    v16 = *(_DWORD *)(v6 + 112);
    *(_DWORD *)(v6 + 200) = v16;
    *(_DWORD *)(v5 + 976) += v16;
    *(_DWORD *)(v5 + 1072) += *(_DWORD *)(v6 + 200);
    *(_DWORD *)(v6 + 152) |= 0x20u;
    ++*(_DWORD *)(v6 + 112);
    KeReleaseInStackQueuedSpinLock(&v29);
    WorkQueueEntry = CcAllocateWorkQueueEntry(v5, PrivateVolumeCacheMap, v10, (PSLIST_ENTRY *)&v26);
    v18 = (KSPIN_LOCK *)(v5 + 768);
    if ( WorkQueueEntry < 0 )
    {
      KeAcquireInStackQueuedSpinLock(v18, &v29);
      *(_DWORD *)(v6 + 152) &= ~0x20u;
      --*(_DWORD *)(v6 + 112);
      goto LABEL_8;
    }
    v19 = v26;
    *(_DWORD *)(v26 + 128) = 2;
    *(_QWORD *)(v19 + 16) = v6;
    KeAcquireInStackQueuedSpinLock(v18, &v29);
    --*(_DWORD *)(v6 + 112);
    if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
    {
      v22 = v10 + 72;
      *(_QWORD *)(v6 + 504) = v19 | 1;
    }
    else
    {
      *(_QWORD *)(v6 + 504) = v19;
      v22 = v10 + 104;
    }
    CcPostWorkQueue((_QWORD *)v19, v22, v20, v21);
LABEL_20:
    v13 = 0;
    goto LABEL_23;
  }
  if ( *v9 )
    CcScheduleLazyWriteScan((_BYTE *)v5, PrivateVolumeCacheMap, 1, 0);
LABEL_23:
  if ( v32 || v13 != 2 )
  {
    if ( v13 >= 2 )
    {
      *(_DWORD *)(v6 + 152) |= 0x400400u;
      CcIncrementOpenCount(v6, v12, 1);
      ++*(_DWORD *)(v6 + 524);
      KeReleaseInStackQueuedSpinLock(&v29);
      v24 = v32;
      v27 = a2;
      v31 = v32;
      if ( v32 )
      {
        v25 = v32;
        do
        {
          if ( !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
            break;
          if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                                   v6,
                                   (unsigned int)&v27,
                                   v24,
                                   0,
                                   (__int64)&v33,
                                   (__int64)&v31,
                                   (__int64)&v28,
                                   0,
                                   0LL) )
            break;
          v33 += v31;
          v24 = v25 + a2 - v33;
          v27 = v33;
          v31 = v24;
        }
        while ( v24 );
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v29);
      if ( !*(_DWORD *)(v6 + 4) )
        KeBugCheckEx(0x34u, 0x1471uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      *(_DWORD *)(v6 + 152) &= ~0x400000u;
      goto LABEL_27;
    }
  }
  else
  {
    v13 = 1;
  }
  if ( v5 )
LABEL_27:
    KeReleaseInStackQueuedSpinLock(&v29);
  return v13;
}
