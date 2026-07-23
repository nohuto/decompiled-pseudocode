/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1402E4C00
 * Callers:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14027DC3C (FsRtlPrivateFastUnlockAll.c)
 *     IoSetOplockPrivateFoExt @ 0x1402E2088 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateLock @ 0x1402E26A0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1402E2CE0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402E2F18 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402E3B00 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingle @ 0x1402E3DA0 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402E4EEC (FsRtlPrivateCheckWaitingLocks.c)
 *     CcDeleteMbcb @ 0x1402E5278 (CcDeleteMbcb.c)
 *     CcDeallocateVacbLevel @ 0x1402E5538 (CcDeallocateVacbLevel.c)
 *     CcFreeUnusedVacbLevels @ 0x1403579AC (CcFreeUnusedVacbLevels.c)
 *     PopFreeIrp @ 0x1403A7BB8 (PopFreeIrp.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     FsRtlUninitializeFileLock @ 0x1403BF440 (FsRtlUninitializeFileLock.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403BFA60 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403BFF80 (FsRtlAddEntry.c)
 *     IoSetOplockKeyContext @ 0x1403CE0DC (IoSetOplockKeyContext.c)
 *     CcExtendVacbArray @ 0x1403ED180 (CcExtendVacbArray.c)
 *     FsRtlUninitializeLargeMcb @ 0x140436580 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404365C0 (FsRtlUninitializeBaseMcb.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     WmipDeregisterRegEntry @ 0x14046A000 (WmipDeregisterRegEntry.c)
 *     PopCreateDynamicIrpWorker @ 0x14049175C (PopCreateDynamicIrpWorker.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404C3A20 (FsRtlPrivateCancelFileLockIrp.c)
 *     PopIrpWorker @ 0x1404E3650 (PopIrpWorker.c)
 *     sub_140507CD0 @ 0x140507CD0 (sub_140507CD0.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057E5E0 (FsRtlpOplockAckTimeoutWorker.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057EB0C (FsRtlpSyncWithAckTimeout.c)
 *     VfAvlFreeNodeNoLock @ 0x14060EC88 (VfAvlFreeNodeNoLock.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14060F2DC (ViFlushZeroMapRegisterBaseWcbs.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     AlpcpDestroyPort @ 0x14088EB0C (AlpcpDestroyPort.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     ViFreeContextTable @ 0x140B868D8 (ViFreeContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B87370 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140B87FE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140B88490 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B88540 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140B887E0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B89980 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140B89B50 (ViAdapterCallback.c)
 *     ViDeadlockFree @ 0x140B9B680 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140B9BB5C (ViDeadlockPopulateLookasideCache.c)
 *     ViPacketNotificationCallback @ 0x140B9D530 (ViPacketNotificationCallback.c)
 *     IovpSessionDataDereference @ 0x140B9E818 (IovpSessionDataDereference.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140B9EB8C (ViWdIrpBeforeCompletionRoutine.c)
 *     VfIoCompletionCheckState @ 0x140BA910C (VfIoCompletionCheckState.c)
 *     IovCallDriver @ 0x140BA9D40 (IovCallDriver.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  void (__stdcall *FreeEx)(PVOID); // rdx
  __int64 Size; // r8
  unsigned __int64 v6; // rcx
  ULONG_PTR BugCheckParameter4; // r8
  size_t v8; // r8

  ++Lookaside->L.TotalFrees;
  FreeEx = (void (__stdcall *)(PVOID))Lookaside->L.FreeEx;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    if ( FreeEx == ExFreePool )
      ExFreePoolWithTag(Entry, 0);
    else
      guard_dispatch_icall_no_overrides(Entry, FreeEx);
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
