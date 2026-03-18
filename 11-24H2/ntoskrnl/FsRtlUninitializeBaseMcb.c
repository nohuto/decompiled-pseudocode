/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x1404408F0
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x1404408B0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AlpcpFreeMessageFunction @ 0x140989F90 (AlpcpFreeMessageFunction.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  __int64 v1; // r8
  __int64 v2; // r9
  struct _SLIST_ENTRY *Mapping; // rbx
  int v5; // edx
  unsigned __int64 v6; // rcx
  PVOID v7; // rcx
  size_t v8; // r8

  if ( Mcb->MaximumPairCount == 15 )
  {
    Mapping = (struct _SLIST_ENTRY *)Mcb->Mapping;
    v5 = 1;
    if ( Mcb->PoolType == 1 )
    {
      ++FsRtlFirstPagedMappingLookasideList.L.TotalFrees;
      if ( LOWORD(FsRtlFirstPagedMappingLookasideList.L.ListHead.Alignment) >= FsRtlFirstPagedMappingLookasideList.L.Depth )
      {
        ++FsRtlFirstPagedMappingLookasideList.L.FreeMisses;
        if ( (void (__stdcall *)(PVOID))FsRtlFirstPagedMappingLookasideList.L.FreeEx == ExFreePool )
        {
          ExFreePool(Mapping);
        }
        else if ( (__int64 (__fastcall *)(PVOID))FsRtlFirstPagedMappingLookasideList.L.FreeEx == AlpcpFreeMessageFunction )
        {
          AlpcpFreeMessageFunction(Mapping);
        }
        else
        {
          guard_dispatch_icall_no_overrides(Mapping, 1LL, v1, v2);
        }
      }
      else
      {
        if ( (void (__stdcall *)(PPRIVILEGE_SET))FsRtlFirstPagedMappingLookasideList.L.FreeEx == CmSiFreeMemory )
        {
          v6 = (unsigned __int64)(&Mapping->Next + 1);
          if ( byte_140FCDC28 )
          {
            if ( v6 < 0xFFFF800000000000uLL )
              KeBugCheckEx(0x1F1u, 2uLL, 1uLL, (ULONG_PTR)(&Mapping->Next + 1), 0LL);
            if ( (v6 & 7) != 0 )
              KeBugCheckEx(0x1F1u, 2uLL, 2uLL, (ULONG_PTR)(&Mapping->Next + 1), 8uLL);
            if ( (_SLIST_ENTRY **)((char *)Mapping + FsRtlFirstPagedMappingLookasideList.L.Size) < &Mapping->Next + 1 )
              KeBugCheckEx(
                0x1F1u,
                2uLL,
                3uLL,
                (ULONG_PTR)(&Mapping->Next + 1),
                FsRtlFirstPagedMappingLookasideList.L.Size - 8LL);
            v8 = (FsRtlFirstPagedMappingLookasideList.L.Size
                - 8LL
                - (unsigned __int64)((LOBYTE(FsRtlFirstPagedMappingLookasideList.L.Size) - 9) & 7)
                + 7) >> 3;
            if ( v8 )
            {
              LOBYTE(v5) = -116;
              memset_0((void *)(KasaniShadow + ((unsigned __int64)(&Mapping[0x80000000000LL].Next + 1) >> 3)), v5, v8);
            }
          }
        }
        RtlpInterlockedPushEntrySList(&FsRtlFirstPagedMappingLookasideList.L.ListHead, Mapping);
      }
    }
    else
    {
      ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, Mcb->Mapping);
    }
  }
  else
  {
    v7 = Mcb->Mapping;
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0);
      Mcb->Mapping = 0LL;
    }
  }
}
