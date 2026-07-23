/*
 * XREFs of ExAllocateCacheAwareRundownProtection @ 0x1408ACFB0
 * Callers:
 *     DifExAllocateCacheAwareRundownProtectionWrapper @ 0x14061A750 (DifExAllocateCacheAwareRundownProtectionWrapper.c)
 *     PfpPartitionAllocateState @ 0x14074565C (PfpPartitionAllocateState.c)
 *     EtwpPreInitializeSiloState @ 0x1407A8F1C (EtwpPreInitializeSiloState.c)
 *     MmCreatePartition @ 0x1407FD07C (MmCreatePartition.c)
 *     RawInitializeVcb @ 0x1408ACE6C (RawInitializeVcb.c)
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x140483430 (KeGetRecommendedSharedDataAlignment.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PEX_RUNDOWN_REF_CACHE_AWARE __stdcall ExAllocateCacheAwareRundownProtection(POOL_TYPE PoolType, ULONG PoolTag)
{
  POOL_TYPE v3; // ebp
  struct _EX_RUNDOWN_REF_CACHE_AWARE *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v5; // rbx
  unsigned int v6; // edi
  ULONG RecommendedSharedDataAlignment; // esi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  _EX_RUNDOWN_REF *v10; // rcx
  unsigned int v11; // r8d
  unsigned int Number; // ecx
  int v13; // edx

  v3 = PoolType | 0x400;
  PoolWithTag = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)ExAllocatePoolWithTag(
                                                        (POOL_TYPE)(PoolType | 0x400),
                                                        0x18uLL,
                                                        PoolTag);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  v6 = KeNumberProcessors_0;
  PoolWithTag->Number = KeNumberProcessors_0;
  if ( v6 <= 1 )
    RecommendedSharedDataAlignment = 8;
  else
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v5->RunRefSize = RecommendedSharedDataAlignment;
  v8 = (unsigned __int64)ExAllocatePoolWithTag(v3, RecommendedSharedDataAlignment * v6, PoolTag);
  if ( v8 )
  {
    if ( v5->Number <= 1 || (v9 = RecommendedSharedDataAlignment - 1, (v9 & v8) == 0) )
    {
      v10 = (_EX_RUNDOWN_REF *)v8;
LABEL_9:
      v5->RunRefs = v10;
      v11 = 0;
      Number = v5->Number;
      v5->PoolToFree = (void *)v8;
      if ( Number )
      {
        do
        {
          v13 = v11 % Number;
          ++v11;
          *(unsigned __int64 *)((char *)&v5->RunRefs->Count + v5->RunRefSize * v13) = 0LL;
          Number = v5->Number;
        }
        while ( v11 < Number );
      }
      return v5;
    }
    ExFreePoolWithTag((PVOID)v8, 0);
    v8 = (unsigned __int64)ExAllocatePoolWithTag(v3, RecommendedSharedDataAlignment * (v5->Number + 1), PoolTag);
    if ( v8 )
    {
      v10 = (_EX_RUNDOWN_REF *)(~v9 & (v9 + v8));
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
