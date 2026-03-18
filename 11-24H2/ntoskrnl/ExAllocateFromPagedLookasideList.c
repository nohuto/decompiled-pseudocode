/*
 * XREFs of ExAllocateFromPagedLookasideList @ 0x1403FA0E0
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x1403F9E10 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x1403F9FA0 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1403FA060 (FsRtlInitializeBaseMcbEx.c)
 *     HashpHashMemory @ 0x14082FB0C (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x14082FD90 (HashpVerifyPkcs1Signature.c)
 *     AlpcInitializeHandleTable @ 0x1408636AC (AlpcInitializeHandleTable.c)
 *     AlpcpSendMessage @ 0x14088E810 (AlpcpSendMessage.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140931F00 (FsRtlAddToTunnelCacheEx.c)
 *     AlpcpAllocateBlob @ 0x14093F8B0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x14093F9C0 (AlpcpAllocateMessage.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     PspCreateUserProcessEcp @ 0x14099DC68 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14099DED8 (IopSymlinkAllocateAndAddECP.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14099E040 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x1409B7A60 (FsRtlAllocateExtraCreateParameterList.c)
 *     WmipAllocEntry @ 0x1409D00A0 (WmipAllocEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140A52210 (RtlpCopyRangeListEntry.c)
 *     RtlAddRange @ 0x140A76A90 (RtlAddRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AlpcpAllocateMessageFunction @ 0x14093FEE0 (AlpcpAllocateMessageFunction.c)
 */

PVOID __stdcall ExAllocateFromPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
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
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx != AlpcpAllocateMessageFunction )
    return (PVOID)guard_dispatch_icall_no_overrides(Type, Size, Tag, AlpcpAllocateMessageFunction);
  return (PVOID)AlpcpAllocateMessageFunction(Type, Size, Tag);
}
