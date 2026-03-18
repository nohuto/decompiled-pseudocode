/*
 * XREFs of KiReleaseProcessLockShared @ 0x140271110
 * Callers:
 *     KeQueryPrimaryGroupProcess @ 0x14026F244 (KeQueryPrimaryGroupProcess.c)
 *     KeQueryAffinityProcess @ 0x140270FC0 (KeQueryAffinityProcess.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x140484F60 (KeQueryPrimaryGroupAffinityProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1404D4504 (KeQueryCpuSetsProcess.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseProcessLockShared(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a1 + 64);
  v4 = (unsigned __int8)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
  {
    _InterlockedAnd(v3, 0xBFFFFFFF);
    _InterlockedDecrement(v3);
  }
  else
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr, a3);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = v4;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  __writecr8(v4);
  return result;
}
