/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x140AA79E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x140757B84 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x140AA7A4C (PopDiagTraceSleepStudyStop.c)
 */

__int64 PopSleepstudyScenarioStopWorker()
{
  char *v0; // rbx

  PopAcquireRwLockExclusive(&PopSleepstudySessionLock);
  byte_140F09F78 = 0;
  v0 = (char *)&unk_140F0A030 + 112 * (unsigned int)dword_140F0A028;
  PopDiagTraceSleepStudyStop(qword_140F09F70);
  qword_140F09F70 = -1LL;
  if ( (unsigned int)(*(_DWORD *)v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart(v0[57]);
  return PopReleaseRwLock((signed __int64 *)&PopSleepstudySessionLock);
}
