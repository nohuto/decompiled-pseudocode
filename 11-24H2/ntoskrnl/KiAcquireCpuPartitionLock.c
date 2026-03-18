/*
 * XREFs of KiAcquireCpuPartitionLock @ 0x1403C65B4
 * Callers:
 *     KeModifySystemAllowedCpuSets @ 0x1403C6548 (KeModifySystemAllowedCpuSets.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F4D3C (KiQueryCpuPartitionAffinity.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BF6B0 (KeCpuPartitionMoveCpus.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BFB24 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
