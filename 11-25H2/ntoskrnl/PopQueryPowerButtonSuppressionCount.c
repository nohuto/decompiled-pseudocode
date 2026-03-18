/*
 * XREFs of PopQueryPowerButtonSuppressionCount @ 0x140A9E9B8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x140486560 (PopCalculateCsSummary.c)
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
