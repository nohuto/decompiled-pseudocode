/*
 * XREFs of PopAdaptivePowerSettingCallback @ 0x14075E310
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x1404B9800 (PopVideoPowerSettingCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDiagTracePolicyChange @ 0x1406F9A94 (PopDiagTracePolicyChange.c)
 *     PopSendSessionInfo @ 0x1409A02DC (PopSendSessionInfo.c)
 *     PopReleaseAdaptiveLock @ 0x1409A183C (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A24C58 (PopAcquireAdaptiveLock.c)
 *     PopBroadcastSessionInfo @ 0x140A90620 (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopAdaptivePowerSettingCallback(__int64 *a1, int *a2, int a3)
{
  __int64 *v4; // rbx
  char v5; // r14
  char v6; // bp
  unsigned int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  GUID v20; // [rsp+30h] [rbp-28h] BYREF
  int v21; // [rsp+40h] [rbp-18h]

  v4 = a1;
  if ( a3 != 4 || !a2 )
    return (unsigned int)-1073741811;
  LOBYTE(a1) = 1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  PopAcquireAdaptiveLock(a1);
  v8 = *v4;
  v9 = *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 - *v4;
  if ( *(_QWORD *)&GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data1 == *v4 )
    v9 = *(_QWORD *)GUID_NON_ADAPTIVE_INPUT_TIMEOUT.Data4 - v4[1];
  if ( !v9 )
  {
    if ( *a2 != PopInputTimeout )
    {
      PopInputTimeout = *a2;
LABEL_40:
      v5 = 1;
      goto LABEL_41;
    }
    goto LABEL_41;
  }
  v10 = *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_VIDEO_POWERDOWN_TIMEOUT.Data1 == v8 )
    v10 = *(_QWORD *)GUID_VIDEO_POWERDOWN_TIMEOUT.Data4 - v4[1];
  if ( !v10 )
  {
    if ( *a2 == PopDisplayTimeout )
      goto LABEL_41;
    PopDisplayTimeout = *a2;
LABEL_13:
    v6 = 1;
    goto LABEL_41;
  }
  v11 = *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data1 == v8 )
    v11 = *(_QWORD *)GUID_VIDEO_CONSOLE_LOCK_TIMEOUT.Data4 - v4[1];
  if ( !v11 )
  {
    if ( *a2 == PopAdaptiveLockConsoleTimeout )
      goto LABEL_41;
    PopAdaptiveLockConsoleTimeout = *a2;
    goto LABEL_13;
  }
  v12 = *(_QWORD *)&GUID_HUPR_ADAPTIVE_AWAY_DISPLAY_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_AWAY_DISPLAY_TIMEOUT.Data1 == v8 )
    v12 = *(_QWORD *)GUID_HUPR_ADAPTIVE_AWAY_DISPLAY_TIMEOUT.Data4 - v4[1];
  if ( !v12 )
  {
    PopAdaptiveSensorAwayDisplayTimeout = *a2;
    goto LABEL_41;
  }
  v13 = *(_QWORD *)&GUID_HUPR_ADAPTIVE_AWAY_DIM_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_AWAY_DIM_TIMEOUT.Data1 == v8 )
    v13 = *(_QWORD *)GUID_HUPR_ADAPTIVE_AWAY_DIM_TIMEOUT.Data4 - v4[1];
  if ( !v13 )
  {
    PopAdaptiveSensorAwayDimTimeout = *a2;
    goto LABEL_41;
  }
  v14 = *(_QWORD *)&GUID_HUPR_ADAPTIVE_INATTENTIVE_DISPLAY_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_INATTENTIVE_DISPLAY_TIMEOUT.Data1 == v8 )
    v14 = *(_QWORD *)GUID_HUPR_ADAPTIVE_INATTENTIVE_DISPLAY_TIMEOUT.Data4 - v4[1];
  if ( !v14 )
  {
    PopAdaptiveSensorInattentiveDisplayTimeout = *a2;
    goto LABEL_41;
  }
  v15 = *(_QWORD *)&GUID_HUPR_ADAPTIVE_INATTENTIVE_DIM_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_HUPR_ADAPTIVE_INATTENTIVE_DIM_TIMEOUT.Data1 == v8 )
    v15 = *(_QWORD *)GUID_HUPR_ADAPTIVE_INATTENTIVE_DIM_TIMEOUT.Data4 - v4[1];
  if ( !v15 )
  {
    PopAdaptiveSensorInattentiveDimTimeout = *a2;
    goto LABEL_41;
  }
  v16 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - v8;
  if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == v8 )
    v16 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - v4[1];
  if ( !v16 )
  {
    if ( *a2 != PopAdaptiveDimTimeout )
    {
      PopAdaptiveDimTimeout = *a2;
      goto LABEL_40;
    }
LABEL_41:
    PopDiagTracePolicyChange();
    goto LABEL_43;
  }
  v7 = -1073741811;
LABEL_43:
  PopReleaseAdaptiveLock();
  v21 = 0;
  v20 = GUID_ADAPTIVE_SESSION_STATE_CHANGED;
  if ( v5 )
  {
    PopBroadcastSessionInfo(0LL, 20LL, &v20);
  }
  else if ( v6 && PopConsoleSession )
  {
    PopSendSessionInfo((unsigned int)dword_140F07678, v17, v18, &v20);
  }
  return v7;
}
