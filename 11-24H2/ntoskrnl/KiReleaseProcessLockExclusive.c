/*
 * XREFs of KiReleaseProcessLockExclusive @ 0x1403B3B08
 * Callers:
 *     KeSetAffinityProcess @ 0x140202B7C (KeSetAffinityProcess.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x140210350 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     KeStartThread @ 0x1403B3660 (KeStartThread.c)
 *     KeSetDisableQuantumProcess @ 0x1403B4014 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1404526D8 (KeSetQuantumProcess.c)
 *     KeSetProcessPpmPolicy @ 0x140479E80 (KeSetProcessPpmPolicy.c)
 *     KeThawMultiProcess @ 0x1404903A4 (KeThawMultiProcess.c)
 *     KeSetExecuteOptions @ 0x140491328 (KeSetExecuteOptions.c)
 *     KeForceResumeProcess @ 0x1404A7414 (KeForceResumeProcess.c)
 *     KeSetExpectedConcurrencyCountProcess @ 0x1405C06B0 (KeSetExpectedConcurrencyCountProcess.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
