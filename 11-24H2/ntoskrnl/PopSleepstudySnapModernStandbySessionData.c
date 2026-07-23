/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x140AB7570
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 *     KeQueryInterruptTimePrecise @ 0x14031B120 (KeQueryInterruptTimePrecise.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 PopSleepstudySnapModernStandbySessionData()
{
  __int64 v0; // rbx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+30h] [rbp-18h]
  LARGE_INTEGER v4; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock);
  v0 = 14LL * (unsigned int)dword_140F0A368;
  PopCalculateIdleInformation((__int64)&v2);
  PopSleepstudySessionContext[v0 + 37] = v3;
  PopSleepstudySessionContext[v0 + 38] = *((_QWORD *)&v2 + 1);
  PopSleepstudySessionContext[v0 + 39] = KeQueryInterruptTimePrecise(&v4).QuadPart;
  return PopReleaseRwLock(&PopSleepstudySessionLock);
}
