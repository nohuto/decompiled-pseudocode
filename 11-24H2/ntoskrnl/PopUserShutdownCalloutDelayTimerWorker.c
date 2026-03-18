/*
 * XREFs of PopUserShutdownCalloutDelayTimerWorker @ 0x140754280
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x14044DC00 (SleepstudyHelperBlockerActiveDereference.c)
 *     PdcTaskClientRequest @ 0x140A8B894 (PdcTaskClientRequest.c)
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
    v0 = _InterlockedExchangeAdd(&dword_140F0C268, 0xFFFFFFFF);
    v1 = v0 <= 1;
    result = (unsigned int)(v0 - 1);
  }
  while ( !v1 );
  return result;
}
