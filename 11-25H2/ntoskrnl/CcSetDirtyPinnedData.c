/*
 * XREFs of CcSetDirtyPinnedData @ 0x1402D6A70
 * Callers:
 *     CcZeroDataInCache @ 0x1402D5AD0 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402D6ED4 (CcReleaseByteRangeFromWrite.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcUnpinRepinnedBcb @ 0x1403A73C0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140A3AB70 (CcPreparePinWrite.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1404498E8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcChargeDirtyPagesInternal @ 0x14044C490 (CcChargeDirtyPagesInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  char *v2; // r8
  __int16 v3; // ax
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r13
  _BYTE *v8; // r12
  __int64 i; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r15d
  unsigned __int8 CurrentIrql; // bp
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r15d
  unsigned __int64 v18; // rax
  LONGLONG v19; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v21; // rcx
  __int64 v22; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v2 = (char *)BcbVoid;
  v3 = *(_WORD *)BcbVoid;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xF1DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v23;
  v23[0] = BcbVoid;
  v23[1] = 0LL;
  if ( v3 == 762 )
  {
    BcbVoid = (PVOID)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)(v2 + 16);
  }
  v6 = *((_QWORD *)BcbVoid + 22);
  v7 = *(_QWORD *)(v6 + 536);
  if ( CcEnablePerVolumeLazyWriter )
    v8 = *(_BYTE **)(v6 + 600);
  else
    v8 = 0LL;
  if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v6 + 248) + 136LL) == -1LL )
    *(_QWORD *)(*(_QWORD *)(v6 + 248) + 136LL) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
  {
    for ( i = *v5; *v5; i = *v5 )
    {
      ++v5;
      v23[0] = i;
      if ( (i & 1) != 0 )
        KeBugCheckEx(0x34u, 0xF7FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v10 = *(_QWORD *)(i + 176);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v10 + 288));
      if ( !*(_BYTE *)(i + 2) )
      {
        v13 = *(_DWORD *)(i + 4) >> 12;
        *(_BYTE *)(i + 2) = 1;
        if ( Lsn )
        {
          *(LARGE_INTEGER *)(i + 40) = *Lsn;
          *(LARGE_INTEGER *)(i + 48) = *Lsn;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 768);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        LockHandle.OldIrql = CurrentIrql;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v15 = _InterlockedExchange64((volatile __int64 *)(v7 + 768), (__int64)&LockHandle);
          if ( v15 )
            KxWaitForLockOwnerShip(&LockHandle, v15, v11, v12);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7 + 768);
        }
        if ( !*(_DWORD *)(v10 + 112) && (*(_DWORD *)(v10 + 152) & 2) == 0 )
        {
          if ( CcEnablePerVolumeLazyWriter )
          {
            if ( !v8[1172] )
            {
              if ( !v8[985] )
              {
                if ( !v8[984] )
                  KeBugCheckEx(0x34u, 0x7CBuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
                KiSetTimerEx((_DWORD)v8 + 920, CcFirstDelay, 0, 0, 0LL);
              }
              if ( !v8[1172] )
                v8[985] = 1;
            }
          }
          else if ( !*(_BYTE *)(v7 + 1292) )
          {
            if ( !*(_BYTE *)(v7 + 1049) )
            {
              if ( !*(_BYTE *)(v7 + 1048) )
                KeBugCheckEx(0x34u, 0x371uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
              KiSetTimerEx(v7 + 984, CcFirstDelay, 0, 0, 0LL);
            }
            if ( !*(_BYTE *)(v7 + 1292) )
              *(_BYTE *)(v7 + 1049) = 1;
          }
          CcInsertIntoDirtySharedCacheMapList(v10);
        }
        if ( CcEnablePerVolumeLazyWriter )
          v16 = *(_QWORD *)(v10 + 600);
        else
          v16 = 0LL;
        CcChargeDirtyPagesInternal(v10, 0, 0, v13, *(_QWORD *)(v10 + 536), v16);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( (*(_DWORD *)(v10 + 152) & 0x10000000) != 0 )
        {
          v17 = v13 << 12;
          v18 = KeGetCurrentThread()->Process[3].Padding[4];
          if ( v18 )
          {
            if ( v17 )
              _InterlockedAdd64((volatile signed __int64 *)(v18 + 8), v17);
            _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
          }
        }
      }
      if ( Lsn )
      {
        v19 = *(_QWORD *)(i + 40);
        QuadPart = Lsn->QuadPart;
        if ( !v19 || QuadPart < v19 )
        {
          *(_QWORD *)(i + 40) = QuadPart;
          QuadPart = Lsn->QuadPart;
        }
        v21 = *(_QWORD *)(i + 48);
        if ( !v21 || QuadPart > v21 )
          *(_QWORD *)(i + 48) = QuadPart;
        if ( Lsn->QuadPart > *(_QWORD *)(v10 + 264) )
          *(LARGE_INTEGER *)(v10 + 264) = *Lsn;
      }
      v22 = *(_QWORD *)(i + 32);
      if ( v22 > *(_QWORD *)(v10 + 48) )
        *(_QWORD *)(v10 + 48) = v22;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 288));
    }
  }
  else
  {
    CcSetDirtyInMask(v6, (__int64 *)v2 + 1, *((_DWORD *)v2 + 1), 0LL);
  }
}
