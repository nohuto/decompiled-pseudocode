/*
 * XREFs of ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140100A20
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z @ 0x140100B88 (-InitializeWppRecorder@@YAJPEAPEAURECORDER_LOG__@@PEADK@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x140100C78 (IsCurrentSessionHostServiceSession.c)
 *     ApiSetEditionInitializeWppLogging @ 0x140100CC4 (ApiSetEditionInitializeWppLogging.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1401AD7E0 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     WppLoadTracingSupport @ 0x1402C453C (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1402C46B8 (WppInitKm.c)
 */

__int64 __fastcall InitializeWppLogging(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_OBJECT v1; // rdi
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  unsigned int v4; // r8d
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+34h] [rbp-24h]
  int v13; // [rsp+3Ch] [rbp-1Ch]

  v1 = gpWin32kDriverObject;
  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
  {
    *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
    WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_Win32kbaseTraceGuid;
    WPP_MAIN_CB.NextDevice = 0LL;
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WPP_MAIN_CB.Timer = (PIO_TIMER)1;
    WPP_MAIN_CB.DeviceExtension = 0LL;
    WPP_MAIN_CB.DeviceType = 0;
    WppLoadTracingSupport();
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WppInitKm(v1, &DestinationString);
    v11 = 16;
    v13 = 2;
    v12 = 0x200000000LL;
    imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v11);
  }
  UserSessionState = W32GetUserSessionState(v2);
  v6 = InitializeWppRecorder((struct RECORDER_LOG__ **)(UserSessionState + 69400), "win32kbase", v4);
  if ( v6 < 0
    || (v7 = W32GetUserSessionState(v5),
        v6 = InitializeWppRecorder((struct RECORDER_LOG__ **)(v7 + 19392), "win32kbase_rim", v8),
        v6 < 0)
    || (v6 = ApiSetEditionInitializeWppLogging(v1, &DestinationString), v6 < 0) )
  {
    UninitializeBaseWppLog();
  }
  return (unsigned int)v6;
}
