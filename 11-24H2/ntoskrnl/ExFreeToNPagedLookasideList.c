/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x14024A9C0
 * Callers:
 *     IoSetOplockKeyContext @ 0x140247C44 (IoSetOplockKeyContext.c)
 *     IoSetOplockPrivateFoExt @ 0x140247E3C (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateLock @ 0x140248460 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x140248AA0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140248CD8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402498C0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingle @ 0x140249B60 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14024ACAC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14024D62C (FsRtlPrivateFastUnlockAll.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     CcDeleteMbcb @ 0x1402CD624 (CcDeleteMbcb.c)
 *     CcFreeUnusedVacbLevels @ 0x1402D672C (CcFreeUnusedVacbLevels.c)
 *     PopFreeIrp @ 0x1403764AC (PopFreeIrp.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     FsRtlUninitializeFileLock @ 0x1403DF750 (FsRtlUninitializeFileLock.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403DFD70 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403E0290 (FsRtlAddEntry.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 *     FsRtlUninitializeLargeMcb @ 0x1404408B0 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404408F0 (FsRtlUninitializeBaseMcb.c)
 *     CcSetDirtyInMask @ 0x1404614E0 (CcSetDirtyInMask.c)
 *     WmipDeregisterRegEntry @ 0x14046FAA4 (WmipDeregisterRegEntry.c)
 *     CcDeallocateVacbLevel @ 0x140484080 (CcDeallocateVacbLevel.c)
 *     PopCreateDynamicIrpWorker @ 0x140496DCC (PopCreateDynamicIrpWorker.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404CA500 (FsRtlPrivateCancelFileLockIrp.c)
 *     PopIrpWorker @ 0x1404EBF10 (PopIrpWorker.c)
 *     sub_14050A410 @ 0x14050A410 (sub_14050A410.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x140581220 (FsRtlpOplockAckTimeoutWorker.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14058178C (FsRtlpSyncWithAckTimeout.c)
 *     VfAvlFreeNodeNoLock @ 0x1406106C8 (VfAvlFreeNodeNoLock.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140610D1C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 *     AlpcpDestroyPort @ 0x14088BB1C (AlpcpDestroyPort.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408A26C0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408A2A00 (FsRtlFreeExtraCreateParameter.c)
 *     ViFreeContextTable @ 0x140B848D8 (ViFreeContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140B85190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B85370 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140B85AB0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140B85FE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140B86490 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B86540 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140B867E0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140B86BE0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B87980 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140B87B50 (ViAdapterCallback.c)
 *     ViDeadlockFree @ 0x140B99680 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140B99B5C (ViDeadlockPopulateLookasideCache.c)
 *     ViPacketNotificationCallback @ 0x140B9B530 (ViPacketNotificationCallback.c)
 *     IovpSessionDataDereference @ 0x140B9C818 (IovpSessionDataDereference.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140B9CB8C (ViWdIrpBeforeCompletionRoutine.c)
 *     VfIoCompletionCheckState @ 0x140BA710C (VfIoCompletionCheckState.c)
 *     IovCallDriver @ 0x140BA7D40 (IovCallDriver.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  __int64 v2; // r8
  __int64 v3; // r9
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 Size; // r8
  unsigned __int64 v8; // rcx
  ULONG_PTR BugCheckParameter4; // r8
  size_t v10; // r8

  ++Lookaside->L.TotalFrees;
  FreeEx = (void (__stdcall *)(PVOID))Lookaside->L.FreeEx;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    if ( FreeEx == ExFreePool )
      ExFreePoolWithTag(Entry, 0);
    else
      guard_dispatch_icall_no_overrides(Entry, FreeEx, v2, v3);
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
