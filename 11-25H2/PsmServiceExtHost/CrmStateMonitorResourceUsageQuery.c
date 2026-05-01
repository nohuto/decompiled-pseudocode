/*
 * XREFs of CrmStateMonitorResourceUsageQuery @ 0x18007A90C
 * Callers:
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180078BC0 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18007A730 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18007A868 (CrmStateMonitorResourceUsagePoll.c)
 * Callees:
 *     CrmStateMonitorGpuUsageQuery @ 0x180079F64 (CrmStateMonitorGpuUsageQuery.c)
 *     CrmStateMonitorNpuUsageQuery @ 0x18007A05C (CrmStateMonitorNpuUsageQuery.c)
 */

int __fastcall CrmStateMonitorResourceUsageQuery(_QWORD *a1, int a2, __int64 *a3)
{
  int result; // eax

  if ( a2 == 29 )
  {
    result = CrmStateMonitorGpuUsageQuery(a1, a3);
  }
  else
  {
    if ( a2 != 43 )
      return -1073741811;
    result = CrmStateMonitorNpuUsageQuery((__int64)a1, (unsigned __int64 *)a3);
  }
  if ( result >= 0 )
    return 0;
  return result;
}
