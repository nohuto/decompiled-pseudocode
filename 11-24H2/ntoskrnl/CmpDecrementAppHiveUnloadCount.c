/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x1402BA854
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140964D00 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402BC2BC (ExpUnblockPushLock.c)
 */

__int64 CmpDecrementAppHiveUnloadCount()
{
  __int64 result; // rax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)--CmpActiveAppHiveUnloadCount;
  if ( !CmpActiveAppHiveUnloadCount )
  {
    _InterlockedOr(v1, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0LL);
  }
  return result;
}
