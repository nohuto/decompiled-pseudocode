/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x1402D8890
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1402D7030 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 * Callees:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPrewaitBoost @ 0x140324D00 (ExpApplyPrewaitBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     ExpGetThreadResourceHint @ 0x1403DF900 (ExpGetThreadResourceHint.c)
 *     ExpFindEmptyEntry @ 0x1403DFA70 (ExpFindEmptyEntry.c)
 *     ExpExpandResourceOwnerTable @ 0x1403DFACC (ExpExpandResourceOwnerTable.c)
 *     ExpWaitForResource @ 0x14041F0A0 (ExpWaitForResource.c)
 *     RtlInsertHeadCircularList @ 0x140432480 (RtlInsertHeadCircularList.c)
 *     PerfLogExecutiveResourceAcquire @ 0x14046F874 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1404AE874 (PerfLogExecutiveResourceWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v7; // r15
  volatile __int64 *v8; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 EmptyEntry; // rdx
  int v11; // eax
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v13; // r14
  struct _KTHREAD *v14; // rsi
  __int16 Group; // r13
  signed __int64 Object; // rdi
  int v17; // r12d
  signed __int64 Pool2; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // rax
  unsigned int i; // edx
  int v22; // ecx
  int v23; // eax
  unsigned int ThreadResourceHint; // eax
  unsigned __int64 v26; // r9
  struct _KTHREAD *v27; // rcx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edi
  unsigned int v32; // edi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // eax
  unsigned int v38; // edi
  unsigned int v39; // edi
  int v40; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  __int128 v42; // [rsp+38h] [rbp-38h] BYREF
  __int128 v43; // [rsp+48h] [rbp-28h]
  __int128 v44; // [rsp+58h] [rbp-18h] BYREF
  __int64 v45; // [rsp+68h] [rbp-8h]
  unsigned __int8 GroupIndex; // [rsp+B0h] [rbp+40h]
  int v47; // [rsp+C0h] [rbp+50h]
  int v48; // [rsp+C8h] [rbp+58h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x90A4u);
  v8 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    EmptyEntry = _InterlockedExchange64(v8, (__int64)&LockHandle);
    if ( EmptyEntry )
      KxWaitForLockOwnerShip(&LockHandle, EmptyEntry, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8);
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
          v11 = *(_DWORD *)(a1 + 56) & 7;
          *(_QWORD *)(a1 + 48) = CurrentThread;
          *(_DWORD *)(a1 + 56) = v11 | 8;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          __incgsdword(0x90ACu);
          __incgsdword(0x9064u);
          if ( v7 )
          {
            v48 = *(_DWORD *)(a1 + 68);
            CurrentPrcb = KeGetCurrentPrcb();
            v13 = __rdtsc();
            ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
            v14 = KeGetCurrentThread();
            Group = CurrentPrcb->Group;
            LOWORD(v47) = Group;
            GroupIndex = CurrentPrcb->GroupIndex;
            HIWORD(v47) = GroupIndex;
            if ( (*(_DWORD *)(&v14[1].SwapListEntry + 1) & 1) == 0 )
            {
              Object = (signed __int64)v14[1].WaitBlock[0].Object;
              v17 = EtwpEthreadSyncTrackingSequence;
              if ( Object )
                goto LABEL_13;
              Pool2 = ExAllocatePool2(0x48uLL);
              v19 = Pool2;
              if ( Pool2 )
              {
                *(_QWORD *)(Pool2 + 16) = a1;
                *(_QWORD *)(Pool2 + 28) = 0x10000LL;
                *(_DWORD *)(Pool2 + 40) = v17;
                Object = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v14[1].WaitBlock[0].Object,
                           Pool2,
                           0LL);
                if ( !Object )
                {
LABEL_25:
                  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
                  v23 = *(_DWORD *)(v19 + 32);
                  *(_QWORD *)(v19 + 8) = v13;
                  if ( v23 == 4 )
                  {
                    if ( *(_WORD *)(v19 + 24) == Group && *(_BYTE *)(v19 + 26) == GroupIndex )
                      *(_QWORD *)v19 = v13 - *(_QWORD *)v19;
                    else
                      *(_QWORD *)v19 = 1LL;
                  }
                  else
                  {
                    *(_QWORD *)v19 = 0LL;
                  }
                  *(_DWORD *)(v19 + 24) = v47;
                  *(_DWORD *)(v19 + 44) = v48;
                  *(_DWORD *)(v19 + 32) = 1;
                  *(_DWORD *)(v19 + 36) = 1;
                  return 1;
                }
                ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_13:
                v20 = 0LL;
                for ( i = 0; i < 8; ++i )
                {
                  v22 = *(_DWORD *)(Object + 28);
                  if ( v22 == 0x10000 && *(_QWORD *)(Object + 16) == a1 && *(_DWORD *)(Object + 40) == v17 )
                    goto LABEL_24;
                  if ( !v20 )
                  {
                    if ( v22 )
                    {
                      if ( *(_DWORD *)(Object + 40) < v17 )
                      {
                        v20 = Object;
                        break;
                      }
                    }
                    else
                    {
                      v20 = Object;
                    }
                  }
                  Object += 64LL;
                }
                Object = v20;
                if ( v20 )
                {
                  *(_QWORD *)(v20 + 16) = a1;
                  *(_QWORD *)(v20 + 28) = 0x10000LL;
                  *(_DWORD *)(v20 + 36) = 0;
                  *(_QWORD *)v20 = 0LL;
                  *(_QWORD *)(v20 + 8) = 0LL;
                  *(_DWORD *)(v20 + 24) = 0;
                  *(_DWORD *)(v20 + 40) = v17;
                  *(_DWORD *)(v20 + 44) = 0;
                }
LABEL_24:
                v19 = Object;
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
          v38 = (*(_DWORD *)(a1 + 56) + 8) ^ ((unsigned __int8)(*(_DWORD *)(a1 + 56) + 8) ^ (unsigned __int8)*(_DWORD *)(a1 + 56)) & 7;
          *(_DWORD *)(a1 + 56) = v38;
          v39 = v38 >> 3;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          __incgsdword(0x90A8u);
          __incgsdword(0x9064u);
          if ( v7 )
            PerfLogExecutiveResourceAcquire(65585LL, a1, v39, *(unsigned int *)(a1 + 68));
          return 1;
        }
        EmptyEntry = ExpFindEmptyEntry(a1, &LockHandle);
        if ( EmptyEntry )
          goto LABEL_54;
      }
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread, EmptyEntry, a3, *(unsigned int *)(a1 + 76));
      v27 = *(struct _KTHREAD **)(a1 + 48);
      EmptyEntry = a1 + 48;
      if ( v27 != CurrentThread )
      {
        a3 = 0LL;
        v28 = 0LL;
        if ( v27 )
        {
          a3 = 1LL;
        }
        else
        {
          v28 = a1 + 48;
          if ( (_DWORD)v26 )
            v28 = 0LL;
        }
        if ( !ThreadResourceHint )
          break;
        v30 = *(_QWORD *)(a1 + 16);
        if ( !v30 )
          break;
        if ( ThreadResourceHint >= *(_DWORD *)(v30 + 8) )
          break;
        EmptyEntry = v30 + 16LL * ThreadResourceHint;
        if ( *(struct _KTHREAD **)EmptyEntry != CurrentThread )
          break;
      }
LABEL_53:
      if ( EmptyEntry )
        goto LABEL_54;
    }
    EmptyEntry = *(_QWORD *)(a1 + 16);
    v29 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
    if ( EmptyEntry )
    {
      v26 = EmptyEntry + 16LL * *(unsigned int *)(EmptyEntry + 8);
      EmptyEntry += 16LL;
      if ( a3 < v29 )
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
            if ( ++a3 == v29 )
            {
              EmptyEntry += 16LL;
              break;
            }
          }
          else if ( !v28 )
          {
            v28 = EmptyEntry;
          }
          EmptyEntry += 16LL;
        }
        while ( EmptyEntry != v26 );
      }
    }
    else
    {
      v26 = 0LL;
    }
    if ( v28 )
      break;
    if ( EmptyEntry < v26 )
    {
      v28 = EmptyEntry;
      if ( EmptyEntry )
        break;
    }
    ExpExpandResourceOwnerTable(a1, &LockHandle, a3);
  }
  EmptyEntry = v28;
  KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v28 - *(_DWORD *)(a1 + 16)) >> 4;
