/*
 * XREFs of KiReleaseProcessLockExclusive @ 0x1403A2318
 * Callers:
 *     KeSetAffinityProcess @ 0x14032B26C (KeSetAffinityProcess.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x1403396B0 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     KeSetDisableQuantumProcess @ 0x1403A2824 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x140447788 (KeSetQuantumProcess.c)
 *     KeSetProcessPpmPolicy @ 0x140475710 (KeSetProcessPpmPolicy.c)
 *     KeThawMultiProcess @ 0x14048A9E4 (KeThawMultiProcess.c)
 *     KeSetExecuteOptions @ 0x14048BE20 (KeSetExecuteOptions.c)
 *     KeForceResumeProcess @ 0x1404A1E44 (KeForceResumeProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405BDC84 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
