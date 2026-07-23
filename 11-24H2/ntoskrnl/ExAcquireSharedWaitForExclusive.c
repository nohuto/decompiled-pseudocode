/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x1403D6820
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14025B37C (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x1403D67E0 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     DifExAcquireSharedWaitForExclusiveWrapper @ 0x14061A5E0 (DifExAcquireSharedWaitForExclusiveWrapper.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x14022CDD0 (ExpWaitForResource.c)
 *     ExpApplyPrewaitBoost @ 0x14022CEE0 (ExpApplyPrewaitBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     ExpGetThreadResourceHint @ 0x140322C00 (ExpGetThreadResourceHint.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpTryAcquireResourceShared @ 0x1403D6AF0 (ExpTryAcquireResourceShared.c)
 *     ExpFindCurrentThread @ 0x1403D6B20 (ExpFindCurrentThread.c)
 *     ExpFindEmptyEntry @ 0x1403D6C70 (ExpFindEmptyEntry.c)
 *     RtlInsertHeadCircularList @ 0x14041D800 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14046891C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1404AA110 (PerfLogExecutiveResourceWait.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // r15d
  __int64 v6; // r8
  __int64 v7; // r9
  BOOLEAN v8; // si
  ULONG v9; // ecx
  int ThreadResourceHint; // eax
  __int64 v12; // rax
  int v13; // esi
  unsigned int v14; // esi
  ULONG ActiveEntries; // edx
  unsigned int v16; // esi
  unsigned int v17; // eax
  ULONG v18; // esi
  __int64 EmptyEntry; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  __int128 v27; // [rsp+48h] [rbp-38h] BYREF
  __int128 v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+78h] [rbp-8h]

  v30 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
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
        v8 = ExpTryAcquireResourceShared(Resource);
        v9 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = (ERESOURCE_THREAD)CurrentThread;
        Resource->OwnerEntry.TableSize = v9 | 8;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x90C4u);
        __incgsdword(0x9064u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return v8;
      }
      if ( (Resource->Flag & 0x80) != 0 )
        break;
      if ( Resource->NumberOfExclusiveWaiters )
        goto LABEL_26;
      ThreadResourceHint = ExpGetThreadResourceHint((__int64)CurrentThread);
      v12 = ExpFindCurrentThread(
              (_DWORD)Resource,
              (_DWORD)CurrentThread,
              (unsigned int)&LockHandle,
              1,
              1,
              ThreadResourceHint);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        if ( *(_QWORD *)v12 )
        {
          v14 = (v13 + 8) ^ ((unsigned __int8)(v13 + 8) ^ (unsigned __int8)v13) & 7;
          *(_DWORD *)(v12 + 8) = v14;
        }
        else
        {
          *(_QWORD *)v12 = CurrentThread;
          v14 = v13 & 7 | 8;
          *(_DWORD *)(v12 + 8) = v14;
          ActiveEntries = Resource->ActiveEntries;
          if ( !ActiveEntries || (Resource->ReservedLowFlags & 0x80u) == 0 && !Resource->NumberOfExclusiveWaiters )
          {
            Resource->ActiveCount = 1;
            Resource->ActiveEntries = ActiveEntries + 1;
            v14 = *(_DWORD *)(v12 + 8);
          }
        }
        v16 = v14 >> 3;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v17 = 37064;
        if ( v16 == 1 )
          v17 = 37060;
        __incgsdword(v17);
        __incgsdword(0x90C8u);
        if ( v5 )
        {
          v21 = 65617LL;
          if ( v16 == 1 )
            v21 = 65601LL;
          PerfLogExecutiveResourceAcquire(v21, Resource, 1LL, Resource->ContentionCount);
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
      v20 = 0LL;
      goto LABEL_36;
    }
    EmptyEntry = ExpFindEmptyEntry(Resource, &LockHandle);
    v20 = EmptyEntry;
    if ( EmptyEntry )
    {
      *(_QWORD *)EmptyEntry = CurrentThread;
      *(_DWORD *)(EmptyEntry + 8) = *(_DWORD *)(EmptyEntry + 8) & 7 | 8;
LABEL_36:
      v27 = 0uLL;
      *((_QWORD *)&v29 + 1) = &v29;
      *(_QWORD *)&v29 = &v29;
      ++Resource->NumberOfSharedWaiters;
      *((_QWORD *)&v28 + 1) = 393217LL;
      *(_QWORD *)&v28 = CurrentThread;
      v30 = 0LL;
      RtlInsertHeadCircularList(&Resource->SharedWaiters, &v27, v6, v7);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x90CCu);
      if ( v5 )
        PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
      ExpApplyPrewaitBoost((__int64)Resource);
      ExpWaitForResource(Resource, (__int64)&v27, 0x10244u);
      if ( !v20 )
      {
        KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
        do
          v22 = ExpFindCurrentThread((_DWORD)Resource, (_DWORD)CurrentThread, (unsigned int)&LockHandle, 1, 1, 0);
        while ( !v22 );
        v23 = *(_DWORD *)(v22 + 8) & 7;
        *(_QWORD *)v22 = CurrentThread;
        *(_DWORD *)(v22 + 8) = v23 | 8;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      v24 = ExpGetThreadResourceHint((__int64)CurrentThread);
      ExpBoostIoAfterAcquire((__int64)Resource, (__int64)CurrentThread, v24, v25);
      __incgsdword(0x90C4u);
      __incgsdword(0x9064u);
      if ( v5 )
        PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
      return 1;
    }
  }
  v18 = (Resource->OwnerEntry.TableSize + 8) ^ ((unsigned __int8)*(_DWORD *)&Resource->OwnerEntry.0 ^ (unsigned __int8)(Resource->OwnerEntry.TableSize + 8)) & 7;
  Resource->OwnerEntry.TableSize = v18;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  __incgsdword(0x90C0u);
  __incgsdword(0x9064u);
  if ( v5 )
    PerfLogExecutiveResourceAcquire(65585LL, Resource, v18 >> 3, Resource->ContentionCount);
  return 1;
}
