/*
 * XREFs of ExAllocateFromPagedLookasideList @ 0x1403F2CC0
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x1403F29F0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x1403F2B80 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1403F2C40 (FsRtlInitializeBaseMcbEx.c)
 *     HashpHashMemory @ 0x14081FDCC (HashpHashMemory.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 *     AlpcpAllocateBlob @ 0x1408AF0C0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x1408B07D0 (AlpcpAllocateMessage.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     PspCreateUserProcessEcp @ 0x1408ECC28 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1408EDAA0 (IopSymlinkAllocateAndAddECP.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1408EDCB0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140939820 (FsRtlAddToTunnelCacheEx.c)
 *     WmipAllocEntry @ 0x1409B7D54 (WmipAllocEntry.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x1409CDAD0 (FsRtlAllocateExtraCreateParameterList.c)
 *     AlpcInitializeHandleTable @ 0x1409E06C4 (AlpcInitializeHandleTable.c)
 *     RtlpCopyRangeListEntry @ 0x140A4EAC0 (RtlpCopyRangeListEntry.c)
 *     RtlAddRange @ 0x140A749C0 (RtlAddRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpAllocateMessageFunction @ 0x1408AE3F0 (AlpcpAllocateMessageFunction.c)
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
      if ( byte_140FCDC68 )
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
  }
  else
  {
    ++Lookaside->L.AllocateMisses;
    Size = Lookaside->L.Size;
    Type = (unsigned int)Lookaside->L.Type;
    if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx == AlpcpAllocateMessageFunction )
      return (PVOID)AlpcpAllocateMessageFunction(Type, Size, Lookaside->L.Tag);
    else
      return (PVOID)guard_dispatch_icall_no_overrides(Type, Size);
  }
  return v2;
}
