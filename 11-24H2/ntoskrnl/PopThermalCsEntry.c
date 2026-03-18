/*
 * XREFs of PopThermalCsEntry @ 0x1404277CC
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AAC910 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x1404C7D4C (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x1405D6640 (PopTraceThermalStandbyInitiated.c)
 */

void __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rcx

  PopAcquireRwLockExclusive(&PopSystemThermalInfo);
  LOBYTE(word_140F0AD10) = 0;
  if ( a1 )
  {
    byte_140F0AD1D = 1;
    LOBYTE(v2) = byte_140F0AD1C;
    qword_140F0AD20 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v2);
  }
  if ( !dword_140F0AD14 )
    PopThermalStandbyEndTracking(0LL);
  PopReleaseRwLock((signed __int64 *)&PopSystemThermalInfo);
  if ( _InterlockedIncrement(&dword_140F0ACE8) == 1 )
    ExQueueWorkItem(&stru_140F0ACC8, DelayedWorkQueue);
}
