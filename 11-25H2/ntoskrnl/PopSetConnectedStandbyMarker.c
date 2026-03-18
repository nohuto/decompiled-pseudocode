/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x140A85E58
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
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
    *((_QWORD *)&xmmword_140E67018 + 1) = v3;
    BYTE10(PopBsdPowerTransition) = a2 & 0x3F | BYTE10(PopBsdPowerTransition) & 0xC0;
    BYTE7(xmmword_140E67018) = BYTE7(xmmword_140E67018) & 0xF0 | HIBYTE(a2) & 0xF;
    PopBsdHandleRequest(3u);
    return PopReleaseRwLock(&PopBsdUpdateLock);
  }
  return result;
}
