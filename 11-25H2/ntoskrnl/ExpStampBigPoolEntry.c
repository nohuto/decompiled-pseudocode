/*
 * XREFs of ExpStampBigPoolEntry @ 0x1402FBED0
 * Callers:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  int v12; // r10d
  unsigned int v13; // edx
  char *v14; // rax
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // rbx
  __int64 v17; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v7 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&ExpLargePoolTableLock);
    v10 = ExpLargePoolTableLock & 0x7FFFFFFF;
    while ( 1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange(&ExpLargePoolTableLock, v10 + 1, v10);
      if ( v11 == v10 )
        break;
      if ( v10 < 0 )
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
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v7, 0LL);
  if ( (*((_DWORD *)v14 + 3) & 0x100) != 0 )
  {
    v15 = BugCheckParameter2 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v14 + 3);
    v16 = ExpPoolQuotaCookie ^ BugCheckParameter2;
    *a5 = *((_DWORD *)v14 + 2);
    v17 = *((_QWORD *)v14 + 2);
    *((_QWORD *)v14 + 3) = a3 ^ v16;
    *a4 = v17;
  }
  else
  {
    v15 = -1LL;
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
  return v15;
}
