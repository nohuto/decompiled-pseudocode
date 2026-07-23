/*
 * XREFs of CcSetDirtyPinnedData @ 0x1402769E0
 * Callers:
 *     CcZeroDataInCache @ 0x14025EB44 (CcZeroDataInCache.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcReleaseByteRangeFromWrite @ 0x140276540 (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x14048F410 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140A34720 (CcPreparePinWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14043F66C (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcChargeDirtyPagesInternal @ 0x140442A90 (CcChargeDirtyPagesInternal.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  int v11; // r15d
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned __int64 v16; // rax
  LONGLONG v17; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v19; // rcx
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v2 = (char *)BcbVoid;
  v3 = *(_WORD *)BcbVoid;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xF1DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v21;
  v21[0] = BcbVoid;
  v21[1] = 0LL;
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
      v21[0] = i;
      if ( (i & 1) != 0 )
        KeBugCheckEx(0x34u, 0xF7FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v10 = *(_QWORD *)(i + 176);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v10 + 288));
      if ( !*(_BYTE *)(i + 2) )
      {
        v11 = *(_DWORD *)(i + 4) >> 12;
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
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        LockHandle.OldIrql = CurrentIrql;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v13 = _InterlockedExchange64((volatile __int64 *)(v7 + 768), (__int64)&LockHandle);
          if ( v13 )
            KxWaitForLockOwnerShip(&LockHandle, v13);
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
          v14 = *(_QWORD *)(v10 + 600);
        else
          v14 = 0LL;
        CcChargeDirtyPagesInternal(v10, 0, 0, v11, *(_QWORD *)(v10 + 536), v14);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( (*(_DWORD *)(v10 + 152) & 0x10000000) != 0 )
        {
          v15 = v11 << 12;
          v16 = KeGetCurrentThread()->Process[3].Padding[4];
          if ( v16 )
          {
            if ( v15 )
              _InterlockedAdd64((volatile signed __int64 *)(v16 + 8), v15);
            _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
          }
        }
      }
      if ( Lsn )
      {
        v17 = *(_QWORD *)(i + 40);
        QuadPart = Lsn->QuadPart;
        if ( !v17 || QuadPart < v17 )
        {
          *(_QWORD *)(i + 40) = QuadPart;
          QuadPart = Lsn->QuadPart;
        }
        v19 = *(_QWORD *)(i + 48);
        if ( !v19 || QuadPart > v19 )
          *(_QWORD *)(i + 48) = QuadPart;
        if ( Lsn->QuadPart > *(_QWORD *)(v10 + 264) )
          *(LARGE_INTEGER *)(v10 + 264) = *Lsn;
      }
      v20 = *(_QWORD *)(i + 32);
      if ( v20 > *(_QWORD *)(v10 + 48) )
        *(_QWORD *)(v10 + 48) = v20;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v10 + 288));
    }
  }
  else
  {
    CcSetDirtyInMask(v6, v2 + 8, *((unsigned int *)v2 + 1), 0LL);
  }
}
