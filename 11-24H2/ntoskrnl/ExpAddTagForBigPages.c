/*
 * XREFs of ExpAddTagForBigPages @ 0x14021A4A0
 * Callers:
 *     ExInsertPoolTag @ 0x14021B9D0 (ExInsertPoolTag.c)
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x14021A3F0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14021A8B8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpResizeBigPageTable @ 0x1403E8ED4 (ExpResizeBigPageTable.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAddTagForBigPages(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned int v6; // r14d
  int v7; // r15d
  int v9; // r13d
  unsigned __int64 v11; // rbp
  KIRQL CurrentIrql; // bl
  char *v13; // rdx
  unsigned __int64 v14; // r8
  volatile signed __int64 *v15; // rcx
  volatile signed __int64 *v16; // r10
  volatile signed __int64 v17; // rtt
  int v18; // edx
  int v19; // edx
  char *v21; // rcx
  char *v22; // rax
  unsigned int v23; // esi
  __int64 i; // rcx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rdi
  void *v31; // rcx
  _QWORD *v32; // rsi
  void *v33; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  P = 0LL;
  v6 = 0;
  v7 = (int)a4;
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
      v25 = ExpLargePoolTableLock & 0x7FFFFFFF;
      while ( 1 )
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v25 + 1, v25);
        if ( v26 == v25 )
          break;
        if ( v25 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql, a3, (__int64)a4);
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
    v23 = 0;
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
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i, v13, v14, a4) )
        {
          HvlNotifyLongSpinWait(v23);
        }
        else
        {
          _mm_pause();
        }
      }
LABEL_39:
      v27 = ExpResizeBigPageTable(i, v13, &P);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        ExpLargePoolTableLock = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      if ( !v27 )
      {
        ++ExpBigTableExpansionFailed;
        return 0LL;
      }
      v32 = P;
      if ( P )
      {
        do
        {
          v33 = v32;
          v32 = (_QWORD *)*v32;
          ExFreePoolWithTag(v33, 0);
        }
        while ( v32 );
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
  a4 = (char *)PoolBigPageTable + 32 * PoolBigPageTableSize;
  while ( 1 )
  {
    if ( (*v15 & 1) != 0 )
    {
      v17 = *v15;
      if ( v17 == _InterlockedCompareExchange64(v15, a1, *v15) )
        break;
    }
    v21 = (char *)(v15 + 4);
    ++v6;
    v22 = v13;
    if ( v21 < a4 )
      v22 = v21;
    v15 = (volatile signed __int64 *)v22;
    if ( v22 == (char *)v16 )
      goto LABEL_24;
  }
  *((_BYTE *)v15 + 12) = a6;
  v18 = (v7 << 8) ^ (unsigned __int8)*((_DWORD *)v15 + 3);
  *((_DWORD *)v15 + 2) = v9;
  v19 = (a5 << 20) | v18 & 0xFFFFF;
  *((_QWORD *)v15 + 2) = a3;
  *((_DWORD *)v15 + 3) = v19;
  if ( (v7 & 1) != 0 )
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
    ExpResizeBigPageTable(v29, v28, &P);
    ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, CurrentIrql);
    v30 = P;
    if ( P )
    {
      do
      {
        v31 = v30;
        v30 = (_QWORD *)*v30;
        ExFreePoolWithTag(v31, 0);
      }
      while ( v30 );
    }
  }
  else
  {
    ExReleaseSpinLockShared(&ExpLargePoolTableLock, CurrentIrql);
  }
  return 1LL;
}
