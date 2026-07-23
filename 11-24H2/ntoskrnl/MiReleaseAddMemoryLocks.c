/*
 * XREFs of MiReleaseAddMemoryLocks @ 0x1407EA32C
 * Callers:
 *     MiReturnAddMemoryResources @ 0x14066FA80 (MiReturnAddMemoryResources.c)
 *     MiAddPhysicalMemory @ 0x1407E8C3C (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x14066FB1C (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x14066FB80 (MiUnlockDynamicMemoryNestedExclusive.c)
 */

_QWORD *__fastcall MiReleaseAddMemoryLocks(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *result; // rax

  if ( *(_BYTE *)(a1 + 44) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(ULONG **)(a1 + 48) != &MiSystemPartition )
      MiUnlockDynamicMemoryNestedExclusive();
    result = MiUnlockDynamicMemoryExclusive(*(_QWORD *)(a1 + 48), (__int64)CurrentThread);
    *(_BYTE *)(a1 + 44) = 0;
  }
  return result;
}
