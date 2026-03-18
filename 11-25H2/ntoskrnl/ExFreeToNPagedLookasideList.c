/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1403739F0
 * Callers:
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     PopIrpWorker @ 0x140356760 (PopIrpWorker.c)
 *     PopFreeIrp @ 0x14035860C (PopFreeIrp.c)
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140372900 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingle @ 0x140372BA0 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140373CDC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateLock @ 0x140373FB0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x1403745F0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140374828 (FsRtlPrivateInsertSharedLock.c)
 *     IoSetOplockPrivateFoExt @ 0x1403755B4 (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x1403758AC (IoSetOplockKeyContext.c)
 *     CcDeleteMbcb @ 0x1403A3FF8 (CcDeleteMbcb.c)
 *     CcFreeUnusedVacbLevels @ 0x1403B4F6C (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x1403B67C4 (CcDeallocateVacbLevel.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     FsRtlUninitializeFileLock @ 0x1403D22C0 (FsRtlUninitializeFileLock.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403D28E0 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlAddEntry @ 0x1403D2ED0 (FsRtlAddEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x140440CD0 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x140440D10 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14045B2D4 (FsRtlPrivateFastUnlockAll.c)
 *     MiFreeMdlTracker @ 0x14046F5D8 (MiFreeMdlTracker.c)
 *     WmipDeregisterRegEntry @ 0x1404718C4 (WmipDeregisterRegEntry.c)
 *     PopCreateDynamicIrpWorker @ 0x14049728C (PopCreateDynamicIrpWorker.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404CA600 (FsRtlPrivateCancelFileLockIrp.c)
 *     sub_140507C90 @ 0x140507C90 (sub_140507C90.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x14057DE00 (FsRtlpOplockAckTimeoutWorker.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     VfAvlFreeNodeNoLock @ 0x140604708 (VfAvlFreeNodeNoLock.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140604D5C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408EFA70 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408EFDB0 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcpDestroyPort @ 0x14098BB5C (AlpcpDestroyPort.c)
 *     ViFreeContextTable @ 0x140B748F8 (ViFreeContextTable.c)
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B75390 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140B75AD0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140B76000 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140B764B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B76560 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140B76800 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140B76C00 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B779A0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140B77B70 (ViAdapterCallback.c)
 *     ViDeadlockFree @ 0x140B896A0 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140B89B7C (ViDeadlockPopulateLookasideCache.c)
 *     ViPacketNotificationCallback @ 0x140B8B550 (ViPacketNotificationCallback.c)
 *     IovpSessionDataDereference @ 0x140B8C838 (IovpSessionDataDereference.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140B8CBAC (ViWdIrpBeforeCompletionRoutine.c)
 *     VfIoCompletionCheckState @ 0x140B9712C (VfIoCompletionCheckState.c)
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
