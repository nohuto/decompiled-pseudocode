/*
 * XREFs of ExFreeToPagedLookasideList @ 0x1403D3020
 * Callers:
 *     FsRtlFreeTunnelNode @ 0x140377AD4 (FsRtlFreeTunnelNode.c)
 *     FsRtlEmptyFreePoolList @ 0x1403D21B4 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeFileLock @ 0x1403D2290 (FsRtlFreeFileLock.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403D28E0 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403D2ED0 (FsRtlAddEntry.c)
 *     HashpHashMemory @ 0x14081FDCC (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcAddHandleTableEntry @ 0x1408AEBD0 (AlpcAddHandleTableEntry.c)
 *     AlpcpReleaseAttributes @ 0x1408B25D0 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x1408B27D0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x1408B29D0 (AlpcpUnlockBlob.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408EFA70 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408EFDB0 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcConnectionDestroyProcedure @ 0x14098B330 (AlpcConnectionDestroyProcedure.c)
 *     WmipUnreferenceEntry @ 0x1409B5E78 (WmipUnreferenceEntry.c)
 *     RtlpFreeRangeListEntry @ 0x140A4ECB8 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x140A7DB00 (FsRtlDeleteTunnelCache.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpFreeMessageFunction @ 0x1408B4800 (AlpcpFreeMessageFunction.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
      if ( byte_140FCDC68 )
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
