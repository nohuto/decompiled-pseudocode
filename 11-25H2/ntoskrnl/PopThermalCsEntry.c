/*
 * XREFs of PopThermalCsEntry @ 0x14043125C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140AA74D0 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x1404C7224 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x1405D1CE0 (PopTraceThermalStandbyInitiated.c)
 */

void __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rcx

  PopAcquireRwLockExclusive(&PopSystemThermalInfo);
  LOBYTE(word_140F0A490) = 0;
  if ( a1 )
  {
    byte_140F0A49D = 1;
    LOBYTE(v2) = byte_140F0A49C;
    qword_140F0A4A0 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v2);
  }
  if ( !dword_140F0A494 )
    PopThermalStandbyEndTracking(0LL);
  PopReleaseRwLock(&PopSystemThermalInfo);
  if ( _InterlockedIncrement(&dword_140F0A5C8) == 1 )
    ExQueueWorkItem(&stru_140F0A5A8, DelayedWorkQueue);
}
