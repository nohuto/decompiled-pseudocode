/*
 * XREFs of MiGetUltraMdlContext @ 0x14049878C
 * Callers:
 *     MmMapMdl @ 0x140676C90 (MmMapMdl.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiDeleteUltraMapContext @ 0x1402D1B78 (MiDeleteUltraMapContext.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403C6C4C (MiCreateUltraThreadContextHelper.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140E35F28 + ((v1 + 8 * v0) << 6)));
    if ( result )
      return result;
    LOBYTE(v1) = v1 + 1;
  }
  if ( (unsigned int)dword_140E35F20 >= 0x80 )
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35EE0);
  }
  else
  {
    v7 = ExAcquireSpinLockExclusive(&dword_140E35EE0);
  }
  if ( (unsigned int)dword_140E35F20 >= 0x80 )
    v6 = 1;
  else
    ++dword_140E35F20;
  MiReleaseSpinLockExclusive(&dword_140E35EE0, v7);
  if ( v6 )
  {
    MiDeleteUltraMapContext((__int64)Pool + 8, 3uLL);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)Pool;
}
