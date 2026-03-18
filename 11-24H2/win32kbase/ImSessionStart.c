/*
 * XREFs of ImSessionStart @ 0x140133EB4
 * Callers:
 *     _RegisterLogonProcess @ 0x140167C90 (_RegisterLogonProcess.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ImpInitializeWork @ 0x1401341E0 (ImpInitializeWork.c)
 *     ImpRpcConnect @ 0x14013469C (ImpRpcConnect.c)
 *     ImpShutdownWorker @ 0x140145278 (ImpShutdownWorker.c)
 *     ImpCleanupWork @ 0x14014D870 (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x140150818 (ImpWaitForWorkerShutdown.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall ImSessionStart(PVOID Object)
{
  int *InputMonitorSessionState; // rdi
  int CurrentProcessSessionId; // ebx
  int v4; // ebx
  int v5; // eax
  struct _KEVENT *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+38h] [rbp-39h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-31h] BYREF
  int v12; // [rsp+48h] [rbp-29h] BYREF
  __int64 v13; // [rsp+50h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-9h] BYREF
  void *v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  PRKEVENT *p_Event; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  int *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]
  __int64 *v25; // [rsp+A8h] [rbp+37h]
  int v26; // [rsp+B0h] [rbp+3Fh]
  int v27; // [rsp+B4h] [rbp+43h]

  InputMonitorSessionState = (int *)W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *InputMonitorSessionState = -1;
  InputMonitorSessionState[1] = 0;
  Event = 0LL;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *InputMonitorSessionState = CurrentProcessSessionId;
  v4 = ImpInitializeWork(Object);
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_14029B1B0 > 2
      && (qword_14029B1C0 & 0x400000000000LL) != 0
      && (qword_14029B1C8 & 0x400000000000LL) == qword_14029B1C8 )
    {
      v5 = *InputMonitorSessionState;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v12 = v5;
      p_Event = (PRKEVENT *)&v12;
      v22 = &v10;
      v25 = &v13;
      *(_DWORD *)&EventDescriptor.Level = 2;
      UserData.Ptr = (ULONGLONG)off_14029B1B8;
      v20 = 4;
      v23 = 4;
      EventDescriptor.Keyword = 0x400000000000LL;
      v10 = v4;
      v13 = 0x1000000LL;
      v26 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_14029B1B8;
      v16 = &unk_14028128C;
      UserData.Reserved = 2;
      v17 = 57;
      v18 = 1;
      LODWORD(Event) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    InputMonitorSessionState[1] = v4;
LABEL_18:
    *InputMonitorSessionState = -1;
    return (unsigned int)v4;
  }
  v6 = Event;
  if ( !Event )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v4 = ImpRpcConnect();
  if ( v4 < 0 )
  {
    if ( (unsigned int)dword_14029B1B0 > 2 && tlgKeywordOn((__int64)&dword_14029B1B0, 0x400000000000LL) )
    {
      v7 = *InputMonitorSessionState;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      LODWORD(Event) = v7;
      p_Event = &Event;
      v22 = &v10;
      v25 = &v13;
      v20 = 4;
      v23 = 4;
      v10 = v4;
      v13 = 0x1000000LL;
      v26 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029B1B0, byte_1402812ED, 0LL, 0LL, 5u, &UserData);
    }
    InputMonitorSessionState[1] = v4;
    ImpShutdownWorker();
    KeSetEvent(v6, 0, 0);
    ImpWaitForWorkerShutdown();
    ImpCleanupWork();
    goto LABEL_18;
  }
  if ( KeSetEvent(Event, 0, 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (unsigned int)dword_14029B1B0 > 5 )
  {
    v8 = *InputMonitorSessionState;
    v21 = 0;
    LODWORD(Event) = v8;
    v20 = 4;
    p_Event = &Event;
    v24 = 0;
    v10 = MEMORY[0xFFFFF780000002D8];
    v22 = &v10;
    v23 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029B1B0, byte_140281334, 0LL, 0LL, 4u, &UserData);
  }
  InputMonitorSessionState[1] = v4;
  return (unsigned int)v4;
}
