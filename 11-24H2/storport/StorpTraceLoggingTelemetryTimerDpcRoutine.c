/*
 * XREFs of StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x14003FCF0
 * Callers:
 *     <none>
 * Callees:
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 *     StorEtwResetCounters @ 0x1400AA828 (StorEtwResetCounters.c)
 */

void __fastcall StorpTraceLoggingTelemetryTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  struct _KDPC *v8; // rbx
  __int64 v9; // rdx
  struct _KTIMER *v10; // rcx
  ULONG v11; // r9d
  LARGE_INTEGER v12; // rdx

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * (int)KeQueryTimeIncrement();
  v8 = &g_StorpTraceLoggingPerformanceTimerDpc;
  *(_QWORD *)&g_SystemUptime_s = v7 / 10000000;
  if ( Dpc == &g_StorpTraceLoggingPerformanceTimerDpc )
  {
    StorEtwResetCounters();
    if ( g_StorpTraceLoggingPerformanceEnabled )
      v5 = 4;
    if ( g_StorpTraceLoggingErrorDataEnabled )
      v5 |= 0x10u;
    StorpLogStatistics((unsigned __int16)v5 | 0x60u);
    v9 = g_StorpTraceLoggingPerformancePeriod;
    v10 = &g_StorpTraceLoggingPerformanceTimer;
    v11 = 300000;
    goto LABEL_15;
  }
  v8 = &g_StorpTraceLoggingDeviceHealthTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingDeviceHealthTimerDpc )
  {
    StorpLogStatistics(128LL);
    v9 = g_StorpTraceLoggingDeviceHealthPeriod;
    v10 = &g_StorpTraceLoggingDeviceHealthTimer;
    v11 = 300000;
LABEL_15:
    v12.QuadPart = -v9;
    goto LABEL_16;
  }
  v8 = &g_StorpTraceLoggingHierarchicalResetTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingHierarchicalResetTimerDpc )
  {
    StorpLogStatistics(3LL);
    v12.QuadPart = -138000000000LL;
    v10 = &g_StorpTraceLoggingHierarchicalResetTimer;
    v11 = 300000;
  }
  else
  {
    v8 = &g_StorpTraceLoggingDailyTimerDpc;
    if ( Dpc != &g_StorpTraceLoggingDailyTimerDpc )
    {
      v8 = &g_StorpTraceLoggingDeviceLogPagesTimerDpc;
      if ( Dpc != &g_StorpTraceLoggingDeviceLogPagesTimerDpc )
        return;
      StorpLogStatistics(256LL);
      v9 = g_StorpTraceLoggingDeviceLogPagesPeriod;
      v10 = &g_StorpTraceLoggingDeviceLogPagesTimer;
      v11 = 900000;
      goto LABEL_15;
    }
    StorpLogStatistics(8LL);
    v12.QuadPart = -864000000000LL;
    v10 = &g_StorpTraceLoggingDailyTimer;
    v11 = 900000;
  }
LABEL_16:
  KeSetCoalescableTimer(v10, v12, 0, v11, v8);
}
