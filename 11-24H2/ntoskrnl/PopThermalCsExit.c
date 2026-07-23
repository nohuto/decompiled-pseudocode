/*
 * XREFs of PopThermalCsExit @ 0x1405D13D8
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x1404C11AC (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405D14B0 (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140F0AF90) = 1;
  if ( dword_140F0AF94 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140F0AF90 = 256;
  }
  else if ( HIBYTE(word_140F0AF90) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140F0AF90) = 0;
  }
  PopReleaseRwLock(&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&stru_140F0B048, DelayedWorkQueue);
}
