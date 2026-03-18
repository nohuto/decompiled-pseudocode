/*
 * XREFs of CcFlushCachePostProcessOneRange @ 0x1402AACA0
 * Callers:
 *     CcWriteBehindInternal @ 0x1402A81F0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1402A91A8 (CcWriteBehindAsync.c)
 *     CcFlushCachePriv @ 0x1402AC810 (CcFlushCachePriv.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C768C (CcAsyncLazywriteWorkerMulti.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14057E33C (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402AB6C0 (CcSetDirtyPinnedData.c)
 *     CcIsFatalWriteError @ 0x1402CBF04 (CcIsFatalWriteError.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcSetDirtyInMask @ 0x1404614E0 (CcSetDirtyInMask.c)
 *     CcPerfLogFlushSection @ 0x140470CF4 (CcPerfLogFlushSection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

bool __fastcall CcFlushCachePostProcessOneRange(__int64 a1)
{
  __int64 v1; // r12
  _DWORD *v2; // rsi
  int *v3; // r13
  bool v4; // zf
  __int64 v5; // rbp
  char v7; // r14
  __int64 *v8; // r15
  unsigned __int8 CurrentIrql; // si
  char v10; // r12
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // r15d
  __int64 v14; // r9
  int v15; // r8d
  unsigned int v16; // r8d
  __int64 *v17; // r8
  __int64 v19; // r15
  __int64 v20; // rax
  signed __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // rbx
  unsigned int v25; // esi
  __int64 v26; // rbx
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // ecx
  char v31; // al
  int v32; // ecx
  __int64 v33; // [rsp+30h] [rbp-88h] BYREF
  int *v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int64 *v37; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  char v39; // [rsp+C0h] [rbp+8h]
  __int64 v40; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+D0h] [rbp+18h]
  unsigned int v42; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)a1;
  v2 = (_DWORD *)(a1 + 60);
  v3 = *(int **)(a1 + 112);
  v4 = *(_DWORD *)(a1 + 60) == 0;
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *(_BYTE *)(a1 + 132);
  v8 = *(__int64 **)(a1 + 24);
  v35 = *(_QWORD *)(a1 + 8);
  v39 = *(_BYTE *)(a1 + 133);
  v37 = *(__int64 **)(a1 + 96);
  v42 = *(_DWORD *)(a1 + 104);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v36 = v1;
  v34 = v3;
  if ( !v4 )
    goto LABEL_34;
  if ( *v3 < 0 )
  {
    v26 = *(_QWORD *)(a1 + 40);
    v27 = *(_DWORD *)(a1 + 48);
    v33 = v26;
    LODWORD(v40) = v27;
    if ( !(unsigned __int8)CcIsFatalWriteError(v5) )
    {
      *(_DWORD *)(a1 + 64) = 1;
      goto LABEL_13;
    }
    v28 = v40;
    v41 = v7 != 0 ? 0x80000016 : 0;
    while ( 1 )
    {
      if ( (xmmword_140FC5B10 & 0x20000) != 0 )
        CcPerfLogFlushSection(*(_QWORD *)(a1 + 176), v5, (unsigned int)&v33, 4096, *(_DWORD *)(a1 + 56));
      *v3 = v41;
      v29 = MmFlushSection(v8, &v33, 4096LL, 0LL, v3, *(_DWORD *)(a1 + 56));
      if ( v29 < 0 )
      {
        v30 = *v3;
        if ( v7 )
        {
          if ( v30 != -2147483626 )
            goto LABEL_62;
        }
        else if ( v30 )
        {
          goto LABEL_62;
        }
        *v3 = v29;
      }
LABEL_62:
      if ( *v3 >= 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
        *(_DWORD *)(v5 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_66;
      }
      v31 = CcIsFatalWriteError(v5);
      v32 = *(_DWORD *)(a1 + 128);
      if ( !v31 )
      {
        *(_DWORD *)(a1 + 64) = 1;
        if ( v32 )
          goto LABEL_66;
LABEL_65:
        *(_DWORD *)(a1 + 128) = *v3;
        goto LABEL_66;
      }
      if ( !v32 )
        goto LABEL_65;
LABEL_66:
      v26 += 4096LL;
      v33 = v26;
      v28 -= 4096;
      if ( !v28 )
      {
        v2 = (_DWORD *)(a1 + 60);
        goto LABEL_13;
      }
    }
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x400) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v1 + 768);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v1 + 768), (__int64)&LockHandle) )
        KxWaitForLockOwnerShip(&LockHandle);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v1 + 768);
    }
    *(_DWORD *)(v5 + 152) |= 0x400u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 = (_DWORD *)(a1 + 60);
  }
  if ( v7 )
  {
    __incgsdword(0x896Cu);
    __addgsdword(0x8970u, (unsigned int)(*(_DWORD *)(a1 + 48) + 4095) >> 12);
  }
  *(_DWORD *)(a1 + 248) += (unsigned int)(*(_DWORD *)(a1 + 48) + 4095) >> 12;
LABEL_13:
  if ( !*v2 && !*(_DWORD *)(a1 + 64) )
  {
    v10 = 0;
    goto LABEL_16;
  }
LABEL_34:
  v10 = 1;
LABEL_16:
  v11 = *(_QWORD **)(a1 + 120);
  v12 = 0LL;
  v13 = *(_DWORD *)(a1 + 48);
  if ( v11 )
  {
    if ( *(_WORD *)v11 != 765 )
      KeBugCheckEx(0x34u, 0x1572uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    do
    {
      v19 = v11[2];
      if ( *(_WORD *)v11 == 765 )
      {
        v12 = v11[1];
        if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
          CcUnpinFileDataEx(v11);
        if ( v10 )
          CcSetDirtyPinnedData(v11, 0LL);
        CcUnpinFileDataEx(v11);
      }
      v11 = (_QWORD *)(v19 - 16);
    }
    while ( *(_QWORD *)(a1 + 40) != v12 );
    v3 = v34;
  }
  else if ( v10 )
  {
    v24 = *(_QWORD *)(a1 + 40);
    while ( 1 )
    {
      v40 = v24;
      if ( !v13 )
        break;
      if ( (v24 & 0xFFFFFFFFFE000000uLL) < ((v24 + v13 - 1LL) & 0xFFFFFFFFFE000000uLL) )
        v25 = ((v24 + 0x1FFFFFF) & 0xFE000000) - v24;
      else
        v25 = v13;
      if ( v25 > 0x2000000 )
        KeBugCheckEx(0x34u, 0x155FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      CcSetDirtyInMask(v5, &v40, v25, 0LL);
      v24 += v25;
      v13 -= v25;
    }
  }
  v14 = *(unsigned int *)(a1 + 48);
  v15 = *(_DWORD *)(a1 + 52);
  *(_QWORD *)(a1 + 224) += v14;
  v16 = v14 + v15;
  *(_DWORD *)(a1 + 52) = v16;
  if ( v16 >= 0x40000 && **(_QWORD **)(a1 + 184) != *(_QWORD *)(a1 + 184) )
  {
    CcPostDeferredWrites(v36, v35);
    *(_DWORD *)(a1 + 52) = 0;
  }
  if ( v7 && !v39 )
  {
    v20 = **(_QWORD **)(a1 + 184) == *(_QWORD *)(a1 + 184) ? CcIdleDelayTick / 0xAu : (unsigned int)CcIdleDelayTick;
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a1 + 152) + v20;
    if ( MEMORY[0xFFFFF78000000320] > *(_QWORD *)(a1 + 160) )
    {
      *((_QWORD *)v3 + 1) = 35422LL;
      return 0;
    }
  }
  v17 = v37;
  if ( v37 )
  {
    v21 = *(_QWORD *)(a1 + 40) + *(unsigned int *)(a1 + 48);
    *(_QWORD *)(a1 + 40) = v21;
    v22 = *v17;
    v23 = v42;
    if ( v22 + v42 <= v21 )
      return 0;
    *(_QWORD *)(a1 + 32) = v21;
    *(_DWORD *)(a1 + 48) = v23 + v22 - v21;
  }
  if ( !*(_BYTE *)(a1 + 201) )
    return 1;
  *(_QWORD *)(a1 + 208) += *(unsigned int *)(a1 + 48);
  return *(_QWORD *)(a1 + 224) >> 12 < *(_QWORD *)(a1 + 216);
}
