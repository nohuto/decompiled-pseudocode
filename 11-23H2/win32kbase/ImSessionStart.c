/*
 * XREFs of ImSessionStart @ 0x1C00BB5B0
 * Callers:
 *     _RegisterLogonProcess @ 0x1C00BE030 (_RegisterLogonProcess.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpRpcConnect @ 0x1C00BB890 (ImpRpcConnect.c)
 *     ImpShutdownWorker @ 0x1C00C2890 (ImpShutdownWorker.c)
 *     ImpCleanupWork @ 0x1C00C2E38 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x1C00C4810 (ImpWaitForWorkerShutdown.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00D6694 (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C02BF5EC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 ImSessionStart()
{
  PVOID v0; // rdi
  int CurrentProcessSessionId; // ebx
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  REGHANDLE v13; // rcx
  int v15; // [rsp+38h] [rbp-29h] BYREF
  int v16; // [rsp+3Ch] [rbp-25h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-9h] BYREF
  int *v20; // [rsp+78h] [rbp+17h]
  int v21; // [rsp+80h] [rbp+1Fh]
  int v22; // [rsp+84h] [rbp+23h]
  int *v23; // [rsp+88h] [rbp+27h]
  int v24; // [rsp+90h] [rbp+2Fh]
  int v25; // [rsp+94h] [rbp+33h]
  PRKEVENT *p_Event; // [rsp+98h] [rbp+37h]
  int v27; // [rsp+A0h] [rbp+3Fh]
  int v28; // [rsp+A4h] [rbp+43h]

  v0 = gpepCSRSS;
  Event = 0LL;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ImpSessionId = CurrentProcessSessionId;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0288780);
  v3 = ImpInitializeWork(v0, &Event, v2);
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1C0288780 > 2 && tlgKeywordOn((__int64)&dword_1C0288780, 0x400000000000LL) )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v16 = ImpSessionId;
      v20 = &v16;
      v23 = &v15;
      p_Event = &Event;
      v21 = 4;
      v15 = v3;
      v24 = 4;
      Event = (PRKEVENT)0x1000000;
      v27 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288780,
        (unsigned __int8 *)dword_1C02616FA,
        0LL,
        0LL,
        5u,
        &v19);
    }
    ImpSessionStatus = v3;
LABEL_17:
    v13 = RegHandle;
    RegHandle = 0LL;
    dword_1C0288780 = 0;
    EtwUnregister(v13);
    ImpSessionId = -1;
    return (unsigned int)v3;
  }
  v3 = ImpRpcConnect();
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_1C0288780 > 2 && tlgKeywordOn((__int64)&dword_1C0288780, 0x400000000000LL) )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v15 = ImpSessionId;
      v20 = &v15;
      v23 = &v16;
      p_Event = (PRKEVENT *)&v18;
      v21 = 4;
      v16 = v3;
      v24 = 4;
      v18 = 0x1000000LL;
      v27 = 8;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0288780,
        (unsigned __int8 *)dword_1C0261789,
        0LL,
        0LL,
        5u,
        &v19);
    }
    ImpSessionStatus = v3;
    if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v5, v4, v6) )
      KeSetEvent(Event, 0, 0);
    ImpShutdownWorker();
    if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v8, v7, v9) )
      ImpWaitForWorkerShutdown();
    ImpCleanupWork(v11, v10, v12);
    goto LABEL_17;
  }
  if ( (unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v5, v4, v6) )
  {
    if ( !Event )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( KeSetEvent(Event, 0, 0) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  if ( (unsigned int)dword_1C0288780 > 5 )
  {
    v22 = 0;
    v15 = ImpSessionId;
    v21 = 4;
    v20 = &v15;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0288780, (unsigned __int8 *)dword_1C0261659, 0LL, 0LL, 3u, &v19);
  }
  ImpSessionStatus = v3;
  return (unsigned int)v3;
}
