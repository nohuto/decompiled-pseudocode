/*
 * XREFs of CmpUnlockKcb @ 0x140BA92B0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140206830 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x140492108 (CmpRemoveHiveFromNamespace.c)
 *     CmDumpKeyToFile @ 0x1407BD56C (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     CmpReplicateKeyToVirtual @ 0x1407CC44C (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407CE6D0 (CmpGlobalUnlockKeyForWrite.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408471B0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408489A0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086B654 (CmQueryMultipleValueKey.c)
 *     CmpUnlockTwoKcbs @ 0x14086CD24 (CmpUnlockTwoKcbs.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x140878260 (CmpVEExecuteOpenLogic.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087E720 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpEnlistKeyBody @ 0x140972F30 (CmpEnlistKeyBody.c)
 *     CmpDelayCloseWorker @ 0x1409D7200 (CmpDelayCloseWorker.c)
 *     CmCallbackGetKeyObjectID @ 0x1409D7620 (CmCallbackGetKeyObjectID.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1409DB09C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409E3800 (CmpStartSiloRegistryNamespace.c)
 *     CmpVEExecuteCreateLogic @ 0x140A15884 (CmpVEExecuteCreateLogic.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A5691C (CmpSearchKeyControlBlockTreeEx.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A82524 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 *     CmpDumpKeyToBuffer @ 0x140BA9128 (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140C35AB8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     CmpDecommisssionKcb @ 0x140848640 (CmpDecommisssionKcb.c)
 *     CmpIsKcbLockedExclusive @ 0x1409A5160 (CmpIsKcbLockedExclusive.c)
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
