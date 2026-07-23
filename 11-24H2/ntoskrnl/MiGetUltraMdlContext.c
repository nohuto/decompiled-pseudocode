/*
 * XREFs of MiGetUltraMdlContext @ 0x1404930EC
 * Callers:
 *     MmMapMdl @ 0x140677E60 (MmMapMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiDeleteUltraMapContext @ 0x140352DF0 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x140412880 (MiCreateUltraThreadContextHelper.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140E36068 + ((v1 + 8 * v0) << 6)));
    if ( result )
      return result;
    LOBYTE(v1) = v1 + 1;
  }
  if ( (unsigned int)dword_140E36060 >= 0x80 )
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36020);
  }
  else
  {
    v7 = ExAcquireSpinLockExclusive(&dword_140E36020);
  }
  if ( (unsigned int)dword_140E36060 >= 0x80 )
    v6 = 1;
  else
    ++dword_140E36060;
  MiReleaseSpinLockExclusive(&dword_140E36020, v7);
  if ( v6 )
  {
    MiDeleteUltraMapContext((__int64)Pool + 8, 3uLL);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)Pool;
}
