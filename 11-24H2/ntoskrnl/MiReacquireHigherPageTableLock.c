/*
 * XREFs of MiReacquireHigherPageTableLock @ 0x1402E2E70
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402DA128 (KxTryToAcquireQueuedSpinLock.c)
 *     MiAgeTrimListsTail @ 0x1402E36B0 (MiAgeTrimListsTail.c)
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 *     MiDeleteVaTail @ 0x1402E3CF0 (MiDeleteVaTail.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  int v26; // r9d
  signed __int64 v27; // rax
  __int64 v28; // rcx
  int *v29; // rbx
  int v30; // eax
  __int64 (__fastcall *v31)(); // rax
  __int64 v32; // rsi
  int v33; // esi
  unsigned int v34; // eax
  char v35; // cl
  ULONG *v36; // r10
  unsigned __int32 v37; // r11d
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // ecx
  __int64 v41; // rdx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

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
    v25 = KxTryToAcquireQueuedSpinLock((signed __int64)v24, v23);
    v26 = 1;
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
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v15, retaddr);
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
      KiReleaseQueuedSpinLockInstrumented(v19, retaddr);
LABEL_7:
      *((_QWORD *)a1 + 7) = v7;
      return 0LL;
    }
    _m_prefetchw(v19);
    v38 = (__int64)*v19;
    if ( !*v19 )
    {
      if ( v19 == (volatile signed __int64 **)_InterlockedCompareExchange64(v19[1], 0LL, (signed __int64)v19) )
        goto LABEL_7;
      v38 = KxWaitForLockChainValid(v19);
    }
    *v19 = 0LL;
    v39 = (__int64)v19[1];
    if ( (((unsigned __int8)v39 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v38 + 8), v39)) & 4) != 0 )
      KeWakeAddressAll(v38 + 8, v39, v9, v10);
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0
    && v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBEDFFFuLL
    && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7] )
  {
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      goto LABEL_69;
    v26 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 || v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      v27 = *(_QWORD *)v7;
      if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (v27 & 1) != 0 )
      {
        LOBYTE(Process) = (v27 & 0x42) != 0;
        if ( ((unsigned __int8)Process & ((v27 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 352) != 1 )
          {
            v9 = *(_QWORD *)(Process + 1288);
            if ( v9 )
            {
              v28 = *(_QWORD *)(v9 + 8 * ((v7 >> 3) & 0x1FF));
              if ( (v28 & 0x20) != 0 )
                v27 |= 0x20uLL;
              Process = v27;
              v27 |= 0x42uLL;
              if ( (v28 & 0x42) == 0 )
                v27 = Process;
            }
          }
        }
      }
      v26 = 1;
      if ( (v27 & 1) == 0 || (v27 & 0x1000000000000000LL) != 0 )
        goto LABEL_50;
      Process = 0x1000000000000020LL;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      if ( v27 == _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v7,
                    v27 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                    v27) )
        v25 = 1;
      else
LABEL_50:
        v25 = 0;
      goto LABEL_51;
    }
    Process = (2 * (unsigned __int8)((__int64)(v7 + 0x90482413000LL) >> 3)) & 0x1F;
    v35 = (2 * ((__int64)(v7 + 0x90482413000LL) >> 3)) & 0x1F;
    v36 = &MiState + ((unsigned __int64)(2 * (unsigned int)((__int64)(v7 + 0x90482413000LL) >> 3)) >> 5);
    v26 = 1;
    v37 = v36[2459];
    if ( ((v37 >> Process) & 1) == 0 )
    {
      Process = (unsigned int)~(2 << v35);
      v9 = (unsigned int)Process & (v37 | (1 << v35));
      if ( v37 == _InterlockedCompareExchange((volatile signed __int32 *)v36 + 2459, v9, v37) )
        goto LABEL_69;
    }
  }
LABEL_52:
  v29 = a1 + 1;
  if ( a3 )
  {
    v30 = *v29;
    *((_QWORD *)a1 + 9) = a2;
    *v29 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(4 * a3)) & 0x1C;
  }
  v31 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 22);
  *v29 |= 0x20u;
  if ( !v31 )
    goto LABEL_60;
  if ( v31 == MiAgeWorkingSetTail )
  {
    v32 = *((_QWORD *)a1 + 23);
    if ( (*(_DWORD *)v32 & 3) == 0 && *((__int64 (__fastcall **)())a1 + 21) != MiSimpleAgePte )
      v26 = 0;
    MiAgeTrimListsTail((_DWORD)a1, v32 + 56, 0, v26, (__int64)MiAgeWorkingSetVpabCallback);
    if ( (*v29 & 0x20) != 0 )
      *(_BYTE *)(v32 + 6) = 1;
    v29 = a1 + 1;
    goto LABEL_60;
  }
  if ( v31 == MiUpdateOldWorkingSetPagesTail )
  {
    MiAgeTrimListsTail((_DWORD)a1, a1[46] + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
LABEL_60:
    v33 = 0;
    goto LABEL_61;
  }
  if ( (char *)v31 == (char *)MiDeleteVaTail )
    v33 = MiDeleteVaTail(a1, Process, v9, 1LL);
  else
    v33 = guard_dispatch_icall_no_overrides(a1, Process, v9, 1LL);
LABEL_61:
  v34 = *v29 & 0xFFFFFFDF;
  *v29 = v34;
  if ( (v34 & 1) == 0 && v33 < 4 )
  {
    v40 = *a1;
    if ( (*a1 & 2) != 0 )
    {
      MiReleaseWalkLocks(a1);
      return 2LL;
    }
    v41 = *((_QWORD *)a1 + 7);
    if ( v41 )
    {
      *v29 = v34 | 2;
      if ( (v40 & 0x1000) == 0 || v41 != 0xFFFFF6FB7DBEDF68uLL )
        MiUnlockPageTableInternal(*((_QWORD *)a1 + 4), v41);
      *((_QWORD *)a1 + 7) = 0LL;
    }
  }
  result = (unsigned int)v33;
  if ( v33 != 5 )
    return 2LL;
  return result;
}
