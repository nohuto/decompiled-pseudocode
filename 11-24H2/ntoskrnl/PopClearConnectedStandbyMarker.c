/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x140A984D0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
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
    BYTE7(xmmword_140E67488) = BYTE7(xmmword_140E67488) & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock(&PopBsdUpdateLock);
  }
  return result;
}
