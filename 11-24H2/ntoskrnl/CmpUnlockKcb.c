/*
 * XREFs of CmpUnlockKcb @ 0x140BB92C0
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpDoQueryKeyName @ 0x14041EA20 (CmpDoQueryKeyName.c)
 *     CmpRemoveHiveFromNamespace @ 0x140491454 (CmpRemoveHiveFromNamespace.c)
 *     CmDumpKeyToFile @ 0x1407CCD84 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407CEAF0 (CmpRefreshHive.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407DDE90 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpCreateKeyBody @ 0x14083E100 (CmpCreateKeyBody.c)
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140843700 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408443F0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086C850 (CmQueryMultipleValueKey.c)
 *     CmpUnlockKcbStack @ 0x14086E6E0 (CmpUnlockKcbStack.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x1408745A0 (CmpVEExecuteOpenLogic.c)
 *     CmQueryValueKey @ 0x140874900 (CmQueryValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x140877890 (CmQueryKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087C350 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14097A13C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14097A7E4 (CmKeyBodyRemapToVirtual.c)
 *     CmpEnlistKeyBody @ 0x140988300 (CmpEnlistKeyBody.c)
 *     CmpDelayCloseWorker @ 0x1409D6A50 (CmpDelayCloseWorker.c)
 *     CmCallbackGetKeyObjectID @ 0x1409D7040 (CmCallbackGetKeyObjectID.c)
 *     CmLockKeyForWrite @ 0x1409E1DB8 (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E2450 (CmpStartSiloRegistryNamespace.c)
 *     CmpUnlockTwoKcbs @ 0x1409F67C4 (CmpUnlockTwoKcbs.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FE28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpVEExecuteCreateLogic @ 0x140A203DC (CmpVEExecuteCreateLogic.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A4F298 (CmpSearchKeyControlBlockTreeEx.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A86DC4 (CmpResolveHiveLoadConflict.c)
 *     CmpDumpKeyToBuffer @ 0x140BB9130 (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140C46D74 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     CmpDecommisssionKcb @ 0x140870D10 (CmpDecommisssionKcb.c)
 *     CmpIsKcbLockedExclusive @ 0x1409A6500 (CmpIsKcbLockedExclusive.c)
 */

void __fastcall CmpUnlockKcb(ULONG_PTR BugCheckParameter2)
{
  int v2; // esi
  __int64 v3; // rcx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx

  v2 = *(_DWORD *)(BugCheckParameter2 + 8) & 0x80000;
  if ( CmpIsKcbLockedExclusive(BugCheckParameter2) )
    *(_QWORD *)(v3 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
  _m_prefetchw((const void *)(v3 + 48));
  v4 = *(_QWORD *)(v3 + 48);
  v5 = v4 - 16;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0
    || v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 48), v5, v4) )
  {
    ExfReleasePushLock((_QWORD *)(BugCheckParameter2 + 48));
  }
  KeAbPostRelease(BugCheckParameter2 + 48);
  if ( v2 )
    CmpDecommisssionKcb(BugCheckParameter2);
}
