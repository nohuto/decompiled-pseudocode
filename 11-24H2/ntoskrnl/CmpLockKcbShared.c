/*
 * XREFs of CmpLockKcbShared @ 0x140BBBA1C
 * Callers:
 *     CmpDoQueryKeyName @ 0x140414760 (CmpDoQueryKeyName.c)
 *     CmDumpKeyToFile @ 0x1407CD274 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x1407CEFE0 (CmpRefreshHive.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408406B0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x140878C30 (CmQueryValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140880200 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpLockKcbStackShared @ 0x14090B180 (CmpLockKcbStackShared.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14096294C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140962FF4 (CmKeyBodyRemapToVirtual.c)
 *     CmCallbackGetKeyObjectID @ 0x1409C76A0 (CmCallbackGetKeyObjectID.c)
 *     CmpLockTwoKcbsShared @ 0x1409E8950 (CmpLockTwoKcbsShared.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A14F28 (CmpEnumerateAllHigherLayerKcbs.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     CmpDumpKeyToBuffer @ 0x140BBB130 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  char *v3; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 48);
  v3 = (char *)KeAbPreAcquire(a1 + 48, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v3, (__int64)v1);
  if ( v3 )
    v3[10] = 1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
