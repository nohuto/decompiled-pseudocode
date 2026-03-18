/*
 * XREFs of MiReacquireHigherPageTableLock @ 0x1402E7AC0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402B03EC (KxTryToAcquireQueuedSpinLock.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     MiAgeTrimListsTail @ 0x1402E8290 (MiAgeTrimListsTail.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiDeleteVaTail @ 0x1404701A0 (MiDeleteVaTail.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiReacquireHigherPageTableLock(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 Process; // rdx
  unsigned __int64 v9; // r8
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  int v13; // eax
  volatile signed __int32 *v14; // rcx
  struct _KPRCB *v15; // rdx
  char v16; // al
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  char v19; // al
  unsigned int v20; // ecx
  ULONG *v21; // rdx
  _KSPIN_LOCK_QUEUE *volatile *v22; // rcx
  int v23; // eax
  signed __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // r9d
  int *v27; // rbx
  int v28; // eax
  __int64 (__fastcall *v29)(); // rax
  __int64 v30; // rsi
  int v31; // esi
  unsigned int v32; // eax
  char v33; // cl
  ULONG *v34; // r10
  unsigned __int32 v35; // r11d
  int v36; // ecx
  unsigned __int64 v37; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 32);
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = 0xFFFFF6FB7DBED000uLL;
  v9 = 0xFFFFF6FB7DBEDFFFuLL;
  if ( (*(_DWORD *)a1 & 0x1000) != 0 )
  {
    if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
      goto LABEL_3;
  }
  else if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v19 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v19 )
    {
      if ( v19 == 7 )
      {
        v20 = 1;
        v21 = &MiState + 3234;
      }
      else
      {
        v20 = 3;
        if ( v19 == 5 )
          v20 = 0;
        v21 = &MiState + 2 * v20 + 3232;
      }
    }
    else
    {
      v20 = 2;
      v21 = (ULONG *)(v3 + 176);
    }
    v22 = &CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next + 2 * v20 + v20;
    *((_QWORD *)v22 + 1) = v21;
    *v22 = 0LL;
    v23 = KxTryToAcquireQueuedSpinLock((signed __int64)v22, v21);
    goto LABEL_49;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0
    && v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBEDFFFuLL
    && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7] )
  {
    v23 = ExTryAcquireSpinLockExclusiveAtDpcLevel();
    goto LABEL_49;
  }
  if ( (*(_DWORD *)(v3 + 184) & 0xF) == 0 || v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    v24 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (v24 & 1) == 0 )
      {
LABEL_48:
        v23 = 0;
        goto LABEL_49;
      }
      LOBYTE(Process) = (v24 & 0x42) != 0;
      if ( ((unsigned __int8)Process & ((v24 & 0x20) != 0)) == 0 && (MiFlags & 0x600000) != 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 352) != 1 )
        {
          v9 = *(_QWORD *)(Process + 1288);
          if ( v9 )
          {
            v25 = *(_QWORD *)(v9 + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v25 & 0x20) != 0 )
              v24 |= 0x20uLL;
            Process = v24;
            v24 |= 0x42uLL;
            if ( (v25 & 0x42) == 0 )
              v24 = Process;
          }
        }
      }
    }
    if ( (v24 & 1) == 0 || (v24 & 0x1000000000000000LL) != 0 )
      goto LABEL_48;
    Process = 0x1000000000000020LL;
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( v24 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)v7,
                  v24 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                  v24) )
      goto LABEL_48;
    v23 = 1;
LABEL_49:
    if ( !v23 )
    {
      v26 = 1;
      goto LABEL_51;
    }
LABEL_3:
    if ( a2 != 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0
        || a2 < 0xFFFFF6FB7DBED000uLL
        || a2 > 0xFFFFF6FB7DBEDFFFuLL
        || (v11 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
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
        v12 = (a2 >> 3) & 0x1FF;
        v13 = *(_DWORD *)(v11 + 4 * v12);
        v14 = (volatile signed __int32 *)(v11 + 4 * v12);
        if ( (v13 & 0x3FFFFFFF) != 0 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(v14, 0xBFFFFFFF);
            _InterlockedDecrement(v14);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v14, retaddr);
          }
        }
        else
        {
          if ( v13 >= 0 )
            KeBugCheckEx(0x10u, (ULONG_PTR)v14, 0x100uLL, 0LL, 0LL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v14 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v14, retaddr);
        }
      }
      goto LABEL_10;
    }
    v15 = KeGetCurrentPrcb();
    v16 = *(_DWORD *)(v3 + 184) & 0xF;
    if ( v16 )
    {
      if ( v16 == 7 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v15->SelfmapLockHandle[1]);
        goto LABEL_10;
      }
      v17 = 3LL;
      if ( v16 == 5 )
        v17 = 0LL;
    }
    else
    {
      v17 = 2LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v15->SelfmapLockHandle[v17]);
LABEL_10:
    *(_QWORD *)(a1 + 56) = v7;
    return 0LL;
  }
  Process = (2 * (unsigned __int8)((__int64)(v7 + 0x90482413000LL) >> 3)) & 0x1F;
  v33 = (2 * ((__int64)(v7 + 0x90482413000LL) >> 3)) & 0x1F;
  v34 = &MiState + ((unsigned __int64)(2 * (unsigned int)((__int64)(v7 + 0x90482413000LL) >> 3)) >> 5);
  v26 = 1;
  v35 = v34[2459];
  if ( ((v35 >> Process) & 1) == 0 )
  {
    Process = (unsigned int)~(2 << v33);
    v9 = (unsigned int)Process & (v35 | (1 << v33));
    if ( v35 == _InterlockedCompareExchange((volatile signed __int32 *)v34 + 2459, v9, v35) )
      goto LABEL_3;
  }
LABEL_51:
  v27 = (int *)(a1 + 4);
  if ( a3 )
  {
    v28 = *v27;
    *(_QWORD *)(a1 + 72) = a2;
    *v27 = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(4 * a3)) & 0x1C;
  }
  v29 = *(__int64 (__fastcall **)())(a1 + 176);
  *v27 |= 0x20u;
  if ( !v29 )
    goto LABEL_59;
  if ( v29 == MiAgeWorkingSetTail )
  {
    v30 = *(_QWORD *)(a1 + 184);
    if ( (*(_DWORD *)v30 & 3) == 0 && *(__int64 (__fastcall **)())(a1 + 168) != MiSimpleAgePte )
      v26 = 0;
    MiAgeTrimListsTail(a1, v30 + 56, 0, v26, (__int64)MiAgeWorkingSetVpabCallback);
    if ( (*v27 & 0x20) != 0 )
      *(_BYTE *)(v30 + 6) = 1;
    v27 = (int *)(a1 + 4);
    goto LABEL_59;
  }
  if ( v29 == MiUpdateOldWorkingSetPagesTail )
  {
    MiAgeTrimListsTail(a1, *(_DWORD *)(a1 + 184) + 24, 0, 0, (__int64)MiUpdateOldPagesVpabCallback);
LABEL_59:
    v31 = 0;
    goto LABEL_60;
  }
  if ( (char *)v29 == (char *)MiDeleteVaTail )
    v31 = MiDeleteVaTail(a1, Process, v9, 1LL);
  else
    v31 = guard_dispatch_icall_no_overrides(a1, Process);
LABEL_60:
  v32 = *v27 & 0xFFFFFFDF;
  *v27 = v32;
  if ( (v32 & 1) == 0 && v31 < 4 )
  {
    v36 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      MiReleaseWalkLocks(a1);
      return 2LL;
    }
    v37 = *(_QWORD *)(a1 + 56);
    if ( v37 )
    {
      *v27 = v32 | 2;
      if ( (v36 & 0x1000) == 0 || v37 != 0xFFFFF6FB7DBEDF68uLL )
        MiUnlockPageTable(*(_QWORD *)(a1 + 32), v37);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  result = (unsigned int)v31;
  if ( v31 != 5 )
    return 2LL;
  return result;
}
