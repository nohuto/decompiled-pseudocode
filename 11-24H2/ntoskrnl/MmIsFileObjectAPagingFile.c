/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x140373D0C
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14037286C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x140372F44 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x1403731E8 (MiIssueSynchronousFlush.c)
 *     FsRtlIsSystemPagingFile @ 0x1403734A0 (FsRtlIsSystemPagingFile.c)
 *     IoSynchronousPageWriteEx @ 0x1403734C0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_BOOL8 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v4; // rax
  BOOL v5; // esi
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  v2 = 2LL;
  if ( KeGetCurrentIrql() == 2 )
  {
    CurrentIrql = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E37288);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&dword_140E37288);
      v7 = dword_140E37288 & 0x7FFFFFFF;
      while ( 1 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(&dword_140E37288, v7 + 1, v7);
        if ( v8 == v7 )
          break;
        if ( v7 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&dword_140E37288, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140E37288, CurrentIrql);
    }
  }
  v4 = (_QWORD *)qword_140E37280;
  while ( v4 )
  {
    if ( v1 < *(v4 - 25) )
    {
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( v1 <= *(v4 - 25) )
        break;
      v4 = (_QWORD *)v4[1];
    }
  }
  v5 = v4 != 0LL;
  if ( CurrentIrql == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E37288);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&dword_140E37288, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E37288);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E37288, retaddr);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    }
    __writecr8(CurrentIrql);
  }
  return v5;
}
