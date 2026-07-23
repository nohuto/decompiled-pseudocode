/*
 * XREFs of KiAcquireCpuPartitionLock @ 0x14048B51C
 * Callers:
 *     KeModifySystemAllowedCpuSets @ 0x14048B4B0 (KeModifySystemAllowedCpuSets.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F263C (KiQueryCpuPartitionAffinity.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BD154 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireCpuPartitionLock(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 8));
}
