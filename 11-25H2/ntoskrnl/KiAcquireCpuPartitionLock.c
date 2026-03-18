/*
 * XREFs of KiAcquireCpuPartitionLock @ 0x1404917D8
 * Callers:
 *     KeModifySystemAllowedCpuSets @ 0x14049176C (KeModifySystemAllowedCpuSets.c)
 *     KiQueryCpuPartitionAffinity @ 0x1404F0D2C (KiQueryCpuPartitionAffinity.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BB870 (KeCpuPartitionMoveCpus.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405BBBF8 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 8));
}
