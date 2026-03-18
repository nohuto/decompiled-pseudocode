/*
 * XREFs of PowerResumeSuspendEvent @ 0x1401AEDC0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall PowerResumeSuspendEvent(__int64 a1, char a2, char a3)
{
  char v5; // si
  __int64 v6; // rcx
  NTSTATUS v8; // eax
  unsigned int v9; // ebx
  _BYTE v10[4]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+34h] [rbp-34h]
  __int64 InputBuffer; // [rsp+38h] [rbp-30h] BYREF
  int v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+44h] [rbp-24h]
  int CurrentWin32kSessionId; // [rsp+48h] [rbp-20h]

  v5 = a1;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1) + 68868) && a2 )
    return *(_BYTE *)(W32GetUserSessionState(v6) + 528) != 0 ? 0x103 : 0;
  InputBuffer = 90LL;
  v13 = 0;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  if ( v5 )
    v14 = 0;
  else
    v14 = (a3 != 0) + 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v10, 1);
  v8 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  v9 = v8;
  if ( v8 )
  {
    if ( v8 != 259 )
    {
      v11 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2337);
    }
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v10);
  return v9;
}
