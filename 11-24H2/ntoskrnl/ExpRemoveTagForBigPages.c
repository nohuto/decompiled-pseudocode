/*
 * XREFs of ExpRemoveTagForBigPages @ 0x1402C3EB0
 * Callers:
 *     ExQueryPoolBlockSize @ 0x140654750 (ExQueryPoolBlockSize.c)
 *     ExpCleanupBigTag @ 0x140654834 (ExpCleanupBigTag.c)
 *     ExpSizeHeapPool @ 0x14065A448 (ExpSizeHeapPool.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpRemoveTagForBigPages(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        ULONG_PTR *a7)
{
  unsigned int v9; // ebp
  unsigned __int8 CurrentIrql; // bl
  int v12; // r10d
  unsigned int v13; // edx
  char *v14; // rax
  unsigned int v15; // r8d
  ULONG_PTR v16; // r8
  __int64 result; // rax
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v9 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v18 = ExpLargePoolTableLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v18 + 1, v18);
      if ( v19 == v18 )
        break;
      if ( v18 < 0 )
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
  v12 = 1;
  v13 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
  while ( 1 )
  {
    v14 = (char *)PoolBigPageTable + 32 * v13;
    if ( *(_QWORD *)v14 == BugCheckParameter2 )
      break;
    if ( ++v13 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v12 )
        goto LABEL_10;
      v13 = 0;
      v12 = 0;
    }
  }
  if ( !v14 )
LABEL_10:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v9, 0LL);
  v15 = *((_DWORD *)v14 + 3);
  *a4 = *((_DWORD *)v14 + 2);
  *a5 = (v15 >> 8) & 0xFFF;
  *a6 = *((_QWORD *)v14 + 2);
  if ( (v15 & 0x100) != 0 )
    v16 = BugCheckParameter2 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v14 + 3);
  else
    v16 = -1LL;
  *a7 = v16;
  if ( a3 )
  {
    _InterlockedDecrement(&ExpPoolBigEntriesInUse);
    *((_QWORD *)v14 + 3) = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v14);
  }
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
