/*
 * XREFs of KiAcquireProcessLockShared @ 0x140271084
 * Callers:
 *     KeQueryPrimaryGroupProcess @ 0x14026F244 (KeQueryPrimaryGroupProcess.c)
 *     KeQueryAffinityProcess @ 0x140270FC0 (KeQueryAffinityProcess.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x140484F60 (KeQueryPrimaryGroupAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140491830 (KeSetSelectedCpuSetsThread.c)
 *     KeQueryCpuSetsProcess @ 0x1404D4504 (KeQueryCpuSetsProcess.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAcquireProcessLockShared(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  bool v5; // zf
  _DWORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // ett

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
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
    v8 = (unsigned int)(result + 1);
    v9 = result;
    result = (unsigned int)_InterlockedCompareExchange(v6, v8, result);
    if ( v9 == (_DWORD)result )
      break;
    if ( (int)result < 0 )
    {
      LOBYTE(v8) = -1;
      return ExpWaitForSpinLockSharedAndAcquire(v6, v8);
    }
  }
  return result;
}
