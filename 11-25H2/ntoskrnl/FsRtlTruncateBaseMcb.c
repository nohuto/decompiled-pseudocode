/*
 * XREFs of FsRtlTruncateBaseMcb @ 0x1403F29F0
 * Callers:
 *     FsRtlTruncateLargeMcb @ 0x1403F29B0 (FsRtlTruncateLargeMcb.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlFindLargeIndex @ 0x1403F2B00 (FsRtlFindLargeIndex.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTruncateBaseMcb(PBASE_MCB Mcb, LONGLONG Vbn)
{
  unsigned int v2; // edi
  ULONG PairCount; // esi
  __int64 v5; // rax
  _DWORD *Mapping; // r8
  ULONG v7; // esi
  PVOID PoolWithTag; // rax
  void *v9; // rdi
  ULONG v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v2 = Vbn;
  if ( (_DWORD)Vbn )
  {
    if ( Mcb->PairCount && (unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)(Vbn - 1), &v10) )
    {
      v5 = v10;
      Mapping = Mcb->Mapping;
      if ( Mapping[2 * v10 + 1] == -1 )
      {
        Mcb->PairCount = v10;
      }
      else
      {
        Mcb->PairCount = v10 + 1;
        if ( (unsigned int)v5 < (int)v5 + 1 && (_DWORD)v5 != -1 && Mapping[2 * v5] > v2 )
          Mapping[2 * v5] = v2;
      }
    }
  }
  else
  {
    Mcb->PairCount = 0;
  }
  PairCount = Mcb->PairCount;
  if ( PairCount < Mcb->MaximumPairCount >> 2 && Mcb->MaximumPairCount > 0xF )
  {
    v7 = 2 * PairCount;
    if ( v7 < 0xF )
      v7 = 15;
    if ( v7 == 15 )
    {
      if ( Mcb->PoolType == 1 )
        PoolWithTag = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList);
      else
        PoolWithTag = ExAllocateFromNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)Mcb->PoolType, 8LL * v7, 0x6D695346u);
    }
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, Mcb->Mapping, 8LL * Mcb->PairCount);
      ExFreePoolWithTag(Mcb->Mapping, 0);
      Mcb->Mapping = v9;
      Mcb->MaximumPairCount = v7;
    }
  }
}
