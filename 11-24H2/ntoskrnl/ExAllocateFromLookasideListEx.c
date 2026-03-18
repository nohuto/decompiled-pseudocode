/*
 * XREFs of ExAllocateFromLookasideListEx @ 0x1403E16C0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14045D6F0 (CcInitializeCacheMapInternal.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmpBounceContextStart @ 0x14097A220 (CmpBounceContextStart.c)
 *     CmpAllocateKeyControlBlock @ 0x1409E39E0 (CmpAllocateKeyControlBlock.c)
 *     VmAccessFault @ 0x140A07D80 (VmAccessFault.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

PVOID __stdcall ExAllocateFromLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // rdi
  ULONG_PTR v3; // rcx
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 Tag; // r8
  __int64 Size; // rdx
  __int64 Type; // rcx
  _BYTE *v9; // rsi

  ++Lookaside->L.TotalAllocates;
  v2 = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))Lookaside->L.FreeEx == CmSiFreeMemory )
    {
      v3 = (ULONG_PTR)(&v2->Next + 1);
      BugCheckParameter4 = Lookaside->L.Size - 8LL;
      if ( byte_140FCDC28 )
      {
        if ( v3 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v3, 0LL);
        if ( (v3 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v3, 8uLL);
        if ( v3 + BugCheckParameter4 < v3 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)(&v2->Next + 1), BugCheckParameter4);
        v9 = (_BYTE *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3));
        if ( BugCheckParameter4 >> 3 )
        {
          memset_0(
            (void *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3)),
            0,
            BugCheckParameter4 >> 3);
          v9 += BugCheckParameter4 >> 3;
        }
        if ( (BugCheckParameter4 & 7) != 0 )
          *v9 = BugCheckParameter4 & 7;
      }
    }
    return v2;
  }
  ++Lookaside->L.AllocateMisses;
  Tag = Lookaside->L.Tag;
  Size = Lookaside->L.Size;
  Type = (unsigned int)Lookaside->L.Type;
  if ( (ALLOCATE_FUNCTION_EX *)Lookaside->L.AllocateEx != CmpAllocatePoolLookaside )
    return (PVOID)guard_dispatch_icall_no_overrides(Type, Size, Tag, Lookaside);
  if ( (_DWORD)Type != 1 )
    NT_ASSERT("PoolType == PagedPool");
  return (PVOID)CmpAllocatePool(256LL, Size, Tag);
}
