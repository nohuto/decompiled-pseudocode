/*
 * XREFs of CmpReferenceHive @ 0x140844680
 * Callers:
 *     CmpLockHashEntryByIndexExclusive @ 0x1407E0F1C (CmpLockHashEntryByIndexExclusive.c)
 *     CmpGetNextHive @ 0x14084425C (CmpGetNextHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087E638 (CmpDoQueueLateUnloadWorker.c)
 *     CmpBlockTwoHiveWrites @ 0x14090AFE4 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14090B474 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpGetLastHive @ 0x14092EBCC (CmpGetLastHive.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14097C944 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpBlockHiveWrites @ 0x140A2BEB0 (CmpBlockHiveWrites.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140A50F24 (CmpTryToLockHashEntryExclusive.c)
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
