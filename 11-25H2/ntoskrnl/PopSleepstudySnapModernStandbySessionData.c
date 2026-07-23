/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x140AB83D0
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeQueryInterruptTimePrecise @ 0x140279D80 (KeQueryInterruptTimePrecise.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
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
  v0 = 14LL * (unsigned int)dword_140F09988;
  PopCalculateIdleInformation((__int64)&v2);
  PopSleepstudySessionContext[v0 + 37] = v3;
  PopSleepstudySessionContext[v0 + 38] = *((_QWORD *)&v2 + 1);
  PopSleepstudySessionContext[v0 + 39] = KeQueryInterruptTimePrecise(&v4).QuadPart;
  return PopReleaseRwLock(&PopSleepstudySessionLock);
}
