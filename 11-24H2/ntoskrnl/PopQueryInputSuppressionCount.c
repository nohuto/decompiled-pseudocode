/*
 * XREFs of PopQueryInputSuppressionCount @ 0x140A9BD8C
 * Callers:
 *     PopCalculateCsSummary @ 0x1402B5524 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQueryInputSuppressionCount(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&PopInputSuppressionActionCount, 0);
  *a1 = result;
  return result;
}
