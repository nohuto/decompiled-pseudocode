/*
 * XREFs of MiReacquireHigherPageTableLock @ 0x14020B170
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14023BA08 (KxTryToAcquireQueuedSpinLock.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDeleteVaTail @ 0x140462720 (MiDeleteVaTail.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiReacquireHigherPageTableLock(int *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 Process; // rdx
  unsigned __int64 v9; // r8
  ULONG *v10; // r9
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // eax
  volatile signed __int32 *v15; // rcx
  struct _KPRCB *v16; // rdx
  char v17; // al
  __int64 v18; // rcx
  volatile signed __int64 **v19; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  char v21; // al
  unsigned int v22; // ecx
  ULONG *v23; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v24; // rcx
  int v25; // eax
  __int64 v26; // r9
  unsigned __int64 v27; // rcx
  signed __int64 v28; // rax
  __int64 v29; // rcx
  int *v30; // rbx
  int v31; // eax
  __int64 (__fastcall *v32)(); // rax
  __int64 v33; // rsi
  int v34; // esi
  unsigned int v35; // eax
  char v36; // cl
  ULONG *v37; // r10
  unsigned __int32 v38; // r11d
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *((_QWORD *)a1 + 4);
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = 0xFFFFF6FB7DBED000uLL;
  v9 = 0xFFFFF6FB7DBEDFFFuLL;
  v10 = &MiState;
  if ( (*a1 & 0x1000) != 0 )
  {
    if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_3;
  }
  else if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v21 )
    {
      if ( v21 == 7 )
      {
        v22 = 1;
        v23 = &MiState + 3234;
      }
      else
      {
        v22 = 3;
        if ( v21 == 5 )
          v22 = 0;
        v23 = &MiState + 2 * v22 + 3232;
      }
    }
    else
    {
      v22 = 2;
      v23 = (ULONG *)(v3 + 176);
    }
    v24 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v22 + v22;
    *((_QWORD *)v24 + 1) = v23;
    *v24 = 0LL;
    v25 = KxTryToAcquireQueuedSpinLock();
    v26 = 1LL;
LABEL_51:
    if ( !v25 )
      goto LABEL_52;
LABEL_69:
    v10 = &MiState;
    v9 = 0xFFFFF6FB7DBEDFFFuLL;
LABEL_3:
    if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
        || a2 < 0xFFFFF6FB7DBED000uLL
        || a2 > 0xFFFFF6FB7DBEDFFFuLL
        || (v12 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
          _InterlockedAnd(
            (volatile signed __int32 *)&MiState
          + ((unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5)
          + 2459,
            ~(2 << ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                   * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F)));
        else
          _InterlockedAnd64((volatile signed __int64 *)a2, 0xCFFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v13 = (a2 >> 3) & 0x1FF;
        v14 = *(_DWORD *)(v12 + 4 * v13);
        v15 = (volatile signed __int32 *)(v12 + 4 * v13);
        if ( (v14 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v15, 0xBFFFFFFF);
            _InterlockedDecrement(v15);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v15, retaddr, 0xFFFFF6FB7DBEDFFFuLL, &MiState);
          }
        }
        else
        {
          if ( v14 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v15, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v15 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
        }
      }
      goto LABEL_7;
    }
    v16 = KeGetCurrentPrcb();
    v17 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v17 )
    {
      if ( v17 == 7 )
      {
        v18 = 1LL;
      }
      else
      {
        v18 = 3LL;
        if ( v17 == 5 )
          v18 = 0LL;
      }
    }
    else
    {
      v18 = 2LL;
    }
    v19 = (volatile signed __int64 **)&v16->SelfmapLockHandle[v18];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(v19, retaddr, 0xFFFFF6FB7DBEDFFFuLL, &MiState);
LABEL_7:
      *((_QWORD *)a1 + 7) = v7;
      return 0LL;
    }
    _m_prefetchw(v19);
    v39 = (__int64)*v19;
    if ( !*v19 )
    {
      if ( v19 == (volatile signed __int64 **)_InterlockedCompareExchange64(v19[1], 0LL, (signed __int64)v19) )
        goto LABEL_7;
      v39 = KxWaitForLockChainValid(v19, v16, 0xFFFFF6FB7DBEDFFFuLL, &MiState);
    }
    *v19 = 0LL;
    v40 = (__int64)v19[1];
    if ( (((unsigned __int8)v40 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v39 + 8), v40)) & 4) != 0 )
      KeWakeAddressAll(v39 + 8, v40, v9, v10);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0
    && v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBEDFFFuLL
    && (v27 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) != 0 )
  {
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(
                         v27 + 4LL * (((unsigned int)v7 >> 3) & 0x1FF),
                         0xFFFFF6FB7DBED000uLL,
                         0xFFFFF6FB7DBEDFFFuLL,
                         &MiState) )
      goto LABEL_69;
    v26 = 1LL;
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 || v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      v28 = *(_QWORD *)v7;
      if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (v28 & 1) != 0 )
      {
        LOBYTE(Process) = (v28 & 0x42) != 0;
        if ( ((unsigned __int8)Process & ((v28 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 352) != 1 )
          {
            v9 = *(_QWORD *)(Process + 1288);
            if ( v9 )
            {
              v29 = *(_QWORD *)(v9 + 8 * ((v7 >> 3) & 0x1FF));
              if ( (v29 & 0x20) != 0 )
                v28 |= 0x20uLL;
              Process = v28;
              v28 |= 0x42uLL;
              if ( (v29 & 0x42) == 0 )
                v28 = Process;
            }
          }
        }
      }
      v26 = 1LL;
      if ( (v28 & 1) == 0 || (v28 & 0x1000000000000000LL) != 0 )
        goto LABEL_50;
      Process = 0x1000000000000020LL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( v28 == _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v7,
                    v28 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                    v28) )
        v25 = 1;
      else
LABEL_50:
        v25 = 0;
      goto LABEL_51;
    }
    Process = (2 * (unsigned __int8)((__int64)(v7 + 0x90482413000LL) >> 3)) & 0x1F;
    v36 = (2 * ((__int64)(v7 + 0x90482413000LL) >> 3)) & 0x1F;
    v37 = &MiState + ((unsigned __int64)(2 * (unsigned int)((__int64)(v7 + 0x90482413000LL) >> 3)) >> 5);
    v26 = 1LL;
    v38 = v37[2459];
    if ( ((v38 >> Process) & 1) == 0 )
    {
      Process = (unsigned int)~(2 << v36);
      v9 = (unsigned int)Process & (v38 | (1 << v36));
      if ( v38 == _InterlockedCompareExchange((volatile signed __int32 *)v37 + 2459, v9, v38) )
        goto LABEL_69;
    }
  }
LABEL_52:
  v30 = a1 + 1;
  if ( a3 )
  {
    v31 = *v30;
    *((_QWORD *)a1 + 9) = a2;
    *v30 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(4 * a3)) & 0x1C;
  }
  v32 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 22);
  *v30 |= 0x20u;
  if ( !v32 )
    goto LABEL_60;
  if ( v32 == MiAgeWorkingSetTail )
  {
    v33 = *((_QWORD *)a1 + 23);
    if ( (*(_DWORD *)v33 & 3) == 0 && *((__int64 (__fastcall **)())a1 + 21) != MiSimpleAgePte )
      LODWORD(v26) = 0;
    MiAgeTrimListsTail((_DWORD)a1, v33 + 56, 0, v26, (__int64)MiAgeWorkingSetVpabCallback);
    if ( (*v30 & 0x20) != 0 )
      *(_BYTE *)(v33 + 6) = 1;
    v30 = a1 + 1;
    goto LABEL_60;
  }
  if ( v32 == MiUpdateOldWorkingSetPagesTail )
  {
    MiAgeTrimListsTail((_DWORD)a1, a1[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
LABEL_60:
    v34 = 0;
    goto LABEL_61;
  }
  if ( (char *)v32 == (char *)MiDeleteVaTail )
    v34 = MiDeleteVaTail(a1, Process, v9, 1LL);
  else
    v34 = guard_dispatch_icall_no_overrides(a1, Process, v9, 1LL);
LABEL_61:
  v35 = *v30 & 0xFFFFFFDF;
  *v30 = v35;
  if ( (v35 & 1) == 0 && v34 < 4 )
  {
    v41 = *a1;
    if ( (*a1 & 2) != 0 )
    {
      MiReleaseWalkLocks(a1, Process, v9, v26);
      return 2LL;
    }
    v42 = *((_QWORD *)a1 + 7);
    if ( v42 )
    {
      *v30 = v35 | 2;
      if ( (v41 & 0x1000) == 0 || v42 != 0xFFFFF6FB7DBEDF68uLL )
        MiUnlockPageTableInternal(*((_QWORD *)a1 + 4), v42);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  result = (unsigned int)v34;
  if ( v34 != 5 )
    return 2LL;
  return result;
}
