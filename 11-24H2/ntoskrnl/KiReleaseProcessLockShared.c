/*
 * XREFs of KiReleaseProcessLockShared @ 0x1403B16C0
 * Callers:
 *     KeQueryAffinityProcess @ 0x1403B1570 (KeQueryAffinityProcess.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403B3618 (KeQueryPrimaryGroupProcess.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x1404850B4 (KeQueryPrimaryGroupAffinityProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1404D43DC (KeQueryCpuSetsProcess.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseProcessLockShared(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(a1 + 64);
  v3 = (unsigned __int8)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = v3;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(v3);
  return result;
}
