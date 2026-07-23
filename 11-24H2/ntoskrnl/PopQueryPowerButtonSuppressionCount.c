/*
 * XREFs of PopQueryPowerButtonSuppressionCount @ 0x140A9F5C8
 * Callers:
 *     PopCalculateCsSummary @ 0x1402B5524 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQueryPowerButtonSuppressionCount(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)PopPowerButtonSuppressionActionCount;
  *a1 = PopPowerButtonSuppressionActionCount;
  return result;
}
