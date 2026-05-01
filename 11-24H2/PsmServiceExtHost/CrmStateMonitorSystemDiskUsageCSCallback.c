/*
 * XREFs of CrmStateMonitorSystemDiskUsageCSCallback @ 0x18006DAB0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x18002C9A0 (CrmStateMonitorSystemDiskUsageIdleTimeGet.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageCSCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1 - 64;
  if ( (unsigned int)(*a3 - 1) > 0xFFFFFFFD )
  {
    if ( (int)CrmStateMonitorSystemDiskUsageIdleTimeGet(a1 - 64, (_QWORD *)(v3 + 112)) < 0 )
      *(_QWORD *)(v3 + 112) = -1LL;
    RtlQueryUnbiasedInterruptTime(v3 + 104);
    v6 = 100;
    CrmStateMonitorStateSet((unsigned int *)v3, &v6, 4uLL, 0);
    v5 = *(_QWORD *)(v3 + 88);
    v7 = -100000000LL;
    return TpSetTimer(v5, &v7, 10000LL, 2000LL);
  }
  else
  {
    TpSetTimer(*(_QWORD *)(v3 + 88), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 88), 1LL);
    v6 = 0;
    return CrmStateMonitorStateSet((unsigned int *)v3, &v6, 4uLL, 0);
  }
}
