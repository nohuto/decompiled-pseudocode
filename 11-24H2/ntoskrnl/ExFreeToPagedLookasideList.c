/*
 * XREFs of ExFreeToPagedLookasideList @ 0x1403C00D0
 * Callers:
 *     FsRtlEmptyFreePoolList @ 0x1403BF244 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1403BF344 (FsRtlFreeTunnelNode.c)
 *     FsRtlFreeFileLock @ 0x1403BF410 (FsRtlFreeFileLock.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403BFA60 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403BFF80 (FsRtlAddEntry.c)
 *     HashpHashMemory @ 0x140830304 (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 *     AlpcAddHandleTableEntry @ 0x140894EE0 (AlpcAddHandleTableEntry.c)
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     AlpcConnectionDestroyProcedure @ 0x140A13BA0 (AlpcConnectionDestroyProcedure.c)
 *     RtlpFreeRangeListEntry @ 0x140A4A338 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x140A7BBE0 (FsRtlDeleteTunnelCache.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpFreeMessageFunction @ 0x140896B30 (AlpcpFreeMessageFunction.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeToPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  __int64 (__fastcall *FreeEx)(PVOID); // rdx
  __int64 Size; // r8
  unsigned __int64 v6; // rcx
  ULONG_PTR BugCheckParameter4; // r8
  size_t v8; // r8

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
      guard_dispatch_icall_no_overrides(Entry, FreeEx);
    }
  }
  else
  {
    if ( (char *)FreeEx == (char *)CmSiFreeMemory )
    {
      Size = Lookaside->L.Size;
      v6 = (unsigned __int64)Entry + 8;
      BugCheckParameter4 = Size - 8;
      if ( byte_140FCECA8 )
      {
        if ( v6 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, (ULONG_PTR)Entry + 8, 0LL);
        if ( (v6 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, (ULONG_PTR)Entry + 8, 8uLL);
        if ( v6 + BugCheckParameter4 < v6 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)Entry + 8, BugCheckParameter4);
        v8 = (BugCheckParameter4 - (((_BYTE)BugCheckParameter4 - 1) & 7) + 7) >> 3;
        if ( v8 )
        {
          LOBYTE(FreeEx) = -116;
          memset_0((void *)(KasaniShadow + (((unsigned __int64)Entry + 0x800000000008LL) >> 3)), (int)FreeEx, v8);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
