/*
 * XREFs of KiAcquireProcessLockShared @ 0x1403B1634
 * Callers:
 *     KeQueryAffinityProcess @ 0x1403B1570 (KeQueryAffinityProcess.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403B3618 (KeQueryPrimaryGroupProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1403C6670 (KeSetSelectedCpuSetsThread.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x1404850B4 (KeQueryPrimaryGroupAffinityProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1404D43DC (KeQueryCpuSetsProcess.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAcquireProcessLockShared(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  bool v5; // zf
  _DWORD *v6; // rcx
  __int64 result; // rax
  int v8; // ett

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v5 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
  v6 = (_DWORD *)(v3 + 64);
  *a2 = CurrentIrql;
  if ( !v5 && !PopHibernateInProgress )
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v6, 0xFFu);
  _m_prefetchw(v6);
  LODWORD(result) = *v6 & 0x7FFFFFFF;
  while ( 1 )
  {
    v8 = result;
    result = (unsigned int)_InterlockedCompareExchange(v6, result + 1, result);
    if ( v8 == (_DWORD)result )
      break;
    if ( (int)result < 0 )
      return ExpWaitForSpinLockSharedAndAcquire(v6, 0xFFu);
  }
  return result;
}
