/*
 * XREFs of KiAcquireCpuPartitionLockAtDpcLevel @ 0x1405BD520
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140B59D00 (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireCpuPartitionLockAtDpcLevel(__int64 a1)
{
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 8));
}
