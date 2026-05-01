/*
 * XREFs of CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18007A790
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorResourceUsageQuery @ 0x18007A96C (CrmStateMonitorResourceUsageQuery.c)
 */

__int64 __fastcall CrmStateMonitorResourceUsageLocalPollCSCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v3 = (unsigned int *)(a1 - 64);
  v7 = 0;
  v4 = a1 - 64 + 8;
  v8 = 0LL;
  if ( (unsigned int)(*a3 - 1) > 0xFFFFFFFD )
  {
    CempLockAcquireExclusive(v4);
    if ( !(unsigned int)TpIsTimerSet(*((_QWORD *)v3 + 11)) )
    {
      CrmStateMonitorResourceUsageQuery(v3 + 26, *v3, &v9);
      RtlQueryUnbiasedInterruptTime(v3 + 24);
      v7 = 100;
      CrmStateMonitorStateSet(v3, &v7, 4uLL, 1);
      v6 = *((_QWORD *)v3 + 11);
      v8 = -100000000LL;
      TpSetTimer(v6, &v8, 0LL, 2000LL);
    }
    *(_DWORD *)(v4 + 8) = 0;
    return RtlReleaseSRWLockExclusive(v4);
  }
  else
  {
    CempLockAcquireExclusive(v4);
    TpSetTimer(*((_QWORD *)v3 + 11), 0LL, 0LL, 0LL);
    *(_DWORD *)(v4 + 8) = 0;
    RtlReleaseSRWLockExclusive(v4);
    TpWaitForTimer(*((_QWORD *)v3 + 11), 1LL);
    return CrmStateMonitorStateSet(v3, &v7, 4uLL, 0);
  }
}
