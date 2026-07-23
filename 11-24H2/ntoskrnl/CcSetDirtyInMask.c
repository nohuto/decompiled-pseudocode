/*
 * XREFs of CcSetDirtyInMask @ 0x140456AF0
 * Callers:
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcReleaseByteRangeFromWrite @ 0x140276540 (CcReleaseByteRangeFromWrite.c)
 *     CcSetDirtyPinnedData @ 0x1402769E0 (CcSetDirtyPinnedData.c)
 *     CcPrepareMdlWrite @ 0x14040B2B0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1404567A4 (CcMdlWriteComplete2.c)
 *     CcPurgeAndClearCacheSection @ 0x1404568F4 (CcPurgeAndClearCacheSection.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14043F66C (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcChargeDirtyPagesInternal @ 0x140442A90 (CcChargeDirtyPagesInternal.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
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
  __int64 v13; // r14
  _QWORD *PoolWithTag; // rax
  signed __int64 v15; // r8
  _OWORD *v16; // rax
  _OWORD *v17; // rax
  __int64 v18; // rax
  __int64 **v19; // rdx
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  __int64 **v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rsi
  signed __int64 v26; // rbx
  signed __int64 v27; // rcx
  _QWORD *v28; // rcx
  PVOID *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rdx
  int v33; // ebx
  unsigned int v34; // esi
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  struct _KTHREAD *CurrentThread; // r11
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  unsigned int v42; // [rsp+30h] [rbp-68h]
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
          v13 = *(_QWORD *)(a1 + 168);
          if ( !v13 )
          {
            PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x624D6343u);
            v13 = (__int64)PoolWithTag;
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
          if ( v8 == v44 && v8 == *(_QWORD *)(v13 + 40) )
          {
            v11 = Entry;
            goto LABEL_94;
          }
          if ( (unsigned __int64)v44 < 0x300 || *(_WORD *)v13 == 761 )
            break;
          memset_0(v5, 0, 0x400uLL);
          if ( *(_DWORD *)(v13 + 80) )
          {
            v16 = *(_OWORD **)(v13 + 88);
            *v5 = *v16;
            v5[1] = v16[1];
            v5[2] = v16[2];
            v5[3] = v16[3];
            v5[4] = v16[4];
            v5[5] = v16[5];
            v17 = *(_OWORD **)(v13 + 88);
            *v17 = 0LL;
            v17[1] = 0LL;
            v17[2] = 0LL;
            v17[3] = 0LL;
            v17[4] = 0LL;
            v17[5] = 0LL;
          }
          *(_QWORD *)(v13 + 88) = v5;
          v18 = v13 + 16;
          v19 = *(__int64 ***)(v13 + 24);
          v20 = (__int64 *)(v13 + 96);
          v5 = 0LL;
          Entry = 0LL;
          if ( *v19 != (__int64 *)(v13 + 16) )
            goto LABEL_91;
          *v20 = v18;
          *(_QWORD *)(v13 + 104) = v19;
          *v19 = v20;
          *(_QWORD *)(v13 + 24) = v20;
          v21 = (__int64 *)(v13 + 144);
          *(_QWORD *)(v13 + 112) = 0x7FFFFFFFFFFFFFFFLL;
          *(_DWORD *)(v13 + 120) = -1;
          v22 = *(__int64 ***)(v13 + 24);
          if ( *v22 != (__int64 *)v18 )
            goto LABEL_91;
          *v21 = v18;
          *(_QWORD *)(v13 + 152) = v22;
          *v22 = v21;
          *(_QWORD *)(v13 + 24) = v21;
          *(_QWORD *)(v13 + 160) = 0x7FFFFFFFFFFFFFFFLL;
          *(_DWORD *)(v13 + 168) = -1;
          *(_WORD *)v13 = 761;
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 288));
          v7 = 0;
        }
        v23 = *(_QWORD **)(v13 + 16);
        v24 = 0LL;
        v25 = v13 + 16;
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
              v25 = (__int64)v23;
          }
          else
          {
            v24 = v23;
          }
          v23 = (_QWORD *)*v23;
          if ( v23 == (_QWORD *)(v13 + 16) )
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
        v30 = *(_QWORD *)v25;
        if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
          goto LABEL_91;
        v24[1] = v25;
        *v24 = v30;
        *(_QWORD *)(v30 + 8) = v24;
        *(_QWORD *)v25 = v24;
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
                KiSetTimerEx((__int64)(v10 + 920), CcFirstDelay, 0, 0, 0LL);
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
          *(_QWORD *)(v13 + 32) = v8;
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
        CcChargeDirtyPagesInternal(a1, v13, (__int64)v24, v42, *(_QWORD *)(a1 + 536), v37);
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
              _InterlockedAdd64((volatile signed __int64 *)(v39 + 8), v42 << 12);
            _InterlockedIncrement64((volatile signed __int64 *)(v39 + 24));
          }
        }
        if ( v33 )
        {
          *(_QWORD *)(v13 + 40) = v44;
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
              KiSetTimerEx((__int64)(v10 + 920), CcFirstDelay, 0, 0, 0LL);
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
