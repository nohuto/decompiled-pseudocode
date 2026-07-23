/*
 * XREFs of CmpUnlockKcb @ 0x140BBB2C0
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpDoQueryKeyName @ 0x140414760 (CmpDoQueryKeyName.c)
 *     CmpRemoveHiveFromNamespace @ 0x14048BF4C (CmpRemoveHiveFromNamespace.c)
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407DE3E0 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpCreateKeyBody @ 0x14083A700 (CmpCreateKeyBody.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408406B0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x1408788D0 (CmpVEExecuteOpenLogic.c)
 *     CmQueryValueKey @ 0x140878C30 (CmQueryValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140880200 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14096294C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140962FF4 (CmKeyBodyRemapToVirtual.c)
 *     CmpEnlistKeyBody @ 0x140970AE0 (CmpEnlistKeyBody.c)
 *     CmpDelayCloseWorker @ 0x1409C6AD0 (CmpDelayCloseWorker.c)
 *     CmCallbackGetKeyObjectID @ 0x1409C76A0 (CmCallbackGetKeyObjectID.c)
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x1409DC200 (CmpStartSiloRegistryNamespace.c)
 *     CmpUnlockTwoKcbs @ 0x1409EA714 (CmpUnlockTwoKcbs.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A14F28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpVEExecuteCreateLogic @ 0x140A154DC (CmpVEExecuteCreateLogic.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A46048 (CmpSearchKeyControlBlockTreeEx.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A8189C (CmpResolveHiveLoadConflict.c)
 *     CmpDumpKeyToBuffer @ 0x140BBB130 (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpDecommisssionKcb @ 0x140875040 (CmpDecommisssionKcb.c)
 *     CmpIsKcbLockedExclusive @ 0x140989B20 (CmpIsKcbLockedExclusive.c)
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
