/*
 * XREFs of MmCreatePartition @ 0x1407ECA7C
 * Callers:
 *     DifGetAvailableSystemPages @ 0x14060D734 (DifGetAvailableSystemPages.c)
 *     PspAllocatePartition @ 0x14076B05C (PspAllocatePartition.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14066D024 (MiInitializeWorkingSetManagerParameters.c)
 *     MiAllocatePartitionId @ 0x1407DC510 (MiAllocatePartitionId.c)
 *     MiCreatePartitionOffsets @ 0x1407DC65C (MiCreatePartitionOffsets.c)
 *     MiDeletePartition @ 0x1407DC78C (MiDeletePartition.c)
 *     MiInitializePartition @ 0x1407DC8B8 (MiInitializePartition.c)
 *     MiInitializePartitionThreads @ 0x1407DD1EC (MiInitializePartitionThreads.c)
 *     MiCreatePfnBitMaps @ 0x1407EA93C (MiCreatePfnBitMaps.c)
 *     MiInitializeMemoryEvents @ 0x1407F007C (MiInitializeMemoryEvents.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14099F340 (ExAllocateCacheAwareRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmCreatePartition(__int64 *a1, char a2)
{
  __int64 result; // rax
  __int64 PartitionOffsets; // rax
  _QWORD *Pool; // rax
  __int64 v7; // rdi
  __int16 PartitionId; // ax
  int v9; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  if ( (a2 & 1) != 0 )
  {
    *a1 = (__int64)&MiSystemPartition;
    result = 0LL;
    qword_140E38A78 = (__int64)a1;
    return result;
  }
  PartitionOffsets = MiCreatePartitionOffsets(0LL, 0LL);
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, PartitionOffsets + 23872, 1632659789);
  v7 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  MiCreatePartitionOffsets(Pool, ((unsigned __int64)Pool + 23935) & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)(v7 + 184) = a1;
  PartitionId = MiAllocatePartitionId(v7);
  if ( !PartitionId )
  {
    ExFreePoolWithTag((PVOID)v7, 0);
    return 3221225495LL;
  }
  MiInitializePartition((ULONG *)v7, PartitionId);
  if ( (unsigned int)MiInitializeMemoryEvents(v7)
    && (unsigned int)MiCreatePfnBitMaps(v7, 0LL)
    && (unsigned int)MiInitializeWorkingSetManagerParameters(v7)
    && (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (*(_QWORD *)(v7 + 2784) = CacheAwareRundownProtection) != 0LL) )
  {
    v9 = MiInitializePartitionThreads(v7);
    if ( v9 >= 0 )
    {
      *a1 = v7;
      if ( (a2 & 2) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v7 + 4), 0x80u);
        *(_OWORD *)(v7 + 17624) = 0LL;
        *(_OWORD *)(v7 + 17640) = 0LL;
        *(_OWORD *)(v7 + 17656) = 0LL;
        *(_QWORD *)(v7 + 17672) = 0LL;
      }
      return (unsigned int)v9;
    }
  }
  else
  {
    v9 = -1073741670;
  }
  MiDeletePartition((unsigned __int16 *)v7);
  return (unsigned int)v9;
}
