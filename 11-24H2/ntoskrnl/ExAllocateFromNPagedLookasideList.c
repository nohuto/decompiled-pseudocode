/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1402E2DD0
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x1402E2088 (IoSetOplockPrivateFoExt.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402E24E4 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateLock @ 0x1402E26A0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402E2CE0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402E2F18 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402E342C (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlFastUnlockSingle @ 0x1402E3DA0 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402E4400 (FsRtlFastUnlockSingleShared.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     IoSetOplockKeyContext @ 0x1403CE0DC (IoSetOplockKeyContext.c)
 *     VfAvlReserveNode @ 0x1403E5340 (VfAvlReserveNode.c)
 *     CcExtendVacbArray @ 0x1403ED180 (CcExtendVacbArray.c)
 *     FsRtlTruncateBaseMcb @ 0x1403EFD20 (FsRtlTruncateBaseMcb.c)
 *     FsRtlInitializeLargeMcb @ 0x1403EFF00 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1403EFF70 (FsRtlInitializeBaseMcbEx.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     CcAllocateVacbLevels @ 0x14047255C (CcAllocateVacbLevels.c)
 *     FsRtlSplitLocks @ 0x140475DD8 (FsRtlSplitLocks.c)
 *     PopCreateDynamicIrpWorker @ 0x14049175C (PopCreateDynamicIrpWorker.c)
 *     WmipAllocRegEntry @ 0x1404A6FCC (WmipAllocRegEntry.c)
 *     MiAddMdlTracker @ 0x1404CBC78 (MiAddMdlTracker.c)
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140709FE4 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     AlpcpInitializePort @ 0x140867D10 (AlpcpInitializePort.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1408AB690 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ViAllocateContextTable @ 0x140B8689C (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B87370 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x140B8FEA0 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140B9AB88 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140B9BB5C (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140B9D430 (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140B9E70C (IovpSessionDataCreate.c)
 *     ViWdBeforeCallDriver @ 0x140B9EA10 (ViWdBeforeCallDriver.c)
 *     ViIoCallbackSnapState @ 0x140BA9EF4 (ViIoCallbackSnapState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
      if ( byte_140FCECA8 )
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
