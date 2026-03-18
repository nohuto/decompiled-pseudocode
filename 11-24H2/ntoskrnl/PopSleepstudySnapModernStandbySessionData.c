/*
 * XREFs of PopSleepstudySnapModernStandbySessionData @ 0x140ABC550
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140902758 (PopPowerAggregatorEnterScreenOff.c)
 * Callees:
 *     PopCalculateIdleInformation @ 0x14032D51C (PopCalculateIdleInformation.c)
 *     KeQueryInterruptTimePrecise @ 0x14033BC40 (KeQueryInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopSleepstudySnapModernStandbySessionData()
{
  __int64 v0; // rbx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+30h] [rbp-18h]
  char v4; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  PopAcquireRwLockExclusive(&PopSleepstudySessionLock);
  v0 = 14LL * (unsigned int)dword_140F0A028;
  PopCalculateIdleInformation((__int64)&v2);
  PopSleepstudySessionContext[v0 + 37] = v3;
  PopSleepstudySessionContext[v0 + 38] = *((_QWORD *)&v2 + 1);
  PopSleepstudySessionContext[v0 + 39] = KeQueryInterruptTimePrecise((__int64)&v4);
  return PopReleaseRwLock((signed __int64 *)&PopSleepstudySessionLock);
}
