/*
 * XREFs of CrmStateMonitorResourceUsageQuery @ 0x18007A96C
 * Callers:
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180078C20 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18007A790 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18007A8C8 (CrmStateMonitorResourceUsagePoll.c)
 * Callees:
 *     CrmStateMonitorGpuUsageQuery @ 0x180079FC4 (CrmStateMonitorGpuUsageQuery.c)
 *     CrmStateMonitorNpuUsageQuery @ 0x18007A0BC (CrmStateMonitorNpuUsageQuery.c)
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
