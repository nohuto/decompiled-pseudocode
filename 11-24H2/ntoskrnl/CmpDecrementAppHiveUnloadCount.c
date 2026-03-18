/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x1402C8200
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14097CB58 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1402C793C (ExpUnblockPushLock.c)
 */

NTSTATUS CmpDecrementAppHiveUnloadCount()
{
  NTSTATUS result; // eax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = --CmpActiveAppHiveUnloadCount;
  if ( !CmpActiveAppHiveUnloadCount )
  {
    _InterlockedOr(v1, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0);
  }
  return result;
}
