/*
 * XREFs of ExAcquireFastResourceWithFlags @ 0x140654880
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403BD5FC (KeAbMarkCrossThreadReleasable.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x140404DF0 (ExpAddFastOwnerEntryToThreadList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceWithFlags(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  char v3; // di
  unsigned __int64 CurrentThread; // r15
  __int16 v8; // r9
  int v9; // r14d
  unsigned __int8 v10; // dl
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v12; // r8
  __int64 v13; // rdx
  char *v14; // rsi
  __int64 v15; // rax
  char v16; // r14
  char v17; // r13
  int v18; // r12d
  bool v19; // r14
  int v20; // r13d
  char v21; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v23; // rdx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 *v27; // rdx
  __int16 v28; // r9
  int v29; // r14d
  int v30; // r13d
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // cl
  struct _KTHREAD *v33; // rdx
  ULONG_PTR v34; // r9
  char v35; // al
  ULONG_PTR v36; // r9
  int v37; // ecx
  signed __int32 *v38; // rbp
  signed __int64 v39; // rax
  volatile signed __int64 v40; // rtt
  char v41; // r14
  int v42; // r13d
  int v43; // r12d
  int v44; // r14d
  char v45; // al
  __int64 v46; // rdx
  signed __int32 *v47; // r8
  signed __int32 v48; // eax
  signed __int32 v49; // ett

  v3 = 1;
  if ( (a3 & 1) != 0 )
  {
    CurrentThread = (unsigned __int64)KeGetCurrentThread();
    v8 = *(_WORD *)(BugCheckParameter2 + 26);
    v9 = a3 & 8;
    v10 = 2 - (v9 != 0);
    if ( (v8 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v12 = KeGetCurrentThread();
      if ( CurrentIrql > v10 )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v10, 0LL);
      if ( CurrentIrql < 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        if ( (v8 & 8) != 0 || (v12->ApcState.InProgressFlags & 2) == 0 )
        {
          if ( CurrentIrql || (v12->MiscFlags & 0x400) != 0 || v12->WaitBlock[3].SpareLong )
          {
            v14 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 0LL);
            if ( !v15 )
            {
              *(_DWORD *)(BugCheckParameter2 + 96) = 1;
              v16 = 3;
              if ( (a3 & 0x10) != 0 )
                v16 = 15;
              v17 = v16;
              v18 = v16 & 2;
              v19 = (v16 & 8) != 0;
              v20 = v17 & 4;
              *(_QWORD *)(BugCheckParameter2 + 80) = CurrentThread | (v20 != 0);
              if ( v14 )
              {
                v21 = v14[8] & 0x3F;
                v14[10] = 1;
                *(_BYTE *)(BugCheckParameter2 + 100) = (2 * v21) | 1;
              }
              if ( v18 )
                _disable();
              if ( v20 )
              {
                KxAcquireSpinLock((PKSPIN_LOCK)(CurrentThread + 1736));
                ExpAddFastOwnerEntryToThreadList(CurrentThread, v23, 1, (_QWORD *)(BugCheckParameter2 + 64));
                KxReleaseSpinLock((volatile signed __int64 *)(CurrentThread + 1736));
              }
              else
              {
                ExpAddFastOwnerEntryToThreadList(CurrentThread, v13, 0, (_QWORD *)(BugCheckParameter2 + 64));
              }
              if ( v18 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  _m_prefetchw(SchedulerAssist);
                  v25 = *SchedulerAssist;
                  do
                  {
                    v26 = v25;
                    v25 = _InterlockedCompareExchange(SchedulerAssist, v25 & 0xFFDFFFFF, v25);
                  }
                  while ( v26 != v25 );
                  if ( (v25 & 0x200000) != 0 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                _enable();
              }
              if ( v20 )
              {
                if ( v19 && v14 )
                {
                  v27 = (__int64 *)v14;
LABEL_93:
                  KeAbMarkCrossThreadReleasable((__int64)CurrentPrcb, v27);
                }
LABEL_94:
                ObfReferenceObjectWithTag((PVOID)CurrentThread, 0x746C6644u);
                return v3;
              }
              return v3;
            }
            if ( *(_QWORD *)(BugCheckParameter2 + 80) == CurrentThread )
            {
              ++*(_DWORD *)(BugCheckParameter2 + 96);
              if ( v14 )
                KeAbPostReleaseEx(BugCheckParameter2, (ULONG_PTR)v14);
              return v3;
            }
            if ( v9 )
            {
              ExpAcquireFastResourceExclusiveSlow((signed __int64 *)BugCheckParameter2, v15, CurrentThread, v14, a3);
              return v3;
            }
            if ( v14 )
              KeAbPostReleaseEx(BugCheckParameter2, (ULONG_PTR)v14);
            return 0;
          }
LABEL_55:
          KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
        }
LABEL_51:
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      }
LABEL_48:
      KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
    }
LABEL_43:
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  }
  if ( (a3 & 6) == 0 )
    return 0;
  v28 = *(_WORD *)(BugCheckParameter2 + 26);
  v29 = a3 & 4;
  v30 = a3 & 0x10;
  v31 = 2 - ((a3 & 8) != 0);
  if ( (v28 & 1) == 0 )
    goto LABEL_43;
  v32 = KeGetCurrentIrql();
  v33 = KeGetCurrentThread();
  if ( v32 > v31 )
    KeBugCheckEx(0x1C6u, 0LL, v32, v31, 0LL);
  if ( v32 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    goto LABEL_48;
  if ( (v28 & 8) == 0 && (v33->ApcState.InProgressFlags & 2) != 0 )
    goto LABEL_51;
  if ( !v32 && (v33->MiscFlags & 0x400) == 0 && !v33->WaitBlock[3].SpareLong )
    goto LABEL_55;
  v34 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)v34 != v33 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v34, 0LL);
  v35 = *(_BYTE *)(a2 + 37);
  if ( (v35 & 2) == 0 )
  {
    v36 = *(_QWORD *)(a2 + 24);
    if ( v36 )
    {
      if ( v36 != BugCheckParameter2 )
        KeBugCheckEx(0x1C6u, 2uLL, a2, v36, 0LL);
    }
  }
  v37 = *(_DWORD *)(a2 + 32);
  if ( !v37 || (v35 & 4) != 0 )
  {
    CurrentThread = (unsigned __int64)KeGetCurrentThread();
    v38 = 0LL;
    if ( !*(_BYTE *)(a2 + 36) )
      v38 = (signed __int32 *)KeAbPreAcquire(BugCheckParameter2, 0LL);
    do
    {
      _m_prefetchw((const void *)BugCheckParameter2);
      v39 = *(_QWORD *)BugCheckParameter2;
      if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 || !v29 && (v39 & 2) != 0 )
        return ExpAcquireFastResourceSharedSlow((struct _KPRCB *)BugCheckParameter2, a2, v38, CurrentThread, a3);
      v40 = *(_QWORD *)BugCheckParameter2;
    }
    while ( v40 != _InterlockedCompareExchange64(
                     (volatile signed __int64 *)BugCheckParameter2,
                     v39 ^ (v39 ^ (v39 + 4)) & 0xFFFFFFFFFFFFFFFCuLL,
                     v39) );
    v41 = 3;
    if ( v30 )
      v41 = 15;
    v42 = v41 & 2;
    v43 = v41 & 4;
    v44 = v41 & 8;
    if ( a2 != BugCheckParameter2 + 64 )
      *(_QWORD *)(a2 + 24) = BugCheckParameter2;
    *(_DWORD *)(a2 + 32) = 1;
    *(_QWORD *)(a2 + 16) = CurrentThread | (v43 != 0);
    if ( v38 )
    {
      v45 = v38[2] & 0x3F;
      *((_BYTE *)v38 + 10) = 1;
      *(_BYTE *)(a2 + 36) = (2 * v45) | 1;
    }
    if ( v42 )
      _disable();
    if ( v43 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(CurrentThread + 1736));
      ExpAddFastOwnerEntryToThreadList(CurrentThread, v46, 1, (_QWORD *)a2);
      KxReleaseSpinLock((volatile signed __int64 *)(CurrentThread + 1736));
    }
    else
    {
      ExpAddFastOwnerEntryToThreadList(CurrentThread, (__int64)v33, 0, (_QWORD *)a2);
    }
    if ( v42 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v47 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v47 )
      {
        _m_prefetchw(v47);
        v48 = *v47;
        do
        {
          v49 = v48;
          v48 = _InterlockedCompareExchange(v47, v48 & 0xFFDFFFFF, v48);
        }
        while ( v49 != v48 );
        if ( (v48 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    if ( v43 )
    {
      if ( v44 && v38 )
      {
        v27 = (__int64 *)v38;
        goto LABEL_93;
      }
      goto LABEL_94;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 32) = v37 + 1;
  }
  return v3;
}