LABEL_54:
  if ( *(struct _KTHREAD **)EmptyEntry == CurrentThread )
  {
    v31 = (*(_DWORD *)(EmptyEntry + 8) + 8) ^ ((unsigned __int8)*(_DWORD *)(EmptyEntry + 8) ^ (unsigned __int8)(*(_DWORD *)(EmptyEntry + 8) + 8)) & 7;
    *(_DWORD *)(EmptyEntry + 8) = v31;
    v32 = v31 >> 3;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90B0u);
    __incgsdword(0x9064u);
    if ( v7 )
      PerfLogExecutiveResourceAcquire(65617LL, a1, v32, *(unsigned int *)(a1 + 68));
    return 1;
  }
  if ( *(char *)(a1 + 26) >= 0 )
  {
    ++*(_DWORD *)(a1 + 64);
    *(_WORD *)(a1 + 24) = 1;
    v33 = *(_DWORD *)(EmptyEntry + 8) & 7;
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = v33 | 8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_71;
  }
  if ( a2 )
  {
    v40 = *(_DWORD *)(EmptyEntry + 8);
    *(_QWORD *)EmptyEntry = CurrentThread;
    *(_DWORD *)(EmptyEntry + 8) = v40 & 7 | 8;
    ++*(_DWORD *)(a1 + 72);
    *((_QWORD *)&v44 + 1) = &v44;
    *(_QWORD *)&v44 = &v44;
    *((_QWORD *)&v42 + 1) = 0LL;
    *((_QWORD *)&v43 + 1) = 393217LL;
    *(_QWORD *)&v43 = CurrentThread;
    v45 = 0LL;
    RtlInsertHeadCircularList(a1 + 32, &v42, a3, v26);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x90B4u);
    if ( v7 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(a1, &v42, 66116LL);
LABEL_71:
    v37 = ExpGetThreadResourceHint(CurrentThread, v34, v35, v36);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v37);
    __incgsdword(0x90ACu);
    __incgsdword(0x9064u);
    if ( v7 )
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
