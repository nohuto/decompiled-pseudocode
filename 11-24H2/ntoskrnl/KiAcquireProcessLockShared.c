/*
 * XREFs of KiAcquireProcessLockShared @ 0x14039FE44
 * Callers:
 *     KeQueryAffinityProcess @ 0x14039FD80 (KeQueryAffinityProcess.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403A1E28 (KeQueryPrimaryGroupProcess.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x1404805C4 (KeQueryPrimaryGroupAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14048B570 (KeSetSelectedCpuSetsThread.c)
 *     KeQueryCpuSetsProcess @ 0x1404CD5EC (KeQueryCpuSetsProcess.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAcquireProcessLockShared(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bl
  bool v7; // zf
  _DWORD *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // ett

  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v7 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
  v8 = (_DWORD *)(v5 + 64);
  *a2 = CurrentIrql;
  if ( !v7 && !PopHibernateInProgress )
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, 0xFFu);
  _m_prefetchw(v8);
  LODWORD(result) = *v8 & 0x7FFFFFFF;
  while ( 1 )
  {
    v10 = (unsigned int)(result + 1);
    v11 = result;
    result = (unsigned int)_InterlockedCompareExchange(v8, v10, result);
    if ( v11 == (_DWORD)result )
      break;
    if ( (int)result < 0 )
    {
      LOBYTE(v10) = -1;
      return ExpWaitForSpinLockSharedAndAcquire(v8, v10, a3, a4);
    }
  }
  return result;
}
