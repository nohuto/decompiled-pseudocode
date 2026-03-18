/*
 * XREFs of MiAcquireAddMemoryLocks @ 0x1407D86A8
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407D87AC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x1406622A4 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x140662300 (MiLockDynamicMemoryNestedExclusive.c)
 */

__int64 *__fastcall MiAcquireAddMemoryLocks(__int64 a1)
{
  __int64 *result; // rax

  *(_BYTE *)(a1 + 44) = 1;
  MiLockDynamicMemoryExclusive(*(_QWORD *)(a1 + 48), (__int64)KeGetCurrentThread());
  result = (__int64 *)&MiSystemPartition;
  if ( *(ULONG **)(a1 + 48) != &MiSystemPartition )
    return MiLockDynamicMemoryNestedExclusive();
  return result;
}
