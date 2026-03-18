/*
 * XREFs of MiGetUltraMdlContext @ 0x140498B1C
 * Callers:
 *     MmMapMdl @ 0x14066B340 (MmMapMdl.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiCreateUltraThreadContextHelper @ 0x140436B50 (MiCreateUltraThreadContextHelper.c)
 *     MiDeleteUltraMapContext @ 0x140450D20 (MiDeleteUltraMapContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiGetUltraMdlContext()
{
  __int64 v0; // rbx
  unsigned __int64 v1; // rdi
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax
  void *Pool; // rdi
  unsigned __int8 CurrentIrql; // si
  int v6; // ebx
  KIRQL v7; // si
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  v0 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v1 = __rdtsc() >> 4;
  for ( i = 0; i < 8; ++i )
  {
    v1 &= 7u;
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140E35CE8 + ((v1 + 8 * v0) << 6)));
    if ( result )
      return result;
    LOBYTE(v1) = v1 + 1;
  }
  if ( (unsigned int)dword_140E35CE0 >= 0x80 )
    return 0LL;
  Pool = (void *)MiAllocatePool(0x40uLL, 0x28uLL, 1834314061);
  if ( !Pool )
    return 0LL;
  MiInitializePageColorBase(0LL, 3, v0 + 1, (__int64)&v8);
  CurrentIrql = KeGetCurrentIrql();
  if ( !(unsigned int)MiCreateUltraThreadContextHelper((__int64)Pool + 8, 3u, (__int64)&v8, 0) )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v6 = 0;
  if ( CurrentIrql == 2 )
  {
    v7 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35CA0);
  }
  else
  {
    v7 = ExAcquireSpinLockExclusive(&dword_140E35CA0);
  }
  if ( (unsigned int)dword_140E35CE0 >= 0x80 )
    v6 = 1;
  else
    ++dword_140E35CE0;
  MiReleaseSpinLockExclusive(&dword_140E35CA0, v7);
  if ( v6 )
  {
    MiDeleteUltraMapContext((__int64)Pool + 8, 3uLL);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)Pool;
}
