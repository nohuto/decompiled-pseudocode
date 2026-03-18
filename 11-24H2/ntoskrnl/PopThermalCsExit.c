/*
 * XREFs of PopThermalCsExit @ 0x1405D3C64
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x1404C7D4C (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405D3D30 (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive(&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140F0AD10) = 1;
  if ( dword_140F0AD14 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140F0AD10 = 256;
  }
  else if ( HIBYTE(word_140F0AD10) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140F0AD10) = 0;
  }
  PopReleaseRwLock((signed __int64 *)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&stru_140F0ACC8, DelayedWorkQueue);
}
