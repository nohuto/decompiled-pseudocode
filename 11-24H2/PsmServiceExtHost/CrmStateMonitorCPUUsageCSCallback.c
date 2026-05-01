/*
 * XREFs of CrmStateMonitorCPUUsageCSCallback @ 0x18006A4C0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorCPUUsageCSCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-1A0h] BYREF
  _QWORD SystemInformation[48]; // [rsp+30h] [rbp-198h] BYREF

  memset_0(SystemInformation, 0, 0x178uLL);
  v9 = 0;
  v5 = a1 - 56;
  v10 = 0LL;
  v6 = a1 - 56;
  if ( (unsigned int)(*a3 - 1) > 0xFFFFFFFD )
  {
    CempLockAcquireExclusive(v6);
    if ( !(unsigned int)TpIsTimerSet(*(_QWORD *)(a1 + 24)) )
    {
      NtQuerySystemInformation(SystemPerformanceInformation, SystemInformation, 0x178u, 0LL);
      *(_QWORD *)(a1 + 48) = SystemInformation[0];
      RtlQueryUnbiasedInterruptTime(a1 + 40);
      v9 = 100;
      CrmStateMonitorStateSet((unsigned int *)(a1 - 64), &v9, 4uLL, 1);
      v8 = *(_QWORD *)(a1 + 24);
      v10 = -10000LL * *(unsigned int *)(a1 + 32);
      TpSetTimer(v8, &v10, 0LL, 2000LL);
    }
    *(_DWORD *)(v5 + 8) = 0;
    return RtlReleaseSRWLockExclusive(a1 - 56);
  }
  else
  {
    CempLockAcquireExclusive(v6);
    TpSetTimer(*(_QWORD *)(a1 + 24), 0LL, 0LL, 0LL);
    *(_DWORD *)(v5 + 8) = 0;
    RtlReleaseSRWLockExclusive(a1 - 56);
    TpWaitForTimer(*(_QWORD *)(a1 + 24), 1LL);
    return CrmStateMonitorStateSet((unsigned int *)(a1 - 64), &v9, 4uLL, 0);
  }
}
