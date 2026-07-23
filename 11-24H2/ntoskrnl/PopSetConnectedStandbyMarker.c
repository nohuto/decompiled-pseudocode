/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x140A86C70
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 */

__int64 __fastcall PopSetConnectedStandbyMarker(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 2u;
    *((_QWORD *)&xmmword_140E67488 + 1) = v3;
    BYTE10(PopBsdPowerTransition) = a2 & 0x3F | BYTE10(PopBsdPowerTransition) & 0xC0;
    BYTE7(xmmword_140E67488) = BYTE7(xmmword_140E67488) & 0xF0 | HIBYTE(a2) & 0xF;
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock(&PopBsdUpdateLock);
  }
  return result;
}
