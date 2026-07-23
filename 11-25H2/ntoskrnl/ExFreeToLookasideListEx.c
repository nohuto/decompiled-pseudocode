/*
 * XREFs of ExFreeToLookasideListEx @ 0x1403A52A0
 * Callers:
 *     CcFreePrivateCacheMapIgnoreNull @ 0x1403A524C (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x1403A5274 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmpDecommisssionKcb @ 0x140848640 (CmpDecommisssionKcb.c)
 *     NtQueryKey @ 0x14084D9C0 (NtQueryKey.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpBounceContextCleanup @ 0x1409967B0 (CmpBounceContextCleanup.c)
 *     CmpFreeKeyControlBlock @ 0x1409D6F70 (CmpFreeKeyControlBlock.c)
 *     VmAccessFault @ 0x140A05C20 (VmAccessFault.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __stdcall ExFreeToLookasideListEx(PLOOKASIDE_LIST_EX Lookaside, PVOID Entry)
{
  _SLIST_ENTRY *v3; // rdi
  ULONG_PTR v4; // rcx
  void *v5; // rcx
  size_t v6; // r8

  ++Lookaside->L.TotalFrees;
  v3 = (_SLIST_ENTRY *)Entry;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    guard_dispatch_icall_no_overrides(Entry, Lookaside);
  }
  else
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))Lookaside->L.FreeEx == CmSiFreeMemory )
    {
      v4 = (ULONG_PTR)Entry + 8;
      if ( byte_140FCDC68 )
      {
        if ( v4 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v4, 0LL);
        if ( (v4 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v4, 8uLL);
        if ( (char *)Entry + Lookaside->L.Size < (char *)Entry + 8 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v4, Lookaside->L.Size - 8LL);
        v5 = (void *)(KasaniShadow + (((unsigned __int64)Entry + 0x800000000008LL) >> 3));
        v6 = (Lookaside->L.Size - 8LL - (unsigned __int64)(((unsigned __int8)Lookaside->L.Size - 9) & 7) + 7) >> 3;
        if ( v6 )
        {
          LOBYTE(Entry) = -116;
          memset_0(v5, (int)Entry, v6);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, v3);
  }
}
