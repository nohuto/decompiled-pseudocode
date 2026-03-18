/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x14035D458
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x14035C250 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     FsRtlIsSystemPagingFile @ 0x14035C7C0 (FsRtlIsSystemPagingFile.c)
 *     IoSynchronousPageWriteEx @ 0x14035C7E0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

_BOOL8 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  _QWORD *v6; // rax
  BOOL v7; // esi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  v2 = 2LL;
  if ( KeGetCurrentIrql() == 2 )
  {
    CurrentIrql = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E37048);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(&dword_140E37048);
      v4 = dword_140E37048 & 0x7FFFFFFF;
      while ( 1 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange(&dword_140E37048, v4 + 1, v4);
        if ( v5 == v4 )
          break;
        if ( v4 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(&dword_140E37048, CurrentIrql);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140E37048, CurrentIrql);
    }
  }
  v6 = (_QWORD *)qword_140E37040;
  while ( v6 )
  {
    if ( v1 < *(v6 - 25) )
    {
      v6 = (_QWORD *)*v6;
    }
    else
    {
      if ( v1 <= *(v6 - 25) )
        break;
      v6 = (_QWORD *)v6[1];
    }
  }
  v7 = v6 != 0LL;
  if ( CurrentIrql == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E37048);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&dword_140E37048, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E37048);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E37048, retaddr);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    }
    __writecr8(CurrentIrql);
  }
  return v7;
}
