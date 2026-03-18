/*
 * XREFs of KiReleaseCpuPartitionLock @ 0x1404F4DAC
 * Callers:
 *     KeModifySystemAllowedCpuSets @ 0x1403C6548 (KeModifySystemAllowedCpuSets.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F4D3C (KiQueryCpuPartitionAffinity.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BFB24 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiReleaseCpuPartitionLock(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = a2;
  result = KxReleaseSpinLock((volatile signed __int64 *)(a1 + 8));
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = v2;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(v2);
  return result;
}
