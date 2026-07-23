/*
 * XREFs of MmIsFileObjectAPagingFile @ 0x14025C5CC
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14025ADBC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14025B12C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x14025B804 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14025BAA8 (MiIssueSynchronousFlush.c)
 *     FsRtlIsSystemPagingFile @ 0x14025BD60 (FsRtlIsSystemPagingFile.c)
 *     IoSynchronousPageWriteEx @ 0x14025BD80 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_BOOL8 __fastcall MmIsFileObjectAPagingFile(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v7; // rax
  BOOL v8; // esi
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = a1;
  v5 = 2LL;
  if ( KeGetCurrentIrql() == 2 )
  {
    CurrentIrql = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E373C8);
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
      _m_prefetchw(&dword_140E373C8);
      v10 = dword_140E373C8 & 0x7FFFFFFF;
      while ( 1 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(&dword_140E373C8, v10 + 1, v10);
        if ( v11 == v10 )
          break;
        if ( v10 < 0 )
        {
          LOBYTE(v5) = CurrentIrql;
          ExpWaitForSpinLockSharedAndAcquire(&dword_140E373C8, v5, a3, a4);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140E373C8, CurrentIrql);
    }
  }
  v7 = (_QWORD *)qword_140E373C0;
  while ( v7 )
  {
    if ( v4 < *(v7 - 25) )
    {
      v7 = (_QWORD *)*v7;
    }
    else
    {
      if ( v4 <= *(v7 - 25) )
        break;
      v7 = (_QWORD *)v7[1];
    }
  }
  v8 = v7 != 0LL;
  if ( CurrentIrql == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E373C8);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&dword_140E373C8, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_140E373C8);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140E373C8, retaddr);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    __writecr8(CurrentIrql);
  }
  return v8;
}
