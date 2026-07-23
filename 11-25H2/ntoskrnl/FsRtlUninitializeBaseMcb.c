/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x140440D10
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x140440CD0 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpFreeMessageFunction @ 0x1408B4800 (AlpcpFreeMessageFunction.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  _SLIST_ENTRY *Mapping; // rbx
  int v3; // edx
  unsigned __int64 v4; // rcx
  PVOID v5; // rcx
  size_t v6; // r8

  if ( Mcb->MaximumPairCount == 15 )
  {
    Mapping = (_SLIST_ENTRY *)Mcb->Mapping;
    v3 = 1;
    if ( Mcb->PoolType == 1 )
    {
      ++unk_140E11B5C;
      if ( LOWORD(FsRtlFirstPagedMappingLookasideList.Alignment) >= unk_140E11B50 )
      {
        ++unk_140E11B60;
        if ( (void (__stdcall *)(PVOID))unk_140E11B78 == ExFreePool )
        {
          ExFreePool(Mapping);
        }
        else if ( (__int64 (__fastcall *)(PVOID))unk_140E11B78 == AlpcpFreeMessageFunction )
        {
          AlpcpFreeMessageFunction(Mapping);
        }
        else
        {
          guard_dispatch_icall_no_overrides(Mapping, 1LL);
        }
      }
      else
      {
        if ( (void (__stdcall *)(PPRIVILEGE_SET))unk_140E11B78 == CmSiFreeMemory )
        {
          v4 = (unsigned __int64)(&Mapping->Next + 1);
          if ( byte_140FCDC68 )
          {
            if ( v4 < 0xFFFF800000000000uLL )
              KeBugCheckEx(0x1F1u, 2uLL, 1uLL, (ULONG_PTR)(&Mapping->Next + 1), 0LL);
            if ( (v4 & 7) != 0 )
              KeBugCheckEx(0x1F1u, 2uLL, 2uLL, (ULONG_PTR)(&Mapping->Next + 1), 8uLL);
            if ( (_SLIST_ENTRY **)((char *)Mapping + dword_140E11B6C[0]) < &Mapping->Next + 1 )
              KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)(&Mapping->Next + 1), dword_140E11B6C[0] - 8LL);
            v6 = (dword_140E11B6C[0] - 8LL - (unsigned __int64)((LOBYTE(dword_140E11B6C[0]) - 9) & 7) + 7) >> 3;
            if ( v6 )
            {
              LOBYTE(v3) = -116;
              memset_0((void *)(KasaniShadow + ((unsigned __int64)(&Mapping[0x80000000000LL].Next + 1) >> 3)), v3, v6);
            }
          }
        }
        RtlpInterlockedPushEntrySList(&FsRtlFirstPagedMappingLookasideList, Mapping);
      }
    }
    else
    {
      ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, Mcb->Mapping);
    }
  }
  else
  {
    v5 = Mcb->Mapping;
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      Mcb->Mapping = 0LL;
    }
  }
}
