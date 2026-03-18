/*
 * XREFs of KiAcquireCpuPartitionLockAtDpcLevel @ 0x1405BFEF0
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140B57C80 (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireCpuPartitionLockAtDpcLevel(__int64 a1)
{
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 8));
}
