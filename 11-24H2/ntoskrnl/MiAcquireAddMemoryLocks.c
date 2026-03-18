/*
 * XREFs of MiAcquireAddMemoryLocks @ 0x1407E8568
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E866C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x14066DDE4 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14066DE40 (MiLockDynamicMemoryNestedExclusive.c)
 */

ULONG *__fastcall MiAcquireAddMemoryLocks(__int64 a1)
{
  ULONG *result; // rax

  *(_BYTE *)(a1 + 44) = 1;
  MiLockDynamicMemoryExclusive(*(_QWORD *)(a1 + 48), (__int64)KeGetCurrentThread());
  result = &MiSystemPartition;
  if ( *(ULONG **)(a1 + 48) != &MiSystemPartition )
    return (ULONG *)MiLockDynamicMemoryNestedExclusive();
  return result;
}
