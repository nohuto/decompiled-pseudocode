/*
 * XREFs of CrmStateMonitorStateSet @ 0x18002D220
 * Callers:
 *     CrmStateMonitorPostResumeUsageCallback @ 0x180064BD0 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x1800668E0 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorAcDcBatteryCallback @ 0x180067FA0 (CrmStateMonitorAcDcBatteryCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x180068320 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x180068400 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x180068720 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x180068EF0 (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x180068FB0 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmSuspendNotification @ 0x1800698B8 (CrmSuspendNotification.c)
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180069950 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisCallback @ 0x180069DF0 (CrmStateMonitorFanNoiseHysteresisCallback.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x180069FCC (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x18006A4C0 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x18006AB40 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorDelayedCsCallback @ 0x18006ADD0 (CrmStateMonitorDelayedCsCallback.c)
 *     CrmStateMonitorDelayedAcCallback @ 0x18006B050 (CrmStateMonitorDelayedAcCallback.c)
 *     CrmStateMonitorAcDcDisplayCallback @ 0x18006C970 (CrmStateMonitorAcDcDisplayCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x18006DAB0 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorDelayedAcTimerCallback @ 0x18006E730 (CrmStateMonitorDelayedAcTimerCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisTimerCallback @ 0x18006E8B0 (CrmStateMonitorFanNoiseHysteresisTimerCallback.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x18007147C (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x1800799B0 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorDelayedCsTimerCallback @ 0x180079D40 (CrmStateMonitorDelayedCsTimerCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x180079D70 (CrmStateMonitorDelayedInternetLossCallback.c)
 *     CrmStateMonitorDelayedInternetLossTimerCallback @ 0x180079EF0 (CrmStateMonitorDelayedInternetLossTimerCallback.c)
 *     CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18007A6B0 (CrmStateMonitorResourceUsageIsolatedPollCSCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18007A790 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18007A8C8 (CrmStateMonitorResourceUsagePoll.c)
 *     CrmStateMonitorWorkerThread @ 0x18007B100 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D3DC (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002D500 (CrmLogStateMonitorStateSet.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
