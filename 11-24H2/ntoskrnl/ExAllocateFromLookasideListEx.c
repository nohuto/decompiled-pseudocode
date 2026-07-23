/*
 * XREFs of ExAllocateFromLookasideListEx @ 0x1403C9D30
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 *     NtQueryKey @ 0x140845A20 (NtQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmpBounceContextStart @ 0x140962A30 (CmpBounceContextStart.c)
 *     CmpAllocateKeyControlBlock @ 0x1409DE440 (CmpAllocateKeyControlBlock.c)
 *     VmAccessFault @ 0x140A042B0 (VmAccessFault.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

PVOID __stdcall ExAllocateFromLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // rdi
  ULONG_PTR v3; // rcx
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 Size; // rdx
  __int64 Type; // rcx
  _BYTE *v8; // rsi

  ++Lookaside->L.TotalAllocates;
  v2 = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))Lookaside->L.FreeEx == CmSiFreeMemory )
    {
      v3 = (ULONG_PTR)(&v2->Next + 1);
      BugCheckParameter4 = Lookaside->L.Size - 8LL;
      if ( byte_140FCECA8 )
      {
        if ( v3 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v3, 0LL);
        if ( (v3 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v3, 8uLL);
        if ( v3 + BugCheckParameter4 < v3 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)(&v2->Next + 1), BugCheckParameter4);
        v8 = (_BYTE *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3));
        if ( BugCheckParameter4 >> 3 )
        {
          memset_0(
            (void *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3)),
            0,
            BugCheckParameter4 >> 3);
          v8 += BugCheckParameter4 >> 3;
        }
        if ( (BugCheckParameter4 & 7) != 0 )
          *v8 = BugCheckParameter4 & 7;
      }
    }
    return v2;
  }
  ++Lookaside->L.AllocateMisses;
  Size = Lookaside->L.Size;
  Type = (unsigned int)Lookaside->L.Type;
  if ( (ALLOCATE_FUNCTION_EX *)Lookaside->L.AllocateEx != CmpAllocatePoolLookaside )
    return (PVOID)guard_dispatch_icall_no_overrides(Type, Size);
  if ( (_DWORD)Type != 1 )
    NT_ASSERT("PoolType == PagedPool");
  return (PVOID)CmpAllocatePool(256LL, Size, Lookaside->L.Tag);
}
