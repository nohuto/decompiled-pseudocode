/*
 * XREFs of KiAcquireCpuPartitionLockAtDpcLevel @ 0x1405BBFC0
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140B47CE0 (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireCpuPartitionLockAtDpcLevel(__int64 a1)
{
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 8));
}
