/*
 * XREFs of ExAllocateFromPagedLookasideList @ 0x1403EFFF0
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x1403EFD20 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x1403EFEB0 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1403EFF70 (FsRtlInitializeBaseMcbEx.c)
 *     HashpHashMemory @ 0x140830304 (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 *     AlpcInitializeHandleTable @ 0x140867CBC (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x140893EF0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x140894000 (AlpcpAllocateMessage.c)
 *     AlpcpSendMessage @ 0x140898440 (AlpcpSendMessage.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1408AB690 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408AB7E0 (IopSymlinkAllocateAndAddECP.c)
 *     PspCreateUserProcessEcp @ 0x1408ABC48 (PspCreateUserProcessEcp.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140934040 (FsRtlAddToTunnelCacheEx.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x1409AF1A0 (FsRtlAllocateExtraCreateParameterList.c)
 *     WmipAllocEntry @ 0x1409B04E8 (WmipAllocEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140A4A140 (RtlpCopyRangeListEntry.c)
 *     RtlAddRange @ 0x140A70BB0 (RtlAddRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpAllocateMessageFunction @ 0x140894520 (AlpcpAllocateMessageFunction.c)
 */

PVOID __stdcall ExAllocateFromPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
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
  if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx != AlpcpAllocateMessageFunction )
    return (PVOID)guard_dispatch_icall_no_overrides(Type, Size);
  return (PVOID)AlpcpAllocateMessageFunction(Type, Size, Lookaside->L.Tag);
}
