/*
 * XREFs of PopUserShutdownCalloutDelayTimerWorker @ 0x1407525A0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140444B00 (SleepstudyHelperBlockerActiveDereference.c)
 *     PdcTaskClientRequest @ 0x140A87D84 (PdcTaskClientRequest.c)
 */

__int64 PopUserShutdownCalloutDelayTimerWorker()
{
  signed __int32 v0; // eax
  bool v1; // cc
  __int64 result; // rax

  do
  {
    PdcTaskClientRequest(PopUserShutdownTaskClient, 0LL);
    if ( PopUserShutdownPoBlockerHandle )
      SleepstudyHelperBlockerActiveDereference(PopUserShutdownPoBlockerHandle);
    v0 = _InterlockedExchangeAdd(&dword_140F0C5C8, 0xFFFFFFFF);
    v1 = v0 <= 1;
    result = (unsigned int)(v0 - 1);
  }
  while ( !v1 );
  return result;
}
