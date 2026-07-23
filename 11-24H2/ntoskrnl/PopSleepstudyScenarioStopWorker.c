/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x140AA2AE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x140756004 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x140AA2B4C (PopDiagTraceSleepStudyStop.c)
 */

__int64 PopSleepstudyScenarioStopWorker()
{
  char *v0; // rbx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopSleepstudySessionLock);
  byte_140F0A2B8 = 0;
  v0 = (char *)&unk_140F0A370 + 112 * (unsigned int)dword_140F0A368;
  PopDiagTraceSleepStudyStop(qword_140F0A2B0);
  qword_140F0A2B0 = -1LL;
  if ( (unsigned int)(*(_DWORD *)v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart(v0[57]);
  return PopReleaseRwLock(&PopSleepstudySessionLock);
}
