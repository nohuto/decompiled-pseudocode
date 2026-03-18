/*
 * XREFs of PopBsdFlush @ 0x140A68FE4
 * Callers:
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 *     PopBsdFlushWorker @ 0x140A68F50 (PopBsdFlushWorker.c)
 *     PopBsdUpdateWorker @ 0x140A68F90 (PopBsdUpdateWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PopWriteBsdPoInfo @ 0x140431A88 (PopWriteBsdPoInfo.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 */

LONG __fastcall PopBsdFlush(char a1)
{
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  Timeout.QuadPart = 0LL;
  if ( !PopBsdFlushInactiveEvent.Header.SignalState
    || KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, &Timeout) < 0 )
  {
    PopReleaseRwLock(&PopBsdUpdateLock);
    KeWaitForSingleObject(&PopBsdFlushInactiveEvent, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
  }
  if ( (a1 & 1) != 0 )
    PopWriteBsdPoInfo(7u);
  if ( (a1 & 2) != 0 )
    PopWriteBsdPoInfo(0x10u);
  if ( (a1 & 4) != 0 )
    PopWriteBsdPoInfo(0xEu);
  return KeSetEvent(&PopBsdFlushInactiveEvent, 0, 0);
}
