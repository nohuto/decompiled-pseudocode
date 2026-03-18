/*
 * XREFs of KiReleaseProcessLockExclusive @ 0x1403AE69C
 * Callers:
 *     KeSetProcessPpmPolicy @ 0x140200830 (KeSetProcessPpmPolicy.c)
 *     KeSetAffinityProcess @ 0x140269780 (KeSetAffinityProcess.c)
 *     KeSetQuantumProcess @ 0x14026A954 (KeSetQuantumProcess.c)
 *     KeSetExecuteOptions @ 0x14026AB3C (KeSetExecuteOptions.c)
 *     KeSetDisableQuantumProcess @ 0x14026AD74 (KeSetDisableQuantumProcess.c)
 *     KeStartThread @ 0x14026AE04 (KeStartThread.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403AE380 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KeThawMultiProcess @ 0x140491514 (KeThawMultiProcess.c)
 *     KeForceResumeProcess @ 0x1404A9118 (KeForceResumeProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BC648 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseProcessLockExclusive(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(a1 + 64);
  v3 = (unsigned __int8)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    *v2 = 0;
  else
    result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = v3;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(v3);
  return result;
}
