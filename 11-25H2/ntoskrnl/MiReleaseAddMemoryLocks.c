/*
 * XREFs of MiReleaseAddMemoryLocks @ 0x1407D9E9C
 * Callers:
 *     MiReturnAddMemoryResources @ 0x140662D6C (MiReturnAddMemoryResources.c)
 *     MiAddPhysicalMemory @ 0x1407D87AC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x140662E08 (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x140662E6C (MiUnlockDynamicMemoryNestedExclusive.c)
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
