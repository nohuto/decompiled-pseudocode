/*
 * XREFs of ExpStampBigPoolEntry @ 0x1402C3590
 * Callers:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExpStampBigPoolEntry(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  unsigned int v7; // edi
  unsigned __int8 CurrentIrql; // si
  int v10; // r10d
  unsigned int v11; // edx
  char *v12; // rax
  ULONG_PTR v13; // rdi
  ULONG_PTR v14; // rbx
  __int64 v15; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v7 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v17 = ExpLargePoolTableLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v17 + 1, v17);
      if ( v18 == v17 )
        break;
      if ( v17 < 0 )
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
  v10 = 1;
  v11 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
  while ( 1 )
  {
    v12 = (char *)PoolBigPageTable + 32 * v11;
    if ( *(_QWORD *)v12 == BugCheckParameter2 )
      break;
    if ( ++v11 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v10 )
        goto LABEL_10;
      v11 = 0;
      v10 = 0;
    }
  }
  if ( !v12 )
LABEL_10:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v7, 0LL);
  if ( (*((_DWORD *)v12 + 3) & 0x100) != 0 )
  {
    v13 = BugCheckParameter2 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v12 + 3);
    v14 = ExpPoolQuotaCookie ^ BugCheckParameter2;
    *a5 = *((_DWORD *)v12 + 2);
    v15 = *((_QWORD *)v12 + 2);
    *((_QWORD *)v12 + 3) = a3 ^ v14;
    *a4 = v15;
  }
  else
  {
    v13 = -1LL;
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
  __writecr8(CurrentIrql);
  return v13;
}
