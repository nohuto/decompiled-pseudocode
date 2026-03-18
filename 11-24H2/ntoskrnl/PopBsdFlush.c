/*
 * XREFs of PopBsdFlush @ 0x140A6B984
 * Callers:
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 *     PopBsdFlushWorker @ 0x140A6B8F0 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140A6B930 (PopBsdUpdateWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopWriteBsdPoInfo @ 0x140427FF8 (PopWriteBsdPoInfo.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

LONG __fastcall PopBsdFlush(char a1)
{
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = 0LL;
  if ( !PopBsdFlushInactiveEvent.Header.SignalState
    || KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, &Timeout) < 0 )
  {
    PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
    KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  }
  if ( (a1 & 1) != 0 )
    PopWriteBsdPoInfo(7u);
  if ( (a1 & 2) != 0 )
    PopWriteBsdPoInfo(0x10u);
  if ( (a1 & 4) != 0 )
    PopWriteBsdPoInfo(0xEu);
  return KeSetEvent(&PopBsdFlushInactiveEvent, 0, 0);
}
