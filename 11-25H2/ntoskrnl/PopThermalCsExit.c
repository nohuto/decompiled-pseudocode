/*
 * XREFs of PopThermalCsExit @ 0x1405CF254
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x1404C7224 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x1405CF320 (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140F0A490) = 1;
  if ( dword_140F0A494 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140F0A490 = 256;
  }
  else if ( HIBYTE(word_140F0A490) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140F0A490) = 0;
  }
  PopReleaseRwLock(&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&stru_140F0A5A8, DelayedWorkQueue);
}
