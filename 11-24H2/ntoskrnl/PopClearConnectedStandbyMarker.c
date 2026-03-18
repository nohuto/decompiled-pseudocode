/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x140A9CF60
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopClearConnectedStandbyMarker(int a1)
{
  __int64 result; // rax

  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) = a1 & 0x3F | BYTE11(PopBsdPowerTransition) & 0xC0;
    BYTE7(xmmword_140E672F0) = BYTE7(xmmword_140E672F0) & 0xF | (16 * HIBYTE(a1));
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
  }
  return result;
}
