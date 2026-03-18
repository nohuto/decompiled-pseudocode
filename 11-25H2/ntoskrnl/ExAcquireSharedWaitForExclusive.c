/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x1403DF600
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14035BCBC (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1403DF5C0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     DifExAcquireSharedWaitForExclusiveWrapper @ 0x140610060 (DifExAcquireSharedWaitForExclusiveWrapper.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x140324D00 (ExpApplyPrewaitBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     ExpTryAcquireResourceShared @ 0x1403DF8D0 (ExpTryAcquireResourceShared.c)
 *     ExpGetThreadResourceHint @ 0x1403DF900 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x1403DF920 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x1403DFA70 (ExpFindEmptyEntry.c)
 *     ExpWaitForResource @ 0x14041F0A0 (ExpWaitForResource.c)
 *     RtlInsertHeadCircularList @ 0x140432480 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14046F874 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1404AE874 (PerfLogExecutiveResourceWait.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  BOOLEAN v9; // si
  ULONG v10; // ecx
  int ThreadResourceHint; // eax
  __int64 v13; // rax
  int v14; // esi
  unsigned int v15; // esi
  ULONG ActiveEntries; // edx
  unsigned int v17; // esi
  unsigned int v18; // eax
  ULONG v19; // esi
  __int64 EmptyEntry; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v30; // [rsp+48h] [rbp-38h] BYREF
  __int128 v31; // [rsp+58h] [rbp-28h]
  __int128 v32; // [rsp+68h] [rbp-18h] BYREF
  __int64 v33; // [rsp+78h] [rbp-8h]

  v33 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v5 = DWORD1(PerfGlobalGroupMask) & 0x20000;
  __incgsdword(0x90BCu);
  KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v9 = ExpTryAcquireResourceShared(Resource);
        v10 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        Resource->OwnerEntry.TableSize = v10 | 8;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x90C4u);
        __incgsdword(0x9064u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return v9;
      }
      if ( (Resource->Flag & 0x80) != 0 )
        break;
      if ( Resource->NumberOfExclusiveWaiters )
        goto LABEL_26;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, v6, v7, v8);
      v13 = ExpFindCurrentThread(
              (_DWORD)Resource,
              (_DWORD)CurrentThread,
              (unsigned int)&LockHandle,
              1,
              1,
              ThreadResourceHint);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 + 8);
        if ( *(_QWORD *)v13 )
        {
          v15 = (v14 + 8) ^ ((unsigned __int8)(v14 + 8) ^ (unsigned __int8)v14) & 7;
          *(_DWORD *)(v13 + 8) = v15;
        }
        else
        {
          *(_QWORD *)v13 = CurrentThread;
          v15 = v14 & 7 | 8;
          *(_DWORD *)(v13 + 8) = v15;
          ActiveEntries = Resource->ActiveEntries;
          if ( !ActiveEntries || (Resource->ReservedLowFlags & 0x80u) == 0 && !Resource->NumberOfExclusiveWaiters )
          {
            Resource->ActiveCount = 1;
            Resource->ActiveEntries = ActiveEntries + 1;
            v15 = *(_DWORD *)(v13 + 8);
          }
        }
        v17 = v15 >> 3;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v18 = 37064;
        if ( v17 == 1 )
          v18 = 37060;
        __incgsdword(v18);
        __incgsdword(0x90C8u);
        if ( v5 )
        {
          v22 = 65617LL;
          if ( v17 == 1 )
            v22 = 65601LL;
          PerfLogExecutiveResourceAcquire(v22, Resource, 1LL, Resource->ContentionCount);
        }
        return 1;
      }
    }
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
      break;
LABEL_26:
    if ( !Wait )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90D0u);
      return 0;
    }
    if ( (Resource->Flag & 0x80) == 0 )
    {
      v21 = 0LL;
      goto LABEL_36;
    }
    EmptyEntry = ExpFindEmptyEntry(Resource, &LockHandle);
    v21 = EmptyEntry;
    if ( EmptyEntry )
    {
      *(_QWORD *)EmptyEntry = CurrentThread;
      *(_DWORD *)(EmptyEntry + 8) = *(_DWORD *)(EmptyEntry + 8) & 7 | 8;
LABEL_36:
      v30 = 0uLL;
      *((_QWORD *)&v32 + 1) = &v32;
      *(_QWORD *)&v32 = &v32;
      ++Resource->NumberOfSharedWaiters;
      *((_QWORD *)&v31 + 1) = 393217LL;
      *(_QWORD *)&v31 = CurrentThread;
      v33 = 0LL;
      RtlInsertHeadCircularList(&Resource->SharedWaiters, &v30, v7, v8);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90CCu);
      if ( v5 )
        PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
      ExpApplyPrewaitBoost((__int64)Resource);
      ExpWaitForResource(Resource, &v30, 66116LL);
      if ( !v21 )
      {
        KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
        do
          v26 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)&LockHandle, 1, 1, 0);
        while ( !v26 );
        v27 = *(_DWORD *)(v26 + 8) & 7;
        *(_QWORD *)v26 = CurrentThread;
        *(_DWORD *)(v26 + 8) = v27 | 8;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      v28 = ExpGetThreadResourceHint(CurrentThread, v23, v24, v25);
      ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread, v28);
      __incgsdword(0x90C4u);
      __incgsdword(0x9064u);
      if ( v5 )
        PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
      return 1;
    }
  }
  v19 = (Resource->OwnerEntry.TableSize + 8) ^ ((unsigned __int8)*(_DWORD *)&Resource->OwnerEntry.0 ^ (unsigned __int8)(Resource->OwnerEntry.TableSize + 8)) & 7;
  Resource->OwnerEntry.TableSize = v19;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x90C0u);
  __incgsdword(0x9064u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65585LL, Resource, v19 >> 3, Resource->ContentionCount);
  return 1;
}
