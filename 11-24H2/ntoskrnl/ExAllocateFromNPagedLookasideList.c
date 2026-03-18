/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140248B90
 * Callers:
 *     IoSetOplockKeyContext @ 0x140247C44 (IoSetOplockKeyContext.c)
 *     IoSetOplockPrivateFoExt @ 0x140247E3C (IoSetOplockPrivateFoExt.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402482A4 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateLock @ 0x140248460 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x140248AA0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140248CD8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402491EC (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlFastUnlockSingle @ 0x140249B60 (FsRtlFastUnlockSingle.c)
 *     FsRtlFastUnlockSingleShared @ 0x14024A1C0 (FsRtlFastUnlockSingleShared.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     VfAvlReserveNode @ 0x1403F1620 (VfAvlReserveNode.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 *     FsRtlTruncateBaseMcb @ 0x1403F9E10 (FsRtlTruncateBaseMcb.c)
 *     FsRtlInitializeLargeMcb @ 0x1403F9FF0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1403FA060 (FsRtlInitializeBaseMcbEx.c)
 *     CcSetDirtyInMask @ 0x1404614E0 (CcSetDirtyInMask.c)
 *     CcAllocateVacbLevels @ 0x1404764C0 (CcAllocateVacbLevels.c)
 *     FsRtlSplitLocks @ 0x14047A758 (FsRtlSplitLocks.c)
 *     PopCreateDynamicIrpWorker @ 0x140496DCC (PopCreateDynamicIrpWorker.c)
 *     WmipAllocRegEntry @ 0x1404AC7D8 (WmipAllocRegEntry.c)
 *     MiAddMdlTracker @ 0x1404D2AB8 (MiAddMdlTracker.c)
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x14070C450 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     AlpcpInitializePort @ 0x140863700 (AlpcpInitializePort.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14099E040 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ViAllocateContextTable @ 0x140B8489C (ViAllocateContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140B85190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B85370 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140B85AB0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140B86BE0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x140B8DEA0 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140B98B88 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140B99B5C (ViDeadlockPopulateLookasideCache.c)
 *     VfPacketCreateAndLock @ 0x140B9B430 (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140B9C70C (IovpSessionDataCreate.c)
 *     ViWdBeforeCallDriver @ 0x140B9CA10 (ViWdBeforeCallDriver.c)
 *     ViIoCallbackSnapState @ 0x140BA7EF4 (ViIoCallbackSnapState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PSLIST_ENTRY v2; // rdi
  __int64 v3; // r9
  ULONG_PTR v4; // rcx
  ULONG_PTR BugCheckParameter4; // rbx
  _BYTE *v7; // rsi

  ++Lookaside->L.TotalAllocates;
  v2 = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))Lookaside->L.FreeEx == CmSiFreeMemory )
    {
      v4 = (ULONG_PTR)(&v2->Next + 1);
      BugCheckParameter4 = Lookaside->L.Size - 8LL;
      if ( byte_140FCDC28 )
      {
        if ( v4 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v4, 0LL);
        if ( (v4 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v4, 8uLL);
        if ( v4 + BugCheckParameter4 < v4 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)(&v2->Next + 1), BugCheckParameter4);
        v7 = (_BYTE *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3));
        if ( BugCheckParameter4 >> 3 )
        {
          memset_0(
            (void *)(KasaniShadow + ((unsigned __int64)(&v2[0x80000000000LL].Next + 1) >> 3)),
            0,
            BugCheckParameter4 >> 3);
          v7 += BugCheckParameter4 >> 3;
        }
        if ( (BugCheckParameter4 & 7) != 0 )
          *v7 = BugCheckParameter4 & 7;
      }
    }
    return v2;
  }
  else
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)guard_dispatch_icall_no_overrides(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag,
                    v3);
  }
}
