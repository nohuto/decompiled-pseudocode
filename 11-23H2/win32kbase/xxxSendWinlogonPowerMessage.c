/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C0132140
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0132E8C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     SendWinlogonPowerMessageWorker @ 0x1C00D0550 (SendWinlogonPowerMessageWorker.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF *a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  if ( !(_BYTE)a1 )
    return SendWinlogonPowerMessageWorker(a2, a3);
  UserSessionSwitchLeaveCrit(a1, a2, (__int64)a3, a4);
  v6 = SendWinlogonPowerMessageWorker(v5, a3);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v11, v7, v8, v9);
  return v6;
}
