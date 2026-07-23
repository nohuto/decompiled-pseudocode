/*
 * XREFs of PopThermalCsEntry @ 0x14041B95C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA7940 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x1404C11AC (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x1405D3C54 (PopTraceThermalStandbyInitiated.c)
 */

void __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rcx

  PopAcquireRwLockExclusive(&PopSystemThermalInfo);
  LOBYTE(word_140F0AF90) = 0;
  if ( a1 )
  {
    byte_140F0AF9D = 1;
    LOBYTE(v2) = byte_140F0AF9C;
    qword_140F0AFA0 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v2);
  }
  if ( !dword_140F0AF94 )
    PopThermalStandbyEndTracking(0LL);
  PopReleaseRwLock(&PopSystemThermalInfo);
  if ( _InterlockedIncrement(&dword_140F0B068) == 1 )
    ExQueueWorkItem(&stru_140F0B048, DelayedWorkQueue);
}
