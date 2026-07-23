/*
 * XREFs of CmpDereferenceHive @ 0x140840680
 * Callers:
 *     CmpDoFlushAll @ 0x14020DA6C (CmpDoFlushAll.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntryByIndex @ 0x140874D50 (CmpUnlockHashEntryByIndex.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnblockTwoHiveWrites @ 0x1408E20F0 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1408E2704 (CmpBlockTwoHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmpLateUnloadHiveWorker @ 0x140964D00 (CmpLateUnloadHiveWorker.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140965224 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpBlockHiveWrites @ 0x140A1FD70 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A4040C (CmpUnblockHiveWrites.c)
 *     CmpQuitNextHive @ 0x140A56D90 (CmpQuitNextHive.c)
 * Callees:
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpDereferenceHive(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1 + 1058, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)a1);
  return result;
}
