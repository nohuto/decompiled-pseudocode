/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x140229A50
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     ExAcquireSharedStarveExclusive @ 0x1403BC840 (ExAcquireSharedStarveExclusive.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpWaitForResource @ 0x14022CDD0 (ExpWaitForResource.c)
 *     ExpApplyPrewaitBoost @ 0x14022CEE0 (ExpApplyPrewaitBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     ExpGetThreadResourceHint @ 0x140322C00 (ExpGetThreadResourceHint.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpFindEmptyEntry @ 0x1403D6C70 (ExpFindEmptyEntry.c)
 *     ExpExpandResourceOwnerTable @ 0x1403D6CCC (ExpExpandResourceOwnerTable.c)
 *     RtlInsertHeadCircularList @ 0x14041D800 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14046891C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1404AA110 (PerfLogExecutiveResourceWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v6; // r15
  volatile __int64 *v7; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 EmptyEntry; // rdx
  int v10; // eax
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v12; // r14
  struct _KTHREAD *v13; // rsi
  __int16 Group; // r13
  signed __int64 Object; // rdi
  int v16; // r12d
  signed __int64 Pool2; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rax
  unsigned int i; // edx
  int v21; // ecx
  int v22; // eax
  unsigned int ThreadResourceHint; // eax
  unsigned __int64 v25; // r9
  struct _KTHREAD *v26; // rcx
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // edi
  unsigned int v31; // edi
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  unsigned int v37; // edi
  unsigned int v38; // edi
  int v39; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  __int128 v41; // [rsp+38h] [rbp-38h] BYREF
  __int128 v42; // [rsp+48h] [rbp-28h]
  __int128 v43; // [rsp+58h] [rbp-18h] BYREF
  __int64 v44; // [rsp+68h] [rbp-8h]
  unsigned __int8 GroupIndex; // [rsp+B0h] [rbp+40h]
  int v46; // [rsp+C0h] [rbp+50h]
  int v47; // [rsp+C8h] [rbp+58h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v44 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x90A4u);
  v7 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    EmptyEntry = _InterlockedExchange64(v7, (__int64)&LockHandle);
    if ( EmptyEntry )
      KxWaitForLockOwnerShip(&LockHandle, EmptyEntry);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v7);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*(_DWORD *)(a1 + 64) )
        {
          *(_WORD *)(a1 + 24) = 1;
          *(_DWORD *)(a1 + 64) = 1;
          v10 = *(_DWORD *)(a1 + 56) & 7;
          *(_QWORD *)(a1 + 48) = CurrentThread;
          *(_DWORD *)(a1 + 56) = v10 | 8;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          __incgsdword(0x90ACu);
          __incgsdword(0x9064u);
          if ( v6 )
          {
            v47 = *(_DWORD *)(a1 + 68);
            CurrentPrcb = KeGetCurrentPrcb();
            v12 = __rdtsc();
            ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
            v13 = KeGetCurrentThread();
            Group = CurrentPrcb->Group;
            LOWORD(v46) = Group;
            GroupIndex = CurrentPrcb->GroupIndex;
            HIWORD(v46) = GroupIndex;
            if ( (*(_DWORD *)(&v13[1].SwapListEntry + 1) & 1) == 0 )
            {
              Object = (signed __int64)v13[1].WaitBlock[0].Object;
              v16 = EtwpEthreadSyncTrackingSequence;
              if ( Object )
                goto LABEL_13;
              Pool2 = ExAllocatePool2(0x48uLL, 0x200uLL, 0x72546552u);
              v18 = Pool2;
              if ( Pool2 )
              {
                *(_QWORD *)(Pool2 + 16) = a1;
                *(_QWORD *)(Pool2 + 28) = 0x10000LL;
                *(_DWORD *)(Pool2 + 40) = v16;
                Object = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v13[1].WaitBlock[0].Object,
                           Pool2,
                           0LL);
                if ( !Object )
                {
LABEL_25:
                  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
                  v22 = *(_DWORD *)(v18 + 32);
                  *(_QWORD *)(v18 + 8) = v12;
                  if ( v22 == 4 )
                  {
                    if ( *(_WORD *)(v18 + 24) == Group && *(_BYTE *)(v18 + 26) == GroupIndex )
                      *(_QWORD *)v18 = v12 - *(_QWORD *)v18;
                    else
                      *(_QWORD *)v18 = 1LL;
                  }
                  else
                  {
                    *(_QWORD *)v18 = 0LL;
                  }
                  *(_DWORD *)(v18 + 24) = v46;
                  *(_DWORD *)(v18 + 44) = v47;
                  *(_DWORD *)(v18 + 32) = 1;
                  *(_DWORD *)(v18 + 36) = 1;
                  return 1;
                }
                ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_13:
                v19 = 0LL;
                for ( i = 0; i < 8; ++i )
                {
                  v21 = *(_DWORD *)(Object + 28);
                  if ( v21 == 0x10000 && *(_QWORD *)(Object + 16) == a1 && *(_DWORD *)(Object + 40) == v16 )
                    goto LABEL_24;
                  if ( !v19 )
                  {
                    if ( v21 )
                    {
                      if ( *(_DWORD *)(Object + 40) < v16 )
                      {
                        v19 = Object;
                        break;
                      }
                    }
                    else
                    {
                      v19 = Object;
                    }
                  }
                  Object += 64LL;
                }
                Object = v19;
                if ( v19 )
                {
                  *(_QWORD *)(v19 + 16) = a1;
                  *(_QWORD *)(v19 + 28) = 0x10000LL;
                  *(_DWORD *)(v19 + 36) = 0;
                  *(_QWORD *)v19 = 0LL;
                  *(_QWORD *)(v19 + 8) = 0LL;
                  *(_DWORD *)(v19 + 24) = 0;
                  *(_DWORD *)(v19 + 40) = v16;
                  *(_DWORD *)(v19 + 44) = 0;
                }
LABEL_24:
                v18 = Object;
                if ( !Object )
                  return 1;
                goto LABEL_25;
              }
            }
          }
          return 1;
        }
        if ( *(char *)(a1 + 26) >= 0 )
          break;
        if ( *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
        {
          v37 = (*(_DWORD *)(a1 + 56) + 8) ^ ((unsigned __int8)(*(_DWORD *)(a1 + 56) + 8) ^ (unsigned __int8)*(_DWORD *)(a1 + 56)) & 7;
          *(_DWORD *)(a1 + 56) = v37;
          v38 = v37 >> 3;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          __incgsdword(0x90A8u);
          __incgsdword(0x9064u);
          if ( v6 )
            PerfLogExecutiveResourceAcquire(65585LL, a1, v38, *(unsigned int *)(a1 + 68));
          return 1;
        }
        EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
        if ( EmptyEntry )
          goto LABEL_54;
      }
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, EmptyEntry, a3, *(unsigned int *)(a1 + 76));
      v26 = *(struct _KTHREAD **)(a1 + 48);
      EmptyEntry = a1 + 48;
      if ( v26 != CurrentThread )
      {
        a3 = 0LL;
        v27 = 0LL;
        if ( v26 )
        {
          a3 = 1LL;
        }
        else
        {
          v27 = a1 + 48;
          if ( (_DWORD)v25 )
            v27 = 0LL;
        }
        if ( !ThreadResourceHint )
          break;
        v29 = *(_QWORD *)(a1 + 16);
        if ( !v29 )
          break;
        if ( ThreadResourceHint >= *(_DWORD *)(v29 + 8) )
          break;
        EmptyEntry = v29 + 16LL * ThreadResourceHint;
        if ( *(struct _KTHREAD **)EmptyEntry != CurrentThread )
          break;
      }
