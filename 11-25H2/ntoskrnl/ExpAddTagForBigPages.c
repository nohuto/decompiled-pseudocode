/*
 * XREFs of ExpAddTagForBigPages @ 0x1402FCDC0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1402F7F74 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1402FD6B4 (ExInsertPoolTag.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpResizeBigPageTable @ 0x1402F6DE0 (ExpResizeBigPageTable.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402FCD10 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1402FD1E8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(unsigned __int64 a1, int a2, __int64 a3, int a4, unsigned __int16 a5, char a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  char *v15; // rdx
  unsigned __int64 v16; // r8
  volatile signed __int64 *v17; // rcx
  volatile signed __int64 *v18; // r10
  char *v19; // r9
  volatile signed __int64 v20; // rtt
  int v21; // edx
  int v22; // edx
  char *v24; // rcx
  char *v25; // rax
  unsigned int v26; // esi
  __int64 i; // rcx
  int v28; // esi
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rdi
  void *v32; // rcx
  _QWORD *v33; // rsi
  void *v34; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  P = 0LL;
  v6 = 0;
  v11 = (40543 * (a1 >> 12)) ^ ((40543 * (a1 >> 12)) >> 32);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&ExpLargePoolTableLock);
      v13 = ExpLargePoolTableLock & 0x7FFFFFFF;
      while ( 1 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v13 + 1, v13);
        if ( v14 == v13 )
          break;
        if ( v13 < 0 )
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
    v15 = (char *)PoolBigPageTable;
    v16 = PoolBigPageTableSize;
    if ( PoolBigPageTable )
    {
      if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize )
        break;
    }
LABEL_24:
    v26 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(&ExpLargePoolTableLock, 0x1Fu) )
        goto LABEL_37;
      for ( i = (unsigned int)ExpLargePoolTableLock;
            (ExpLargePoolTableLock & 0xBFFFFFFF) != 0x80000001;
            i = (unsigned int)ExpLargePoolTableLock )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(&ExpLargePoolTableLock, 0x40000000u);
        if ( (++v26 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i) )
        {
          HvlNotifyLongSpinWait(v26);
        }
        else
        {
          _mm_pause();
        }
      }
LABEL_40:
      v28 = ExpResizeBigPageTable(i, (__int64)v15, &P);
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
        goto LABEL_40;
LABEL_37:
      ExReleaseSpinLockShared(&ExpLargePoolTableLock, CurrentIrql);
    }
  }
  v17 = (volatile signed __int64 *)((char *)PoolBigPageTable
                                  + 32 * ((unsigned int)v11 & ((_DWORD)PoolBigPageTableSize - 1)));
  v18 = v17;
  v19 = (char *)PoolBigPageTable + 32 * PoolBigPageTableSize;
  while ( 1 )
  {
    if ( (*v17 & 1) != 0 )
    {
      v20 = *v17;
      if ( v20 == _InterlockedCompareExchange64(v17, a1, *v17) )
        break;
    }
    v24 = (char *)(v17 + 4);
    ++v6;
    v25 = v15;
    if ( v24 < v19 )
      v25 = v24;
    v17 = (volatile signed __int64 *)v25;
    if ( v25 == (char *)v18 )
      goto LABEL_24;
  }
  *((_BYTE *)v17 + 12) = a6;
  v21 = (a4 << 8) ^ (unsigned __int8)*((_DWORD *)v17 + 3);
  *((_DWORD *)v17 + 2) = a2;
  v22 = (a5 << 20) | v21 & 0xFFFFF;
  *((_QWORD *)v17 + 2) = a3;
  *((_DWORD *)v17 + 3) = v22;
  if ( (a4 & 1) != 0 )
    *((_QWORD *)v17 + 3) = ExpPoolQuotaCookie ^ a1;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  if ( v6 < 0x10 || ExpPoolBigEntriesInUse <= (unsigned int)(v16 >> 2) )
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
