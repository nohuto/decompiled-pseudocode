/*
 * XREFs of CrmStateMonitorResourceUsageTimerCallback @ 0x18007AA50
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18007A8C8 (CrmStateMonitorResourceUsagePoll.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  CrmStateMonitorResourceUsagePoll((unsigned int *)a2, 0LL, 0LL);
  CempLockAcquireExclusive(a2 + 8);
  if ( (unsigned int)TpIsTimerSet(*(_QWORD *)(a2 + 88)) )
  {
    v3 = *(_QWORD *)(a2 + 88);
    v5 = -100000000LL;
    TpSetTimer(v3, &v5, 0LL, 2000LL);
  }
  *(_DWORD *)(a2 + 16) = 0;
  return RtlReleaseSRWLockExclusive(a2 + 8);
}
