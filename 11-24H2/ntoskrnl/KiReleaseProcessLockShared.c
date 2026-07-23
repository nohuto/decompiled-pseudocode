/*
 * XREFs of KiReleaseProcessLockShared @ 0x14039FED0
 * Callers:
 *     KeQueryAffinityProcess @ 0x14039FD80 (KeQueryAffinityProcess.c)
 *     KeQueryPrimaryGroupProcess @ 0x1403A1E28 (KeQueryPrimaryGroupProcess.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x1404805C4 (KeQueryPrimaryGroupAffinityProcess.c)
 *     KeQueryCpuSetsProcess @ 0x1404CD5EC (KeQueryCpuSetsProcess.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
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
