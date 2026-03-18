/*
 * XREFs of PopBatteryCapacityToRate @ 0x140486CD8
 * Callers:
 *     PopCalculateCsSummary @ 0x140486560 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1407535B8 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopBatteryCapacityToRate(unsigned int a1, unsigned __int64 a2)
{
  if ( a2 )
    return 3600000000u * (unsigned __int64)a1 / a2;
  else
    return 0LL;
}
