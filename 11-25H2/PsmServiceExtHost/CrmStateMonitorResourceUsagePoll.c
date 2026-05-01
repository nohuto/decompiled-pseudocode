/*
 * XREFs of CrmStateMonitorResourceUsagePoll @ 0x18007A868
 * Callers:
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180078BC0 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorResourceUsageTimerCallback @ 0x18007A9F0 (CrmStateMonitorResourceUsageTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorResourceUsageQuery @ 0x18007A90C (CrmStateMonitorResourceUsageQuery.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsagePoll(unsigned int *a1, int *a2, __int64 *a3)
{
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    v4 = *a2;
    v5 = *a3;
  }
  else
  {
    v4 = CrmStateMonitorResourceUsageQuery(a1 + 26, *a1, &v11);
    v5 = v11;
  }
  if ( v4 < 0 )
    v5 = 0LL;
  RtlQueryUnbiasedInterruptTime(&v10);
  v6 = v10 - *((_QWORD *)a1 + 12);
  if ( v5 == -1 )
    v5 = v10 - *((_QWORD *)a1 + 12);
  if ( v6 )
    v7 = 100 * v5 / v6;
  else
    LODWORD(v7) = 100;
  v9 = v7;
  CrmStateMonitorStateSet(a1, &v9, 4uLL, 0);
  result = v10;
  *((_QWORD *)a1 + 12) = v10;
  return result;
}
