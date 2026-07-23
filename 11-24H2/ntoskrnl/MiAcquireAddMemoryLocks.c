/*
 * XREFs of MiAcquireAddMemoryLocks @ 0x1407E8B38
 * Callers:
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiLockDynamicMemoryExclusive @ 0x14066EFB8 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14066F014 (MiLockDynamicMemoryNestedExclusive.c)
 */

char *__fastcall MiAcquireAddMemoryLocks(__int64 a1)
{
  char *result; // rax

  *(_BYTE *)(a1 + 44) = 1;
  MiLockDynamicMemoryExclusive(*(_QWORD *)(a1 + 48), (__int64)KeGetCurrentThread());
  result = (char *)&MiSystemPartition;
  if ( *(ULONG **)(a1 + 48) != &MiSystemPartition )
    return MiLockDynamicMemoryNestedExclusive();
  return result;
}
