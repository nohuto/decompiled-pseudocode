/*
 * XREFs of CmpLockKcbShared @ 0x140BA9340
 * Callers:
 *     CmpDoQueryKeyName @ 0x140206830 (CmpDoQueryKeyName.c)
 *     CmDumpKeyToFile @ 0x1407BD56C (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407BF2D8 (CmpRefreshHive.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408471B0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408489A0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmQueryMultipleValueKey @ 0x14086B654 (CmQueryMultipleValueKey.c)
 *     CmpLockKcbStackShared @ 0x1408715A0 (CmpLockKcbStackShared.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087E720 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockTwoKcbsShared @ 0x1409385D8 (CmpLockTwoKcbsShared.c)
 *     CmCallbackGetKeyObjectID @ 0x1409D7620 (CmCallbackGetKeyObjectID.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1409DB09C (CmpEnumerateAllHigherLayerKcbs.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 *     CmpDumpKeyToBuffer @ 0x140BA9128 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 *v2; // rbx
  signed __int64 result; // rax

  v2 = KeAbPreAcquire(a1 + 48, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v2, a1 + 48);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
