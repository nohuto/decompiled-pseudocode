/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1409BC3C4
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1409BBE18 (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive(&xmmword_140F07648);
  dword_140F07660 = 0;
  if ( qword_140F07658 )
  {
    ExFreePoolWithTag(qword_140F07658, 0x67696450u);
    qword_140F07658 = 0LL;
  }
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F07648);
}
