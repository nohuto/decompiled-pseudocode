/*
 * XREFs of PopQueryPowerButtonSuppressionCount @ 0x140AA4238
 * Callers:
 *     PopCalculateCsSummary @ 0x14032BF4C (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
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
