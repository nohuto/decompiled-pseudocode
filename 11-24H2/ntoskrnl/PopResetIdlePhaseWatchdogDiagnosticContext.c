/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1409A2A14
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1409A2468 (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F07948);
  dword_140F07960 = 0;
  if ( qword_140F07958 )
  {
    ExFreePoolWithTag(qword_140F07958, 0x67696450u);
    qword_140F07958 = 0LL;
  }
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F07948);
}
