/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x140092060
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x140090AE4 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     SendWinlogonPowerMessageWorker @ 0x1401B33B0 (SendWinlogonPowerMessageWorker.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(char a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return SendWinlogonPowerMessageWorker(a2, a3);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v7, 1);
  v5 = SendWinlogonPowerMessageWorker(a2, a3);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v7);
  return v5;
}
