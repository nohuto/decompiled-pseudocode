/*
 * XREFs of ExFreeToPagedLookasideList @ 0x1403E03E0
 * Callers:
 *     FsRtlEmptyFreePoolList @ 0x1403DF554 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1403DF654 (FsRtlFreeTunnelNode.c)
 *     FsRtlFreeFileLock @ 0x1403DF720 (FsRtlFreeFileLock.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403DFD70 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403E0290 (FsRtlAddEntry.c)
 *     HashpHashMemory @ 0x14082FB0C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408A26C0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408A2A00 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcAddHandleTableEntry @ 0x1409408A0 (AlpcAddHandleTableEntry.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 *     WmipUnreferenceEntry @ 0x1409CE1D4 (WmipUnreferenceEntry.c)
 *     AlpcConnectionDestroyProcedure @ 0x140A1EAA0 (AlpcConnectionDestroyProcedure.c)
 *     RtlpFreeRangeListEntry @ 0x140A52408 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x140A81180 (FsRtlDeleteTunnelCache.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AlpcpFreeMessageFunction @ 0x140989F90 (AlpcpFreeMessageFunction.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeToPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 (__fastcall *FreeEx)(PVOID); // rdx
  __int64 Size; // r8
  unsigned __int64 v8; // rcx
  ULONG_PTR BugCheckParameter4; // r8
  size_t v10; // r8

  ++Lookaside->L.TotalFrees;
  FreeEx = (__int64 (__fastcall *)(PVOID))Lookaside->L.FreeEx;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    if ( (char *)FreeEx == (char *)ExFreePool )
    {
      ExFreePoolWithTag(Entry, 0);
    }
    else if ( FreeEx == AlpcpFreeMessageFunction )
    {
      AlpcpFreeMessageFunction(Entry);
    }
    else
    {
      guard_dispatch_icall_no_overrides(Entry, FreeEx, v2, v3);
    }
  }
  else
  {
    if ( (char *)FreeEx == (char *)CmSiFreeMemory )
    {
      Size = Lookaside->L.Size;
      v8 = (unsigned __int64)Entry + 8;
      BugCheckParameter4 = Size - 8;
      if ( byte_140FCDC28 )
      {
        if ( v8 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, (ULONG_PTR)Entry + 8, 0LL);
        if ( (v8 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, (ULONG_PTR)Entry + 8, 8uLL);
        if ( v8 + BugCheckParameter4 < v8 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)Entry + 8, BugCheckParameter4);
        v10 = (BugCheckParameter4 - (((_BYTE)BugCheckParameter4 - 1) & 7) + 7) >> 3;
        if ( v10 )
        {
          LOBYTE(FreeEx) = -116;
          memset_0((void *)(KasaniShadow + (((unsigned __int64)Entry + 0x800000000008LL) >> 3)), (int)FreeEx, v10);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
