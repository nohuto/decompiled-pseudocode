/*
 * XREFs of CcSetFileSizesEx @ 0x1404A5BD0
 * Callers:
 *     CcSetFileSizes @ 0x1404A5BB0 (CcSetFileSizes.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     MmFlushSection @ 0x1402C1F80 (MmFlushSection.c)
 *     CcPurgeCacheSection @ 0x1402C4260 (CcPurgeCacheSection.c)
 *     CcDecrementOpenCount @ 0x1402D9A30 (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDeleteMbcb @ 0x1403A3FF8 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x1403A5A90 (CcDeleteBcbs.c)
 *     CcSetVacbLargeOffset @ 0x1403B4820 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403B6E14 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403B6E80 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x1403B6EF8 (CcSetVacbInFreeList.c)
 *     CcGetVacbLargeOffset @ 0x1403B6FA0 (CcGetVacbLargeOffset.c)
 *     FsRtlIsNtstatusExpected @ 0x1404562A0 (FsRtlIsNtstatusExpected.c)
 *     CcPurgeAndClearCacheSection @ 0x140462560 (CcPurgeAndClearCacheSection.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     CcUnmapVacb @ 0x1408B5FF0 (CcUnmapVacb.c)
 *     MmExtendSection @ 0x14093ADB0 (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rsi
  _LARGE_INTEGER ValidDataLength; // rbx
  _LARGE_INTEGER AllocationSize; // rax
  NTSTATUS v5; // r13d
  LARGE_INTEGER FileSize; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB **v8; // rdx
  __int64 SharedCacheMap; // r14
  char v10; // r15
  KSPIN_LOCK *v11; // r12
  unsigned int v12; // r8d
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  NTSTATUS v15; // edi
  NTSTATUS result; // eax
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // rdi
  NTSTATUS v19; // ebx
  unsigned int v20; // r12d
  signed __int64 v21; // rsi
  signed __int64 v22; // rbx
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // r15
  KIRQL v26; // al
  __int64 v27; // rcx
  KIRQL v28; // di
  KSPIN_LOCK *SpinLock; // [rsp+30h] [rbp-39h]
  __int128 v30; // [rsp+38h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+60h] [rbp-9h] BYREF
  int v33; // [rsp+D0h] [rbp+67h]
  LARGE_INTEGER FileOffset; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 QuadPart; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v36; // [rsp+E8h] [rbp+7Fh]

  SectionObjectPointer = FileObject->SectionObjectPointer;
  ValidDataLength = FileSizes->ValidDataLength;
  AllocationSize = FileSizes->AllocationSize;
  v5 = 0;
  memset(&v32, 0, sizeof(v32));
  QuadPart = AllocationSize.QuadPart;
  FileSize = FileSizes->FileSize;
  v30 = 0LL;
  v32.LockQueue.Lock = &CcMasterLock;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v32.LockQueue.Next = 0LL;
  FileOffset = FileSize;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(v32.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v32.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v8 = (struct _KPRCB **)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v32);
    if ( v8 )
      KxWaitForLockOwnerShip((struct _KPRCB *)&v32, v8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v32, (volatile __int64 *)&CcMasterLock);
  }
  SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap;
  v10 = 1;
  if ( !SharedCacheMap || !*(_QWORD *)(SharedCacheMap + 176) )
  {
    KeReleaseInStackQueuedSpinLock(&v32);
    if ( (FileOffset.LowPart & 0xFFF) == 0
      || (MmFlushSection((__int64 *)SectionObjectPointer, (__int64 *)&FileOffset, 1LL, 0LL, &v30, 0),
          result = v30,
          (int)v30 >= 0) )
    {
      if ( !CcPurgeCacheSection(SectionObjectPointer, &FileOffset, 0, 0) )
        return -1073740747;
      return v5;
    }
    return result;
  }
  v11 = (KSPIN_LOCK *)(*(_QWORD *)(SharedCacheMap + 536) + 768LL);
  SpinLock = v11;
  KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  if ( QuadPart > *(_QWORD *)(SharedCacheMap + 32) )
  {
    ++*(_DWORD *)(SharedCacheMap + 4);
    ++*(_DWORD *)(SharedCacheMap + 544);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeReleaseInStackQueuedSpinLock(&v32);
    v10 = 0;
    v12 = *(_DWORD *)(SharedCacheMap + 608);
    v13 = v12 - 1;
    HIDWORD(QuadPart) = (unsigned __int64)(v13 + QuadPart) >> 32;
    LODWORD(QuadPart) = (v13 + QuadPart) & ~(_DWORD)v13;
    if ( v12 < 0x400000 )
      *(_DWORD *)(SharedCacheMap + 608) = 2 * v12;
    v14 = MmExtendSection(*(_QWORD *)(SharedCacheMap + 176), &QuadPart, 1LL);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v14) )
      {
        v15 = -1073741588;
        KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
        CcDecrementOpenCount(SharedCacheMap);
        goto LABEL_62;
      }
    }
    else
    {
      v15 = CcExtendVacbArray(SharedCacheMap, QuadPart);
    }
    KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
    CcDecrementOpenCount(SharedCacheMap);
    if ( v15 >= 0 )
    {
      SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap;
      if ( !SharedCacheMap )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        return 0;
      }
      goto LABEL_22;
    }
LABEL_62:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RtlRaiseStatus(v15);
  }
LABEL_22:
  ++*(_DWORD *)(SharedCacheMap + 4);
  ++*(_DWORD *)(SharedCacheMap + 544);
  if ( v10 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeReleaseInStackQueuedSpinLock(&v32);
    KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
  }
  v17 = *(LARGE_INTEGER *)(SharedCacheMap + 40);
  v18 = FileOffset;
  if ( v17.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( FileOffset.QuadPart < v17.QuadPart )
      *(LARGE_INTEGER *)(SharedCacheMap + 40) = FileOffset;
    *(_LARGE_INTEGER *)(SharedCacheMap + 48) = ValidDataLength;
  }
  v19 = 0;
  if ( v18.QuadPart < *(_QWORD *)(SharedCacheMap + 8) && (*(_DWORD *)(SharedCacheMap + 152) & 4) == 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v20 = 0;
    v36 = *(_QWORD *)(SharedCacheMap + 536);
    if ( *(_QWORD *)(SharedCacheMap + 88) )
    {
      v21 = *(_QWORD *)(SharedCacheMap + 376);
      v22 = v18.QuadPart & 0xFFFFFFFFFFFC0000uLL;
      v23 = (*(_DWORD *)(SharedCacheMap + 152) >> 9) & 1;
      v33 = v23;
      CcAcquireBcbLockAndVacbLock(v23, SharedCacheMap);
      if ( (__int64)(v18.QuadPart & 0xFFFFFFFFFFFC0000uLL) < v21 )
      {
        while ( 1 )
        {
          v24 = *(_QWORD *)(SharedCacheMap + 32);
          if ( v22 < v24 )
          {
            v25 = v24 <= 0x2000000
                ? *(_QWORD *)(*(_QWORD *)(SharedCacheMap + 88) + 8 * ((unsigned __int64)(unsigned int)v22 >> 18))
                : CcGetVacbLargeOffset(SharedCacheMap, v22);
            if ( v25 )
            {
              if ( *(_WORD *)(v25 + 16) )
              {
                CcReleaseBcbLockAndVacbLock(v33, SharedCacheMap);
                v19 = 0;
                goto LABEL_55;
              }
              if ( *(__int64 *)(SharedCacheMap + 32) <= 0x2000000 )
                *(_QWORD *)(*(_QWORD *)(SharedCacheMap + 88) + 8 * ((unsigned __int64)(unsigned int)v22 >> 18)) = 0LL;
              else
                CcSetVacbLargeOffset(SharedCacheMap, v22, 0LL, 0LL);
              _InterlockedDecrement((volatile signed __int32 *)(SharedCacheMap + 548));
              if ( *(_DWORD *)(v36 + 1248) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
                v20 &= ~2u;
              else
                v20 |= 2u;
              CcUnmapVacb(v25, SharedCacheMap, v20);
              v26 = KeAcquireQueuedSpinLock(4uLL);
              v27 = v36;
              *(_QWORD *)(v25 + 8) = 0LL;
              v28 = v26;
              CcSetVacbInFreeList(v27, (_QWORD *)v25, (v20 & 2) != 0);
              KeReleaseQueuedSpinLock(4uLL, v28);
            }
          }
          v22 += 0x40000LL;
          if ( v22 >= v21 )
          {
            CcReleaseBcbLockAndVacbLock(v33, SharedCacheMap);
            v18 = FileOffset;
            goto LABEL_49;
          }
        }
      }
      CcReleaseBcbLockAndVacbLock(v23, SharedCacheMap);
    }
LABEL_49:
    if ( !v18.QuadPart )
    {
      if ( *(_QWORD *)(SharedCacheMap + 168) )
        CcDeleteMbcb(SharedCacheMap);
      if ( *(_QWORD *)(SharedCacheMap + 16) != SharedCacheMap + 16 )
        CcDeleteBcbs(SharedCacheMap);
    }
    v19 = CcPurgeAndClearCacheSection((_QWORD *)SharedCacheMap, &FileOffset);
LABEL_55:
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v18 = FileOffset;
  }
  *(LARGE_INTEGER *)(SharedCacheMap + 8) = v18;
  CcDecrementOpenCount(SharedCacheMap);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v19;
}
