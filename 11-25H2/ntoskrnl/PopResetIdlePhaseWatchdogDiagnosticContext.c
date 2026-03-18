/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x140964614
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x140964068 (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F06FA8);
  dword_140F06FC0 = 0;
  if ( qword_140F06FB8 )
  {
    ExFreePoolWithTag(qword_140F06FB8, 0x67696450u);
    qword_140F06FB8 = 0LL;
  }
  return PopReleaseRwLock((signed __int64 *)&xmmword_140F06FA8);
}
