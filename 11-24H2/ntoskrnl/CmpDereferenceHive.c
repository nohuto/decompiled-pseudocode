/*
 * XREFs of CmpDereferenceHive @ 0x1408443C0
 * Callers:
 *     CmpDoFlushAll @ 0x14024528C (CmpDoFlushAll.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntryByIndex @ 0x140870A20 (CmpUnlockHashEntryByIndex.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnblockTwoHiveWrites @ 0x14090A9D0 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14090AFE4 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14090B474 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpDestroyHive @ 0x14097C14C (CmpDestroyHive.c)
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14097CA14 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpBlockHiveWrites @ 0x140A2BEB0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A496EC (CmpUnblockHiveWrites.c)
 *     CmpQuitNextHive @ 0x140A5EBA0 (CmpQuitNextHive.c)
 * Callees:
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceHive(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1058, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)a1);
  return result;
}
