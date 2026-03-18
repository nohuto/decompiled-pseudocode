/*
 * XREFs of PopPowerAggregatorHandleIntentUnsafe @ 0x140964338
 * Callers:
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1406EFEAC (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x14074CF60 (PopPowerAggregatorDozeTimerWorker.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x14074FC70 (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopTriggerMonitorPowerEvent @ 0x1409640CC (PopTriggerMonitorPowerEvent.c)
 *     PopPowerAggregatorHandleIntent @ 0x1409642D0 (PopPowerAggregatorHandleIntent.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140A9CAC8 (PopPowerAggregatorNotifySuspendResume.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140AC1E1C (PopPowerAggregatorForceSessionSwitch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorRecordIntent @ 0x1409644B0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorIsAtTargetState @ 0x1409655F4 (PopPowerAggregatorIsAtTargetState.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140A3D5E8 (PopPowerAggregatorScheduleWorker.c)
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
  v13[0] = xmmword_140F08290;
  *(_QWORD *)v12 = ++PopPowerAggregatorContext;
  v14 = qword_140F082B0;
  LODWORD(v11) = 5;
  *((_QWORD *)&v11 + 1) = a4;
  DWORD1(v11) = (_DWORD)a1;
  v10 = 0LL;
  *(_OWORD *)&v12[8] = 0LL;
  v9 = 0LL;
  v13[1] = xmmword_140F082A0;
  if ( a2 )
    LODWORD(v9) = *a2;
  if ( (unsigned int)((_DWORD)a1 - 1) <= 9
    && a3 <= 2
    && (a1 = PopPowerAggregatorIntentHandlers, PopPowerAggregatorIntentHandlers[v6]) )
  {
    v7 = guard_dispatch_icall_no_overrides(&PopPowerAggregatorContext);
    if ( v7 >= 0 )
    {
      xmmword_140F08290 = v11;
      qword_140F082B0 = *(_QWORD *)&v12[16];
      xmmword_140F082A0 = *(_OWORD *)v12;
      if ( (unsigned __int8)PopPowerAggregatorIsAtTargetState(a1) )
      {
        v7 = 0;
      }
      else
      {
        v7 = 259;
        PopPowerAggregatorScheduleWorker(&PopPowerAggregatorContext);
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
