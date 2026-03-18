/*
 * XREFs of ExFreeToLookasideListEx @ 0x1402CD350
 * Callers:
 *     CcFreePrivateCacheMapIgnoreNull @ 0x1402CD2F8 (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x1402CD320 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     NtQueryKey @ 0x140849760 (NtQueryKey.c)
 *     CmpDecommisssionKcb @ 0x140870D10 (CmpDecommisssionKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20 (CmpDereferenceKeyControlBlockWithLock.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmpBounceContextCleanup @ 0x14097A1D0 (CmpBounceContextCleanup.c)
 *     CmpFreeKeyControlBlock @ 0x1409D6920 (CmpFreeKeyControlBlock.c)
 *     VmAccessFault @ 0x140A07D80 (VmAccessFault.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __stdcall ExFreeToLookasideListEx(PLOOKASIDE_LIST_EX Lookaside, PVOID Entry)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _SLIST_ENTRY *v5; // rdi
  ULONG_PTR v6; // rcx
  void *v7; // rcx
  size_t v8; // r8

  ++Lookaside->L.TotalFrees;
  v5 = (struct _SLIST_ENTRY *)Entry;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    guard_dispatch_icall_no_overrides(Entry, Lookaside, v2, v3);
  }
  else
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))Lookaside->L.FreeEx == CmSiFreeMemory )
    {
      v6 = (ULONG_PTR)Entry + 8;
      if ( byte_140FCDC28 )
      {
        if ( v6 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v6, 0LL);
        if ( (v6 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v6, 8uLL);
        if ( (char *)Entry + Lookaside->L.Size < (char *)Entry + 8 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v6, Lookaside->L.Size - 8LL);
        v7 = (void *)(KasaniShadow + (((unsigned __int64)Entry + 0x800000000008LL) >> 3));
        v8 = (Lookaside->L.Size - 8LL - (unsigned __int64)(((unsigned __int8)Lookaside->L.Size - 9) & 7) + 7) >> 3;
        if ( v8 )
        {
          LOBYTE(Entry) = -116;
          memset_0(v7, (int)Entry, v8);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, v5);
  }
}
