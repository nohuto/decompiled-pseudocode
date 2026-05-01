/*
 * XREFs of CrmStateMonitorStateSet @ 0x18002D2A0
 * Callers:
 *     CrmStateMonitorPostResumeUsageCallback @ 0x180064C50 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x180066960 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorAcDcBatteryCallback @ 0x180068120 (CrmStateMonitorAcDcBatteryCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x1800684A0 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180068580 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x1800688A0 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180069070 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x180069130 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmSuspendNotification @ 0x180069A38 (CrmSuspendNotification.c)
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180069AD0 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisCallback @ 0x180069F70 (CrmStateMonitorFanNoiseHysteresisCallback.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x18006A14C (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x18006A640 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x18006AD60 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorDelayedCsCallback @ 0x18006AFF0 (CrmStateMonitorDelayedCsCallback.c)
 *     CrmStateMonitorDelayedAcCallback @ 0x18006B270 (CrmStateMonitorDelayedAcCallback.c)
 *     CrmStateMonitorAcDcDisplayCallback @ 0x18006CBA0 (CrmStateMonitorAcDcDisplayCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x18006DCE0 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorDelayedAcTimerCallback @ 0x18006E960 (CrmStateMonitorDelayedAcTimerCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisTimerCallback @ 0x18006EAE0 (CrmStateMonitorFanNoiseHysteresisTimerCallback.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x18007168C (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x180079950 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorDelayedCsTimerCallback @ 0x180079CE0 (CrmStateMonitorDelayedCsTimerCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x180079D10 (CrmStateMonitorDelayedInternetLossCallback.c)
 *     CrmStateMonitorDelayedInternetLossTimerCallback @ 0x180079E90 (CrmStateMonitorDelayedInternetLossTimerCallback.c)
 *     CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18007A650 (CrmStateMonitorResourceUsageIsolatedPollCSCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18007A730 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18007A868 (CrmStateMonitorResourceUsagePoll.c)
 *     CrmStateMonitorWorkerThread @ 0x18007B0A0 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D45C (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002D580 (CrmLogStateMonitorStateSet.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(unsigned int *a1, const void *a2, size_t a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  const void *v11; // r15
  unsigned int v12; // esi
  const void *v13; // rdx
  __int64 v14; // rax
  unsigned int *i; // rbx
  _OWORD v17[5]; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+70h] [rbp-68h]
  __int64 v19; // [rsp+80h] [rbp-58h]

  if ( !a4 )
  {
    RtlAcquireSRWLockExclusive(a1 + 2);
    a1[4] = GetCurrentThreadId();
  }
  v8 = *a1;
  v9 = *a1;
  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  v18 = 0LL;
  v10 = CrmStateMonitorStateSizeGet(v9);
  v11 = (const void *)*((_QWORD *)a1 + 5);
  v12 = v10;
  memcpy_0((char *)&v17[2] + 8, v11, v10);
  if ( a2 )
    v13 = a2;
  else
    v13 = v11;
  memcpy_0(v17, v13, v12);
  if ( v8 != 5 || !a2 )
  {
    *((_QWORD *)&v18 + 1) = *((_QWORD *)a1 + 6);
    v14 = MEMORY[0x7FFE0008];
    *(_QWORD *)&v18 = MEMORY[0x7FFE0008];
LABEL_7:
    *((_QWORD *)a1 + 6) = v14;
    goto LABEL_8;
  }
  *((_QWORD *)&v18 + 1) = *((_QWORD *)a1 + 6);
  v14 = MEMORY[0x7FFE0008];
  *(_QWORD *)&v18 = MEMORY[0x7FFE0008];
  if ( LODWORD(v17[0]) == 20 * (LODWORD(v17[0]) / 0x14) )
    goto LABEL_7;
  LODWORD(v19) = 1;
LABEL_8:
  memcpy_0(*((void **)a1 + 5), a2, a3);
  for ( i = (unsigned int *)*((_QWORD *)a1 + 3); i != a1 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, const void *))i - 1))(i - 2, *a1, a2);
  if ( !a4 )
  {
    a1[4] = 0;
    RtlReleaseSRWLockExclusive(a1 + 2);
  }
  return CrmLogStateMonitorStateSet(a1, v17);
}