LABEL_53:
      if ( EmptyEntry )
        goto LABEL_54;
    }
    EmptyEntry = *(_QWORD *)(a1 + 16);
    v28 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
    if ( EmptyEntry )
    {
      v25 = EmptyEntry + 16LL * *(unsigned int *)(EmptyEntry + 8);
      EmptyEntry += 16LL;
      if ( a3 < v28 )
      {
        do
        {
          if ( *(struct _KTHREAD **)EmptyEntry == CurrentThread )
          {
            KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(EmptyEntry - *(_DWORD *)(a1 + 16)) >> 4;
            goto LABEL_53;
          }
          if ( *(_QWORD *)EmptyEntry )
          {
            if ( ++a3 == v28 )
            {
              EmptyEntry += 16LL;
              break;
            }
          }
          else if ( !v27 )
          {
            v27 = EmptyEntry;
          }
          EmptyEntry += 16LL;
        }
        while ( EmptyEntry != v25 );
      }
    }
    else
    {
      v25 = 0LL;
    }
    if ( v27 )
      break;
    if ( EmptyEntry < v25 )
    {
      v27 = EmptyEntry;
      if ( EmptyEntry )
        break;
    }
    ExpExpandResourceOwnerTable(a1, &LockHandle, a3);
  }
  EmptyEntry = v27;
  KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v27 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_54:
  if ( *(struct _KTHREAD **)EmptyEntry == CurrentThread )
  {
    v30 = (*(_DWORD *)(EmptyEntry + 8) + 8) ^ ((unsigned __int8)*(_DWORD *)(EmptyEntry + 8) ^ (unsigned __int8)(*(_DWORD *)(EmptyEntry + 8) + 8)) & 7;
    *(_DWORD *)(EmptyEntry + 8) = v30;
    v31 = v30 >> 3;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90B0u);
    __incgsdword(0x9064u);
    if ( v6 )
      PerfLogExecutiveResourceAcquire(65617LL, a1, v31, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( *(char *)(a1 + 26) >= 0 )
  {
    ++*(_DWORD *)(a1 + 64);
    *(_WORD *)(a1 + 24) = 1;
    v32 = *(_DWORD *)(EmptyEntry + 8) & 7;
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = v32 | 8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_71;
  }
  if ( a2 )
  {
    v39 = *(_DWORD *)(EmptyEntry + 8);
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = v39 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v43 + 1) = &v43;
    *(_QWORD *)&v43 = &v43;
    *((_QWORD *)&v41 + 1) = 0LL;
    *((_QWORD *)&v42 + 1) = 393217LL;
    *(_QWORD *)&v42 = CurrentThread;
    v44 = 0LL;
    RtlInsertHeadCircularList(a1 + 32, &v41, a3, v25);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90B4u);
    if ( v6 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v41, 66116LL);
LABEL_71:
    v36 = ExpGetThreadResourceHint(CurrentThread, v33, v34, v35);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v36);
    __incgsdword(0x90ACu);
    __incgsdword(0x9064u);
    if ( v6 )
      PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
    return 1;
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90B8u);
    return 0;
  }
}
