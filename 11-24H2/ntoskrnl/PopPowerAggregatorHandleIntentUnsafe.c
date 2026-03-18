/*
 * XREFs of PopPowerAggregatorHandleIntentUnsafe @ 0x1409BC0E8
 * Callers:
 *     PopPowerAggregatorDozeTimerWorker @ 0x140759220 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x140759914 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x140759F40 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopTriggerMonitorPowerEvent @ 0x1409BBE7C (PopTriggerMonitorPowerEvent.c)
 *     PopPowerAggregatorHandleIntent @ 0x1409BC080 (PopPowerAggregatorHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140AA2428 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140AC7988 (PopPowerAggregatorForceSessionSwitch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorScheduleWorker @ 0x1409BA5AC (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorRecordIntent @ 0x1409BC260 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorIsAtTargetState @ 0x1409BD300 (PopPowerAggregatorIsAtTargetState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleIntentUnsafe(_QWORD *a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdi
  int v7; // ebx
  __int128 v9; // [rsp+48h] [rbp-19h] BYREF
  __int64 v10; // [rsp+58h] [rbp-9h]
  __int128 v11; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v12[24]; // [rsp+70h] [rbp+Fh]
  _OWORD v13[2]; // [rsp+88h] [rbp+27h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+47h]

  v6 = (int)a1;
  v13[0] = xmmword_140F08910;
  *(_QWORD *)v12 = ++PopPowerAggregatorContext;
  v14 = qword_140F08930;
  LODWORD(v11) = 5;
  *((_QWORD *)&v11 + 1) = a4;
  DWORD1(v11) = (_DWORD)a1;
  v10 = 0LL;
  *(_OWORD *)&v12[8] = 0LL;
  v9 = 0LL;
  v13[1] = xmmword_140F08920;
  if ( a2 )
    LODWORD(v9) = *a2;
  if ( (unsigned int)((_DWORD)a1 - 1) <= 9
    && a3 <= 2
    && (a1 = PopPowerAggregatorIntentHandlers, PopPowerAggregatorIntentHandlers[v6]) )
  {
    v7 = guard_dispatch_icall_no_overrides(&PopPowerAggregatorContext, &v11, (unsigned int)v6, a2);
    if ( v7 >= 0 )
    {
      xmmword_140F08910 = v11;
      qword_140F08930 = *(_QWORD *)&v12[16];
      xmmword_140F08920 = *(_OWORD *)v12;
      if ( (unsigned __int8)PopPowerAggregatorIsAtTargetState(a1) )
      {
        v7 = 0;
      }
      else
      {
        v7 = 259;
        PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  PopPowerAggregatorRecordIntent((_DWORD)a1, v6, a3, a4, (__int64)v13, (__int64)&v11, v7, (__int64)&v9);
  return (unsigned int)v7;
}
