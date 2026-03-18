/*
 * XREFs of ExpAddTagForBigPages @ 0x1402C4180
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1402C2E9C (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1402C347C (ExInsertPoolTag.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402C40D0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1402C4598 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpResizeBigPageTable @ 0x140440304 (ExpResizeBigPageTable.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // r14d
  int v9; // r13d
  unsigned __int64 v11; // rbp
  KIRQL CurrentIrql; // bl
  char *v13; // rdx
  unsigned __int64 v14; // r8
  volatile signed __int64 *v15; // rcx
  volatile signed __int64 *v16; // r10
  char *v17; // r9
  volatile signed __int64 v18; // rtt
  int v19; // edx
  int v20; // edx
  char *v22; // rcx
  char *v23; // rax
  unsigned int v24; // esi
  __int64 i; // rcx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rdi
  void *v32; // rcx
  _QWORD *v33; // rsi
  void *v34; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  P = 0LL;
  v6 = 0;
  v9 = a2;
  v11 = (40543 * (a1 >> 12)) ^ ((40543 * (a1 >> 12)) >> 32);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v26 = ExpLargePoolTableLock & 0x7FFFFFFF;
      while ( 1 )
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v26 + 1, v26);
        if ( v27 == v26 )
          break;
        if ( v26 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
    }
    v13 = (char *)PoolBigPageTable;
    v14 = PoolBigPageTableSize;
    if ( PoolBigPageTable )
    {
      if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize )
        break;
    }
LABEL_24:
    v24 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(&ExpLargePoolTableLock, 0x1Fu) )
        goto LABEL_45;
      for ( i = (unsigned int)ExpLargePoolTableLock;
            (ExpLargePoolTableLock & 0xBFFFFFFF) != 0x80000001;
            i = (unsigned int)ExpLargePoolTableLock )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(&ExpLargePoolTableLock, 0x40000000u);
        if ( (++v24 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v24);
        }
        else
        {
          _mm_pause();
        }
      }
LABEL_39:
      v28 = ExpResizeBigPageTable(i, v13, &P);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        ExpLargePoolTableLock = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( !v28 )
      {
        ++ExpBigTableExpansionFailed;
        return 0LL;
      }
      v33 = P;
      if ( P )
      {
        do
        {
          v34 = v33;
          v33 = (_QWORD *)*v33;
          ExFreePoolWithTag(v34, 0);
        }
        while ( v33 );
        P = 0LL;
      }
    }
    else
    {
      if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(&ExpLargePoolTableLock, retaddr) )
        goto LABEL_39;
LABEL_45:
      ExReleaseSpinLockShared(&ExpLargePoolTableLock, CurrentIrql);
    }
  }
  v15 = (volatile signed __int64 *)((char *)PoolBigPageTable
                                  + 32 * ((unsigned int)v11 & ((_DWORD)PoolBigPageTableSize - 1)));
  v16 = v15;
  v17 = (char *)PoolBigPageTable + 32 * PoolBigPageTableSize;
  while ( 1 )
  {
    if ( (*v15 & 1) != 0 )
    {
      v18 = *v15;
      if ( v18 == _InterlockedCompareExchange64(v15, a1, *v15) )
        break;
    }
    v22 = (char *)(v15 + 4);
    ++v6;
    v23 = v13;
    if ( v22 < v17 )
      v23 = v22;
    v15 = (volatile signed __int64 *)v23;
    if ( v23 == (char *)v16 )
      goto LABEL_24;
  }
  *((_BYTE *)v15 + 12) = a6;
  v19 = (a4 << 8) ^ (unsigned __int8)*((_DWORD *)v15 + 3);
  *((_DWORD *)v15 + 2) = v9;
  v20 = (a5 << 20) | v19 & 0xFFFFF;
  *((_QWORD *)v15 + 2) = a3;
  *((_DWORD *)v15 + 3) = v20;
  if ( (a4 & 1) != 0 )
    *((_QWORD *)v15 + 3) = ExpPoolQuotaCookie ^ a1;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  if ( v6 < 0x10 || ExpPoolBigEntriesInUse <= (unsigned int)(v14 >> 2) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else if ( ExTryConvertSharedSpinLockExclusive(&ExpLargePoolTableLock) == 1 )
  {
    ExpResizeBigPageTable(v30, v29, &P);
    ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, CurrentIrql);
    v31 = P;
    if ( P )
    {
      do
      {
        v32 = v31;
        v31 = (_QWORD *)*v31;
        ExFreePoolWithTag(v32, 0);
      }
      while ( v31 );
    }
  }
  else
  {
    ExReleaseSpinLockShared(&ExpLargePoolTableLock, CurrentIrql);
  }
  return 1LL;
}
