/*
 * XREFs of CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180078BC0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18007A028 (CrmStateMonitorNpuUsageContextCleanup.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18007A868 (CrmStateMonitorResourceUsagePoll.c)
 *     CrmStateMonitorResourceUsageQuery @ 0x18007A90C (CrmStateMonitorResourceUsageQuery.c)
 */

__int64 __fastcall CrmIsolatedPollingWorkerNpuUsageTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = a2 + 32;
  v7[0] = 0LL;
  v8 = CrmStateMonitorResourceUsageQuery(a2 + 32, 43LL, &v9);
  CempLockAcquireExclusive(a2);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    CrmStateMonitorResourceUsagePoll(v4, &v8, &v9);
    v5 = *(_QWORD *)(a2 + 16);
    v7[0] = -100000000LL;
    TpSetTimer(v5, v7, 0LL, 2000LL);
  }
  else
  {
    TpSetTimer(*(_QWORD *)(a2 + 16), 0LL, 0LL, 0LL);
    CrmStateMonitorNpuUsageContextCleanup(v2);
    *(_OWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
  }
  *(_DWORD *)(a2 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a2);
}
