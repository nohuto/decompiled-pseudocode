/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1403746E0
 * Callers:
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     FsRtlFastUnlockSingle @ 0x140372BA0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x140373210 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateLock @ 0x140373FB0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1403745F0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140374828 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140374D3C (FsRtlPrivateInitializeFileLock.c)
 *     LZNT1DecompressChunkNewThread @ 0x140375408 (LZNT1DecompressChunkNewThread.c)
 *     IoSetOplockPrivateFoExt @ 0x1403755B4 (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x1403758AC (IoSetOplockKeyContext.c)
 *     CcAllocateVacbLevels @ 0x1403B62E0 (CcAllocateVacbLevels.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     VfAvlReserveNode @ 0x1403EBAE0 (VfAvlReserveNode.c)
 *     FsRtlTruncateBaseMcb @ 0x1403F29F0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlInitializeLargeMcb @ 0x1403F2BD0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1403F2C40 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlSplitLocks @ 0x14045B650 (FsRtlSplitLocks.c)
 *     PopCreateDynamicIrpWorker @ 0x14049728C (PopCreateDynamicIrpWorker.c)
 *     WmipAllocRegEntry @ 0x1404AB318 (WmipAllocRegEntry.c)
 *     MiAddMdlTracker @ 0x1404D2BE8 (MiAddMdlTracker.c)
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140700570 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1408EDCB0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     AlpcpInitializePort @ 0x1409E024C (AlpcpInitializePort.c)
 *     ViAllocateContextTable @ 0x140B748BC (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B75390 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140B75AD0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140B76C00 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x140B7DEC0 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140B88BA8 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140B89B7C (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140B8B450 (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140B8C72C (IovpSessionDataCreate.c)
 *     ViWdBeforeCallDriver @ 0x140B8CA30 (ViWdBeforeCallDriver.c)
 *     ViIoCallbackSnapState @ 0x140B97F14 (ViIoCallbackSnapState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PSLIST_ENTRY v2; // rdi
  ULONG_PTR v3; // rcx
  ULONG_PTR BugCheckParameter4; // rbx
  _BYTE *v6; // rsi

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
        v6 = (_BYTE *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3));
        if ( BugCheckParameter4 >> 3 )
        {
          memset_0(
            (void *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3)),
            0,
            BugCheckParameter4 >> 3);
          v6 += BugCheckParameter4 >> 3;
        }
        if ( (BugCheckParameter4 & 7) != 0 )
          *v6 = BugCheckParameter4 & 7;
      }
    }
    return v2;
  }
  else
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)guard_dispatch_icall_no_overrides((unsigned int)Lookaside->L.Type, Lookaside->L.Size);
  }
}
