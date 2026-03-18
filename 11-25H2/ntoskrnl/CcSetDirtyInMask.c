/*
 * XREFs of CcSetDirtyInMask @ 0x1402D5CB0
 * Callers:
 *     CcMdlWriteComplete2 @ 0x1402D2A60 (CcMdlWriteComplete2.c)
 *     CcSetDirtyPinnedData @ 0x1402D6A70 (CcSetDirtyPinnedData.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402D6ED4 (CcReleaseByteRangeFromWrite.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcPrepareMdlWrite @ 0x1403A6EA0 (CcPrepareMdlWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x140462560 (CcPurgeAndClearCacheSection.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1404498E8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcChargeDirtyPagesInternal @ 0x14044C490 (CcChargeDirtyPagesInternal.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rax
  _OWORD *v5; // rbx
  int v7; // edi
  __int64 v8; // r12
  __int64 v9; // r15
  _BYTE *v10; // r13
  void *v11; // rsi
  _OWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *PoolWithTag; // rax
  signed __int64 v15; // r8
  _OWORD *v16; // rax
  _OWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rsi
  signed __int64 v26; // rbx
  signed __int64 v27; // rcx
  _QWORD *v28; // rcx
  PVOID *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rdx
  int v33; // ebx
  int v34; // esi
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  struct _KTHREAD *CurrentThread; // r11
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // [rsp+30h] [rbp-68h]
  PVOID Entry; // [rsp+38h] [rbp-60h]
  signed __int64 v44; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF

  v4 = *a2;
  v5 = 0LL;
  Entry = 0LL;
  v42 = 0;
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( ((v4 ^ (v4 + a3 - 1LL)) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xCEAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *(_DWORD *)(a1 + 556) = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( (*(_DWORD *)(a1 + 152) & 0x40000000) == 0 || a3 + *a2 > *(_QWORD *)(a1 + 48) )
  {
    v8 = *a2 >> 12;
    v44 = (a3 + *a2 - 1) >> 12;
    if ( *(_QWORD *)(a1 + 32) / 4096LL <= v44 )
      KeBugCheckEx(0x34u, 0xD13uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v9 = *(_QWORD *)(a1 + 536);
    if ( CcEnablePerVolumeLazyWriter )
      v10 = *(_BYTE **)(a1 + 600);
    else
      v10 = 0LL;
    if ( (*(_DWORD *)(a1 + 152) & 0x40000000) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
          {
            v12 = ExAllocateFromNPagedLookasideList(&CcBitmapLookasideList);
            if ( !v12 )
            {
              ++CcDbgNumberOfFailedBitmapAllocations;
              v11 = Entry;
              goto LABEL_114;
            }
            v5 = v12;
            Entry = v12;
          }
          ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
          v13 = *(_QWORD **)(a1 + 168);
          if ( !v13 )
          {
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x624D6343u);
            v13 = PoolWithTag;
            if ( !PoolWithTag )
              goto LABEL_112;
            *(_WORD *)PoolWithTag = 763;
            PoolWithTag[6] = PoolWithTag + 2;
            PoolWithTag[7] = PoolWithTag + 2;
            PoolWithTag[2] = PoolWithTag + 6;
            PoolWithTag[3] = PoolWithTag + 6;
            *((_DWORD *)PoolWithTag + 18) = -1;
            PoolWithTag[5] = -1LL;
            PoolWithTag[11] = PoolWithTag + 12;
            *(_QWORD *)(a1 + 168) = PoolWithTag;
          }
          v15 = v44;
          if ( v8 == v44 && v8 == v13[5] )
          {
            v11 = Entry;
            goto LABEL_94;
          }
          if ( (unsigned __int64)v44 < 0x300 || *(_WORD *)v13 == 761 )
            break;
          memset_0(v5, 0, 0x400uLL);
          if ( *((_DWORD *)v13 + 20) )
          {
            v16 = (_OWORD *)v13[11];
            *v5 = *v16;
            v5[1] = v16[1];
            v5[2] = v16[2];
            v5[3] = v16[3];
            v5[4] = v16[4];
            v5[5] = v16[5];
            v17 = (_OWORD *)v13[11];
            *v17 = 0LL;
            v17[1] = 0LL;
            v17[2] = 0LL;
            v17[3] = 0LL;
            v17[4] = 0LL;
            v17[5] = 0LL;
          }
          v13[11] = v5;
          v18 = v13 + 2;
          v19 = (_QWORD *)v13[3];
          v20 = v13 + 12;
          v5 = 0LL;
          Entry = 0LL;
          if ( (_QWORD *)*v19 != v13 + 2 )
            goto LABEL_91;
          *v20 = v18;
          v13[13] = v19;
          *v19 = v20;
          v13[3] = v20;
          v21 = v13 + 18;
          v13[14] = 0x7FFFFFFFFFFFFFFFLL;
          *((_DWORD *)v13 + 30) = -1;
          v22 = (_QWORD *)v13[3];
          if ( (_QWORD *)*v22 != v18 )
            goto LABEL_91;
          *v21 = v18;
          v13[19] = v22;
          *v22 = v21;
          v13[3] = v21;
          v13[20] = 0x7FFFFFFFFFFFFFFFLL;
          *((_DWORD *)v13 + 42) = -1;
          *(_WORD *)v13 = 761;
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
          v7 = 0;
        }
        v23 = (_QWORD *)v13[2];
        v24 = 0LL;
        v25 = v13 + 2;
        v26 = v8 & 0xFFFFFFFFFFFFE000uLL;
        while ( 1 )
        {
          v27 = v23[2];
          if ( v26 == v27 )
          {
            v11 = Entry;
            v24 = v23;
            goto LABEL_46;
          }
          if ( *((_DWORD *)v23 + 8) || v24 )
          {
            if ( v26 > v27 )
              v25 = v23;
          }
          else
          {
            v24 = v23;
          }
          v23 = (_QWORD *)*v23;
          if ( v23 == v13 + 2 )
            break;
          if ( v26 < v23[2] && v24 )
            goto LABEL_37;
        }
        if ( v24 )
        {
LABEL_37:
          v28 = (_QWORD *)*v24;
          v29 = (PVOID *)v24[1];
          if ( *(_QWORD **)(*v24 + 8LL) == v24 && *v29 == v24 )
          {
            *v29 = v28;
            v28[1] = v29;
            goto LABEL_41;
          }
LABEL_91:
          __fastfail(3u);
        }
        v24 = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x30uLL, 0x72426343u);
        if ( !v24 )
          break;
LABEL_41:
        v30 = *v25;
        if ( *(_QWORD **)(*v25 + 8LL) != v25 )
          goto LABEL_91;
        v24[1] = v25;
        *v24 = v30;
        *(_QWORD *)(v30 + 8) = v24;
        *v25 = v24;
        v11 = Entry;
        v24[2] = v26;
        *((_DWORD *)v24 + 6) = -1;
        *((_DWORD *)v24 + 7) = 0;
        if ( !v24[5] )
        {
          memset_0(Entry, 0, 0x400uLL);
          v24[5] = Entry;
          v11 = 0LL;
          Entry = 0LL;
        }
        v15 = v44;
LABEL_46:
        if ( !v24 )
          goto LABEL_113;
        v31 = v24[2];
        if ( v8 < v31 + *((unsigned int *)v24 + 6) )
          *((_DWORD *)v24 + 6) = v8 - v31;
        if ( v15 > v31 + *((unsigned int *)v24 + 7) )
          *((_DWORD *)v24 + 7) = v15 - v31;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 768), &LockHandle);
        if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
        {
          if ( CcEnablePerVolumeLazyWriter )
          {
            if ( !v10[1172] )
            {
              if ( !v10[985] )
              {
                if ( !v10[984] )
                  goto LABEL_122;
                KiSetTimerEx((_DWORD)v10 + 920, CcFirstDelay, 0, 0, 0LL);
              }
              if ( !v10[1172] )
                v10[985] = 1;
            }
          }
          else if ( !*(_BYTE *)(v9 + 1292) )
          {
            if ( !*(_BYTE *)(v9 + 1049) )
            {
              if ( !*(_BYTE *)(v9 + 1048) )
                goto LABEL_123;
              KiSetTimerEx(v9 + 984, CcFirstDelay, 0, 0, 0LL);
            }
            if ( !*(_BYTE *)(v9 + 1292) )
              *(_BYTE *)(v9 + 1049) = 1;
          }
          CcInsertIntoDirtySharedCacheMapList(a1);
          v13[4] = v8;
        }
        v32 = (_DWORD *)(v24[5] + 4 * ((unsigned __int64)(unsigned int)(v8 - *((_DWORD *)v24 + 4)) >> 5));
        v33 = 1 << (v8 & 0x1F);
        if ( v8 <= v44 )
        {
          v34 = v42;
          v35 = v44 - v8 + 1;
          v8 = v44 + 1;
          do
          {
            if ( (*v32 & v33) == 0 )
            {
              *v32 |= v33;
              ++v34;
            }
            v36 = 2 * v33;
            if ( !(2 * v33) )
              ++v32;
            v33 = 1;
            if ( v36 )
              v33 = v36;
            --v35;
          }
          while ( v35 );
          v42 = v34;
          v11 = Entry;
        }
        if ( CcEnablePerVolumeLazyWriter )
          v37 = *(_QWORD *)(a1 + 600);
        else
          v37 = 0LL;
        CcChargeDirtyPagesInternal(a1, (_DWORD)v13, (_DWORD)v24, v42, *(_QWORD *)(a1 + 536), v37);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v42 )
        {
          CurrentThread = a4;
          if ( !a4 )
          {
            CurrentThread = KeGetCurrentThread();
            a4 = CurrentThread;
          }
          v39 = CurrentThread->Process[3].Padding[4];
          if ( v39 )
          {
            if ( v42 << 12 )
              _InterlockedAdd64((volatile signed __int64 *)(v39 + 8), (unsigned int)(v42 << 12));
            _InterlockedIncrement64((volatile signed __int64 *)(v39 + 24));
          }
        }
        if ( v33 )
        {
          v13[5] = v44;
          goto LABEL_94;
        }
        v5 = Entry;
        v7 = 1;
      }
LABEL_112:
      v11 = Entry;
LABEL_113:
      v7 = 1;
LABEL_114:
      if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 768), &LockHandle);
        *(_DWORD *)(a1 + 152) |= 0x20000u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( !v7 )
        goto LABEL_118;
      goto LABEL_117;
    }
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
    v11 = 0LL;
LABEL_94:
    v40 = *a2 + a3;
    if ( v40 > *(_QWORD *)(a1 + 48) )
    {
      *(_QWORD *)(a1 + 48) = v40;
      if ( (*(_DWORD *)(a1 + 152) & 0x40000000) != 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 768), &LockHandle);
        v41 = *(_DWORD *)(a1 + 152);
        if ( (v41 & 0x400) == 0 )
          *(_DWORD *)(a1 + 152) = v41 | 0x400;
        CcInsertIntoDirtySharedCacheMapList(a1);
        if ( CcEnablePerVolumeLazyWriter )
        {
          if ( !v10[1172] )
          {
            if ( !v10[985] )
            {
              if ( !v10[984] )
LABEL_122:
                KeBugCheckEx(0x34u, 0x7CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
              KiSetTimerEx((_DWORD)v10 + 920, CcFirstDelay, 0, 0, 0LL);
            }
            if ( !v10[1172] )
            {
              v10[985] = 1;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              goto LABEL_117;
            }
          }
        }
        else if ( !*(_BYTE *)(v9 + 1292) )
        {
          if ( !*(_BYTE *)(v9 + 1049) )
          {
            if ( !*(_BYTE *)(v9 + 1048) )
LABEL_123:
              KeBugCheckEx(0x34u, 0x371uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            KiSetTimerEx(v9 + 984, CcFirstDelay, 0, 0, 0LL);
          }
          if ( !*(_BYTE *)(v9 + 1292) )
            *(_BYTE *)(v9 + 1049) = 1;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
LABEL_117:
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
LABEL_118:
    if ( v11 )
      ExFreeToNPagedLookasideList(&CcBitmapLookasideList, v11);
  }
}
