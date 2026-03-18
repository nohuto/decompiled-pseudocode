/*
 * XREFs of CmpDereferenceHive @ 0x1408484B4
 * Callers:
 *     CmpDoFlushAll @ 0x14032401C (CmpDoFlushAll.c)
 *     CmpUnblockTwoHiveWrites @ 0x14083EC40 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14083F0C8 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14083F4D0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntryByIndex @ 0x140874930 (CmpUnlockHashEntryByIndex.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1409DAD1C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 *     CmpBlockHiveWrites @ 0x140A2224C (CmpBlockHiveWrites.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 *     CmpUnblockHiveWrites @ 0x140A445B0 (CmpUnblockHiveWrites.c)
 *     CmpQuitNextHive @ 0x140A5D420 (CmpQuitNextHive.c)
 * Callees:
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceHive(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1058, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)a1);
  return result;
}
