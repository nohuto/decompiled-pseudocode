/*
 * XREFs of CmpReferenceHive @ 0x140848B50
 * Callers:
 *     CmpLockHashEntryByIndexExclusive @ 0x1407D1644 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpBlockTwoHiveWrites @ 0x14083F0C8 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14083F4D0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpGetNextHive @ 0x1408484DC (CmpGetNextHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087C588 (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetLastHive @ 0x1409118B0 (CmpGetLastHive.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1409DAC4C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpBlockHiveWrites @ 0x140A2224C (CmpBlockHiveWrites.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140A4DB84 (CmpTryToLockHashEntryExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4232));
  v1 = *(_DWORD *)(a1 + 4232);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4232), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
