/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x140A97434
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopClearConnectedStandbyMarker(int a1)
{
  __int64 result; // rax

  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) = a1 & 0x3F | BYTE11(PopBsdPowerTransition) & 0xC0;
    BYTE7(xmmword_140E67018) = BYTE7(xmmword_140E67018) & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock(&PopBsdUpdateLock);
  }
  return result;
}
